`include "cpu/pipelineInterfaces.sv"
module FIFO
#(
    parameter DEPTH = 8,
    parameter PTR_SIZE=3
)
(
    input clk,
    input rst,
    IFIFO.FIFO i_fifo
);
    reg [PTR_SIZE:0] wStat=0,rStat=0;
    wire [PTR_SIZE-1:0] wPtr=wStat[PTR_SIZE-1:0],
                         rPtr=rStat[PTR_SIZE-1:0];
    reg [i_fifo.WIDTH-1:0] ram[0:DEPTH-1]; 
    assign i_fifo.isFull=(wPtr==rPtr)&&(wStat[PTR_SIZE]^rStat[PTR_SIZE]);
    assign i_fifo.isEmpty=wStat==rStat;
    assign i_fifo.rData=i_fifo.isEmpty?0:ram[rPtr];  
    always @(posedge clk or negedge rst) begin
        if(!rst) begin
            wStat<=0;
            rStat<=0;
        end
        else begin
            if(i_fifo.wen&&!i_fifo.isFull)begin
                ram[wPtr]<=i_fifo.wData;
                wStat<=wStat+1;
            end
            if(i_fifo.pop&&!i_fifo.isEmpty)begin
                rStat<=rStat+1;
            end
        end
    end
    
endmodule //FIFO
