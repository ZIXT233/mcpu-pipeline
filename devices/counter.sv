module counter (
    input[31:0] D,
    input WE,
    input clk,
    output INT
);
    reg[31:0] cnt;
    assign INT=cnt==0;
    always @(posedge clk) begin
        if(WE) begin
            cnt<=D;
            //$display("%d",$signed(D));
        end
        else if(cnt>0) cnt<=cnt-1;
    end
    initial begin
        cnt=-1;
    end
endmodule
