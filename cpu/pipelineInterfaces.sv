`ifndef PIPELINE_INTERFACES_H
`define PIPELINE_INTERFACES_H
interface IIF(input clk);
    logic IF_FLUSH;
    logic PCWrite;
    modport Controller(output IF_FLUSH,PCWrite,clk);
    modport IF(input IF_FLUSH,PCWrite,clk);
endinterface
`endif