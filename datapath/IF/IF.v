module IF (
    input clk,
    input rst,
    input jpcAvail,
    input [31:2]JPC,
    input IF_FLUSH,
    input IF_CTRL,
    output[61:0]o_ID_DATA
);
    
    assign {PCWrite}=IF_CTRL;
    wire [31:0]reg_index;
    wire [25:0]EX_instr;
    wire[31:2] IF_PC,NPC;
    wire[31:0] IF_instr;
    assign NPC=jpcAvail?JPC:IF_PC+1;
    pc pc (
        .NPC(NPC),
        .clk(clk),
        .reset(rst),
        .PCWrite(PCWrite  ),
        .PC(IF_PC)
    );
    IM IM (
        .clk(clk),
        .ce(PCWrite),
        .addr(NPC[15:2]),
        .instruct(IF_instr)
    );
     
    reg [31:0] ID_instr; 
    reg firstFetch;
    initial begin 
        ID_instr<=0;
        firstFetch<=1'b1;
    end
    always @(posedge clk or negedge rst) begin
        if(!rst) begin
            ID_instr<=0;
            firstFetch<=1'b1;
        end
        else begin
            if(IF_FLUSH||firstFetch) begin 
                ID_instr<=0;
            end
            else if(PCWrite)begin 
                //$display("[%x]",new_instr);
                ID_instr<=IF_instr;
            end
            firstFetch<=1'b0;
        end
    end
    wire [31:2] ID_PCP1;
    assign ID_PCP1=IF_PC;
    assign o_ID_DATA={ID_PCP1,ID_instr};

    
endmodule //IF