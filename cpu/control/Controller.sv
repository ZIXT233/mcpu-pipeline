`include "cpu/pipelineInterfaces.sv"
module Controller (
    // verilator lint_off UNUSED
    input clk,
    input reset,
    // verilator lint_on UNUSED
    IStallDetect.Controller i_stallDetect,
    IController.Controller i_controller,
    ICP0.Controller i_cp0,
    IBranchCorrect.Controller i_branchCorrect
);
    //package
    wire [5:0] op,func;
    wire [4:0] rs,rt;
    assign op=i_controller.op;
    assign func=i_controller.func;
    assign rs=i_controller.rs;
    assign rt=i_controller.rt;
    assign i_controller.IF_FLUSH=IF_FLUSH;
    assign i_controller.IF_CTRL={PCWrite};
    assign i_controller.ID_FLUSH=ID_FLUSH;
    assign i_controller.EX_FLUSH=EX_FLUSH;
    assign i_controller.MEM_FLUSH=MEM_FLUSH;
    assign i_controller.ID_CTRL={NPCFromEPC,ExlSet,jmp,NPCFromGPR,branchType,extop,exsign};
    assign i_controller.EX_CTRL={branchType,CP0WB,CP0Write,regDst,isSlt,savePC,ALUSrc,aluop,MDSign,MDFunc,MDHIWB,MDLOWB};
    assign i_controller.MEM_CTRL={memWrite};
    assign i_controller.WB_CTRL={regWrite,memToReg,isDMByte,isDMHalf,isLOADS};
    assign i_stallDetect.NPCFromGPR=NPCFromGPR;
    assign i_stallDetect.branch=(branchType!=0);
    assign i_cp0.CP0_CTRL={ExlSet,ExlClr};
    //decode instr
    //wire add,sub,ori,beq,sw,lw,lui,j,jal,jr,addi,addiu,slt,lb,lbu,lh,lhu,sb,sh,slti;
    wire add  =(op==0)    &&(func==6'b100000);
    wire sub  =(op==0)    &&(func==6'b100010);
    wire ori  =op==6'b001101;
    wire beq  =op==6'b000100;
    wire sw   =op==6'b101011;
    wire lw   =op==6'b100011;
    wire lui  =op==6'b001111;
    wire j    =op==6'b000010;
    wire jal  =op==6'b000011;
    wire jr   =(op==0)    &&(func==6'b001000);
    wire addi =op==6'b001000;
    wire addiu=op==6'b001001;
    wire slt  =(op==0)    &&(func==6'b101010);
    wire slti =op==6'b001010;
    wire lb   =op==6'b100000;
    wire lbu  =op==6'b100100;
    wire lh   =op==6'b100001;
    wire lhu  =op==6'b100101;
    wire sb   =op==6'b101000;
    wire sh   =op==6'b101001;

    wire addu =(op==0)    &&(func==6'b100001);
    wire subu =(op==0)    &&(func==6'b100011);
    wire AND  =(op==0)    &&(func==6'b100100);
    wire andi =op==6'b001100;
    wire OR   =(op==0)    &&(func==6'b100101);
    wire XOR  =(op==0)    &&(func==6'b100110);
    wire xori =op==6'b001110;
    wire NOR  =(op==0)    &&(func==6'b100111); 
    wire sll  =(op==0)    &&(func==6'b000000);//&&instr!=0;
    wire sllv =(op==0)    &&(func==6'b000100);
    wire srl  =(op==0)    &&(func==6'b000010);
    wire srlv =(op==0)    &&(func==6'b000110);
    wire sra  =(op==0)    &&(func==6'b000011);
    wire srav =(op==0)    &&(func==6'b000111);

    wire bne  =op==6'b000101;
    wire bgtz =op==6'b000111;
    wire bltz =(op==6'b000001)    &&(rt==5'b00000);
    wire bgez =(op==6'b000001)    &&(rt==5'b00001);
    wire blez =op==6'b000110;
    wire jalr =(op==0)    &&(func==6'b001001);

    wire mthi =(op==0)    &&(func==6'b010001);
    wire mtlo =(op==0)    &&(func==6'b010011);
    wire mfhi =(op==0)    &&(func==6'b010000);
    wire mflo =(op==0)    &&(func==6'b010010);
    wire mult =(op==0)    &&(func==6'b011000);
    wire multu=(op==0)    &&(func==6'b011001);
    wire div  =(op==0)    &&(func==6'b011010);
    wire divu =(op==0)    &&(func==6'b011011); 
    wire eret =(op==6'b010000)  && rs[4]==1'b1  &&(func==6'b011000);
    wire mfc0 =(op==6'b010000)  && (rs==0);
    wire mtc0 =(op==6'b010000)  && (rs==5'b00100);

    wire Branch =beq|bne|bgtz|bltz|bgez|blez;

    //controll signal
    //assist variable 
    wire typeR    =add|addu|sub|subu|slt|AND|OR|XOR|NOR|sll|srl|sra|sllv|srlv|srav;
    wire typeIA   =ori|lui|addi|addiu|slti|andi|xori; //typeI(Algorithm): ALU Src I and NO DM
    wire typeIB   =Branch;                //while branch is typeI,but ALUSrc no I
    //wire typeJ    =j|jal|jr|jalr;
    wire LOAD     =lw|lb|lbu|lh|lhu;
    wire STORE    =sw|sb|sh;
    wire ALUAdd   =add|addu|addi|addiu|LOAD|STORE;
    wire ALUSub   =sub|subu|slt|slti|beq|bne;
    wire ALUOr    =OR|ori|lui;
    wire ALUAnd   =AND|andi;
    wire ALUXor   =XOR|xori;
    wire ALUNor   =NOR;
    wire ALURs    =bgtz|bltz|bgez|blez;
    //  constant signal
    wire ALUSrc   =typeIA|LOAD|STORE; //Exe S6 || S2
    wire extop    =add|sub|lui; //Exe S6
    wire exsign   =addi|addiu|slti|LOAD|STORE|typeIB; //Exe S6
    wire regDst   =typeR|jalr|mfhi|mflo; //AluWB S7
    wire memToReg =LOAD; //WB
    wire isDMByte =lb|lbu|sb;
    wire isDMHalf =lh|lhu|sh;
    wire isLOADS  =lb|lh;
    wire isSlt    =slt|slti; //AluWB S7
    wire[3:0] aluop    =sll?   0:
                     ALUOr? 1:
                     ALUSub?2:
                     ALUAdd?3:
                     ALUAnd?4:
                     ALUXor?5:
                     ALUNor?6:
                     srl?   7:
                     sra?   8:
                     sllv?  9:
                     srlv?  10:
                     srav?  11:
                     ALURs? 12:
                     0;

    wire MDMUL=mult|multu;
    wire MDDIV=div|divu;
    wire MDSign=mult|div;
    wire MDHIWB=mfhi;
    wire MDLOWB=mflo;
    wire[2:0] MDFunc   =mthi?   1:
                     mtlo?   2:
                     MDMUL?  3:
                     MDDIV?  4:
                     0; 
    //  status strict signal 
    //写使能信号是状�?�严格的
    //由于s0每个命令必须经过，且s0赋�?�依赖于npc
    //�?npc跳转信号在s0出现，会影响npc（�?�且此时npc跳转信号�?上�?�?指令的），故npc跳转信号要排�?S0
    wire[2:0] branchType=beq?1:
                      bne?2:  
                      bgtz?3: 
                      bltz?4: 
                      bgez?5: 
                      blez?6: 
                      0; 

    //IF and NPC
    wire PCWrite  = !i_stallDetect.stall;
    wire IF_FLUSH = ExlSet || i_branchCorrect.correctAtEX || i_branchCorrect.correctAtMEM;
    wire ID_FLUSH =i_stallDetect.stall || i_branchCorrect.correctAtMEM;
    wire EX_FLUSH=0;
    wire MEM_FLUSH=0;
    //`S(0); 
    /*assign IF_FLUSH =`S(1);
    assign ID_FLUSH =`S(0)|`S(2); 
    assign EX_FLUSH =`S(0)|`S(3); 
    assign MEM_FLUSH =`S(0)|`S(4);*/ 
    //assign npc_sel  =`SNot(0,typeIB); //Branch S8
    wire jmp      =j|jal; //Jmp S9
    wire savePC   =jal|jalr;
    wire NPCFromGPR=jr|jalr;

    //MEM
    wire memWrite =STORE; //MW S5
    //WB
    wire regWrite =typeIA|typeR|mfhi|mflo
                   |LOAD
                   |savePC; //*WB S4 S7 lw jal
    wire CP0WB=mfc0;
    wire CP0Write =mtc0;
    wire ExlSet=i_cp0.IntReq&&!(jmp|NPCFromGPR||(|branchType));
    wire NPCFromEPC =eret;
    wire ExlClr=eret;
   
endmodule //Controller
