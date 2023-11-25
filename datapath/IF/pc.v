`define START_ADDR 30'h0000C00
module pc(
    input wire[31:2] NPC,
    input clk,
    input reset,
    input PCWrite,
    output reg[31:2] PC);
    initial begin
        PC<=`START_ADDR;
    end
    wire [29:0] line;
    assign line=PC<<2;
    always @(posedge clk or negedge reset) begin
        if(!reset) begin
            PC<=`START_ADDR;
        end
        else begin 
            if(PCWrite)begin 
                PC<=NPC;
                //$display("--%x",line);
            end
            if(PC==`START_ADDR)begin
                $display("start");
            end
        end 
    end
endmodule