
`include "cpu/pipelineInterfaces.sv"
module WB (
    input      clk,
    input      rst,
    IMEM_WB.WB i_mem_wb,
    input [31:0]PrRD,
    IBypass.WB i_bypass
);
    assign {regWrite,memToReg,isDMByte,isDMHalf,isLOADS}=i_mem_wb.WB_CTRL;
    assign AddrInDM=(i_mem_wb.WB_DATA.EXout[15:0]<'h3000);
    wire [31:0] MEMout;
    assign MEMout=AddrInDM?i_mem_wb.Dout:PrRD;
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
endmodule //WB
