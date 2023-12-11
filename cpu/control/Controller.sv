`include "cpu/pipelineInterfaces.sv"
module Controller (
    input clk,
    input reset,
    IStallDetect.Controller i_stallDetect,
    IController.Controller i_controller,
    IFIFO.Controller i_ID_EX_fifo,
    ICP0.Controller i_cp0
);
    wire [3:0]aluop;
    wire [2:0]branchType,MDFunc;
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
    assign i_controller.ID_CTRL={NPCFromEPC,ExlSet,jmp,NPCFromGPR,branchType,extop,exsign};
    assign i_controller.EX_CTRL={CP0WB,CP0Write,regDst,isSlt,savePC,ALUSrc,aluop,MDSign,MDFunc,MDHIWB,MDLOWB};
    assign i_controller.MEM_CTRL={memWrite};
    assign i_controller.WB_CTRL={regWrite,memToReg,isDMByte,isDMHalf,isLOADS};
    assign i_stallDetect.ID_uncertainJump=NPCFromGPR||(branchType!=0);
    assign i_cp0.CP0_CTRL={ExlSet,ExlClr};
    //decode instr
    //wire add,sub,ori,beq,sw,lw,lui,j,jal,jr,addi,addiu,slt,lb,lbu,lh,lhu,sb,sh,slti;
    assign add  =(op==0)    &&(func==6'b100000);
    assign sub  =(op==0)    &&(func==6'b100010);
    assign ori  =op==6'b001101;
    assign beq  =op==6'b000100;
    assign sw   =op==6'b101011;
    assign lw   =op==6'b100011;
    assign lui  =op==6'b001111;
    assign j    =op==6'b000010;
    assign jal  =op==6'b000011;
    assign jr   =(op==0)    &&(func==6'b001000);
    assign addi =op==6'b001000;
    assign addiu=op==6'b001001;
    assign slt  =(op==0)    &&(func==6'b101010);
    assign slti =op==6'b001010;
    assign lb   =op==6'b100000;
    assign lbu  =op==6'b100100;
    assign lh   =op==6'b100001;
    assign lhu  =op==6'b100101;
    assign sb   =op==6'b101000;
    assign sh   =op==6'b101001;

    assign addu =(op==0)    &&(func==6'b100001);
    assign subu =(op==0)    &&(func==6'b100011);
    assign AND  =(op==0)    &&(func==6'b100100);
    assign andi =op==6'b001100;
    assign OR   =(op==0)    &&(func==6'b100101);
    assign XOR  =(op==0)    &&(func==6'b100110);
    assign xori =op==6'b001110;
    assign NOR  =(op==0)    &&(func==6'b100111); 
    assign sll  =(op==0)    &&(func==6'b000000);//&&instr!=0;
    assign sllv =(op==0)    &&(func==6'b000100);
    assign srl  =(op==0)    &&(func==6'b000010);
    assign srlv =(op==0)    &&(func==6'b000110);
    assign sra  =(op==0)    &&(func==6'b000011);
    assign srav =(op==0)    &&(func==6'b000111);

    assign bne  =op==6'b000101;
    assign bgtz =op==6'b000111;
    assign bltz =(op==6'b000001)    &&(rt==5'b00000);
    assign bgez =(op==6'b000001)    &&(rt==5'b00001);
    assign blez =op==6'b000110;
    assign jalr =(op==0)    &&(func==6'b001001);

    assign mthi =(op==0)    &&(func==6'b010001);
    assign mtlo =(op==0)    &&(func==6'b010011);
    assign mfhi =(op==0)    &&(func==6'b010000);
    assign mflo =(op==0)    &&(func==6'b010010);
    assign mult =(op==0)    &&(func==6'b011000);
    assign multu=(op==0)    &&(func==6'b011001);
    assign div  =(op==0)    &&(func==6'b011010);
    assign divu =(op==0)    &&(func==6'b011011); 
    assign eret =(op==6'b010000)  && rs[4]==1'b1  &&(func==6'b011000);
    assign mfc0 =(op==6'b010000)  && (rs==0);
    assign mtc0 =(op==6'b010000)  && (rs==5'b00100);

    assign Branch =beq|bne|bgtz|bltz|bgez|blez;

    //controll signal
    //assist variable 
    assign typeR    =add|addu|sub|subu|slt|AND|OR|XOR|NOR|sll|srl|sra|sllv|srlv|srav;
    assign typeIA   =ori|lui|addi|addiu|slti|andi|xori; //typeI(Algorithm): ALU Src I and NO DM
    assign typeIB   =Branch;                //while branch is typeI,but ALUSrc no I
    assign typeJ    =j|jal|jr|jalr;
    assign LOAD     =lw|lb|lbu|lh|lhu;
    assign STORE    =sw|sb|sh;
    assign ALUAdd   =add|addu|addi|addiu|LOAD|STORE;
    assign ALUSub   =sub|subu|slt|slti|beq|bne;
    assign ALUOr    =OR|ori|lui;
    assign ALUAnd   =AND|andi;
    assign ALUXor   =XOR|xori;
    assign ALUNor   =NOR;
    assign ALURs    =bgtz|bltz|bgez|blez;
    //  constant signal
    assign ALUSrc   =typeIA|LOAD|STORE; //Exe S6 || S2
    assign extop    =add|sub|lui; //Exe S6
    assign exsign   =addi|addiu|slti|LOAD|STORE|typeIB; //Exe S6
    assign regDst   =typeR|jalr|mfhi|mflo; //AluWB S7
    assign memToReg =LOAD; //WB
    assign isDMByte =lb|lbu|sb;
    assign isDMHalf =lh|lhu|sh;
    assign isLOADS  =lb|lh;
    assign isSlt    =slt|slti; //AluWB S7
    assign aluop    =sll?   0:
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

    assign MDMUL=mult|multu;
    assign MDDIV=div|divu;
    assign MDSign=mult|div;
    assign MDHIWB=mfhi;
    assign MDLOWB=mflo;
    assign MDFunc   =mthi?   1:
                     mtlo?   2:
                     MDMUL?  3:
                     MDDIV?  4:
                     0; 
    //  status strict signal 
    //写使能信号是状�?�严格的
    //由于s0每个命令必须经过，且s0赋�?�依赖于npc
    //若npc跳转信号在s0出现，会影响npc（�?�且此时npc跳转信号是上�?个指令的），故npc跳转信号要排除S0
    assign branchType=beq?1:
                      bne?2:  
                      bgtz?3: 
                      bltz?4: 
                      bgez?5: 
                      blez?6: 
                      0; 

    //IF and NPC
    assign PCWrite  = !i_stallDetect.stall && !i_ID_EX_fifo.isFull;
    assign IF_FLUSH = ExlSet;
    assign ID_FLUSH = i_stallDetect.stall;
    assign EX_FLUSH=0;
    assign MEM_FLUSH=0;
    //`S(0); 
    /*assign IF_FLUSH =`S(1);
    assign ID_FLUSH =`S(0)|`S(2); 
    assign EX_FLUSH =`S(0)|`S(3); 
    assign MEM_FLUSH =`S(0)|`S(4);*/ 
    //assign npc_sel  =`SNot(0,typeIB); //Branch S8
    assign jmp      =j|jal; //Jmp S9
    assign savePC   =jal|jalr;
    assign NPCFromGPR=jr|jalr;

    //MEM
    assign memWrite =STORE; //MW S5
    //WB
    assign regWrite =typeIA|typeR|mfhi|mflo
                    |LOAD
                    |savePC; //*WB S4 S7 lw jal
    assign CP0WB=mfc0;
    assign CP0Write =mtc0;
    assign ExlSet=i_cp0.IntReq&&!(jmp||NPCFromGPR||branchType);
    assign NPCFromEPC =eret;
    assign ExlClr=eret;
   
endmodule //Controller