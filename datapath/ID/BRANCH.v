`define match(type,val) ((branchType==type)&&(val))
module BRANCH(
    input [31:0]rd1,
    input [31:0]rd2,
    input [2:0] branchType,
    output branchAvail
);
    assign eq=rd1==rd2;
    assign SF=rd1[31];
    assign zero=rd1==0;

    assign branchAvail=`match(1,eq)||`match(2,!eq)||`match(3,!SF&&!zero)||`match(4,SF)||`match(5,!SF)||`match(6,SF||zero);

endmodule //BRANCH