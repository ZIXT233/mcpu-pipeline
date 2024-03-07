module sim_mult(
    input clk,
    input [31:0] A,
    input [31:0] B,
    input CE,
    output reg[31:0] P
);
    logic state=0;
    always @(posedge clk) begin
        if(state==0) begin
            if(CE) state<=1;
        end
        else begin
            P<=A*B;
            state<=0;
        end
    end
endmodule
