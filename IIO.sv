`ifndef IO_INTERFACES_H
`define IO_INTERFACES_H
//verilator lint_off DECLFILENAME
interface IMemory(input clk,rst);
    logic [31:2] instrAddr;
    logic [31:0] instrRead;
    logic instrReady;
    logic [31:2] dataAddr;
    logic [31:0] dataRead,dataWrite;
    logic [3:0] dataBE;
    logic dataWE,dataEN;
    modport Memory(input clk,rst, instrAddr,output instrRead,instrReady,
        input dataAddr,dataWrite,dataBE,dataWE,dataEN,output dataRead);
    modport IF(output instrAddr,input instrRead,instrReady);
    modport Access(output dataWrite,dataAddr,dataBE,dataWE,dataEN);
    modport MEM(input dataRead);
endinterface
interface IBridge(input clk);
    logic [31:0]PrWD,PrRD;
    logic [31:2]PrAddr;
    logic [3:0]PrBE;
    logic [7:2]HWInt;
    logic IOWrite,IORead;
    modport CPU(input PrRD,HWInt,
                output PrWD,PrAddr,PrBE,IOWrite,IORead);
    modport Access(output PrWD,PrAddr,PrBE,IOWrite,IORead);
    modport MEM(input PrRD);
    modport CP0(input HWInt);
endinterface
`endif
