
`include "cpu/pipelineInterfaces.sv"
module WB (
    // verilator lint_off UNUSED
    input      clk,
    input      rst,
    // verilator lint_on UNUSED
    IBridge.WB i_bridge,
    IMEM_WB.WB i_mem_wb,
    IBypass.WB i_bypass
);
    wire regWrite,memToReg,isDMByte,isDMHalf,isLOADS;
    assign {regWrite,memToReg,isDMByte,isDMHalf,isLOADS}=i_mem_wb.WB_CTRL;
    wire [31:0] MEMout;
    assign MEMout=i_mem_wb.WB_DATA.AddrInDM?i_mem_wb.DMout:i_bridge.PrRD;
    wire[31:0] EXT_Dout;
    DREXT U_DREXT(
        .in_data(MEMout),
        .out_data(EXT_Dout),
        .low_addr(i_mem_wb.WB_DATA.EXout[1:0]),
        .exsign(isLOADS),
        .isByte(isDMByte),
        .isHalf(isDMHalf)
    );  
    wire [31:0]WB_Wd;
    assign WB_Wd=memToReg?EXT_Dout:i_mem_wb.WB_DATA.EXout;
    assign i_bypass.WB_BACK={regWrite,WB_Wd,i_mem_wb.WB_DATA.rw};

    //assign i_bypass.WB_BACK={i_mem_wb.WB_CTRL.regWrite,i_mem_wb.WB_DATA.WB_Wd,i_mem_wb.WB_DATA.rw};
endmodule //WB
