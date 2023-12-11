`define START_ADDR 30'h0000BFF
module pc(
    input wire[31:2] NPC,
    input clk,
    input reset,
    input PCWrite,
    output reg[31:2] PC);
    initial begin
        PC=`START_ADDR;
    end
    wire [29:0] line;
    assign line=PC<<2;
    integer clkCnt=0,fCnt=0;
    always @(posedge clk or negedge reset) begin
        if(!reset) begin
            PC<=`START_ADDR;
        end
        else begin
             if(PCWrite)begin 
                PC<=NPC;
                fCnt<=fCnt+1;
                $display("--%x",line);
                //$display("%d/%d",fCnt,clkCnt);
            end
            if(PC==`START_ADDR)begin
                $display("start");
            end
            clkCnt<=clkCnt+1;
        end
    end
endmodule
