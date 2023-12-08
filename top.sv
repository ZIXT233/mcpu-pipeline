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


module top(
    input clk,
    input rst,
    output [7:0]led,
    output [7:0]seg7_seg,
    output [7:0]seg7_seg1,
    output [7:0]seg7_select
    );
    wire [31:2]PrAddr;
    wire [31:0]PrRD,PrWD;
    wire [3:0]PrBE;
    wire [7:2]HWInt;
    wire IOWrite;
    mips mips(
        .clk(clk),
        .rst(rst),
        .PrAddr(PrAddr),
        .PrRD(PrRD),
        .PrWD(PrWD),
        .PrBE(PrBE),
        .IOWrite(IOWrite),
        .HWInt(HWInt)
    );
    

    BRIDGE u_BRIDGE(
        .clk    	( clk     ),
        .PrAddrWire 	( PrAddr  ),
        .PrRD   	( PrRD    ),
        .PrWDWire   	( PrWD    ),
        .PrBEWire       ( PrBE    ),
        .WeCPUWire  	( IOWrite   ),
        .HWInt      ( HWInt ),
        .o_led (led),
        .seg7_seg(seg7_seg),
        .seg7_select(seg7_select)
    );
    assign seg7_seg1=seg7_seg;
endmodule
