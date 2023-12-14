`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/12/01 12:00:37
// Design Name: 
// Module Name: top
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

`include "cpu/pipelineInterfaces.sv"
module top(
    input clk,
    input rst,
    output [7:0]led,
    output [7:0]seg7_seg,
    output [7:0]seg7_seg1,
    output [7:0]seg7_select,
    input RxD,
    output TxD
);
    parameter ClkFrequency = 150000000;	// 150MHz
	parameter uart_baud = 9600;
    wire oclk,locked;
`ifdef SIMULATION
    assign oclk=clk;
    assign locked=rst;
`else
    clk_wiz_0 pll(
    // Clock out ports
    .clk_out1(oclk),     // output clk_out1
    // Status and control signals
    .reset(~rst), // input reset
    .locked(locked),       // output locked
   // Clock in ports
    .clk_in1(clk));      // input clk_in1
`endif
    IBridge i_bridge(oclk);
    mips mips(
        .clk(oclk),
        .rst(locked),
        .i_bridge
    );


    BRIDGE #(.ClkFrequency(ClkFrequency),.uart_baud(uart_baud)) 
    u_BRIDGE(
        .clk    	( oclk     ),
        .PrAddrWire 	( i_bridge.PrAddr  ),
        .PrRD   	( i_bridge.PrRD    ),
        .PrWDWire   	( i_bridge.PrWD    ),
        .PrBEWire       ( i_bridge.PrBE    ),
        .WeCPUWire  	( i_bridge.IOWrite   ),
        .RdCPUWire      ( i_bridge.IORead),
        .HWInt      ( i_bridge.HWInt ),
        .o_led (led),
        .seg7_seg(seg7_seg),
        .seg7_select(seg7_select),
        .RxD,
        .TxD
    );
    assign seg7_seg1=seg7_seg;
endmodule
