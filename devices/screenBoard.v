module screenBoard (
    input[31:0] D,
    input WE,
    input clk,
    output reg[31:0]show
    //input reset
);  
    always @(posedge clk) begin
        if(WE) begin
            show<=D;
            $display("%d",$signed(D));
        end
    end
    initial begin
        show<=0;
    end
endmodule //screenBoard
