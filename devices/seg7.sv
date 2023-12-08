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
    input A,
    input [3:0]be,
    input clk,
    input we,
    output [31:0]Dout,
    output reg[7:0]seg,
    output reg[7:0]select
);
    reg[31:0] ram[0:1];
    reg[18:0  ] cnt=0;
    reg[9:0] pause=0;
    wire [2:0]lightDig; 
    
    wire [7:0] newSeg,newSelect;
    assign Dout=ram[A];
    assign lightDig=cnt[18:16];
    assign newSeg=ram[lightDig[2]]>>{lightDig[1:0],{3'b0}};
    assign newSelect=(8'h80)>>lightDig;
    
    initial begin
        ram[0]<=32'h0;
        ram[1]<=32'h0;
        select<=0;
        seg<=0;
    end
    always @(posedge clk) begin
        if(pause) pause<=pause+1;
        else begin
            cnt<=cnt+1;
            if(select==0)begin
                seg<=newSeg;
                select<=newSelect;
            end
            else if(select!=newSelect)begin
                select<=0;
                seg<=0;
                pause<=1;
            end
        end
    end
    always @(posedge clk) begin
        if(we) begin
            
            case(be)
            4'hf:begin
                ram[A]<=D;//$display("[%d]%d",A,D);
            end
            4'b0011: ram[A][15:0]<=D[15:0];
            4'b1100: ram[A][31:16]<=D[31:16];
            4'b0001: ram[A][7:0]<=D[7:0];
            4'b0010: ram[A][15:8]<=D[15:8];
            4'b0100: ram[A][23:16]<=D[23:16];
            4'b1000: ram[A][31:24]<=D[31:24];
            endcase
        end
    end
     always @(ram[0] or ram[1]) begin

        $display("7seg:%x%x",ram[1],ram[0]);
     end
endmodule