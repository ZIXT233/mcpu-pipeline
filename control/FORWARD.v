module FORWARD (
    input [37:0]MEM_BACK,
    input [37:0]WB_BACK,
    input USE_MEM_BACK,
    input USE_WB_BACK,
    input[4:0] rs,
    input[4:0] rt,
    input [31:0]rd1,
    input [31:0]rd2,
    output [31:0] f_rd1,
    output [31:0] f_rd2
);
    wire [31:0] WB_Wd,MEM_Wd;
    wire [4:0] WB_rd,MEM_rd;
    assign {WB_regWrite,WB_Wd,WB_rd}=WB_BACK;
    assign {MEM_regWrite,MEM_Wd,MEM_rd}=MEM_BACK;
    reg [1:0]ForwardA,ForwardB;
    assign f_rd1=(ForwardA==2'b10)?MEM_Wd:
                (ForwardA==2'b01)?WB_Wd:
                rd1;
    assign f_rd2=(ForwardB==2'b10)?MEM_Wd:
                (ForwardB==2'b01)?WB_Wd:
                rd2;    
    always @(*)begin
        if(MEM_regWrite && USE_MEM_BACK
            && MEM_rd!=0
            && MEM_rd==rs) ForwardA<=2'b10;
        else if(WB_regWrite && USE_WB_BACK
            && WB_rd!=0 
            && WB_rd==rs) ForwardA<=2'b01;
        else ForwardA<=2'b00;
        if(MEM_regWrite && USE_MEM_BACK
            && MEM_rd!=0
            && MEM_rd==rt) ForwardB<=2'b10;
        else if(WB_regWrite && USE_MEM_BACK
            && WB_rd!=0
            && WB_rd==rt) ForwardB<=2'b01;
        else ForwardB<=2'b00;
    end
    
endmodule //Forward
