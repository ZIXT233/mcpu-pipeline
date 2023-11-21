module screenBoard (
    input[31:0] D,
    input WE,
    input clk,
    input reset
);
    reg[31:0] show;
    
    always @(posedge clk) begin
        if(WE) begin
            show<=D;
            $display("%d",$signed(D));
        end
    end
    always @(posedge reset) begin
        show<=0;
    end
    initial begin
        show=0;
    end
endmodule //screenBoard
