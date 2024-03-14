module sim_mult(
    input clk,
    input [31:0] A,
    input [31:0] B,
    input CE,
    output reg[31:0] P
);
    logic state=0;
    logic [31:0]DA,DB;
    always @(posedge clk) begin
        //$display("%d %d  %d",A,B, P);
        if(state==0) begin
            if(CE) begin 
                DA<=A;
                DB<=B;
                state<=1;
            end
        end
        else begin
            P<=DA*DB;
            state<=0;
        end
    end
endmodule
