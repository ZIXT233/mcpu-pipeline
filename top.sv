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
    output [7:0]seg7_select
    );

    IBridge i_bridge(clk);
    mips mips(
        .clk(clk),
        .rst(rst),
        .i_bridge
    );
    

    BRIDGE u_BRIDGE(
        .clk    	( clk     ),
        .PrAddrWire 	( i_bridge.PrAddr  ),
        .PrRD   	( i_bridge.PrRD    ),
        .PrWDWire   	( i_bridge.PrWD    ),
        .PrBEWire       ( i_bridge.PrBE    ),
        .WeCPUWire  	( i_bridge.IOWrite   ),
        .HWInt      ( i_bridge.HWInt ),
        .o_led (led),
        .seg7_seg(seg7_seg),
        .seg7_select(seg7_select)
    );
    assign seg7_seg1=seg7_seg;
endmodule
