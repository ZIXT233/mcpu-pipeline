`include "cpu/pipelineInterfaces.sv"
module MEM (
    input      clk,
    // verilator lint_off UNUSED
    input      rst,
    // verilator lint_on UNUSED
    IController.Controller i_controller,
    IBridge.MEM i_bridge,
    IMemory.MEM i_memory,
    IEX_MEM.MEM i_ex_mem,
    IMEM_WB.MEM i_mem_wb,
    IBypass.MEM i_bypass,
    IStallDetect.MEM i_stallDetect
);
    wire [31:0] EXout;
    assign EXout=i_ex_mem.MEM_DATA.EXout;
    // verilator lint_off UNUSED
    wire regWrite,memToReg,isDMByte,isDMHalf,isLOADS,MUL;
    // verilator lint_on UNUSED
    assign {regWrite,memToReg,isDMByte,isDMHalf,isLOADS,MUL}=i_ex_mem.WB_CTRL;

    assign i_bypass.MEM_BACK={i_ex_mem.WB_CTRL.regWrite,EXout,i_ex_mem.MEM_DATA.rw}; //regWrite,Wd,rw
    assign i_bypass.MEM_memToReg=memToReg;
    //assign i_bypass.MEM_EXT_MEMout=EXT_MEMout;
    
    assign i_stallDetect.MEM_rw=i_ex_mem.MEM_DATA.rw;
    assign i_stallDetect.MEM_memToReg=i_ex_mem.WB_CTRL.memToReg;
    assign i_stallDetect.MEM_MUL=i_ex_mem.WB_CTRL.MUL;

    wire AddrInDM=(EXout[31:16]<'h9000);
    wire [31:0]MEMout,EXT_MEMout;
    assign MEMout=AddrInDM?i_memory.dataRead:i_bridge.PrRD;

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
    assign i_mem_wb.MULout=i_ex_mem.MULout;
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

