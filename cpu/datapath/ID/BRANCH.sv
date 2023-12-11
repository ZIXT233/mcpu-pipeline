`define match(type,val) ((branchType==type)&&(val))
module BRANCH(
    input [31:0]rd1,
    input [31:0]rd2,
    input [2:0] branchType,
    output branchAvail
);
    wire eq=rd1==rd2;
    wire SF=rd1[31];
    wire zero=rd1==0;

    assign branchAvail=`match(1,eq)||`match(2,!eq)||`match(3,!SF&&!zero)||`match(4,SF)||`match(5,!SF)||`match(6,SF||zero);

endmodule //BRANCH
