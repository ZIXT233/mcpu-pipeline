module MEM (
    input      clk,
    input      rst,
    input MEM_FLUSH,
    input MEM_CTRL,
    input [31:0]PrRD,
    output [31:2]PrAddr,
    output [31:0]PrWD,
    output [3:0]PrBE,
    output IOWrite,
    input [4:0]WB_CTRL,
    input [66:0]pre_MEM_DATA,
    input [68:0]MEM_DATA,
    output reg[4:0]o_WB_CTRL,
    output reg[68:0]o_WB_DATA,
    output [37:0] o_MEM_BACK
);
    //assign {memWrite}=MEM_CTRL;
    //assign {isDMByte,isDMHalf}=WB_CTRL[3:1];
    wire[31:0]EXout,rd2,MEMout,preEXout,prerd2; 
    wire[4:0]rw;
    assign {rw,EXout,rd2}=MEM_DATA;
    assign {isDMByte,isDMHalf,memWrite,preEXout,prerd2}=pre_MEM_DATA;
    assign o_MEM_BACK={WB_CTRL[4],MEM_DATA[63:32],MEM_DATA[68:64]}; //regWrite,Wd,rw

    wire[31:0]Dout;
    wire[3:0] be;
    BEEXT U_BEEXT(
        .isByte(isDMByte),
        .isHalf(isDMHalf),
        .low_addr(preEXout[1:0]),
        .be(be)
    );
    assign preAddrInDM=(preEXout[15:0]<'h3000);
    assign DMWrite=memWrite&&preAddrInDM;
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
        .ena(preAddrInDM),      // input wire ena
        .wea({4{DMWrite}}&be),      // input wire [3 : 0] wea
        .addra(preEXout[13:2]),  // input wire [11 : 0] addra
        .dina(prerd2),    // input wire [31 : 0] dina
        .douta(Dout)  // output wire [31 : 0] douta
    );
    assign IOWrite=memWrite&&!preAddrInDM;
    assign PrAddr=preEXout[31:2];
    assign PrWD=prerd2;
    assign PrBE=be;
    
    assign AddrInDM=(EXout[15:0]<'h3000);
    assign MEMout=AddrInDM?Dout:PrRD;
    initial begin
        o_WB_CTRL<=0;
        o_WB_DATA<=0;
    end
    always @(posedge clk)begin
        if(MEM_FLUSH)   begin
            o_WB_CTRL<=0;
            //o_WB_DATA<=0;
        end
        else begin
            o_WB_DATA<={rw,EXout,MEMout};
            o_WB_CTRL<=WB_CTRL;
        end
    end
    
endmodule //MEM