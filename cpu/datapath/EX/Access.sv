`include "cpu/pipelineInterfaces.sv"
module Access(
    input clk,
    input memToReg,
    input memWrite,
    input isDMByte,
    input isDMHalf,
    input[31:0] addr,
    input[31:0] f_rd2,
    IBridge.Access i_bridge,
    output [31:0]DMout
);
    wire[3:0] be;
    BEEXT U_BEEXT(
        .isByte(isDMByte),
        .isHalf(isDMHalf),
        .low_addr(addr[1:0]),
        .be(be)
    );
    wire AddrInDM=(addr[15:0]<'h3000);
    wire DMWrite=memWrite&&AddrInDM;
`ifdef VERILATOR
    sim_dm_ram u_dm_ram (
        .clka(clk),    // input wire clka
        .ena(AddrInDM ),      // input wire ena
        .wea({4{DMWrite}}&be),      // input wire [3 : 0] wea
        .addra(addr[13:2]),  // input wire [11 : 0] addra
        .dina(f_rd2<<{addr[1:0],3'b0}),    // input wire [31 : 0] dina
        .douta(DMout)  // output wire [31 : 0] douta
    );
`else
    dm_ram u_dm_ram (
        .clka(clk),    // input wire clka
        .ena(AddrInDM ),      // input wire ena
        .wea({4{DMWrite}}&be),      // input wire [3 : 0] wea
        .addra(addr[13:2]),  // input wire [11 : 0] addra
        .dina(f_rd2<<{addr[1:0],3'b0}),    // input wire [31 : 0] dina
        .douta(DMout)  // output wire [31 : 0] douta
    );
`endif
    assign i_bridge.IOWrite=memWrite&&!AddrInDM;
    assign i_bridge.IORead=memToReg&&!AddrInDM;
    assign i_bridge.PrAddr=addr[31:2];
    assign i_bridge.PrWD=f_rd2<<{addr[1:0],3'b0};
    assign i_bridge.PrBE=be;
endmodule
