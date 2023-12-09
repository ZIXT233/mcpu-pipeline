// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+298,"rst", false,-1);
    tracep->declBus(c+299,"led", false,-1, 7,0);
    tracep->declBus(c+300,"seg7_seg", false,-1, 7,0);
    tracep->declBus(c+301,"seg7_seg1", false,-1, 7,0);
    tracep->declBus(c+302,"seg7_select", false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+298,"rst", false,-1);
    tracep->declBus(c+299,"led", false,-1, 7,0);
    tracep->declBus(c+300,"seg7_seg", false,-1, 7,0);
    tracep->declBus(c+301,"seg7_seg1", false,-1, 7,0);
    tracep->declBus(c+302,"seg7_select", false,-1, 7,0);
    tracep->declBus(c+2,"PrAddr", false,-1, 31,2);
    tracep->declBus(c+101,"PrRD", false,-1, 31,0);
    tracep->declBus(c+3,"PrWD", false,-1, 31,0);
    tracep->declBus(c+4,"PrBE", false,-1, 3,0);
    tracep->declBus(c+5,"HWInt", false,-1, 7,2);
    tracep->declBit(c+6,"IOWrite", false,-1);
    tracep->pushNamePrefix("mips ");
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+298,"rst", false,-1);
    tracep->declBus(c+5,"HWInt", false,-1, 7,2);
    tracep->declBus(c+2,"PrAddr", false,-1, 31,2);
    tracep->declBus(c+101,"PrRD", false,-1, 31,0);
    tracep->declBus(c+3,"PrWD", false,-1, 31,0);
    tracep->declBus(c+4,"PrBE", false,-1, 3,0);
    tracep->declBit(c+6,"IOWrite", false,-1);
    tracep->declQuad(c+114,"ID_DATA_from_IF", false,-1, 61,0);
    tracep->declBus(c+303,"CP0_CTRL", false,-1, 1,0);
    tracep->declBus(c+116,"ID_PCP1", false,-1, 31,2);
    tracep->declBus(c+117,"ID_instr", false,-1, 31,0);
    tracep->declBit(c+309,"pipeline_stall", false,-1);
    tracep->declArray(c+310,"EX_DATA_from_ID", false,-1, 157,0);
    tracep->declBus(c+315,"EX_CTRL_from_ID", false,-1, 15,0);
    tracep->declBit(c+316,"MEM_CTRL_from_ID", false,-1);
    tracep->declBus(c+317,"WB_CTRL_from_ID", false,-1, 4,0);
    tracep->declBus(c+318,"JPC", false,-1, 31,2);
    tracep->declBit(c+319,"jpcAvail", false,-1);
    tracep->declBit(c+320,"MEM_CTRL_from_EX", false,-1);
    tracep->declBus(c+321,"WB_CTRL_from_EX", false,-1, 4,0);
    tracep->declArray(c+322,"MEM_DATA_from_EX", false,-1, 68,0);
    tracep->declBus(c+325,"EX_rw_from_EX", false,-1, 4,0);
    tracep->declQuad(c+102,"CP0_DATA_from_EX", false,-1, 37,0);
    tracep->declBus(c+326,"WB_CTRL_from_MEM", false,-1, 4,0);
    tracep->declArray(c+327,"WB_DATA_from_MEM", false,-1, 68,0);
    tracep->declQuad(c+7,"MEM_BACK_from_MEM", false,-1, 37,0);
    tracep->declQuad(c+247,"WB_BACK_from_WB", false,-1, 37,0);
    tracep->declBus(c+9,"ID_EPC_from_CP0", false,-1, 31,2);
    tracep->declBus(c+10,"EX_DATA_from_CP0", false,-1, 31,0);
    tracep->declArray(c+330,"pre_MEM_DATA_from_EX", false,-1, 66,0);
    tracep->declBit(c+11,"IntReq", false,-1);
    tracep->declBus(c+333,"Dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_CP0 ");
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+298,"rst", false,-1);
    tracep->declBus(c+5,"HWInt", false,-1, 7,2);
    tracep->declBus(c+116,"ID_PCP1", false,-1, 31,2);
    tracep->declBus(c+9,"o_ID_EPC", false,-1, 31,2);
    tracep->declQuad(c+102,"EX_DATA", false,-1, 37,0);
    tracep->declBus(c+10,"o_EX_DATA", false,-1, 31,0);
    tracep->declBus(c+303,"CP0_CTRL", false,-1, 1,0);
    tracep->declBit(c+11,"IntReq", false,-1);
    tracep->declBit(c+270,"ExlSet", false,-1);
    tracep->declBit(c+118,"ExlClr", false,-1);
    tracep->declBus(c+249,"DIn", false,-1, 31,0);
    tracep->declBus(c+12,"Sel", false,-1, 4,0);
    tracep->declBit(c+13,"Wen", false,-1);
    tracep->declBit(c+14,"Dout", false,-1);
    tracep->declBus(c+15,"IM", false,-1, 15,10);
    tracep->declBit(c+16,"EXL", false,-1);
    tracep->declBit(c+17,"IE", false,-1);
    tracep->declBus(c+18,"hwint_pend", false,-1, 15,10);
    tracep->declBus(c+1,"PrID", false,-1, 31,0);
    tracep->declBus(c+19,"SR", false,-1, 31,0);
    tracep->declBus(c+20,"Cause", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_Controller ");
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+298,"reset", false,-1);
    tracep->declBit(c+11,"IntReq", false,-1);
    tracep->declBus(c+303,"CP0_CTRL", false,-1, 1,0);
    tracep->declBus(c+119,"aluop", false,-1, 3,0);
    tracep->declBus(c+120,"branchType", false,-1, 2,0);
    tracep->declBus(c+121,"MDFunc", false,-1, 2,0);
    tracep->declBus(c+122,"op", false,-1, 5,0);
    tracep->declBus(c+123,"func", false,-1, 5,0);
    tracep->declBus(c+124,"rs", false,-1, 4,0);
    tracep->declBus(c+125,"rt", false,-1, 4,0);
    tracep->declBit(c+270,"IF_FLUSH", false,-1);
    tracep->declBit(c+271,"PCWrite", false,-1);
    tracep->declBit(c+272,"ID_FLUSH", false,-1);
    tracep->declBit(c+118,"NPCFromEPC", false,-1);
    tracep->declBit(c+270,"ExlSet", false,-1);
    tracep->declBit(c+126,"jmp", false,-1);
    tracep->declBit(c+127,"NPCFromGPR", false,-1);
    tracep->declBit(c+128,"extop", false,-1);
    tracep->declBit(c+129,"exsign", false,-1);
    tracep->declBit(c+130,"CP0WB", false,-1);
    tracep->declBit(c+131,"CP0Write", false,-1);
    tracep->declBit(c+132,"regDst", false,-1);
    tracep->declBit(c+133,"isSlt", false,-1);
    tracep->declBit(c+134,"savePC", false,-1);
    tracep->declBit(c+135,"ALUSrc", false,-1);
    tracep->declBit(c+136,"MDSign", false,-1);
    tracep->declBit(c+137,"MDHIWB", false,-1);
    tracep->declBit(c+138,"MDLOWB", false,-1);
    tracep->declBit(c+139,"memWrite", false,-1);
    tracep->declBit(c+140,"regWrite", false,-1);
    tracep->declBit(c+141,"memToReg", false,-1);
    tracep->declBit(c+142,"isDMByte", false,-1);
    tracep->declBit(c+143,"isDMHalf", false,-1);
    tracep->declBit(c+144,"isLOADS", false,-1);
    tracep->declBit(c+118,"ExlClr", false,-1);
    tracep->declBit(c+145,"add", false,-1);
    tracep->declBit(c+146,"sub", false,-1);
    tracep->declBit(c+147,"ori", false,-1);
    tracep->declBit(c+148,"beq", false,-1);
    tracep->declBit(c+149,"sw", false,-1);
    tracep->declBit(c+150,"lw", false,-1);
    tracep->declBit(c+151,"lui", false,-1);
    tracep->declBit(c+152,"j", false,-1);
    tracep->declBit(c+153,"jal", false,-1);
    tracep->declBit(c+154,"jr", false,-1);
    tracep->declBit(c+155,"addi", false,-1);
    tracep->declBit(c+156,"addiu", false,-1);
    tracep->declBit(c+157,"slt", false,-1);
    tracep->declBit(c+158,"slti", false,-1);
    tracep->declBit(c+159,"lb", false,-1);
    tracep->declBit(c+160,"lbu", false,-1);
    tracep->declBit(c+161,"lh", false,-1);
    tracep->declBit(c+162,"lhu", false,-1);
    tracep->declBit(c+163,"sb", false,-1);
    tracep->declBit(c+164,"sh", false,-1);
    tracep->declBit(c+165,"addu", false,-1);
    tracep->declBit(c+166,"subu", false,-1);
    tracep->declBit(c+167,"AND", false,-1);
    tracep->declBit(c+168,"andi", false,-1);
    tracep->declBit(c+169,"OR", false,-1);
    tracep->declBit(c+170,"XOR", false,-1);
    tracep->declBit(c+171,"xori", false,-1);
    tracep->declBit(c+172,"NOR", false,-1);
    tracep->declBit(c+173,"sll", false,-1);
    tracep->declBit(c+174,"sllv", false,-1);
    tracep->declBit(c+175,"srl", false,-1);
    tracep->declBit(c+176,"srlv", false,-1);
    tracep->declBit(c+177,"sra", false,-1);
    tracep->declBit(c+178,"srav", false,-1);
    tracep->declBit(c+179,"bne", false,-1);
    tracep->declBit(c+180,"bgtz", false,-1);
    tracep->declBit(c+181,"bltz", false,-1);
    tracep->declBit(c+182,"bgez", false,-1);
    tracep->declBit(c+183,"blez", false,-1);
    tracep->declBit(c+184,"jalr", false,-1);
    tracep->declBit(c+185,"mthi", false,-1);
    tracep->declBit(c+186,"mtlo", false,-1);
    tracep->declBit(c+137,"mfhi", false,-1);
    tracep->declBit(c+138,"mflo", false,-1);
    tracep->declBit(c+187,"mult", false,-1);
    tracep->declBit(c+188,"multu", false,-1);
    tracep->declBit(c+189,"div", false,-1);
    tracep->declBit(c+190,"divu", false,-1);
    tracep->declBit(c+118,"eret", false,-1);
    tracep->declBit(c+130,"mfc0", false,-1);
    tracep->declBit(c+131,"mtc0", false,-1);
    tracep->declBit(c+191,"Branch", false,-1);
    tracep->declBit(c+192,"typeR", false,-1);
    tracep->declBit(c+193,"typeIA", false,-1);
    tracep->declBit(c+191,"typeIB", false,-1);
    tracep->declBit(c+194,"typeJ", false,-1);
    tracep->declBit(c+141,"LOAD", false,-1);
    tracep->declBit(c+139,"STORE", false,-1);
    tracep->declBit(c+195,"ALUAdd", false,-1);
    tracep->declBit(c+196,"ALUSub", false,-1);
    tracep->declBit(c+197,"ALUOr", false,-1);
    tracep->declBit(c+198,"ALUAnd", false,-1);
    tracep->declBit(c+199,"ALUXor", false,-1);
    tracep->declBit(c+172,"ALUNor", false,-1);
    tracep->declBit(c+200,"ALURs", false,-1);
    tracep->declBit(c+201,"MDMUL", false,-1);
    tracep->declBit(c+202,"MDDIV", false,-1);
    tracep->declBit(c+334,"EX_FLUSH", false,-1);
    tracep->declBit(c+334,"MEM_FLUSH", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_EX ");
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+298,"rst", false,-1);
    tracep->declQuad(c+247,"WB_BACK", false,-1, 37,0);
    tracep->declQuad(c+7,"MEM_BACK", false,-1, 37,0);
    tracep->declBus(c+10,"CP0_DATA", false,-1, 31,0);
    tracep->declBit(c+335,"o_MEM_CTRL", false,-1);
    tracep->declBus(c+336,"o_WB_CTRL", false,-1, 4,0);
    tracep->declArray(c+337,"o_MEM_DATA", false,-1, 68,0);
    tracep->declQuad(c+102,"o_CP0_DATA", false,-1, 37,0);
    tracep->declBus(c+21,"aluop", false,-1, 3,0);
    tracep->declBus(c+22,"MDFunc", false,-1, 2,0);
    tracep->declBit(c+23,"CP0WB", false,-1);
    tracep->declBit(c+13,"CP0Write", false,-1);
    tracep->declBit(c+24,"regDst", false,-1);
    tracep->declBit(c+25,"isSlt", false,-1);
    tracep->declBit(c+26,"savePC", false,-1);
    tracep->declBit(c+27,"ALUSrc", false,-1);
    tracep->declBit(c+28,"MDSign", false,-1);
    tracep->declBit(c+29,"MDHIWB", false,-1);
    tracep->declBit(c+30,"MDLOWB", false,-1);
    tracep->declBus(c+31,"PCP1", false,-1, 31,2);
    tracep->declBus(c+32,"instr", false,-1, 31,0);
    tracep->declBus(c+33,"rd1", false,-1, 31,0);
    tracep->declBus(c+34,"rd2", false,-1, 31,0);
    tracep->declBus(c+35,"EXTB", false,-1, 31,0);
    tracep->declBus(c+250,"f_rd1", false,-1, 31,0);
    tracep->declBus(c+249,"f_rd2", false,-1, 31,0);
    tracep->declBus(c+251,"ALUB", false,-1, 31,0);
    tracep->declBus(c+252,"ALUC", false,-1, 31,0);
    tracep->declBus(c+104,"EXout", false,-1, 31,0);
    tracep->declBus(c+340,"MDHI", false,-1, 31,0);
    tracep->declBus(c+341,"MDLO", false,-1, 31,0);
    tracep->declBit(c+253,"zero", false,-1);
    tracep->declBus(c+254,"preMemAddr", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+250,"A", false,-1, 31,0);
    tracep->declBus(c+251,"B", false,-1, 31,0);
    tracep->declBus(c+36,"sa", false,-1, 4,0);
    tracep->declBus(c+21,"F", false,-1, 3,0);
    tracep->declBus(c+252,"C", false,-1, 31,0);
    tracep->declBus(c+254,"sum", false,-1, 31,0);
    tracep->declBit(c+253,"zero", false,-1);
    tracep->declBus(c+105,"sll", false,-1, 31,0);
    tracep->declBus(c+106,"srl", false,-1, 31,0);
    tracep->declBus(c+107,"sra", false,-1, 31,0);
    tracep->declBus(c+255,"sllv", false,-1, 31,0);
    tracep->declBus(c+256,"srlv", false,-1, 31,0);
    tracep->declBus(c+257,"srav", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_EX_FORWARD ");
    tracep->declQuad(c+7,"MEM_BACK", false,-1, 37,0);
    tracep->declQuad(c+247,"WB_BACK", false,-1, 37,0);
    tracep->declBit(c+342,"USE_MEM_BACK", false,-1);
    tracep->declBit(c+342,"USE_WB_BACK", false,-1);
    tracep->declBus(c+37,"rs", false,-1, 4,0);
    tracep->declBus(c+38,"rt", false,-1, 4,0);
    tracep->declBus(c+33,"rd1", false,-1, 31,0);
    tracep->declBus(c+34,"rd2", false,-1, 31,0);
    tracep->declBus(c+250,"f_rd1", false,-1, 31,0);
    tracep->declBus(c+249,"f_rd2", false,-1, 31,0);
    tracep->declBus(c+258,"WB_Wd", false,-1, 31,0);
    tracep->declBus(c+39,"MEM_Wd", false,-1, 31,0);
    tracep->declBus(c+259,"WB_rd", false,-1, 4,0);
    tracep->declBus(c+40,"MEM_rd", false,-1, 4,0);
    tracep->declBit(c+260,"WB_regWrite", false,-1);
    tracep->declBit(c+41,"MEM_regWrite", false,-1);
    tracep->declBit(c+42,"MEM_EN", false,-1);
    tracep->declBit(c+261,"WB_EN", false,-1);
    tracep->declBit(c+43,"AFromMEM", false,-1);
    tracep->declBit(c+262,"AFromWB", false,-1);
    tracep->declBit(c+108,"oriA", false,-1);
    tracep->declBit(c+44,"BFromMEM", false,-1);
    tracep->declBit(c+263,"BFromWB", false,-1);
    tracep->declBit(c+109,"oriB", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ID ");
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+298,"rst", false,-1);
    tracep->declQuad(c+247,"WB_BACK", false,-1, 37,0);
    tracep->declQuad(c+7,"MEM_BACK", false,-1, 37,0);
    tracep->declBus(c+9,"CP0_EPC", false,-1, 31,2);
    tracep->declBus(c+273,"branchType", false,-1, 2,0);
    tracep->declBit(c+274,"NPCFromEPC", false,-1);
    tracep->declBit(c+275,"ExlSet", false,-1);
    tracep->declBit(c+276,"jmp", false,-1);
    tracep->declBit(c+277,"NPCFromGPR", false,-1);
    tracep->declBit(c+278,"extop", false,-1);
    tracep->declBit(c+279,"exsign", false,-1);
    tracep->declBus(c+116,"PCP1", false,-1, 31,2);
    tracep->declBus(c+117,"instr", false,-1, 31,0);
    tracep->declBus(c+258,"WB_Wd", false,-1, 31,0);
    tracep->declBus(c+259,"WB_rw", false,-1, 4,0);
    tracep->declBit(c+260,"WB_regWrite", false,-1);
    tracep->declBus(c+203,"rd1", false,-1, 31,0);
    tracep->declBus(c+204,"rd2", false,-1, 31,0);
    tracep->declBus(c+304,"EXTB", false,-1, 31,0);
    tracep->declBus(c+280,"f_rd1", false,-1, 31,0);
    tracep->declBus(c+281,"f_rd2", false,-1, 31,0);
    tracep->declBit(c+282,"branchAvail", false,-1);
    tracep->pushNamePrefix("EXT ");
    tracep->declBus(c+205,"A", false,-1, 15,0);
    tracep->declBit(c+278,"extop", false,-1);
    tracep->declBit(c+279,"exsign", false,-1);
    tracep->declBus(c+304,"B", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GPR ");
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+298,"reset", false,-1);
    tracep->declBit(c+260,"regWrite", false,-1);
    tracep->declBus(c+124,"rs", false,-1, 25,21);
    tracep->declBus(c+125,"rt", false,-1, 20,16);
    tracep->declBus(c+259,"rw", false,-1, 15,11);
    tracep->declBus(c+258,"Wd", false,-1, 31,0);
    tracep->declBus(c+203,"rd1", false,-1, 31,0);
    tracep->declBus(c+204,"rd2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+206+i*1,"register", true,(i+0), 31,0);
    }
    tracep->declBus(c+238,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("jpc ");
    tracep->declBus(c+116,"PC", false,-1, 31,2);
    tracep->declBit(c+282,"branchAvail", false,-1);
    tracep->declBit(c+276,"jmp", false,-1);
    tracep->declBit(c+277,"NPCFromGPR", false,-1);
    tracep->declBit(c+274,"NPCFromEPC", false,-1);
    tracep->declBit(c+275,"goExceptionHandler", false,-1);
    tracep->declBus(c+9,"EPC", false,-1, 31,2);
    tracep->declBus(c+205,"offset", false,-1, 17,2);
    tracep->declBus(c+239,"instr_index", false,-1, 27,2);
    tracep->declBus(c+280,"reg_index", false,-1, 31,0);
    tracep->declBus(c+305,"JPC", false,-1, 31,2);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_BRANCH ");
    tracep->declBus(c+280,"rd1", false,-1, 31,0);
    tracep->declBus(c+281,"rd2", false,-1, 31,0);
    tracep->declBus(c+273,"branchType", false,-1, 2,0);
    tracep->declBit(c+282,"branchAvail", false,-1);
    tracep->declBit(c+283,"eq", false,-1);
    tracep->declBit(c+284,"SF", false,-1);
    tracep->declBit(c+285,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ID_FORWARD ");
    tracep->declQuad(c+7,"MEM_BACK", false,-1, 37,0);
    tracep->declQuad(c+247,"WB_BACK", false,-1, 37,0);
    tracep->declBit(c+342,"USE_MEM_BACK", false,-1);
    tracep->declBit(c+342,"USE_WB_BACK", false,-1);
    tracep->declBus(c+124,"rs", false,-1, 4,0);
    tracep->declBus(c+125,"rt", false,-1, 4,0);
    tracep->declBus(c+203,"rd1", false,-1, 31,0);
    tracep->declBus(c+204,"rd2", false,-1, 31,0);
    tracep->declBus(c+280,"f_rd1", false,-1, 31,0);
    tracep->declBus(c+281,"f_rd2", false,-1, 31,0);
    tracep->declBus(c+258,"WB_Wd", false,-1, 31,0);
    tracep->declBus(c+39,"MEM_Wd", false,-1, 31,0);
    tracep->declBus(c+259,"WB_rd", false,-1, 4,0);
    tracep->declBus(c+40,"MEM_rd", false,-1, 4,0);
    tracep->declBit(c+260,"WB_regWrite", false,-1);
    tracep->declBit(c+41,"MEM_regWrite", false,-1);
    tracep->declBit(c+42,"MEM_EN", false,-1);
    tracep->declBit(c+261,"WB_EN", false,-1);
    tracep->declBit(c+286,"AFromMEM", false,-1);
    tracep->declBit(c+287,"AFromWB", false,-1);
    tracep->declBit(c+288,"oriA", false,-1);
    tracep->declBit(c+289,"BFromMEM", false,-1);
    tracep->declBit(c+290,"BFromWB", false,-1);
    tracep->declBit(c+291,"oriB", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_IF ");
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+298,"rst", false,-1);
    tracep->declBus(c+343,"reg_index", false,-1, 31,0);
    tracep->declBus(c+344,"EX_instr", false,-1, 25,0);
    tracep->declBus(c+240,"IF_PC", false,-1, 31,2);
    tracep->declBus(c+292,"NPC", false,-1, 31,2);
    tracep->declBus(c+264,"IF_instr", false,-1, 31,0);
    tracep->declBus(c+241,"ID_instr", false,-1, 31,0);
    tracep->declBit(c+242,"firstFetch", false,-1);
    tracep->declBus(c+240,"ID_PCP1", false,-1, 31,2);
    tracep->pushNamePrefix("IM ");
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+271,"ce", false,-1);
    tracep->declBus(c+293,"addr", false,-1, 15,2);
    tracep->declBus(c+264,"instruct", false,-1, 31,0);
    tracep->declBus(c+294,"index", false,-1, 10,0);
    tracep->pushNamePrefix("u_imrom ");
    tracep->declBit(c+297,"clka", false,-1);
    tracep->declBus(c+294,"addra", false,-1, 12,2);
    tracep->declBit(c+334,"wea", false,-1);
    tracep->declBus(c+345,"dina", false,-1, 31,0);
    tracep->declBit(c+271,"ena", false,-1);
    tracep->declBus(c+264,"douta", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc ");
    tracep->declBus(c+292,"NPC", false,-1, 31,2);
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+298,"reset", false,-1);
    tracep->declBit(c+271,"PCWrite", false,-1);
    tracep->declBus(c+240,"PC", false,-1, 31,2);
    tracep->declBus(c+243,"line", false,-1, 29,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_MEM ");
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+298,"rst", false,-1);
    tracep->declBus(c+101,"PrRD", false,-1, 31,0);
    tracep->declBus(c+2,"PrAddr", false,-1, 31,2);
    tracep->declBus(c+3,"PrWD", false,-1, 31,0);
    tracep->declBus(c+4,"PrBE", false,-1, 3,0);
    tracep->declBit(c+6,"IOWrite", false,-1);
    tracep->declQuad(c+7,"o_MEM_BACK", false,-1, 37,0);
    tracep->declBit(c+45,"memWrite", false,-1);
    tracep->declBus(c+46,"EXout", false,-1, 31,0);
    tracep->declBus(c+47,"rd2", false,-1, 31,0);
    tracep->declBus(c+346,"MEMout", false,-1, 31,0);
    tracep->declBus(c+48,"rw", false,-1, 4,0);
    tracep->declBus(c+4,"be", false,-1, 3,0);
    tracep->declBit(c+347,"isDMByte", false,-1);
    tracep->declBit(c+348,"isDMHalf", false,-1);
    tracep->declBit(c+49,"AddrInDM", false,-1);
    tracep->declBit(c+50,"DMWrite", false,-1);
    tracep->pushNamePrefix("U_BEEXT ");
    tracep->declBit(c+347,"isByte", false,-1);
    tracep->declBit(c+348,"isHalf", false,-1);
    tracep->declBus(c+51,"low_addr", false,-1, 1,0);
    tracep->declBus(c+4,"be", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dm_ram ");
    tracep->declBus(c+52,"addra", false,-1, 13,2);
    tracep->declBit(c+49,"ena", false,-1);
    tracep->declBus(c+53,"wea", false,-1, 3,0);
    tracep->declBit(c+297,"clka", false,-1);
    tracep->declBus(c+3,"dina", false,-1, 31,0);
    tracep->declBus(c+54,"douta", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_WB ");
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+298,"rst", false,-1);
    tracep->declBus(c+101,"PrRD", false,-1, 31,0);
    tracep->declQuad(c+247,"o_WB_BACK", false,-1, 37,0);
    tracep->declBit(c+55,"regWrite", false,-1);
    tracep->declBit(c+56,"memToReg", false,-1);
    tracep->declBit(c+57,"isDMByte", false,-1);
    tracep->declBit(c+58,"isDMHalf", false,-1);
    tracep->declBit(c+59,"isLOADS", false,-1);
    tracep->declBit(c+60,"AddrInDM", false,-1);
    tracep->declBit(c+265,"MEMout", false,-1);
    tracep->declBus(c+110,"EXT_Dout", false,-1, 31,0);
    tracep->declBus(c+111,"WB_Wd", false,-1, 31,0);
    tracep->pushNamePrefix("U_DREXT ");
    tracep->declBit(c+57,"isByte", false,-1);
    tracep->declBit(c+58,"isHalf", false,-1);
    tracep->declBit(c+59,"exsign", false,-1);
    tracep->declBus(c+61,"low_addr", false,-1, 1,0);
    tracep->declBus(c+266,"in_data", false,-1, 31,0);
    tracep->declBus(c+110,"out_data", false,-1, 31,0);
    tracep->declBus(c+267,"half", false,-1, 15,0);
    tracep->declBus(c+62,"shift_bit", false,-1, 4,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_BRIDGE ");
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBus(c+2,"PrAddrWire", false,-1, 31,2);
    tracep->declBus(c+3,"PrWDWire", false,-1, 31,0);
    tracep->declBus(c+4,"PrBEWire", false,-1, 3,0);
    tracep->declBit(c+6,"WeCPUWire", false,-1);
    tracep->declBus(c+101,"PrRD", false,-1, 31,0);
    tracep->declBus(c+5,"HWInt", false,-1, 7,2);
    tracep->declBus(c+299,"o_led", false,-1, 7,0);
    tracep->declBus(c+300,"seg7_seg", false,-1, 7,0);
    tracep->declBus(c+302,"seg7_select", false,-1, 7,0);
    tracep->declBus(c+63,"PrAddr", false,-1, 31,2);
    tracep->declBus(c+64,"PrWD", false,-1, 31,0);
    tracep->declBus(c+65,"PrBE", false,-1, 3,0);
    tracep->declBit(c+66,"WeCPU", false,-1);
    tracep->declBus(c+349,"DEV_Addr", false,-1, 7,2);
    tracep->declBus(c+350,"DEV0_RD", false,-1, 31,0);
    tracep->declBus(c+67,"DEV1_RD", false,-1, 31,0);
    tracep->declBus(c+112,"DEV2_RD", false,-1, 31,0);
    tracep->declBus(c+64,"DEV_WD", false,-1, 31,0);
    tracep->declBus(c+68,"WeDEV", false,-1, 3,0);
    tracep->declBit(c+69,"HitDEV0", false,-1);
    tracep->declBit(c+70,"HitDEV1", false,-1);
    tracep->declBit(c+71,"HitDEV2", false,-1);
    tracep->pushNamePrefix("U_screenBoard ");
    tracep->declBus(c+64,"D", false,-1, 31,0);
    tracep->declBit(c+72,"WE", false,-1);
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBus(c+67,"show", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_counter ");
    tracep->declBus(c+64,"D", false,-1, 31,0);
    tracep->declBit(c+73,"WE", false,-1);
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+74,"INT", false,-1);
    tracep->declBus(c+75,"cnt", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_seg7 ");
    tracep->declBus(c+64,"D", false,-1, 31,0);
    tracep->declBit(c+76,"A", false,-1);
    tracep->declBus(c+65,"be", false,-1, 3,0);
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+77,"we", false,-1);
    tracep->declBus(c+112,"Dout", false,-1, 31,0);
    tracep->declBus(c+300,"seg", false,-1, 7,0);
    tracep->declBus(c+302,"select", false,-1, 7,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+268+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+78,"cnt", false,-1, 18,0);
    tracep->declBus(c+79,"pause", false,-1, 9,0);
    tracep->declBus(c+80,"lightDig", false,-1, 2,0);
    tracep->declBus(c+113,"newSeg", false,-1, 7,0);
    tracep->declBus(c+81,"newSelect", false,-1, 7,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_controller__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_controller__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBus(c+122,"op", false,-1, 31,26);
    tracep->declBus(c+123,"func", false,-1, 5,0);
    tracep->declBus(c+124,"rs", false,-1, 25,21);
    tracep->declBus(c+125,"rt", false,-1, 20,16);
    tracep->declBus(c+117,"ID_instr", false,-1, 31,0);
    tracep->declBit(c+270,"IF_FLUSH", false,-1);
    tracep->declBit(c+272,"ID_FLUSH", false,-1);
    tracep->declBit(c+351,"EX_FLUSH", false,-1);
    tracep->declBit(c+352,"MEM_FLUSH", false,-1);
    tracep->declBit(c+353,"WB_FLUSH", false,-1);
    tracep->declBus(c+271,"IF_CTRL", false,-1, 0,0);
    tracep->declBus(c+295,"ID_CTRL", false,-1, 8,0);
    tracep->declBus(c+244,"EX_CTRL", false,-1, 15,0);
    tracep->declBus(c+139,"MEM_CTRL", false,-1, 0,0);
    tracep->declBus(c+245,"WB_CTRL", false,-1, 4,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_stallDetect__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_stallDetect__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBus(c+124,"ID_rs", false,-1, 4,0);
    tracep->declBus(c+125,"ID_rt", false,-1, 4,0);
    tracep->declBit(c+246,"ID_uncertainJump", false,-1);
    tracep->declBus(c+82,"EX_rw", false,-1, 4,0);
    tracep->declBit(c+83,"EX_regWrite", false,-1);
    tracep->declBit(c+84,"EX_memToReg", false,-1);
    tracep->declBus(c+48,"MEM_rw", false,-1, 4,0);
    tracep->declBit(c+85,"MEM_memToReg", false,-1);
    tracep->declBit(c+272,"stall", false,-1);
    tracep->declBit(c+306,"LOAD", false,-1);
    tracep->declBit(c+307,"Branch_EX", false,-1);
    tracep->declBit(c+308,"Branch_LOAD", false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_if_id__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_if_id__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declQuad(c+114,"ID_DATA", false,-1, 61,0);
    tracep->declBus(c+305,"JPC", false,-1, 31,2);
    tracep->declBit(c+296,"jpcAvail", false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_id_ex__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_id_ex__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBus(c+86,"EX_CTRL", false,-1, 15,0);
    tracep->declBus(c+87,"MEM_CTRL", false,-1, 0,0);
    tracep->declBus(c+88,"WB_CTRL", false,-1, 4,0);
    tracep->declArray(c+89,"EX_DATA", false,-1, 157,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_ex_mem__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_ex_mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBus(c+45,"MEM_CTRL", false,-1, 0,0);
    tracep->declBus(c+94,"WB_CTRL", false,-1, 4,0);
    tracep->declArray(c+95,"MEM_DATA", false,-1, 68,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_mem_wb__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_mem_wb__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBus(c+98,"WB_CTRL", false,-1, 4,0);
    tracep->declQuad(c+99,"WB_DATA", false,-1, 36,0);
    tracep->declBus(c+54,"Dout", false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("top ");
    tracep->pushNamePrefix("mips ");
    tracep->pushNamePrefix("i_controller ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_controller__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_ex_mem ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_ex_mem__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_id_ex ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_id_ex__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_if_id ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_if_id__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_mem_wb ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_mem_wb__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_stallDetect ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_stallDetect__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_Controller ");
    tracep->pushNamePrefix("i_controller ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_controller__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_stallDetect ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_stallDetect__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_EX ");
    tracep->pushNamePrefix("i_controller ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_controller__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_ex_mem ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_ex_mem__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_id_ex ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_id_ex__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_stallDetect ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_stallDetect__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ID ");
    tracep->pushNamePrefix("i_controller ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_controller__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_id_ex ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_id_ex__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_if_id ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_if_id__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_stallDetect ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_stallDetect__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_IF ");
    tracep->pushNamePrefix("i_controller ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_controller__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_if_id ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_if_id__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_MEM ");
    tracep->pushNamePrefix("i_controller ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_controller__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_ex_mem ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_ex_mem__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_mem_wb ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_mem_wb__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_stallDetect ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_stallDetect__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_WB ");
    tracep->pushNamePrefix("i_mem_wb ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_mem_wb__0(vlSelf, tracep);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__PrID),32);
    bufp->fullIData(oldp+2,((vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
                             >> 2U)),30);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__PrWD),32);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__PrBE),4);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__HWInt),6);
    bufp->fullBit(oldp+6,(((0x3000U <= (0xffffU & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U])) 
                           & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_CTRL))));
    bufp->fullQData(oldp+7,(vlSelf->top__DOT__mips__DOT__MEM_BACK_from_MEM),38);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0),30);
    bufp->fullIData(oldp+10,((1U & ((0xcU == (0x1fU 
                                              & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                 >> 0xbU)))
                                     ? (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                         << 0xaU) | 
                                        (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL) 
                                          << 1U) | (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)))
                                     : ((0xdU == (0x1fU 
                                                  & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                     >> 0xbU)))
                                         ? ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                                            << 0xaU)
                                         : ((0xeU == 
                                             (0x1fU 
                                              & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                 >> 0xbU)))
                                             ? vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0
                                             : ((0xfU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                     >> 0xbU)))
                                                 ? vlSelf->top__DOT__mips__DOT__u_CP0__DOT__PrID
                                                 : 0U)))))),32);
    bufp->fullBit(oldp+11,(((IData)(vlSelf->top__DOT__HWInt) 
                            & ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                               & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL)) 
                                  & (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE))))));
    bufp->fullCData(oldp+12,((0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                       >> 0xbU))),5);
    bufp->fullBit(oldp+13,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                  >> 0xeU))));
    bufp->fullBit(oldp+14,((1U & ((0xcU == (0x1fU & 
                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                             >> 0xbU)))
                                   ? (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                       << 0xaU) | (
                                                   ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)))
                                   : ((0xdU == (0x1fU 
                                                & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                   >> 0xbU)))
                                       ? ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                                          << 0xaU) : 
                                      ((0xeU == (0x1fU 
                                                 & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                    >> 0xbU)))
                                        ? vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0
                                        : ((0xfU == 
                                            (0x1fU 
                                             & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                >> 0xbU)))
                                            ? vlSelf->top__DOT__mips__DOT__u_CP0__DOT__PrID
                                            : 0U)))))));
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM),6);
    bufp->fullBit(oldp+16,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL));
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE));
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend),6);
    bufp->fullIData(oldp+19,((((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                               << 0xaU) | (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)))),32);
    bufp->fullIData(oldp+20,(((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                              << 0xaU)),32);
    bufp->fullCData(oldp+21,((0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                      >> 6U))),4);
    bufp->fullCData(oldp+22,((7U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                    >> 2U))),3);
    bufp->fullBit(oldp+23,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                  >> 0xfU))));
    bufp->fullBit(oldp+24,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                  >> 0xdU))));
    bufp->fullBit(oldp+25,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                  >> 0xcU))));
    bufp->fullBit(oldp+26,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                  >> 0xbU))));
    bufp->fullBit(oldp+27,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                  >> 0xaU))));
    bufp->fullBit(oldp+28,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                  >> 5U))));
    bufp->fullBit(oldp+29,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                  >> 1U))));
    bufp->fullBit(oldp+30,((1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))));
    bufp->fullIData(oldp+31,((0x3fffffffU & vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U])),30);
    bufp->fullIData(oldp+32,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U]),32);
    bufp->fullIData(oldp+33,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[2U]),32);
    bufp->fullIData(oldp+34,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[1U]),32);
    bufp->fullIData(oldp+35,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[0U]),32);
    bufp->fullCData(oldp+36,((0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                       >> 6U))),5);
    bufp->fullCData(oldp+37,((0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                       >> 0x15U))),5);
    bufp->fullCData(oldp+38,((0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                       >> 0x10U))),5);
    bufp->fullIData(oldp+39,((IData)((vlSelf->top__DOT__mips__DOT__MEM_BACK_from_MEM 
                                      >> 5U))),32);
    bufp->fullCData(oldp+40,((0x1fU & (IData)(vlSelf->top__DOT__mips__DOT__MEM_BACK_from_MEM))),5);
    bufp->fullBit(oldp+41,((1U & (IData)((vlSelf->top__DOT__mips__DOT__MEM_BACK_from_MEM 
                                          >> 0x25U)))));
    bufp->fullBit(oldp+42,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN));
    bufp->fullBit(oldp+43,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM));
    bufp->fullBit(oldp+44,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM));
    bufp->fullBit(oldp+45,(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_CTRL));
    bufp->fullIData(oldp+46,(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U]),32);
    bufp->fullIData(oldp+47,(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[0U]),32);
    bufp->fullCData(oldp+48,((0x1fU & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[2U])),5);
    bufp->fullBit(oldp+49,((0x3000U > (0xffffU & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U]))));
    bufp->fullBit(oldp+50,(((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_CTRL) 
                            & (0x3000U > (0xffffU & 
                                          vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U])))));
    bufp->fullCData(oldp+51,((3U & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U])),2);
    bufp->fullSData(oldp+52,((0xfffU & (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
                                        >> 2U))),12);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea),4);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellout__u_dm_ram__douta),32);
    bufp->fullBit(oldp+55,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                  >> 4U))));
    bufp->fullBit(oldp+56,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                  >> 3U))));
    bufp->fullBit(oldp+57,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                  >> 2U))));
    bufp->fullBit(oldp+58,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                  >> 1U))));
    bufp->fullBit(oldp+59,((1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL))));
    bufp->fullBit(oldp+60,((0x3000U > (0xffffU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA)))));
    bufp->fullCData(oldp+61,((3U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA))),2);
    bufp->fullCData(oldp+62,((0x18U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA) 
                                       << 3U))),5);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr),30);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__u_BRIDGE__DOT__PrWD),32);
    bufp->fullCData(oldp+65,(vlSelf->top__DOT__u_BRIDGE__DOT__PrBE),4);
    bufp->fullBit(oldp+66,(vlSelf->top__DOT__u_BRIDGE__DOT__WeCPU));
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__u_BRIDGE__DOT__DEV1_RD),32);
    bufp->fullCData(oldp+68,(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV),4);
    bufp->fullBit(oldp+69,((0x7fU == (0xffffffU & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                                   >> 6U)))));
    bufp->fullBit(oldp+70,((0x80U == (0xffffffU & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                                   >> 6U)))));
    bufp->fullBit(oldp+71,((0x81U == (0xffffffU & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                                   >> 6U)))));
    bufp->fullBit(oldp+72,((1U & ((IData)(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV) 
                                  >> 1U))));
    bufp->fullBit(oldp+73,((1U & (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV))));
    bufp->fullBit(oldp+74,((0U == vlSelf->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt)));
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt),32);
    bufp->fullBit(oldp+76,((1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr)));
    bufp->fullBit(oldp+77,((1U & ((IData)(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV) 
                                  >> 2U))));
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt),19);
    bufp->fullSData(oldp+79,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__pause),10);
    bufp->fullCData(oldp+80,((7U & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                    >> 0x10U))),3);
    bufp->fullCData(oldp+81,((0xffU & (0x80U >> (7U 
                                                 & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                                    >> 0x10U))))),8);
    bufp->fullCData(oldp+82,(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.EX_rw),5);
    bufp->fullBit(oldp+83,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL) 
                                  >> 4U))));
    bufp->fullBit(oldp+84,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL) 
                                  >> 3U))));
    bufp->fullBit(oldp+85,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.WB_CTRL) 
                                  >> 3U))));
    bufp->fullSData(oldp+86,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL),16);
    bufp->fullBit(oldp+87,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.MEM_CTRL));
    bufp->fullCData(oldp+88,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL),5);
    bufp->fullWData(oldp+89,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA),158);
    bufp->fullCData(oldp+94,(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.WB_CTRL),5);
    bufp->fullWData(oldp+95,(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA),69);
    bufp->fullCData(oldp+98,(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL),5);
    bufp->fullQData(oldp+99,(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA),37);
    bufp->fullIData(oldp+101,(((0x7fU == (0xffffffU 
                                          & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                             >> 6U)))
                                ? vlSelf->top__DOT__u_BRIDGE__DOT__DEV0_RD
                                : ((0x80U == (0xffffffU 
                                              & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                                 >> 6U)))
                                    ? vlSelf->top__DOT__u_BRIDGE__DOT__DEV1_RD
                                    : ((0x81U == (0xffffffU 
                                                  & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                                     >> 6U)))
                                        ? vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                                       [(1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr)]
                                        : 0U)))),32);
    bufp->fullQData(oldp+102,((((QData)((IData)((1U 
                                                 & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                                    >> 0xeU)))) 
                                << 0x25U) | (((QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                                  >> 0xbU)))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn))))),38);
    bufp->fullIData(oldp+104,(((0x1000U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))
                                ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC 
                                   >> 0x1fU) : ((0x800U 
                                                 & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))
                                                 ? 
                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
                                                 << 2U)
                                                 : 
                                                ((0x8000U 
                                                  & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))
                                                  ? 
                                                 (1U 
                                                  & ((0xcU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                          >> 0xbU)))
                                                      ? 
                                                     (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)))
                                                      : 
                                                     ((0xdU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                           >> 0xbU)))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                                                       << 0xaU)
                                                       : 
                                                      ((0xeU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                            >> 0xbU)))
                                                        ? vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0
                                                        : 
                                                       ((0xfU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                             >> 0xbU)))
                                                         ? vlSelf->top__DOT__mips__DOT__u_CP0__DOT__PrID
                                                         : 0U)))))
                                                  : vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC)))),32);
    bufp->fullIData(oldp+105,((vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                               << (0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                            >> 6U)))),32);
    bufp->fullIData(oldp+106,((vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                               >> (0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                            >> 6U)))),32);
    bufp->fullIData(oldp+107,(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB, 
                                             (0x1fU 
                                              & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                 >> 6U)))),32);
    bufp->fullBit(oldp+108,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM)) 
                                   & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB))))));
    bufp->fullBit(oldp+109,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM)) 
                                   & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB))))));
    bufp->fullIData(oldp+110,(((4U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL))
                                ? (((- (IData)((1U 
                                                & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                                   & (vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0 
                                                      >> 7U))))) 
                                    << 8U) | (0xffU 
                                              & vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0))
                                : ((2U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                                       & (vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0 
                                                          >> 0xfU))))) 
                                        << 0x10U) | 
                                       (0xffffU & vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0))
                                    : (IData)(vlSelf->top__DOT__mips__DOT__u_WB__DOT__MEMout)))),32);
    bufp->fullIData(oldp+111,(((8U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL))
                                ? ((4U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                                       & (vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0 
                                                          >> 7U))))) 
                                        << 8U) | (0xffU 
                                                  & vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0))
                                    : ((2U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                                           & (vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0 
                                                              >> 0xfU))))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0))
                                        : (IData)(vlSelf->top__DOT__mips__DOT__u_WB__DOT__MEMout)))
                                : (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA))),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                              [(1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr)]),32);
    bufp->fullCData(oldp+113,((0xffU & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                                        [(1U & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                                >> 0x12U))] 
                                        >> (0x18U & 
                                            (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                             >> 0xdU))))),8);
    bufp->fullQData(oldp+114,(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA),62);
    bufp->fullIData(oldp+116,((0x3fffffffU & (IData)(
                                                     (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                      >> 0x20U)))),30);
    bufp->fullIData(oldp+117,((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)),32);
    bufp->fullBit(oldp+118,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC));
    bufp->fullCData(oldp+119,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sll)
                                ? 0U : (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR) 
                                         | ((0xdU == 
                                             (0x3fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x1aU)))) 
                                            | (0xfU 
                                               == (0x3fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                              >> 0x1aU))))))
                                         ? 1U : (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
                                                  | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__subu) 
                                                     | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt) 
                                                        | ((0xaU 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                        >> 0x1aU)))) 
                                                           | ((4U 
                                                               == 
                                                               (0x3fU 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                           >> 0x1aU)))) 
                                                              | (5U 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                             >> 0x1aU)))))))))
                                                  ? 2U
                                                  : 
                                                 (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h4e50702c__0) 
                                                   | ((8U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                   >> 0x1aU)))) 
                                                      | ((9U 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                      >> 0x1aU)))) 
                                                         | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1faed734__0))))
                                                   ? 3U
                                                   : 
                                                  (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND) 
                                                    | (0xcU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                   >> 0x1aU)))))
                                                    ? 4U
                                                    : 
                                                   (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR) 
                                                     | (0xeU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                    >> 0x1aU)))))
                                                     ? 5U
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NOR)
                                                      ? 6U
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srl)
                                                       ? 7U
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sra)
                                                        ? 8U
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sllv)
                                                         ? 9U
                                                         : 
                                                        ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srlv)
                                                          ? 0xaU
                                                          : 
                                                         ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srav)
                                                           ? 0xbU
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ALURs)
                                                            ? 0xcU
                                                            : 0U)))))))))))))),4);
    bufp->fullCData(oldp+120,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__branchType),3);
    bufp->fullCData(oldp+121,(((IData)((0x11ULL == 
                                        (0xfc00003fULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))
                                ? 1U : ((IData)((0x13ULL 
                                                 == 
                                                 (0xfc00003fULL 
                                                  & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))
                                         ? 2U : (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                                                  | (IData)(
                                                            (0x19ULL 
                                                             == 
                                                             (0xfc00003fULL 
                                                              & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))
                                                  ? 3U
                                                  : 
                                                 (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div) 
                                                   | (IData)(
                                                             (0x1bULL 
                                                              == 
                                                              (0xfc00003fULL 
                                                               & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))
                                                   ? 4U
                                                   : 0U))))),3);
    bufp->fullCData(oldp+122,((0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                >> 0x1aU)))),6);
    bufp->fullCData(oldp+123,((0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))),6);
    bufp->fullCData(oldp+124,((0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                >> 0x15U)))),5);
    bufp->fullCData(oldp+125,((0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                >> 0x10U)))),5);
    bufp->fullBit(oldp+126,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp));
    bufp->fullBit(oldp+127,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR));
    bufp->fullBit(oldp+128,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add) 
                             | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
                                | (0xfU == (0x3fU & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x1aU))))))));
    bufp->fullBit(oldp+129,(((8U == (0x3fU & (IData)(
                                                     (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                      >> 0x1aU)))) 
                             | ((9U == (0x3fU & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x1aU)))) 
                                | ((0xaU == (0x3fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU)))) 
                                   | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                                      | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite) 
                                         | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__Branch))))))));
    bufp->fullBit(oldp+130,((IData)((0x40000000ULL 
                                     == (0xffe00000ULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
    bufp->fullBit(oldp+131,((IData)((0x40800000ULL 
                                     == (0xffe00000ULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
    bufp->fullBit(oldp+132,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                             | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                   | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB))))));
    bufp->fullBit(oldp+133,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt) 
                             | (0xaU == (0x3fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU)))))));
    bufp->fullBit(oldp+134,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC));
    bufp->fullBit(oldp+135,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                             | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1faed734__0))));
    bufp->fullBit(oldp+136,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                             | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div))));
    bufp->fullBit(oldp+137,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB));
    bufp->fullBit(oldp+138,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB));
    bufp->fullBit(oldp+139,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite));
    bufp->fullBit(oldp+140,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                             | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                   | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB) 
                                      | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                                         | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC))))))));
    bufp->fullBit(oldp+141,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg));
    bufp->fullBit(oldp+142,(((0x20U == (0x3fU & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x1aU)))) 
                             | ((0x24U == (0x3fU & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                            >> 0x1aU)))) 
                                | (0x28U == (0x3fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))))));
    bufp->fullBit(oldp+143,(((0x21U == (0x3fU & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x1aU)))) 
                             | ((0x25U == (0x3fU & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                            >> 0x1aU)))) 
                                | (0x29U == (0x3fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))))));
    bufp->fullBit(oldp+144,(((0x20U == (0x3fU & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x1aU)))) 
                             | (0x21U == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU)))))));
    bufp->fullBit(oldp+145,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add));
    bufp->fullBit(oldp+146,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub));
    bufp->fullBit(oldp+147,((0xdU == (0x3fU & (IData)(
                                                      (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                       >> 0x1aU))))));
    bufp->fullBit(oldp+148,((4U == (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+149,((0x2bU == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
    bufp->fullBit(oldp+150,((0x23U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
    bufp->fullBit(oldp+151,((0xfU == (0x3fU & (IData)(
                                                      (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                       >> 0x1aU))))));
    bufp->fullBit(oldp+152,((2U == (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+153,((3U == (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+154,((IData)((8ULL == (0xfc00003fULL 
                                              & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
    bufp->fullBit(oldp+155,((8U == (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+156,((9U == (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+157,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt));
    bufp->fullBit(oldp+158,((0xaU == (0x3fU & (IData)(
                                                      (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                       >> 0x1aU))))));
    bufp->fullBit(oldp+159,((0x20U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
    bufp->fullBit(oldp+160,((0x24U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
    bufp->fullBit(oldp+161,((0x21U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
    bufp->fullBit(oldp+162,((0x25U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
    bufp->fullBit(oldp+163,((0x28U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
    bufp->fullBit(oldp+164,((0x29U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
    bufp->fullBit(oldp+165,((IData)((0x21ULL == (0xfc00003fULL 
                                                 & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
    bufp->fullBit(oldp+166,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__subu));
    bufp->fullBit(oldp+167,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND));
    bufp->fullBit(oldp+168,((0xcU == (0x3fU & (IData)(
                                                      (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                       >> 0x1aU))))));
    bufp->fullBit(oldp+169,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR));
    bufp->fullBit(oldp+170,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR));
    bufp->fullBit(oldp+171,((0xeU == (0x3fU & (IData)(
                                                      (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                       >> 0x1aU))))));
    bufp->fullBit(oldp+172,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NOR));
    bufp->fullBit(oldp+173,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sll));
    bufp->fullBit(oldp+174,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sllv));
    bufp->fullBit(oldp+175,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srl));
    bufp->fullBit(oldp+176,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srlv));
    bufp->fullBit(oldp+177,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sra));
    bufp->fullBit(oldp+178,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srav));
    bufp->fullBit(oldp+179,((5U == (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+180,((7U == (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+181,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bltz));
    bufp->fullBit(oldp+182,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bgez));
    bufp->fullBit(oldp+183,((6U == (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+184,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr));
    bufp->fullBit(oldp+185,((IData)((0x11ULL == (0xfc00003fULL 
                                                 & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
    bufp->fullBit(oldp+186,((IData)((0x13ULL == (0xfc00003fULL 
                                                 & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
    bufp->fullBit(oldp+187,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult));
    bufp->fullBit(oldp+188,((IData)((0x19ULL == (0xfc00003fULL 
                                                 & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
    bufp->fullBit(oldp+189,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div));
    bufp->fullBit(oldp+190,((IData)((0x1bULL == (0xfc00003fULL 
                                                 & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
    bufp->fullBit(oldp+191,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__Branch));
    bufp->fullBit(oldp+192,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR));
    bufp->fullBit(oldp+193,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA));
    bufp->fullBit(oldp+194,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp) 
                             | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR))));
    bufp->fullBit(oldp+195,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h4e50702c__0) 
                             | ((8U == (0x3fU & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x1aU)))) 
                                | ((9U == (0x3fU & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                            >> 0x1aU)))) 
                                   | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1faed734__0))))));
    bufp->fullBit(oldp+196,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
                             | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__subu) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt) 
                                   | ((0xaU == (0x3fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU)))) 
                                      | ((4U == (0x3fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                            >> 0x1aU)))) 
                                         | (5U == (0x3fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                              >> 0x1aU)))))))))));
    bufp->fullBit(oldp+197,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR) 
                             | ((0xdU == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU)))) 
                                | (0xfU == (0x3fU & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x1aU))))))));
    bufp->fullBit(oldp+198,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND) 
                             | (0xcU == (0x3fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU)))))));
    bufp->fullBit(oldp+199,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR) 
                             | (0xeU == (0x3fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU)))))));
    bufp->fullBit(oldp+200,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ALURs));
    bufp->fullBit(oldp+201,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                             | (IData)((0x19ULL == 
                                        (0xfc00003fULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))));
    bufp->fullBit(oldp+202,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div) 
                             | (IData)((0x1bULL == 
                                        (0xfc00003fULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))));
    bufp->fullIData(oldp+203,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
                              [(0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                 >> 0x15U)))]),32);
    bufp->fullIData(oldp+204,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
                              [(0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                 >> 0x10U)))]),32);
    bufp->fullSData(oldp+205,((0xffffU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))),16);
    bufp->fullIData(oldp+206,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0]),32);
    bufp->fullIData(oldp+207,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[1]),32);
    bufp->fullIData(oldp+208,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[2]),32);
    bufp->fullIData(oldp+209,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[3]),32);
    bufp->fullIData(oldp+210,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[4]),32);
    bufp->fullIData(oldp+211,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[5]),32);
    bufp->fullIData(oldp+212,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[6]),32);
    bufp->fullIData(oldp+213,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[7]),32);
    bufp->fullIData(oldp+214,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[8]),32);
    bufp->fullIData(oldp+215,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[9]),32);
    bufp->fullIData(oldp+216,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[10]),32);
    bufp->fullIData(oldp+217,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[11]),32);
    bufp->fullIData(oldp+218,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[12]),32);
    bufp->fullIData(oldp+219,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[13]),32);
    bufp->fullIData(oldp+220,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[14]),32);
    bufp->fullIData(oldp+221,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[15]),32);
    bufp->fullIData(oldp+222,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[16]),32);
    bufp->fullIData(oldp+223,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[17]),32);
    bufp->fullIData(oldp+224,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[18]),32);
    bufp->fullIData(oldp+225,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[19]),32);
    bufp->fullIData(oldp+226,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[20]),32);
    bufp->fullIData(oldp+227,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[21]),32);
    bufp->fullIData(oldp+228,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[22]),32);
    bufp->fullIData(oldp+229,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[23]),32);
    bufp->fullIData(oldp+230,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[24]),32);
    bufp->fullIData(oldp+231,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[25]),32);
    bufp->fullIData(oldp+232,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[26]),32);
    bufp->fullIData(oldp+233,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[27]),32);
    bufp->fullIData(oldp+234,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[28]),32);
    bufp->fullIData(oldp+235,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[29]),32);
    bufp->fullIData(oldp+236,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[30]),32);
    bufp->fullIData(oldp+237,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[31]),32);
    bufp->fullIData(oldp+238,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__i),32);
    bufp->fullIData(oldp+239,((0x3ffffffU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))),26);
    bufp->fullIData(oldp+240,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC),30);
    bufp->fullIData(oldp+241,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr),32);
    bufp->fullBit(oldp+242,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__firstFetch));
    bufp->fullIData(oldp+243,((0x3fffffffU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC 
                                              << 2U))),30);
    bufp->fullSData(oldp+244,(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.EX_CTRL),16);
    bufp->fullCData(oldp+245,(((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                                 | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                                    | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                       | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB) 
                                          | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                                             | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC)))))) 
                                << 4U) | (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                                           << 3U) | 
                                          ((((0x20U 
                                              == (0x3fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x1aU)))) 
                                             | ((0x24U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x1aU)))) 
                                                | (0x28U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                               >> 0x1aU)))))) 
                                            << 2U) 
                                           | ((((0x21U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x1aU)))) 
                                                | ((0x25U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                >> 0x1aU)))) 
                                                   | (0x29U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                  >> 0x1aU)))))) 
                                               << 1U) 
                                              | ((0x20U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                              >> 0x1aU)))) 
                                                 | (0x21U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                >> 0x1aU)))))))))),5);
    bufp->fullBit(oldp+246,(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.ID_uncertainJump));
    bufp->fullQData(oldp+247,(vlSelf->top__DOT__mips__DOT__WB_BACK_from_WB),38);
    bufp->fullIData(oldp+249,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn),32);
    bufp->fullIData(oldp+250,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1),32);
    bufp->fullIData(oldp+251,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB),32);
    bufp->fullIData(oldp+252,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC),32);
    bufp->fullBit(oldp+253,((0U == vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC)));
    bufp->fullIData(oldp+254,((vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                               + vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB)),32);
    bufp->fullIData(oldp+255,(((0x1fU >= vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                   << vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                : 0U)),32);
    bufp->fullIData(oldp+256,(((0x1fU >= vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                   >> vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                : 0U)),32);
    bufp->fullIData(oldp+257,(((0x1fU >= vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                ? VL_SHIFTRS_III(32,32,32, vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB, vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                : (- (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                      >> 0x1fU)))),32);
    bufp->fullIData(oldp+258,((IData)((vlSelf->top__DOT__mips__DOT__WB_BACK_from_WB 
                                       >> 5U))),32);
    bufp->fullCData(oldp+259,((0x1fU & (IData)(vlSelf->top__DOT__mips__DOT__WB_BACK_from_WB))),5);
    bufp->fullBit(oldp+260,((1U & (IData)((vlSelf->top__DOT__mips__DOT__WB_BACK_from_WB 
                                           >> 0x25U)))));
    bufp->fullBit(oldp+261,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN));
    bufp->fullBit(oldp+262,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB));
    bufp->fullBit(oldp+263,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB));
    bufp->fullIData(oldp+264,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_instr),32);
    bufp->fullBit(oldp+265,(vlSelf->top__DOT__mips__DOT__u_WB__DOT__MEMout));
    bufp->fullIData(oldp+266,(vlSelf->top__DOT__mips__DOT__u_WB__DOT__MEMout),32);
    bufp->fullSData(oldp+267,((0xffffU & vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0)),16);
    bufp->fullIData(oldp+268,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[0]),32);
    bufp->fullIData(oldp+269,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[1]),32);
    bufp->fullBit(oldp+270,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__IF_FLUSH));
    bufp->fullBit(oldp+271,((1U & (~ (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.stall)))));
    bufp->fullBit(oldp+272,(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.stall));
    bufp->fullCData(oldp+273,((7U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                     >> 2U))),3);
    bufp->fullBit(oldp+274,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                   >> 8U))));
    bufp->fullBit(oldp+275,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                   >> 7U))));
    bufp->fullBit(oldp+276,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                   >> 6U))));
    bufp->fullBit(oldp+277,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                   >> 5U))));
    bufp->fullBit(oldp+278,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                   >> 1U))));
    bufp->fullBit(oldp+279,((1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))));
    bufp->fullIData(oldp+280,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1),32);
    bufp->fullIData(oldp+281,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd2),32);
    bufp->fullBit(oldp+282,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail));
    bufp->fullBit(oldp+283,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq));
    bufp->fullBit(oldp+284,((vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                             >> 0x1fU)));
    bufp->fullBit(oldp+285,((0U == vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1)));
    bufp->fullBit(oldp+286,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM));
    bufp->fullBit(oldp+287,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB));
    bufp->fullBit(oldp+288,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM)) 
                                   & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB))))));
    bufp->fullBit(oldp+289,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM));
    bufp->fullBit(oldp+290,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB));
    bufp->fullBit(oldp+291,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM)) 
                                   & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB))))));
    bufp->fullIData(oldp+292,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__NPC),30);
    bufp->fullSData(oldp+293,((0x3fffU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__NPC)),14);
    bufp->fullSData(oldp+294,((0x7ffU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__NPC 
                                         - (IData)(0x400U)))),11);
    bufp->fullSData(oldp+295,(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL),9);
    bufp->fullBit(oldp+296,((IData)(((0U != (0x1e0U 
                                             & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))) 
                                     | (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail)))));
    bufp->fullBit(oldp+297,(vlSelf->clk));
    bufp->fullBit(oldp+298,(vlSelf->rst));
    bufp->fullCData(oldp+299,(vlSelf->led),8);
    bufp->fullCData(oldp+300,(vlSelf->seg7_seg),8);
    bufp->fullCData(oldp+301,(vlSelf->seg7_seg1),8);
    bufp->fullCData(oldp+302,(vlSelf->seg7_select),8);
    bufp->fullCData(oldp+303,((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__IF_FLUSH) 
                                << 1U) | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC))),2);
    bufp->fullIData(oldp+304,(((1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))
                                ? (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0xfU))))) 
                                    << 0x10U) | (0xffffU 
                                                 & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))
                                : ((2U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))
                                    ? ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA) 
                                       << 0x10U) : 
                                   (0xffffU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))),32);
    bufp->fullIData(oldp+305,((0x3fffffffU & ((0x1060U 
                                               & (- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                                >> 7U))))) 
                                              | (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                                 >> 8U)))) 
                                                  & vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0) 
                                                 | (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                                    >> 5U)))) 
                                                     & (vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                                                        >> 2U)) 
                                                    | ((0x3ffffffU 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                                          >> 6U)))) 
                                                           & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))) 
                                                       | ((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail))) 
                                                          & ((IData)(
                                                                     (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                      >> 0x20U)) 
                                                             + 
                                                             ((0x3fff0000U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0xfU))))) 
                                                                  << 0x10U)) 
                                                              | (0xffffU 
                                                                 & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))))))))),30);
    bufp->fullBit(oldp+306,((((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL) 
                              >> 3U) & (((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.EX_rw) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x15U)))) 
                                        | ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.EX_rw) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x10U))))))));
    bufp->fullBit(oldp+307,(((((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.ID_uncertainJump) 
                               & (IData)((0U != (0x18U 
                                                 & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL))))) 
                              & (0U != (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.EX_rw))) 
                             & (((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.EX_rw) 
                                 == (0x1fU & (IData)(
                                                     (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                      >> 0x15U)))) 
                                | ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.EX_rw) 
                                   == (0x1fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x10U))))))));
    bufp->fullBit(oldp+308,((((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.ID_uncertainJump) 
                              & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.WB_CTRL) 
                                 >> 3U)) & (((0x1fU 
                                              & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[2U]) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                            >> 0x15U)))) 
                                            | ((0x1fU 
                                                & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[2U]) 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                              >> 0x10U))))))));
    bufp->fullBit(oldp+309,(vlSelf->top__DOT__mips__DOT__pipeline_stall));
    bufp->fullWData(oldp+310,(vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID),158);
    bufp->fullSData(oldp+315,(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID),16);
    bufp->fullBit(oldp+316,(vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_ID));
    bufp->fullCData(oldp+317,(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID),5);
    bufp->fullIData(oldp+318,(vlSelf->top__DOT__mips__DOT__JPC),30);
    bufp->fullBit(oldp+319,(vlSelf->top__DOT__mips__DOT__jpcAvail));
    bufp->fullBit(oldp+320,(vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_EX));
    bufp->fullCData(oldp+321,(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX),5);
    bufp->fullWData(oldp+322,(vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX),69);
    bufp->fullCData(oldp+325,(vlSelf->top__DOT__mips__DOT__EX_rw_from_EX),5);
    bufp->fullCData(oldp+326,(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM),5);
    bufp->fullWData(oldp+327,(vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM),69);
    bufp->fullWData(oldp+330,(vlSelf->top__DOT__mips__DOT__pre_MEM_DATA_from_EX),67);
    bufp->fullIData(oldp+333,(vlSelf->top__DOT__mips__DOT__Dout),32);
    bufp->fullBit(oldp+334,(0U));
    bufp->fullBit(oldp+335,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__o_MEM_CTRL));
    bufp->fullCData(oldp+336,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__o_WB_CTRL),5);
    bufp->fullWData(oldp+337,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__o_MEM_DATA),69);
    bufp->fullIData(oldp+340,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__MDHI),32);
    bufp->fullIData(oldp+341,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__MDLO),32);
    bufp->fullBit(oldp+342,(1U));
    bufp->fullIData(oldp+343,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__reg_index),32);
    bufp->fullIData(oldp+344,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__EX_instr),26);
    bufp->fullIData(oldp+345,(0U),32);
    bufp->fullIData(oldp+346,(vlSelf->top__DOT__mips__DOT__u_MEM__DOT__MEMout),32);
    bufp->fullBit(oldp+347,(vlSelf->top__DOT__mips__DOT__u_MEM__DOT__isDMByte));
    bufp->fullBit(oldp+348,(vlSelf->top__DOT__mips__DOT__u_MEM__DOT__isDMHalf));
    bufp->fullCData(oldp+349,(vlSelf->top__DOT__u_BRIDGE__DOT__DEV_Addr),6);
    bufp->fullIData(oldp+350,(vlSelf->top__DOT__u_BRIDGE__DOT__DEV0_RD),32);
    bufp->fullBit(oldp+351,(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.EX_FLUSH));
    bufp->fullBit(oldp+352,(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.MEM_FLUSH));
    bufp->fullBit(oldp+353,(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.__PVT__WB_FLUSH));
}
