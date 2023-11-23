module EX (
    input      clk,
    input      rst,
    input EX_FLUSH,
    input [15:0]EX_CTRL,
    input MEM_CTRL,
    input [4:0]WB_CTRL,
    input [157:0]EX_DATA,
    input [37:0] WB_BACK,
    input [37:0] MEM_BACK,
    input [31:0] CP0_DATA,
    output reg o_MEM_CTRL,
    output reg [4:0]o_WB_CTRL,
    output reg [68:0]o_MEM_DATA,
    output [37:0] o_CP0_DATA,
    output[4:0] rw
);
    wire [3:0]aluop;
    wire [2:0]MDFunc;
    assign {CP0WB,CP0Write,regDst,isSlt,savePC,ALUSrc,aluop,MDSign,MDFunc,MDHIWB,MDLOWB}=EX_CTRL;

    wire  [31:2]PCP1;
    wire [31:0]instr,rd1,rd2,EXTB;
    assign {PCP1,instr,rd1,rd2,EXTB}=EX_DATA;
    
    assign o_CP0_DATA={CP0Write,instr[15:11],f_rd2};

    
    wire[31:0]f_rd1,f_rd2,ALUB,ALUC,EXout,MDHI,MDLO;  
    
    wire zero;
    assign ALUB=ALUSrc?EXTB:f_rd2;
    FORWARD u_EX_FORWARD(
        .MEM_BACK (MEM_BACK),
        .WB_BACK(WB_BACK),
        .USE_MEM_BACK(1'b1),
        .USE_WB_BACK(1'b1),
        .rs           	( instr[25:21]            ),
        .rt           	( instr[20:16]            ),
        .rd1(rd1),
        .rd2(rd2),
        .f_rd1     	( f_rd1      ),
        .f_rd2     	( f_rd2      )
    );
    ALU ALU(
        .A(f_rd1),
        .B(ALUB),
        .F(aluop),
        .sa(instr[10:6]),
        .C(ALUC),
        .zero(zero)
    );
    MDPROC U_MDPROC(
        .clk(clk),
        .A(f_rd1),
        .B(ALUB),
        .isSign(MDSign),
        .F(MDFunc),
        .O_HI(MDHI),
        .O_LO(MDLO)
    );


    assign EXout=isSlt?ALUC[31]:
                 savePC?PCP1<<2:
                 CP0WB?CP0_DATA:
                 MDHIWB?MDHI:
                 MDLOWB?MDLO:
                 ALUC;
    assign rw=(savePC&&!regDst)?5'h1F:(regDst?instr[15:11]:instr[20:16]);
    initial begin
        o_MEM_DATA<=0;
        o_MEM_CTRL<=0;
        o_WB_CTRL<=0;
    end
    always @(posedge clk) begin
        if(EX_FLUSH) begin
            //o_MEM_DATA<=0;
            o_MEM_CTRL<=0;
            o_WB_CTRL<=0;
        end
        else begin
            o_MEM_DATA<={rw,EXout,f_rd2};
            o_MEM_CTRL<=MEM_CTRL;
            o_WB_CTRL<=WB_CTRL;
        end
    end
endmodule //EX
