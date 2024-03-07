module sim_mult(
    input clk,
    input [31:0] A,
    input [31:0] B,
    input CE,
    output reg[31:0] P
);
    always @(posedge clk) begin
        if(CE) P<=A*B;
    end
endmodule
