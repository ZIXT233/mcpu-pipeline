`include "cpu/pipelineInterfaces.sv"
module BranchPredict (
    input clk,
    input wire [5:0] low_addr,
    input wire [2:0] branchType,
    IBranchCorrect.ID i_branchCorrect,
    output wire predictBranchAvail
);
    assign predictBranchAvail= branchType!=0 && ~fsm[low_addr][1]; //fsm 00 01 10 11 高位0代表跳转
    reg [1:0] fsm[0:63];
    reg lastPredict;
    reg [5:0]lastPredictAddr;
    reg[1:0] lastPredictTime=3;
    int miss=1,branchCnt=0;
    initial begin
        for(int i=0;i<64;i++) fsm[i]=2;
    end
    always @(posedge clk)begin
        if(branchType!=0) begin
            lastPredict<=predictBranchAvail;
            lastPredictAddr<=low_addr;
            lastPredictTime<=0;
            branchCnt<=branchCnt+1;
        end
        
        if(lastPredictTime<2) begin
            if(i_branchCorrect.correctAtEX||i_branchCorrect.correctAtMEM)begin
                $display("predict wrong:[%x] %d",lastPredictAddr,fsm[lastPredictAddr]);
                $display("predict miss:%d/%d",miss,branchCnt);
                miss<=miss+1;
                if(lastPredict&&fsm[lastPredictAddr]<3)begin //预测跳转但是错误，fsm[1]:0->1,故fsm++
                    fsm[lastPredictAddr]<=fsm[lastPredictAddr]+1;
                end
                else if(!lastPredict&&fsm[lastPredictAddr]>0)begin //预测不跳但是错误,fsm[1]: 1->0 ,故fsm--
                    fsm[lastPredictAddr]<=fsm[lastPredictAddr]-1;
                end
            end
            lastPredictTime<=lastPredictTime+1;
        end
    end
endmodule
