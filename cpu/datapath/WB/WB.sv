
`include "cpu/pipelineInterfaces.sv"
module WB (
    // verilator lint_off UNUSED
    input      clk,
    input      rst,
    // verilator lint_on UNUSED
    IMEM_WB.WB i_mem_wb,
    IBypass.WB i_bypass
);
    wire [31:0] WB_Wd;
    assign WB_Wd=i_mem_wb.WB_CTRL.MUL?i_mem_wb.MULout:i_mem_wb.WB_DATA.WB_Wd;
    /*always @(posedge clk)begin
        if(i_mem_wb.WB_CTRL.MUL) $display("---%d",i_mem_wb.MULout);
    end*/
    assign i_bypass.WB_BACK={i_mem_wb.WB_CTRL.regWrite,WB_Wd,i_mem_wb.WB_DATA.rw};
endmodule //WB
