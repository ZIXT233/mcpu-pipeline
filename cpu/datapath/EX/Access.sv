`include "cpu/pipelineInterfaces.sv"
`include "IIO.sv"
module Access(
    input clk,
    input memToReg,
    input memWrite,
    input isDMByte,
    input isDMHalf,
    input[31:0] addr,
    input[31:0] f_rd2,
    IBridge.Access i_bridge,
    IMemory.Access i_memory
    //output [31:0]DMout
);
    wire[3:0] be;
    BEEXT U_BEEXT(
        .isByte(isDMByte),
        .isHalf(isDMHalf),
        .low_addr(addr[1:0]),
        .be(be)
    );
    wire AddrInDM=(addr[31:16]<'h9000);
    wire DMWrite=memWrite&&AddrInDM;

    assign i_memory.dataWE=DMWrite;
    assign i_memory.dataEN=(memToReg||DMWrite)&&AddrInDM;
    assign i_memory.dataAddr=addr[31:2];
    assign i_memory.dataWrite=f_rd2;
    assign i_memory.dataBE=be;
    assign i_bridge.IOWrite=memWrite&&!AddrInDM;
    assign i_bridge.IORead=memToReg&&!AddrInDM;
    assign i_bridge.PrAddr=addr[31:2];
    assign i_bridge.PrWD=f_rd2<<{addr[1:0],3'b0};
    assign i_bridge.PrBE=be;
endmodule
