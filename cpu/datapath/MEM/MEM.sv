`include "cpu/pipelineInterfaces.sv"
module MEM (
    input      clk,
    // verilator lint_off UNUSED
    input      rst,
    // verilator lint_on UNUSED
    IController.Controller i_controller,
    IBridge.MEM i_bridge,
    IEX_MEM.MEM i_ex_mem,
    IMEM_WB.MEM i_mem_wb,
    IBypass.MEM i_bypass,
    IStallDetect.MEM i_stallDetect,
    IBranchCorrect.MEM i_branchCorrect
);
    wire [31:0] EXout=i_ex_mem.MEM_DATA.EXout;
    wire memWrite =i_ex_mem.MEM_CTRL.memWrite;
    // verilator lint_off UNUSED
    wire regWrite,memToReg,isDMByte,isDMHalf,isLOADS;
    // verilator lint_on UNUSED
    assign {regWrite,memToReg,isDMByte,isDMHalf,isLOADS}=i_ex_mem.WB_CTRL;

    assign i_bypass.MEM_BACK={i_ex_mem.WB_CTRL.regWrite,EXout,i_ex_mem.MEM_DATA.rw}; //regWrite,Wd,rw
    assign i_stallDetect.MEM_rw=i_ex_mem.MEM_DATA.rw;
    assign i_stallDetect.MEM_memToReg=i_ex_mem.WB_CTRL.memToReg;

    assign i_branchCorrect.correctAtMEM=i_ex_mem.branchCommit.branchCommitAtMEM && (i_ex_mem.EXBranchAvail!=i_ex_mem.branchCommit.predictBranchAvail);
    assign i_branchCorrect.correctPCAtMEM=i_ex_mem.EXBranchAvail?i_ex_mem.branchCommit.BPC:i_ex_mem.branchCommit.NOJPC;
   
    wire[3:0] be;
    BEEXT U_BEEXT(
        .isByte(isDMByte),
        .isHalf(isDMHalf),
        .low_addr(EXout[1:0]),
        .be(be)
    );
    wire AddrInDM=(EXout[15:0]<'h3000);
    wire DMWrite=memWrite&&AddrInDM;
`ifdef VERILATOR
    sim_dm_ram u_dm_ram (
        .clka(clk),    // input wire clka
        .ena(AddrInDM),      // input wire ena
        .wea({4{DMWrite}}&be),      // input wire [3 : 0] wea
        .addra(EXout[13:2]),  // input wire [11 : 0] addra
        .dina(i_ex_mem.MEM_DATA.f_rd2<<{EXout[1:0],3'b0}),    // input wire [31 : 0] dina
        .douta(i_mem_wb.DMout)  // output wire [31 : 0] douta
    );
`else
    dm_ram u_dm_ram (
        .clka(clk),    // input wire clka
        .ena(AddrInDM),      // input wire ena
        .wea({4{DMWrite}}&be),      // input wire [3 : 0] wea
        .addra(EXout[13:2]),  // input wire [11 : 0] addra
        .dina(i_ex_mem.MEM_DATA.f_rd2<<{EXout[1:0],3'b0}),    // input wire [31 : 0] dina
        .douta(i_mem_wb.DMout)  // output wire [31 : 0] douta
    );
`endif
    assign i_bridge.IOWrite=memWrite&&!AddrInDM;
    assign i_bridge.PrAddr=EXout[31:2];
    assign i_bridge.PrWD=i_ex_mem.MEM_DATA.f_rd2<<{EXout[1:0],3'b0};
    assign i_bridge.PrBE=be;
    initial begin
        i_mem_wb.WB_CTRL=0;
        i_mem_wb.WB_DATA=0;
    end
    always @(posedge clk)begin
        if(i_controller.MEM_FLUSH)   begin
            i_mem_wb.WB_CTRL<=0;
            //o_WB_DATA<=0;
        end
        else begin
            i_mem_wb.WB_DATA<={AddrInDM,EXout,i_ex_mem.MEM_DATA.rw};
            i_mem_wb.WB_CTRL<=i_ex_mem.WB_CTRL;
        end
    end
    
endmodule //MEM

