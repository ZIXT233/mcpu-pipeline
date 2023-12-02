module IM(
    input clk,
    input ce,
    input [15:2]addr,
    output [31:0]instruct);
    wire [10:0]index;
    assign index=addr-'hC00;
    //always @(posedge clk) $display("%d",index);
    im_rom u_imrom (
        .clka(clk),    // input wire clka
        .ena(ce),      // input wire ena
        .wea(1'b0),      // input wire [0 : 0] wea
        .addra(index),  // input wire [10 : 0] addra
        .dina(32'b0),    // input wire [31 : 0] dina
        .douta(instruct)  // output wire [31 : 0] douta
    );
    
    
endmodule