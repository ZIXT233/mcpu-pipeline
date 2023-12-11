`include "cpu/pipelineInterfaces.sv"
module EX (
    input      clk,
    input      rst,
    IController.EX i_controller,
    IFIFO.EX i_fifo,
    IEX_MEM.EX i_ex_mem,
    IBypass.EX i_bypass,
    ICP0.EX i_cp0,
    IBridge.Access i_bridge,
    IStallDetect.EX i_stallDetect
);
    reg issue=1;
    type_ID_EX_Pack pack;
    assign pack=issue?i_fifo.rData:0;
 
    assign i_fifo.pop=issue;
    always @(posedge clk)begin

        issue<=~issue;
    end 

    wire [3:0]aluop;
    wire [2:0]MDFunc;
    assign {CP0WB,CP0Write,regDst,isSlt,savePC,ALUSrc,aluop,MDSign,MDFunc,MDHIWB,MDLOWB}=pack.EX_CTRL;

    wire  [31:2]PCP1;
    wire [31:0]instr,rd1,rd2,EXTB;
    assign {PCP1,instr,rd1,rd2,EXTB}=pack.EX_DATA;

    wire[31:0]f_rd1,f_rd2,ALUB,ALUC,EXout,MDHI,MDLO;  
    
    assign i_cp0.EX_TO_CP0={CP0Write,instr[15:11],f_rd2};
    assign i_stallDetect.EX_rw=(savePC&&!regDst)?5'h1F:(regDst?instr[15:11]:instr[20:16]);
    assign i_stallDetect.EX_regWrite=pack.WB_CTRL.regWrite;
    assign i_stallDetect.EX_memToReg=pack.WB_CTRL.memToReg;
    
    wire zero;
    wire[31:0]accessAddr;
    assign ALUB=ALUSrc?EXTB:f_rd2;
    FORWARD u_EX_FORWARD(
        .MEM_BACK (i_bypass.MEM_BACK),
        .WB_BACK(i_bypass.WB_BACK),
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
        .sum(accessAddr),
        .zero(zero)
    );
  /*  MDPROC U_MDPROC(
        .clk(clk),
        .A(f_rd1),
        .B(ALUB),
        .isSign(MDSign),
        .F(MDFunc),
        .O_HI(MDHI),
        .O_LO(MDLO)
    );
*/
    Access u_Access(
        .clk(clk),
        .memWrite(pack.MEM_CTRL.memWrite),
        .isDMByte(pack.WB_CTRL.isDMByte),
        .isDMHalf(pack.WB_CTRL.isDMHalf),
        .addr(accessAddr),
        .f_rd2,
        .i_bridge,
        .DMout(i_ex_mem.DMout)
    );
    assign EXout=isSlt?ALUC[31]:
                 savePC?PCP1<<2:
                 CP0WB?i_cp0.CP0_TO_EX:
               //  MDHIWB?MDHI:
               //  MDLOWB?MDLO:
                 ALUC;

    initial begin
        i_ex_mem.MEM_DATA<=0;
        i_ex_mem.MEM_CTRL<=0;
        i_ex_mem.WB_CTRL<=0;
    end

    always @(posedge clk) begin
        if(i_controller.EX_FLUSH) begin
            //o_MEM_DATA<=0;
            i_ex_mem.MEM_CTRL<=0;
            i_ex_mem.WB_CTRL<=0;
        end
        else begin
            i_ex_mem.MEM_DATA<={i_stallDetect.EX_rw,EXout};
            i_ex_mem.MEM_CTRL<=pack.MEM_CTRL;
            i_ex_mem.WB_CTRL<=pack.WB_CTRL;
        end
    end
endmodule //EX