
`include "cpu/pipelineInterfaces.sv"
module WB (
    // verilator lint_off UNUSED
    input      clk,
    input      rst,
    // verilator lint_on UNUSED
    IMEM_WB.WB i_mem_wb,
    IBypass.WB i_bypass
);

    assign i_bypass.WB_BACK={i_mem_wb.WB_CTRL.regWrite,i_mem_wb.WB_DATA.WB_Wd,i_mem_wb.WB_DATA.rw};
endmodule //WB
