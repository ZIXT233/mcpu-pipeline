module ID (
    input      clk,
    input      rst,

    input ID_FLUSH,
    input [6:0]ID_CTRL,
    input [13:0]EX_CTRL,
    input MEM_CTRL,
    input [4:0]WB_CTRL,
    input [61:0]ID_DATA,
    input [37:0]WB_BACK,
    input [37:0]MEM_BACK,
    
    output reg[13:0]o_EX_CTRL,
    output reg o_MEM_CTRL,
    output reg [4:0] o_WB_CTRL,
    output reg[157:0] o_EX_DATA,
    output [31:2]o_NPC,
    output o_uncertainJump
);  
    wire [2:0]branchType;
    assign {jmp,NPCFromGPR,branchType,extop,exsign}=ID_CTRL;
    assign o_uncertainJump=NPCFromGPR||(branchType!=0);
    wire [31:2] PCP1;
    wire [31:0] instr;
    assign {PCP1,instr}=ID_DATA;
    wire [31:0] WB_Wd;
    wire [4:0] WB_rw;
    assign {WB_regWrite,WB_Wd,WB_rw}=WB_BACK;

    wire [31:0]rd1,rd2,EXTB;

    GPR GPR(
        .clk(!clk),  //for WB befor ID
        .reset(rst),
        .rs(instr[25:21]),
        .rt(instr[20:16]),
        .rw(WB_rw),
        .regWrite(WB_regWrite),
        .Wd(WB_Wd),
        .rd1(rd1),
        .rd2(rd2) 
    );
 
    EXT EXT(
        .A(instr[15:0]),
        .extop(extop),
        .exsign(exsign),
        .B(EXTB)
    );
    // outports wire
    wire [31:0] 	f_rd1;
    wire [31:0] 	f_rd2;
    
    FORWARD u_ID_FORWARD(
        .MEM_BACK 	( MEM_BACK  ),
        .WB_BACK  	( WB_BACK   ),
        .USE_MEM_BACK(1'b1),
        .USE_WB_BACK(1'b1),
        .rs       	( instr[25:21]       ),
        .rt       	( instr[20:16]        ),
        .rd1      	( rd1       ),
        .rd2      	( rd2       ),
        .f_rd1    	( f_rd1     ),
        .f_rd2    	( f_rd2     )
    );
    // outports wire
    wire       	branchAvail;
    
    BRANCH u_BRANCH(
        .rd1          	( f_rd1           ),
        .rd2        	( f_rd2         ),
        .branchType  	( branchType   ),
        .branchAvail 	( branchAvail  )
    );
    
    npc npc (
        .PC(PCP1),
        .branchAvail(branchAvail), 
        .jmp(jmp),
        .offset(instr[15:0]),
        .instr_index(instr[25:0]),
        .reg_index(f_rd1),
        .NPCFromGPR(NPCFromGPR),
        .NPC(o_NPC)
    );

    initial begin
        o_EX_DATA<=0;
        o_EX_CTRL<=0;
        o_MEM_CTRL<=0;
        o_WB_CTRL<=0;
    end
    always @(posedge clk) begin
        if(ID_FLUSH) begin
            o_EX_DATA<=0;
            o_EX_CTRL<=0;
            o_MEM_CTRL<=0;
            o_WB_CTRL<=0;
        end
        else begin
            o_EX_DATA<={PCP1,instr,rd1,rd2,EXTB};
            o_EX_CTRL<=EX_CTRL;
            o_MEM_CTRL<=MEM_CTRL;
            o_WB_CTRL<=WB_CTRL;
        end
    end
endmodule //ID
