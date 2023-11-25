module BRANCH(
    input [31:0]rd1,
    input [31:0]rd2,
    input [2:0] branchType,
    output reg branchAvail
);
    assign eq=rd1==rd2;
    assign SF=rd1[31];
    assign zero=rd1==0;
    always @(*)begin
        case(branchType)
            0:branchAvail<=0;
            1:branchAvail<=eq;
            2:branchAvail<=!eq;
            3:branchAvail<=!SF&&!zero;
            4:branchAvail<=SF;
            5:branchAvail<=!SF;
            6:branchAvail<=SF||zero;
            default:branchAvail<=0;

        endcase
    end
endmodule //BRANCH