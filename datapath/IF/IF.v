module IF (
    input clk,
    input rst,
    input [31:2]NPC,
    input IF_FLUSH,
    input IF_CTRL,
    output[61:0]o_ID_DATA,
    output JumpOrBranch
);
    
    assign {PCWrite}=IF_CTRL;
    wire [31:0]reg_index;
    wire [25:0]EX_instr;
    wire[31:2] IF_PC;
    wire[31:0] IF_instr;
    pc pc (
        .NPC(NPC),
        .clk(clk),
        .reset(reset),
        .PCWrite(PCWrite  ),
        .PC(IF_PC)
    );
    IM IM (
        .addr(IF_PC[15:2]),
        .instruct(IF_instr)
    );
     
    reg [31:0] ID_instr; 
    initial ID_instr<=0;
    always @(posedge clk) begin
        if(IF_FLUSH) ID_instr<=0;
        else if(PCWrite)begin 
            //$display("[%x]",new_instr);
            ID_instr<=IF_instr;
        end
    end
    wire [31:2] ID_PCP1;
    assign ID_PCP1=IF_PC;
    assign o_ID_DATA={ID_PCP1,ID_instr};

    
endmodule //IF
