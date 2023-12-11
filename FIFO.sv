module FIFO
#(
    parameter WIDTH = 32,
    parameter DEPTH = 8,
    parameter PTR_WIDTH=3
)
(
    input clk,
    input rst,
    input wen,
    input [WIDTH-1:0] wData,
    input pop,
    output [WIDTH-1:0] rData,
    output isFull,
    output isEmpty
);
    reg [PTR_WIDTH:0] wStat=0,rStat=0;
    wire [PTR_WIDTH-1:0] wPtr=wStat[PTR_WIDTH-1:0],
                         rPtr=rStat[PTR_WIDTH-1:0];
    reg [WIDTH-1:0] ram[0:DEPTH-1];
    assign rData=ram[rPtr];  
    assign isFull=(wPtr==rPtr)&&(wStat[PTR_WIDTH]^rStat[PTR_WIDTH]);
    assign isEmpty=wStat==rStat;
    always @(posedge clk or negedge rst) begin
        if(!rst) begin
            wStat<=0;
            rStat<=0;
        end
        else begin
            if(wen&&!isFull)begin
                ram[wPtr]<=wData;
                wStat<=wStat+1;
            end
            if(pop&&!isEmpty)begin
                rStat<=rStat+1;
            end
        end
    end
    
endmodule //FIFO
