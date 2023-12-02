`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/12/01 21:27:30
// Design Name: 
// Module Name: 7seg
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


module seg7(
    input [31:0]D,
    input [1:0]A,
    input [3:0]be,
    input clk,
    input we,
    output reg [31:0]Dout,
    output reg[7:0]seg,
    output reg[7:0]select
);
    reg[31:0] ram[0:1];
    reg[18:0  ] cnt=0;
    wire [2:0]lightDig;
    assign lightDig=cnt[18:16];
    
    initial begin
        ram[0]<=32'h0000063f;
        ram[1]<=32'h063f003f;
    end
    always @(posedge clk) begin
        cnt<=cnt+1;
        select<=(8'h80)>>lightDig;
        seg<=ram[lightDig[2]]>>{lightDig[1:0],{3'b0}};
        if(we) begin
            
            case(be)
            4'hf:begin
                ram[A]<=D;//$display("[%d]%d",A,D);
            end
            4'b0011: ram[A][15:0]<=D[15:0];
            4'b1100: ram[A][31:16]<=D[15:0];
            4'b0001: ram[A][7:0]<=D[7:0];
            4'b0010: ram[A][15:8]<=D[7:0];
            4'b0100: ram[A][23:16]<=D[7:0];
            4'b1000: ram[A][31:24]<=D[7:0];
            endcase
        end
    end
    always @(*)begin
         case(be)
            4'hf:begin
                Dout<=ram[A];//$display("[%d]%d",A,D);
            end
            4'b0011: Dout<=ram[A][15:0];
            4'b1100: Dout<=ram[A][31:16];
            4'b0001: Dout<=ram[A][7:0];
            4'b0010: Dout<=ram[A][15:8];
            4'b0100: Dout<=ram[A][23:16];
            4'b1000: Dout<=ram[A][31:24];
            default: Dout<=0;
         endcase
         
     end
     always @(ram[0] or ram[1]) begin
        $display("7seg:%x%x",ram[1],ram[0]);
     end
endmodule
