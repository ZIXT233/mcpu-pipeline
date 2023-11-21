module BRANCH(
    input [31:0]rd1,
    input [31:0]rd2,
    input [2:0] branchType,
    output branchAvail
);
    assign eq=rd1==rd2;
    assign SF=rd1[31];
    assign zero=rd1==0;
    assign branchAvail=(branchType==0)?0:
                       (branchType==1)?eq: //beq
                       (branchType==2)?!eq://bne
                       (branchType==3)?!SF&&!zero: //bgtz 
                       (branchType==4)?SF: //bltz
                       (branchType==5)?!SF: //bgez
                       (branchType==6)?SF||zero: //blez
                       0;
endmodule //BRANCH