`include "cpu/pipelineInterfaces.sv"
module MEM (
    input      clk,
    input      rst,
    IController.Controller i_controller,
    IBridge.MEM i_bridge,
    IEX_MEM.MEM i_ex_mem,
    IMEM_WB.MEM i_mem_wb,
    IBypass.MEM i_bypass,
    IStallDetect.MEM i_stallDetect,
    IBranchCorrect.MEM i_branchCorrect
);
    wire [31:0] EXout;
    assign EXout=i_ex_mem.MEM_DATA.EXout;
    assign {regWrite,memToReg,isDMByte,isDMHalf,isLOADS}=i_ex_mem.WB_CTRL;

    assign i_bypass.MEM_BACK={i_ex_mem.WB_CTRL.regWrite,EXout,i_ex_mem.MEM_DATA.rw}; //regWrite,Wd,rw
    assign i_stallDetect.MEM_rw=i_ex_mem.MEM_DATA.rw;
    assign i_stallDetect.MEM_memToReg=i_ex_mem.WB_CTRL.memToReg;

    assign AddrInDM=(EXout[15:0]<'h3000);
    wire [31:0]MEMout,EXT_MEMout;
    assign MEMout=AddrInDM?i_ex_mem.DMout:i_bridge.PrRD;

    assign i_branchCorrect.correctAtMEM=i_ex_mem.branchCommitAtMEM && !i_ex_mem.memBranchAvail;
    assign i_branchCorrect.correctPCAtMEM=i_ex_mem.MEM_DATA.PCP1+1;
    DREXT U_DREXT(
        .in_data(MEMout),
        .out_data(EXT_MEMout),
        .low_addr(EXout[1:0]),
        .exsign(isLOADS),
        .isByte(isDMByte),
        .isHalf(isDMHalf)
    );  
    wire [31:0]WB_Wd;
    assign WB_Wd=memToReg?EXT_MEMout:EXout;
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
            i_mem_wb.WB_DATA<={WB_Wd,i_ex_mem.MEM_DATA.rw};
            i_mem_wb.WB_CTRL<=i_ex_mem.WB_CTRL;
        end
    end
    
endmodule //MEM

