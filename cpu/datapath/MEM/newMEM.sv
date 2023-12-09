`include "cpu/pipelineInterfaces.sv"
module MEM (
    input      clk,
    input      rst,
    IController.Controller i_controller,
    input [31:0]PrRD,
    output [31:2]PrAddr,
    output [31:0]PrWD,
    output [3:0]PrBE,
    output IOWrite,
    

    output [37:0] o_MEM_BACK,
    IEX_MEM.MEM i_ex_mem,
    IStallDetect.MEM i_stallDetect
);
    assign memWrite=i_ex_mem.MEM_CTRL.memWrite;
    wire[31:0]EXout,rd2,MEMout; 
    wire[4:0]rw;
    assign {rw,EXout,rd2}=i_ex_mem.MEM_DATA;
    assign o_MEM_BACK={i_ex_mem.WB_CTRL.regWrite,i_ex_mem.MEM_DATA.EXout,i_ex_mem.MEM_DATA.rw}; //regWrite,Wd,rw
    assign i_stallDetect.MEM_rw=i_ex_mem.MEM_DATA.rw;
    assign i_stallDetect.MEM_memToReg=i_ex_mem.WB_CTRL.memToReg;
    wire[3:0] be;
    BEEXT U_BEEXT(
        .isByte(isDMByte),
        .isHalf(isDMHalf),
        .low_addr(EXout[1:0]),
        .be(be)
    );
    assign AddrInDM=(EXout[15:0]<'h3000);
    assign DMWrite=memWrite&&AddrInDM;
  /*  sim_bram u_sim_bram(
        .A(preEXout[13:2]),
        .memWrite(DMWrite),
        .memToReg(memToReg),
        .clk(clk),
        .be(be),
        .D(prerd2),
        .Dout(Dout)
    );*/
    dm_ram u_dm_ram (
        .clka(clk),    // input wire clka
        .ena(AddrInDM),      // input wire ena
        .wea({4{DMWrite}}&be),      // input wire [3 : 0] wea
        .addra(EXout[13:2]),  // input wire [11 : 0] addra
        .dina(rd2<<{EXout[1:0],3'b0}),    // input wire [31 : 0] dina
        .douta(Dout)  // output wire [31 : 0] douta
    );
    assign IOWrite=memWrite&&!AddrInDM;
    assign PrAddr=EXout[31:2];
    assign PrWD=rd2<<{EXout[1:0],3'b0};
    assign PrBE=be;
    
    assign MEMout=AddrInDM?Dout:PrRD;
    initial begin
        WB_CTRL<=0;
        o_WB_DATA<=0;
    end
    always @(posedge clk)begin
        if(i_controller.MEM_FLUSH)   begin
            o_WB_CTRL<=0;
            //o_WB_DATA<=0;
        end
        else begin
            o_WB_DATA<={rw,EXout,MEMout};
            o_WB_CTRL<=i_ex_mem.WB_CTRL;
        end
    end
    
endmodule //MEM

