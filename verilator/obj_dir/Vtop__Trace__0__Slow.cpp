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
    tracep->declBit(c+302,"clk", false,-1);
    tracep->declBit(c+303,"rst", false,-1);
    tracep->declBus(c+304,"led", false,-1, 7,0);
    tracep->declBus(c+305,"seg7_seg", false,-1, 7,0);
    tracep->declBus(c+306,"seg7_seg1", false,-1, 7,0);
    tracep->declBus(c+307,"seg7_select", false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+302,"clk", false,-1);
    tracep->declBit(c+303,"rst", false,-1);
    tracep->declBus(c+304,"led", false,-1, 7,0);
    tracep->declBus(c+305,"seg7_seg", false,-1, 7,0);
    tracep->declBus(c+306,"seg7_seg1", false,-1, 7,0);
    tracep->declBus(c+307,"seg7_select", false,-1, 7,0);
    tracep->declBus(c+2,"PrAddr", false,-1, 31,2);
    tracep->declBus(c+99,"PrRD", false,-1, 31,0);
    tracep->declBus(c+3,"PrWD", false,-1, 31,0);
    tracep->declBus(c+4,"PrBE", false,-1, 3,0);
    tracep->declBus(c+5,"HWInt", false,-1, 7,2);
    tracep->declBit(c+6,"IOWrite", false,-1);
    tracep->pushNamePrefix("mips ");
    tracep->declBit(c+302,"clk", false,-1);
    tracep->declBit(c+303,"rst", false,-1);
    tracep->declBus(c+5,"HWInt", false,-1, 7,2);
    tracep->declBus(c+2,"PrAddr", false,-1, 31,2);
    tracep->declBus(c+99,"PrRD", false,-1, 31,0);
    tracep->declBus(c+3,"PrWD", false,-1, 31,0);
    tracep->declBus(c+4,"PrBE", false,-1, 3,0);
    tracep->declBit(c+6,"IOWrite", false,-1);
    tracep->pushNamePrefix("u_CP0 ");
    tracep->declBit(c+302,"clk", false,-1);
    tracep->declBit(c+303,"rst", false,-1);
    tracep->declBus(c+5,"HWInt", false,-1, 7,2);
    tracep->declBus(c+111,"ID_PCP1", false,-1, 31,2);
    tracep->declQuad(c+244,"EX_DATA", false,-1, 37,0);
    tracep->declBus(c+272,"CP0_CTRL", false,-1, 1,0);
    tracep->declBit(c+273,"ExlSet", false,-1);
    tracep->declBit(c+274,"ExlClr", false,-1);
    tracep->declBus(c+246,"DIn", false,-1, 31,0);
    tracep->declBus(c+247,"Sel", false,-1, 4,0);
    tracep->declBit(c+248,"Wen", false,-1);
    tracep->declBus(c+7,"IM", false,-1, 15,10);
    tracep->declBit(c+8,"EXL", false,-1);
    tracep->declBit(c+9,"IE", false,-1);
    tracep->declBus(c+10,"hwint_pend", false,-1, 15,10);
    tracep->declBus(c+1,"PrID", false,-1, 31,0);
    tracep->declBus(c+11,"SR", false,-1, 31,0);
    tracep->declBus(c+12,"Cause", false,-1, 31,0);
    tracep->declBus(c+100,"Dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_Controller ");
    tracep->declBit(c+302,"clk", false,-1);
    tracep->declBit(c+303,"reset", false,-1);
    tracep->declBus(c+112,"aluop", false,-1, 3,0);
    tracep->declBus(c+113,"branchType", false,-1, 2,0);
    tracep->declBus(c+114,"MDFunc", false,-1, 2,0);
    tracep->declBus(c+115,"op", false,-1, 5,0);
    tracep->declBus(c+116,"func", false,-1, 5,0);
    tracep->declBus(c+117,"rs", false,-1, 4,0);
    tracep->declBus(c+118,"rt", false,-1, 4,0);
    tracep->declBit(c+275,"IF_FLUSH", false,-1);
    tracep->declBit(c+276,"PCWrite", false,-1);
    tracep->declBit(c+277,"ID_FLUSH", false,-1);
    tracep->declBit(c+119,"NPCFromEPC", false,-1);
    tracep->declBit(c+275,"ExlSet", false,-1);
    tracep->declBit(c+120,"jmp", false,-1);
    tracep->declBit(c+121,"NPCFromGPR", false,-1);
    tracep->declBit(c+122,"extop", false,-1);
    tracep->declBit(c+123,"exsign", false,-1);
    tracep->declBit(c+124,"CP0WB", false,-1);
    tracep->declBit(c+125,"CP0Write", false,-1);
    tracep->declBit(c+126,"regDst", false,-1);
    tracep->declBit(c+127,"isSlt", false,-1);
    tracep->declBit(c+128,"savePC", false,-1);
    tracep->declBit(c+129,"ALUSrc", false,-1);
    tracep->declBit(c+130,"MDSign", false,-1);
    tracep->declBit(c+131,"MDHIWB", false,-1);
    tracep->declBit(c+132,"MDLOWB", false,-1);
    tracep->declBit(c+133,"memWrite", false,-1);
    tracep->declBit(c+134,"regWrite", false,-1);
    tracep->declBit(c+135,"memToReg", false,-1);
    tracep->declBit(c+136,"isDMByte", false,-1);
    tracep->declBit(c+137,"isDMHalf", false,-1);
    tracep->declBit(c+138,"isLOADS", false,-1);
    tracep->declBit(c+119,"ExlClr", false,-1);
    tracep->declBit(c+139,"add", false,-1);
    tracep->declBit(c+140,"sub", false,-1);
    tracep->declBit(c+141,"ori", false,-1);
    tracep->declBit(c+142,"beq", false,-1);
    tracep->declBit(c+143,"sw", false,-1);
    tracep->declBit(c+144,"lw", false,-1);
    tracep->declBit(c+145,"lui", false,-1);
    tracep->declBit(c+146,"j", false,-1);
    tracep->declBit(c+147,"jal", false,-1);
    tracep->declBit(c+148,"jr", false,-1);
    tracep->declBit(c+149,"addi", false,-1);
    tracep->declBit(c+150,"addiu", false,-1);
    tracep->declBit(c+151,"slt", false,-1);
    tracep->declBit(c+152,"slti", false,-1);
    tracep->declBit(c+153,"lb", false,-1);
    tracep->declBit(c+154,"lbu", false,-1);
    tracep->declBit(c+155,"lh", false,-1);
    tracep->declBit(c+156,"lhu", false,-1);
    tracep->declBit(c+157,"sb", false,-1);
    tracep->declBit(c+158,"sh", false,-1);
    tracep->declBit(c+159,"addu", false,-1);
    tracep->declBit(c+160,"subu", false,-1);
    tracep->declBit(c+161,"AND", false,-1);
    tracep->declBit(c+162,"andi", false,-1);
    tracep->declBit(c+163,"OR", false,-1);
    tracep->declBit(c+164,"XOR", false,-1);
    tracep->declBit(c+165,"xori", false,-1);
    tracep->declBit(c+166,"NOR", false,-1);
    tracep->declBit(c+167,"sll", false,-1);
    tracep->declBit(c+168,"sllv", false,-1);
    tracep->declBit(c+169,"srl", false,-1);
    tracep->declBit(c+170,"srlv", false,-1);
    tracep->declBit(c+171,"sra", false,-1);
    tracep->declBit(c+172,"srav", false,-1);
    tracep->declBit(c+173,"bne", false,-1);
    tracep->declBit(c+174,"bgtz", false,-1);
    tracep->declBit(c+175,"bltz", false,-1);
    tracep->declBit(c+176,"bgez", false,-1);
    tracep->declBit(c+177,"blez", false,-1);
    tracep->declBit(c+178,"jalr", false,-1);
    tracep->declBit(c+179,"mthi", false,-1);
    tracep->declBit(c+180,"mtlo", false,-1);
    tracep->declBit(c+131,"mfhi", false,-1);
    tracep->declBit(c+132,"mflo", false,-1);
    tracep->declBit(c+181,"mult", false,-1);
    tracep->declBit(c+182,"multu", false,-1);
    tracep->declBit(c+183,"div", false,-1);
    tracep->declBit(c+184,"divu", false,-1);
    tracep->declBit(c+119,"eret", false,-1);
    tracep->declBit(c+124,"mfc0", false,-1);
    tracep->declBit(c+125,"mtc0", false,-1);
    tracep->declBit(c+185,"Branch", false,-1);
    tracep->declBit(c+186,"typeR", false,-1);
    tracep->declBit(c+187,"typeIA", false,-1);
    tracep->declBit(c+185,"typeIB", false,-1);
    tracep->declBit(c+188,"typeJ", false,-1);
    tracep->declBit(c+135,"LOAD", false,-1);
    tracep->declBit(c+133,"STORE", false,-1);
    tracep->declBit(c+189,"ALUAdd", false,-1);
    tracep->declBit(c+190,"ALUSub", false,-1);
    tracep->declBit(c+191,"ALUOr", false,-1);
    tracep->declBit(c+192,"ALUAnd", false,-1);
    tracep->declBit(c+193,"ALUXor", false,-1);
    tracep->declBit(c+166,"ALUNor", false,-1);
    tracep->declBit(c+194,"ALURs", false,-1);
    tracep->declBit(c+195,"MDMUL", false,-1);
    tracep->declBit(c+196,"MDDIV", false,-1);
    tracep->declBit(c+313,"EX_FLUSH", false,-1);
    tracep->declBit(c+313,"MEM_FLUSH", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_EX ");
    tracep->declBit(c+302,"clk", false,-1);
    tracep->declBit(c+303,"rst", false,-1);
    tracep->declBus(c+13,"aluop", false,-1, 3,0);
    tracep->declBus(c+14,"MDFunc", false,-1, 2,0);
    tracep->declBit(c+15,"CP0WB", false,-1);
    tracep->declBit(c+16,"CP0Write", false,-1);
    tracep->declBit(c+17,"regDst", false,-1);
    tracep->declBit(c+18,"isSlt", false,-1);
    tracep->declBit(c+19,"savePC", false,-1);
    tracep->declBit(c+20,"ALUSrc", false,-1);
    tracep->declBit(c+21,"MDSign", false,-1);
    tracep->declBit(c+22,"MDHIWB", false,-1);
    tracep->declBit(c+23,"MDLOWB", false,-1);
    tracep->declBus(c+24,"PCP1", false,-1, 31,2);
    tracep->declBus(c+25,"instr", false,-1, 31,0);
    tracep->declBus(c+26,"rd1", false,-1, 31,0);
    tracep->declBus(c+27,"rd2", false,-1, 31,0);
    tracep->declBus(c+28,"EXTB", false,-1, 31,0);
    tracep->declBus(c+249,"f_rd1", false,-1, 31,0);
    tracep->declBus(c+250,"f_rd2", false,-1, 31,0);
    tracep->declBus(c+251,"ALUB", false,-1, 31,0);
    tracep->declBus(c+252,"ALUC", false,-1, 31,0);
    tracep->declBus(c+101,"EXout", false,-1, 31,0);
    tracep->declBus(c+314,"MDHI", false,-1, 31,0);
    tracep->declBus(c+315,"MDLO", false,-1, 31,0);
    tracep->declBit(c+253,"zero", false,-1);
    tracep->declBus(c+254,"preMemAddr", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+249,"A", false,-1, 31,0);
    tracep->declBus(c+251,"B", false,-1, 31,0);
    tracep->declBus(c+29,"sa", false,-1, 4,0);
    tracep->declBus(c+13,"F", false,-1, 3,0);
    tracep->declBus(c+252,"C", false,-1, 31,0);
    tracep->declBus(c+254,"sum", false,-1, 31,0);
    tracep->declBit(c+253,"zero", false,-1);
    tracep->declBus(c+102,"sll", false,-1, 31,0);
    tracep->declBus(c+103,"srl", false,-1, 31,0);
    tracep->declBus(c+104,"sra", false,-1, 31,0);
    tracep->declBus(c+255,"sllv", false,-1, 31,0);
    tracep->declBus(c+256,"srlv", false,-1, 31,0);
    tracep->declBus(c+257,"srav", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_EX_FORWARD ");
    tracep->declQuad(c+30,"MEM_BACK", false,-1, 37,0);
    tracep->declQuad(c+258,"WB_BACK", false,-1, 37,0);
    tracep->declBit(c+316,"USE_MEM_BACK", false,-1);
    tracep->declBit(c+316,"USE_WB_BACK", false,-1);
    tracep->declBus(c+32,"rs", false,-1, 4,0);
    tracep->declBus(c+33,"rt", false,-1, 4,0);
    tracep->declBus(c+26,"rd1", false,-1, 31,0);
    tracep->declBus(c+27,"rd2", false,-1, 31,0);
    tracep->declBus(c+249,"f_rd1", false,-1, 31,0);
    tracep->declBus(c+250,"f_rd2", false,-1, 31,0);
    tracep->declBus(c+260,"WB_Wd", false,-1, 31,0);
    tracep->declBus(c+34,"MEM_Wd", false,-1, 31,0);
    tracep->declBus(c+261,"WB_rd", false,-1, 4,0);
    tracep->declBus(c+35,"MEM_rd", false,-1, 4,0);
    tracep->declBit(c+262,"WB_regWrite", false,-1);
    tracep->declBit(c+36,"MEM_regWrite", false,-1);
    tracep->declBit(c+37,"MEM_EN", false,-1);
    tracep->declBit(c+263,"WB_EN", false,-1);
    tracep->declBit(c+38,"AFromMEM", false,-1);
    tracep->declBit(c+264,"AFromWB", false,-1);
    tracep->declBit(c+105,"oriA", false,-1);
    tracep->declBit(c+39,"BFromMEM", false,-1);
    tracep->declBit(c+265,"BFromWB", false,-1);
    tracep->declBit(c+106,"oriB", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ID ");
    tracep->declBit(c+302,"clk", false,-1);
    tracep->declBit(c+303,"rst", false,-1);
    tracep->declBus(c+278,"branchType", false,-1, 2,0);
    tracep->declBit(c+279,"NPCFromEPC", false,-1);
    tracep->declBit(c+280,"ExlSet", false,-1);
    tracep->declBit(c+281,"jmp", false,-1);
    tracep->declBit(c+282,"NPCFromGPR", false,-1);
    tracep->declBit(c+283,"extop", false,-1);
    tracep->declBit(c+284,"exsign", false,-1);
    tracep->declBus(c+111,"PCP1", false,-1, 31,2);
    tracep->declBus(c+197,"instr", false,-1, 31,0);
    tracep->declBus(c+260,"WB_Wd", false,-1, 31,0);
    tracep->declBus(c+261,"WB_rw", false,-1, 4,0);
    tracep->declBit(c+262,"WB_regWrite", false,-1);
    tracep->declBus(c+198,"rd1", false,-1, 31,0);
    tracep->declBus(c+199,"rd2", false,-1, 31,0);
    tracep->declBus(c+308,"EXTB", false,-1, 31,0);
    tracep->declBus(c+285,"f_rd1", false,-1, 31,0);
    tracep->declBus(c+286,"f_rd2", false,-1, 31,0);
    tracep->declBit(c+287,"branchAvail", false,-1);
    tracep->pushNamePrefix("EXT ");
    tracep->declBus(c+200,"A", false,-1, 15,0);
    tracep->declBit(c+283,"extop", false,-1);
    tracep->declBit(c+284,"exsign", false,-1);
    tracep->declBus(c+308,"B", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GPR ");
    tracep->declBit(c+302,"clk", false,-1);
    tracep->declBit(c+303,"reset", false,-1);
    tracep->declBit(c+262,"regWrite", false,-1);
    tracep->declBus(c+117,"rs", false,-1, 25,21);
    tracep->declBus(c+118,"rt", false,-1, 20,16);
    tracep->declBus(c+261,"rw", false,-1, 15,11);
    tracep->declBus(c+260,"Wd", false,-1, 31,0);
    tracep->declBus(c+198,"rd1", false,-1, 31,0);
    tracep->declBus(c+199,"rd2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+201+i*1,"register", true,(i+0), 31,0);
    }
    tracep->declBus(c+233,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("jpc ");
    tracep->declBus(c+111,"PC", false,-1, 31,2);
    tracep->declBit(c+287,"branchAvail", false,-1);
    tracep->declBit(c+281,"jmp", false,-1);
    tracep->declBit(c+282,"NPCFromGPR", false,-1);
    tracep->declBit(c+279,"NPCFromEPC", false,-1);
    tracep->declBit(c+280,"goExceptionHandler", false,-1);
    tracep->declBus(c+40,"EPC", false,-1, 31,2);
    tracep->declBus(c+200,"offset", false,-1, 17,2);
    tracep->declBus(c+234,"instr_index", false,-1, 27,2);
    tracep->declBus(c+285,"reg_index", false,-1, 31,0);
    tracep->declBus(c+309,"JPC", false,-1, 31,2);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_BRANCH ");
    tracep->declBus(c+285,"rd1", false,-1, 31,0);
    tracep->declBus(c+286,"rd2", false,-1, 31,0);
    tracep->declBus(c+278,"branchType", false,-1, 2,0);
    tracep->declBit(c+287,"branchAvail", false,-1);
    tracep->declBit(c+288,"eq", false,-1);
    tracep->declBit(c+289,"SF", false,-1);
    tracep->declBit(c+290,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ID_FORWARD ");
    tracep->declQuad(c+30,"MEM_BACK", false,-1, 37,0);
    tracep->declQuad(c+258,"WB_BACK", false,-1, 37,0);
    tracep->declBit(c+316,"USE_MEM_BACK", false,-1);
    tracep->declBit(c+316,"USE_WB_BACK", false,-1);
    tracep->declBus(c+117,"rs", false,-1, 4,0);
    tracep->declBus(c+118,"rt", false,-1, 4,0);
    tracep->declBus(c+198,"rd1", false,-1, 31,0);
    tracep->declBus(c+199,"rd2", false,-1, 31,0);
    tracep->declBus(c+285,"f_rd1", false,-1, 31,0);
    tracep->declBus(c+286,"f_rd2", false,-1, 31,0);
    tracep->declBus(c+260,"WB_Wd", false,-1, 31,0);
    tracep->declBus(c+34,"MEM_Wd", false,-1, 31,0);
    tracep->declBus(c+261,"WB_rd", false,-1, 4,0);
    tracep->declBus(c+35,"MEM_rd", false,-1, 4,0);
    tracep->declBit(c+262,"WB_regWrite", false,-1);
    tracep->declBit(c+36,"MEM_regWrite", false,-1);
    tracep->declBit(c+41,"MEM_EN", false,-1);
    tracep->declBit(c+266,"WB_EN", false,-1);
    tracep->declBit(c+291,"AFromMEM", false,-1);
    tracep->declBit(c+292,"AFromWB", false,-1);
    tracep->declBit(c+293,"oriA", false,-1);
    tracep->declBit(c+294,"BFromMEM", false,-1);
    tracep->declBit(c+295,"BFromWB", false,-1);
    tracep->declBit(c+296,"oriB", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_IF ");
    tracep->declBit(c+302,"clk", false,-1);
    tracep->declBit(c+303,"rst", false,-1);
    tracep->declBus(c+317,"reg_index", false,-1, 31,0);
    tracep->declBus(c+318,"EX_instr", false,-1, 25,0);
    tracep->declBus(c+235,"IF_PC", false,-1, 31,2);
    tracep->declBus(c+297,"NPC", false,-1, 31,2);
    tracep->declBus(c+267,"IF_instr", false,-1, 31,0);
    tracep->declBus(c+236,"ID_instr", false,-1, 31,0);
    tracep->declBit(c+237,"firstFetch", false,-1);
    tracep->declBus(c+235,"ID_PCP1", false,-1, 31,2);
    tracep->pushNamePrefix("IM ");
    tracep->declBit(c+302,"clk", false,-1);
    tracep->declBit(c+276,"ce", false,-1);
    tracep->declBus(c+298,"addr", false,-1, 15,2);
    tracep->declBus(c+267,"instruct", false,-1, 31,0);
    tracep->declBus(c+299,"index", false,-1, 10,0);
    tracep->pushNamePrefix("u_imrom ");
    tracep->declBit(c+302,"clka", false,-1);
    tracep->declBus(c+299,"addra", false,-1, 12,2);
    tracep->declBit(c+313,"wea", false,-1);
    tracep->declBus(c+319,"dina", false,-1, 31,0);
    tracep->declBit(c+276,"ena", false,-1);
    tracep->declBus(c+267,"douta", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc ");
    tracep->declBus(c+297,"NPC", false,-1, 31,2);
    tracep->declBit(c+302,"clk", false,-1);
    tracep->declBit(c+303,"reset", false,-1);
    tracep->declBit(c+276,"PCWrite", false,-1);
    tracep->declBus(c+235,"PC", false,-1, 31,2);
    tracep->declBus(c+238,"line", false,-1, 29,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_MEM ");
    tracep->declBit(c+302,"clk", false,-1);
    tracep->declBit(c+303,"rst", false,-1);
    tracep->declBus(c+99,"PrRD", false,-1, 31,0);
    tracep->declBus(c+2,"PrAddr", false,-1, 31,2);
    tracep->declBus(c+3,"PrWD", false,-1, 31,0);
    tracep->declBus(c+4,"PrBE", false,-1, 3,0);
    tracep->declBit(c+6,"IOWrite", false,-1);
    tracep->declBit(c+42,"memWrite", false,-1);
    tracep->declBus(c+43,"EXout", false,-1, 31,0);
    tracep->declBus(c+44,"rd2", false,-1, 31,0);
    tracep->declBus(c+320,"MEMout", false,-1, 31,0);
    tracep->declBus(c+45,"rw", false,-1, 4,0);
    tracep->declBus(c+4,"be", false,-1, 3,0);
    tracep->declBit(c+321,"isDMByte", false,-1);
    tracep->declBit(c+322,"isDMHalf", false,-1);
    tracep->declBit(c+46,"AddrInDM", false,-1);
    tracep->declBit(c+47,"DMWrite", false,-1);
    tracep->pushNamePrefix("U_BEEXT ");
    tracep->declBit(c+321,"isByte", false,-1);
    tracep->declBit(c+322,"isHalf", false,-1);
    tracep->declBus(c+48,"low_addr", false,-1, 1,0);
    tracep->declBus(c+4,"be", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dm_ram ");
    tracep->declBus(c+49,"addra", false,-1, 13,2);
    tracep->declBit(c+46,"ena", false,-1);
    tracep->declBus(c+50,"wea", false,-1, 3,0);
    tracep->declBit(c+302,"clka", false,-1);
    tracep->declBus(c+3,"dina", false,-1, 31,0);
    tracep->declBus(c+51,"douta", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_WB ");
    tracep->declBit(c+302,"clk", false,-1);
    tracep->declBit(c+303,"rst", false,-1);
    tracep->declBus(c+99,"PrRD", false,-1, 31,0);
    tracep->declBit(c+52,"regWrite", false,-1);
    tracep->declBit(c+53,"memToReg", false,-1);
    tracep->declBit(c+54,"isDMByte", false,-1);
    tracep->declBit(c+55,"isDMHalf", false,-1);
    tracep->declBit(c+56,"isLOADS", false,-1);
    tracep->declBit(c+57,"AddrInDM", false,-1);
    tracep->declBus(c+268,"MEMout", false,-1, 31,0);
    tracep->declBus(c+107,"EXT_Dout", false,-1, 31,0);
    tracep->declBus(c+108,"WB_Wd", false,-1, 31,0);
    tracep->pushNamePrefix("U_DREXT ");
    tracep->declBit(c+54,"isByte", false,-1);
    tracep->declBit(c+55,"isHalf", false,-1);
    tracep->declBit(c+56,"exsign", false,-1);
    tracep->declBus(c+58,"low_addr", false,-1, 1,0);
    tracep->declBus(c+268,"in_data", false,-1, 31,0);
    tracep->declBus(c+107,"out_data", false,-1, 31,0);
    tracep->declBus(c+269,"half", false,-1, 15,0);
    tracep->declBus(c+59,"shift_bit", false,-1, 4,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_BRIDGE ");
    tracep->declBit(c+302,"clk", false,-1);
    tracep->declBus(c+2,"PrAddrWire", false,-1, 31,2);
    tracep->declBus(c+3,"PrWDWire", false,-1, 31,0);
    tracep->declBus(c+4,"PrBEWire", false,-1, 3,0);
    tracep->declBit(c+6,"WeCPUWire", false,-1);
    tracep->declBus(c+99,"PrRD", false,-1, 31,0);
    tracep->declBus(c+5,"HWInt", false,-1, 7,2);
    tracep->declBus(c+304,"o_led", false,-1, 7,0);
    tracep->declBus(c+305,"seg7_seg", false,-1, 7,0);
    tracep->declBus(c+307,"seg7_select", false,-1, 7,0);
    tracep->declBus(c+60,"PrAddr", false,-1, 31,2);
    tracep->declBus(c+61,"PrWD", false,-1, 31,0);
    tracep->declBus(c+62,"PrBE", false,-1, 3,0);
    tracep->declBit(c+63,"WeCPU", false,-1);
    tracep->declBus(c+323,"DEV_Addr", false,-1, 7,2);
    tracep->declBus(c+324,"DEV0_RD", false,-1, 31,0);
    tracep->declBus(c+64,"DEV1_RD", false,-1, 31,0);
    tracep->declBus(c+109,"DEV2_RD", false,-1, 31,0);
    tracep->declBus(c+61,"DEV_WD", false,-1, 31,0);
    tracep->declBus(c+65,"WeDEV", false,-1, 3,0);
    tracep->declBit(c+66,"HitDEV0", false,-1);
    tracep->declBit(c+67,"HitDEV1", false,-1);
    tracep->declBit(c+68,"HitDEV2", false,-1);
    tracep->pushNamePrefix("U_screenBoard ");
    tracep->declBus(c+61,"D", false,-1, 31,0);
    tracep->declBit(c+69,"WE", false,-1);
    tracep->declBit(c+302,"clk", false,-1);
    tracep->declBus(c+64,"show", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_counter ");
    tracep->declBus(c+61,"D", false,-1, 31,0);
    tracep->declBit(c+70,"WE", false,-1);
    tracep->declBit(c+302,"clk", false,-1);
    tracep->declBit(c+71,"INT", false,-1);
    tracep->declBus(c+72,"cnt", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_seg7 ");
    tracep->declBus(c+61,"D", false,-1, 31,0);
    tracep->declBit(c+73,"A", false,-1);
    tracep->declBus(c+62,"be", false,-1, 3,0);
    tracep->declBit(c+302,"clk", false,-1);
    tracep->declBit(c+74,"we", false,-1);
    tracep->declBus(c+109,"Dout", false,-1, 31,0);
    tracep->declBus(c+305,"seg", false,-1, 7,0);
    tracep->declBus(c+307,"select", false,-1, 7,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+270+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+75,"cnt", false,-1, 18,0);
    tracep->declBus(c+76,"pause", false,-1, 9,0);
    tracep->declBus(c+77,"lightDig", false,-1, 2,0);
    tracep->declBus(c+110,"newSeg", false,-1, 7,0);
    tracep->declBus(c+78,"newSelect", false,-1, 7,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_controller__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_controller__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+302,"clk", false,-1);
    tracep->declBus(c+115,"op", false,-1, 31,26);
    tracep->declBus(c+116,"func", false,-1, 5,0);
    tracep->declBus(c+117,"rs", false,-1, 25,21);
    tracep->declBus(c+118,"rt", false,-1, 20,16);
    tracep->declBus(c+197,"ID_instr", false,-1, 31,0);
    tracep->declBit(c+275,"IF_FLUSH", false,-1);
    tracep->declBit(c+277,"ID_FLUSH", false,-1);
    tracep->declBit(c+325,"EX_FLUSH", false,-1);
    tracep->declBit(c+326,"MEM_FLUSH", false,-1);
    tracep->declBit(c+327,"WB_FLUSH", false,-1);
    tracep->declBus(c+276,"IF_CTRL", false,-1, 0,0);
    tracep->declBus(c+300,"ID_CTRL", false,-1, 8,0);
    tracep->declBus(c+239,"EX_CTRL", false,-1, 15,0);
    tracep->declBus(c+133,"MEM_CTRL", false,-1, 0,0);
    tracep->declBus(c+240,"WB_CTRL", false,-1, 4,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_stallDetect__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_stallDetect__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+302,"clk", false,-1);
    tracep->declBus(c+117,"ID_rs", false,-1, 4,0);
    tracep->declBus(c+118,"ID_rt", false,-1, 4,0);
    tracep->declBit(c+241,"ID_uncertainJump", false,-1);
    tracep->declBus(c+79,"EX_rw", false,-1, 4,0);
    tracep->declBit(c+80,"EX_regWrite", false,-1);
    tracep->declBit(c+81,"EX_memToReg", false,-1);
    tracep->declBus(c+45,"MEM_rw", false,-1, 4,0);
    tracep->declBit(c+82,"MEM_memToReg", false,-1);
    tracep->declBit(c+277,"stall", false,-1);
    tracep->declBit(c+310,"LOAD", false,-1);
    tracep->declBit(c+311,"Branch_EX", false,-1);
    tracep->declBit(c+312,"Branch_LOAD", false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_if_id__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_if_id__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+302,"clk", false,-1);
    tracep->declQuad(c+242,"ID_DATA", false,-1, 61,0);
    tracep->declBus(c+309,"JPC", false,-1, 31,2);
    tracep->declBit(c+301,"jpcAvail", false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_id_ex__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_id_ex__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+302,"clk", false,-1);
    tracep->declBus(c+83,"EX_CTRL", false,-1, 15,0);
    tracep->declBus(c+84,"MEM_CTRL", false,-1, 0,0);
    tracep->declBus(c+85,"WB_CTRL", false,-1, 4,0);
    tracep->declArray(c+86,"EX_DATA", false,-1, 157,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_ex_mem__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_ex_mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+302,"clk", false,-1);
    tracep->declBus(c+42,"MEM_CTRL", false,-1, 0,0);
    tracep->declBus(c+91,"WB_CTRL", false,-1, 4,0);
    tracep->declArray(c+92,"MEM_DATA", false,-1, 68,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_mem_wb__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_mem_wb__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+302,"clk", false,-1);
    tracep->declBus(c+95,"WB_CTRL", false,-1, 4,0);
    tracep->declQuad(c+96,"WB_DATA", false,-1, 36,0);
    tracep->declBus(c+51,"Dout", false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_bypass__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_bypass__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+302,"clk", false,-1);
    tracep->declQuad(c+30,"MEM_BACK", false,-1, 37,0);
    tracep->declQuad(c+258,"WB_BACK", false,-1, 37,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_cp0__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_cp0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+302,"clk", false,-1);
    tracep->declBus(c+5,"HWInt", false,-1, 7,2);
    tracep->declBus(c+111,"ID_PCP1", false,-1, 31,2);
    tracep->declBus(c+40,"EPC", false,-1, 31,2);
    tracep->declQuad(c+244,"EX_TO_CP0", false,-1, 37,0);
    tracep->declBus(c+100,"CP0_TO_EX", false,-1, 31,0);
    tracep->declBus(c+272,"CP0_CTRL", false,-1, 1,0);
    tracep->declBit(c+98,"IntReq", false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("top ");
    tracep->pushNamePrefix("mips ");
    tracep->pushNamePrefix("i_bypass ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_bypass__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_controller ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_controller__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_cp0 ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_cp0__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("u_CP0 ");
    tracep->pushNamePrefix("i_cp0 ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_cp0__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_Controller ");
    tracep->pushNamePrefix("i_controller ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_controller__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_cp0 ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_cp0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_stallDetect ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_stallDetect__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_EX ");
    tracep->pushNamePrefix("i_bypass ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_bypass__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_controller ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_controller__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_cp0 ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_cp0__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("i_bypass ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_bypass__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_controller ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_controller__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_cp0 ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_cp0__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("i_bypass ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_bypass__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
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
    tracep->pushNamePrefix("i_bypass ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_bypass__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
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
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM),6);
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL));
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE));
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend),6);
    bufp->fullIData(oldp+11,((((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                               << 0xaU) | (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)))),32);
    bufp->fullIData(oldp+12,(((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                              << 0xaU)),32);
    bufp->fullCData(oldp+13,((0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                      >> 6U))),4);
    bufp->fullCData(oldp+14,((7U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                    >> 2U))),3);
    bufp->fullBit(oldp+15,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                  >> 0xfU))));
    bufp->fullBit(oldp+16,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                  >> 0xeU))));
    bufp->fullBit(oldp+17,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                  >> 0xdU))));
    bufp->fullBit(oldp+18,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                  >> 0xcU))));
    bufp->fullBit(oldp+19,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                  >> 0xbU))));
    bufp->fullBit(oldp+20,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                  >> 0xaU))));
    bufp->fullBit(oldp+21,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                  >> 5U))));
    bufp->fullBit(oldp+22,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                  >> 1U))));
    bufp->fullBit(oldp+23,((1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))));
    bufp->fullIData(oldp+24,((0x3fffffffU & vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U])),30);
    bufp->fullIData(oldp+25,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U]),32);
    bufp->fullIData(oldp+26,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[2U]),32);
    bufp->fullIData(oldp+27,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[1U]),32);
    bufp->fullIData(oldp+28,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[0U]),32);
    bufp->fullCData(oldp+29,((0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                       >> 6U))),5);
    bufp->fullQData(oldp+30,(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK),38);
    bufp->fullCData(oldp+32,((0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                       >> 0x15U))),5);
    bufp->fullCData(oldp+33,((0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                       >> 0x10U))),5);
    bufp->fullIData(oldp+34,((IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK 
                                      >> 5U))),32);
    bufp->fullCData(oldp+35,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK))),5);
    bufp->fullBit(oldp+36,((1U & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK 
                                          >> 0x25U)))));
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN));
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM));
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM));
    bufp->fullIData(oldp+40,(vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EPC),30);
    bufp->fullBit(oldp+41,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__MEM_EN));
    bufp->fullBit(oldp+42,(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_CTRL));
    bufp->fullIData(oldp+43,(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U]),32);
    bufp->fullIData(oldp+44,(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[0U]),32);
    bufp->fullCData(oldp+45,((0x1fU & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[2U])),5);
    bufp->fullBit(oldp+46,((0x3000U > (0xffffU & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U]))));
    bufp->fullBit(oldp+47,(((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_CTRL) 
                            & (0x3000U > (0xffffU & 
                                          vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U])))));
    bufp->fullCData(oldp+48,((3U & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U])),2);
    bufp->fullSData(oldp+49,((0xfffU & (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
                                        >> 2U))),12);
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea),4);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellout__u_dm_ram__douta),32);
    bufp->fullBit(oldp+52,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                  >> 4U))));
    bufp->fullBit(oldp+53,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                  >> 3U))));
    bufp->fullBit(oldp+54,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                  >> 2U))));
    bufp->fullBit(oldp+55,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                  >> 1U))));
    bufp->fullBit(oldp+56,((1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL))));
    bufp->fullBit(oldp+57,((0x3000U > (0xffffU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA)))));
    bufp->fullCData(oldp+58,((3U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA))),2);
    bufp->fullCData(oldp+59,((0x18U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA) 
                                       << 3U))),5);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr),30);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__u_BRIDGE__DOT__PrWD),32);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__u_BRIDGE__DOT__PrBE),4);
    bufp->fullBit(oldp+63,(vlSelf->top__DOT__u_BRIDGE__DOT__WeCPU));
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__u_BRIDGE__DOT__DEV1_RD),32);
    bufp->fullCData(oldp+65,(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV),4);
    bufp->fullBit(oldp+66,((0x7fU == (0xffffffU & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                                   >> 6U)))));
    bufp->fullBit(oldp+67,((0x80U == (0xffffffU & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                                   >> 6U)))));
    bufp->fullBit(oldp+68,((0x81U == (0xffffffU & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                                   >> 6U)))));
    bufp->fullBit(oldp+69,((1U & ((IData)(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV) 
                                  >> 1U))));
    bufp->fullBit(oldp+70,((1U & (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV))));
    bufp->fullBit(oldp+71,((0U == vlSelf->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt)));
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt),32);
    bufp->fullBit(oldp+73,((1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr)));
    bufp->fullBit(oldp+74,((1U & ((IData)(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV) 
                                  >> 2U))));
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt),19);
    bufp->fullSData(oldp+76,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__pause),10);
    bufp->fullCData(oldp+77,((7U & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                    >> 0x10U))),3);
    bufp->fullCData(oldp+78,((0xffU & (0x80U >> (7U 
                                                 & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                                    >> 0x10U))))),8);
    bufp->fullCData(oldp+79,(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.EX_rw),5);
    bufp->fullBit(oldp+80,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL) 
                                  >> 4U))));
    bufp->fullBit(oldp+81,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL) 
                                  >> 3U))));
    bufp->fullBit(oldp+82,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.WB_CTRL) 
                                  >> 3U))));
    bufp->fullSData(oldp+83,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL),16);
    bufp->fullBit(oldp+84,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.MEM_CTRL));
    bufp->fullCData(oldp+85,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL),5);
    bufp->fullWData(oldp+86,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA),158);
    bufp->fullCData(oldp+91,(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.WB_CTRL),5);
    bufp->fullWData(oldp+92,(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA),69);
    bufp->fullCData(oldp+95,(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL),5);
    bufp->fullQData(oldp+96,(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA),37);
    bufp->fullBit(oldp+98,(((((IData)(vlSelf->top__DOT__HWInt) 
                              & (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM)) 
                             & (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)) 
                            & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL)))));
    bufp->fullIData(oldp+99,(((0x7fU == (0xffffffU 
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
    bufp->fullIData(oldp+100,(((0xcU == (0x1fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                                          >> 0x20U))))
                                ? (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                    << 0xaU) | (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)))
                                : ((0xdU == (0x1fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                                        >> 0x20U))))
                                    ? ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                                       << 0xaU) : (
                                                   (0xeU 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                                                >> 0x20U))))
                                                    ? vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EPC
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                                                 >> 0x20U))))
                                                     ? vlSelf->top__DOT__mips__DOT__u_CP0__DOT__PrID
                                                     : 0U))))),32);
    bufp->fullIData(oldp+101,(((0x1000U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))
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
                                                 ((0xcU 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                                               >> 0x20U))))
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
                                                     & (IData)(
                                                               (vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                                                >> 0x20U))))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                                                    << 0xaU)
                                                    : 
                                                   ((0xeU 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                                                 >> 0x20U))))
                                                     ? vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EPC
                                                     : 
                                                    ((0xfU 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                                                  >> 0x20U))))
                                                      ? vlSelf->top__DOT__mips__DOT__u_CP0__DOT__PrID
                                                      : 0U))))
                                                  : vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC)))),32);
    bufp->fullIData(oldp+102,((vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                               << (0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                            >> 6U)))),32);
    bufp->fullIData(oldp+103,((vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                               >> (0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                            >> 6U)))),32);
    bufp->fullIData(oldp+104,(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB, 
                                             (0x1fU 
                                              & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                 >> 6U)))),32);
    bufp->fullBit(oldp+105,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM)) 
                                   & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB))))));
    bufp->fullBit(oldp+106,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM)) 
                                   & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB))))));
    bufp->fullIData(oldp+107,(((4U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL))
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
                                    : vlSelf->top__DOT__mips__DOT__u_WB__DOT__MEMout))),32);
    bufp->fullIData(oldp+108,(((8U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL))
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
                                        : vlSelf->top__DOT__mips__DOT__u_WB__DOT__MEMout))
                                : (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA))),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                              [(1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr)]),32);
    bufp->fullCData(oldp+110,((0xffU & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                                        [(1U & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                                >> 0x12U))] 
                                        >> (0x18U & 
                                            (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                             >> 0xdU))))),8);
    bufp->fullIData(oldp+111,((0x3fffffffU & (IData)(
                                                     (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                      >> 0x20U)))),30);
    bufp->fullCData(oldp+112,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sll)
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
    bufp->fullCData(oldp+113,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__branchType),3);
    bufp->fullCData(oldp+114,(((IData)((0x11ULL == 
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
    bufp->fullCData(oldp+115,((0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                >> 0x1aU)))),6);
    bufp->fullCData(oldp+116,((0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))),6);
    bufp->fullCData(oldp+117,((0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                >> 0x15U)))),5);
    bufp->fullCData(oldp+118,((0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                >> 0x10U)))),5);
    bufp->fullBit(oldp+119,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC));
    bufp->fullBit(oldp+120,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp));
    bufp->fullBit(oldp+121,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR));
    bufp->fullBit(oldp+122,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add) 
                             | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
                                | (0xfU == (0x3fU & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x1aU))))))));
    bufp->fullBit(oldp+123,(((8U == (0x3fU & (IData)(
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
                                         | ((4U == 
                                             (0x3fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x1aU)))) 
                                            | ((5U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                            >> 0x1aU)))) 
                                               | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ALURs))))))))));
    bufp->fullBit(oldp+124,((IData)((0x40000000ULL 
                                     == (0xffe00000ULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
    bufp->fullBit(oldp+125,((IData)((0x40800000ULL 
                                     == (0xffe00000ULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
    bufp->fullBit(oldp+126,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                             | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                   | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB))))));
    bufp->fullBit(oldp+127,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt) 
                             | (0xaU == (0x3fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU)))))));
    bufp->fullBit(oldp+128,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC));
    bufp->fullBit(oldp+129,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                             | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1faed734__0))));
    bufp->fullBit(oldp+130,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                             | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div))));
    bufp->fullBit(oldp+131,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB));
    bufp->fullBit(oldp+132,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB));
    bufp->fullBit(oldp+133,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite));
    bufp->fullBit(oldp+134,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                             | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                   | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB) 
                                      | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                                         | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC))))))));
    bufp->fullBit(oldp+135,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg));
    bufp->fullBit(oldp+136,(((0x20U == (0x3fU & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x1aU)))) 
                             | ((0x24U == (0x3fU & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                            >> 0x1aU)))) 
                                | (0x28U == (0x3fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))))));
    bufp->fullBit(oldp+137,(((0x21U == (0x3fU & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x1aU)))) 
                             | ((0x25U == (0x3fU & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                            >> 0x1aU)))) 
                                | (0x29U == (0x3fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))))));
    bufp->fullBit(oldp+138,(((0x20U == (0x3fU & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x1aU)))) 
                             | (0x21U == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU)))))));
    bufp->fullBit(oldp+139,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add));
    bufp->fullBit(oldp+140,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub));
    bufp->fullBit(oldp+141,((0xdU == (0x3fU & (IData)(
                                                      (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                       >> 0x1aU))))));
    bufp->fullBit(oldp+142,((4U == (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+143,((0x2bU == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
    bufp->fullBit(oldp+144,((0x23U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
    bufp->fullBit(oldp+145,((0xfU == (0x3fU & (IData)(
                                                      (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                       >> 0x1aU))))));
    bufp->fullBit(oldp+146,((2U == (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+147,((3U == (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+148,((IData)((8ULL == (0xfc00003fULL 
                                              & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
    bufp->fullBit(oldp+149,((8U == (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+150,((9U == (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+151,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt));
    bufp->fullBit(oldp+152,((0xaU == (0x3fU & (IData)(
                                                      (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                       >> 0x1aU))))));
    bufp->fullBit(oldp+153,((0x20U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
    bufp->fullBit(oldp+154,((0x24U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
    bufp->fullBit(oldp+155,((0x21U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
    bufp->fullBit(oldp+156,((0x25U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
    bufp->fullBit(oldp+157,((0x28U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
    bufp->fullBit(oldp+158,((0x29U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
    bufp->fullBit(oldp+159,((IData)((0x21ULL == (0xfc00003fULL 
                                                 & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
    bufp->fullBit(oldp+160,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__subu));
    bufp->fullBit(oldp+161,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND));
    bufp->fullBit(oldp+162,((0xcU == (0x3fU & (IData)(
                                                      (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                       >> 0x1aU))))));
    bufp->fullBit(oldp+163,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR));
    bufp->fullBit(oldp+164,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR));
    bufp->fullBit(oldp+165,((0xeU == (0x3fU & (IData)(
                                                      (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                       >> 0x1aU))))));
    bufp->fullBit(oldp+166,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NOR));
    bufp->fullBit(oldp+167,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sll));
    bufp->fullBit(oldp+168,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sllv));
    bufp->fullBit(oldp+169,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srl));
    bufp->fullBit(oldp+170,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srlv));
    bufp->fullBit(oldp+171,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sra));
    bufp->fullBit(oldp+172,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srav));
    bufp->fullBit(oldp+173,((5U == (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+174,((7U == (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+175,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bltz));
    bufp->fullBit(oldp+176,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bgez));
    bufp->fullBit(oldp+177,((6U == (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+178,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr));
    bufp->fullBit(oldp+179,((IData)((0x11ULL == (0xfc00003fULL 
                                                 & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
    bufp->fullBit(oldp+180,((IData)((0x13ULL == (0xfc00003fULL 
                                                 & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
    bufp->fullBit(oldp+181,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult));
    bufp->fullBit(oldp+182,((IData)((0x19ULL == (0xfc00003fULL 
                                                 & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
    bufp->fullBit(oldp+183,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div));
    bufp->fullBit(oldp+184,((IData)((0x1bULL == (0xfc00003fULL 
                                                 & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
    bufp->fullBit(oldp+185,(((4U == (0x3fU & (IData)(
                                                     (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                      >> 0x1aU)))) 
                             | ((5U == (0x3fU & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x1aU)))) 
                                | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ALURs)))));
    bufp->fullBit(oldp+186,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR));
    bufp->fullBit(oldp+187,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA));
    bufp->fullBit(oldp+188,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp) 
                             | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR))));
    bufp->fullBit(oldp+189,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h4e50702c__0) 
                             | ((8U == (0x3fU & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x1aU)))) 
                                | ((9U == (0x3fU & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                            >> 0x1aU)))) 
                                   | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1faed734__0))))));
    bufp->fullBit(oldp+190,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
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
    bufp->fullBit(oldp+191,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR) 
                             | ((0xdU == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU)))) 
                                | (0xfU == (0x3fU & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x1aU))))))));
    bufp->fullBit(oldp+192,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND) 
                             | (0xcU == (0x3fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU)))))));
    bufp->fullBit(oldp+193,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR) 
                             | (0xeU == (0x3fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU)))))));
    bufp->fullBit(oldp+194,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ALURs));
    bufp->fullBit(oldp+195,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                             | (IData)((0x19ULL == 
                                        (0xfc00003fULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))));
    bufp->fullBit(oldp+196,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div) 
                             | (IData)((0x1bULL == 
                                        (0xfc00003fULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))));
    bufp->fullIData(oldp+197,((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
                              [(0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                 >> 0x15U)))]),32);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
                              [(0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                 >> 0x10U)))]),32);
    bufp->fullSData(oldp+200,((0xffffU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))),16);
    bufp->fullIData(oldp+201,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0]),32);
    bufp->fullIData(oldp+202,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[1]),32);
    bufp->fullIData(oldp+203,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[2]),32);
    bufp->fullIData(oldp+204,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[3]),32);
    bufp->fullIData(oldp+205,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[4]),32);
    bufp->fullIData(oldp+206,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[5]),32);
    bufp->fullIData(oldp+207,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[6]),32);
    bufp->fullIData(oldp+208,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[7]),32);
    bufp->fullIData(oldp+209,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[8]),32);
    bufp->fullIData(oldp+210,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[9]),32);
    bufp->fullIData(oldp+211,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[10]),32);
    bufp->fullIData(oldp+212,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[11]),32);
    bufp->fullIData(oldp+213,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[12]),32);
    bufp->fullIData(oldp+214,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[13]),32);
    bufp->fullIData(oldp+215,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[14]),32);
    bufp->fullIData(oldp+216,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[15]),32);
    bufp->fullIData(oldp+217,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[16]),32);
    bufp->fullIData(oldp+218,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[17]),32);
    bufp->fullIData(oldp+219,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[18]),32);
    bufp->fullIData(oldp+220,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[19]),32);
    bufp->fullIData(oldp+221,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[20]),32);
    bufp->fullIData(oldp+222,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[21]),32);
    bufp->fullIData(oldp+223,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[22]),32);
    bufp->fullIData(oldp+224,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[23]),32);
    bufp->fullIData(oldp+225,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[24]),32);
    bufp->fullIData(oldp+226,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[25]),32);
    bufp->fullIData(oldp+227,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[26]),32);
    bufp->fullIData(oldp+228,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[27]),32);
    bufp->fullIData(oldp+229,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[28]),32);
    bufp->fullIData(oldp+230,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[29]),32);
    bufp->fullIData(oldp+231,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[30]),32);
    bufp->fullIData(oldp+232,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[31]),32);
    bufp->fullIData(oldp+233,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__i),32);
    bufp->fullIData(oldp+234,((0x3ffffffU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))),26);
    bufp->fullIData(oldp+235,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC),30);
    bufp->fullIData(oldp+236,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr),32);
    bufp->fullBit(oldp+237,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__firstFetch));
    bufp->fullIData(oldp+238,((0x3fffffffU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC 
                                              << 2U))),30);
    bufp->fullSData(oldp+239,(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.EX_CTRL),16);
    bufp->fullCData(oldp+240,(((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
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
    bufp->fullBit(oldp+241,(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.ID_uncertainJump));
    bufp->fullQData(oldp+242,(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA),62);
    bufp->fullQData(oldp+244,(vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0),38);
    bufp->fullIData(oldp+246,((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0)),32);
    bufp->fullCData(oldp+247,((0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                                >> 0x20U)))),5);
    bufp->fullBit(oldp+248,((1U & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                           >> 0x25U)))));
    bufp->fullIData(oldp+249,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1),32);
    bufp->fullIData(oldp+250,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd2),32);
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
    bufp->fullQData(oldp+258,(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK),38);
    bufp->fullIData(oldp+260,((IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
                                       >> 5U))),32);
    bufp->fullCData(oldp+261,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK))),5);
    bufp->fullBit(oldp+262,((1U & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
                                           >> 0x25U)))));
    bufp->fullBit(oldp+263,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN));
    bufp->fullBit(oldp+264,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB));
    bufp->fullBit(oldp+265,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB));
    bufp->fullBit(oldp+266,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__WB_EN));
    bufp->fullIData(oldp+267,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_instr),32);
    bufp->fullIData(oldp+268,(vlSelf->top__DOT__mips__DOT__u_WB__DOT__MEMout),32);
    bufp->fullSData(oldp+269,((0xffffU & vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0)),16);
    bufp->fullIData(oldp+270,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[0]),32);
    bufp->fullIData(oldp+271,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[1]),32);
    bufp->fullCData(oldp+272,(vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.CP0_CTRL),2);
    bufp->fullBit(oldp+273,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.CP0_CTRL) 
                                   >> 1U))));
    bufp->fullBit(oldp+274,((1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.CP0_CTRL))));
    bufp->fullBit(oldp+275,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ExlSet));
    bufp->fullBit(oldp+276,((1U & (~ (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.stall)))));
    bufp->fullBit(oldp+277,(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.stall));
    bufp->fullCData(oldp+278,((7U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                     >> 2U))),3);
    bufp->fullBit(oldp+279,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                   >> 8U))));
    bufp->fullBit(oldp+280,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                   >> 7U))));
    bufp->fullBit(oldp+281,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                   >> 6U))));
    bufp->fullBit(oldp+282,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                   >> 5U))));
    bufp->fullBit(oldp+283,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                   >> 1U))));
    bufp->fullBit(oldp+284,((1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))));
    bufp->fullIData(oldp+285,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1),32);
    bufp->fullIData(oldp+286,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd2),32);
    bufp->fullBit(oldp+287,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail));
    bufp->fullBit(oldp+288,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq));
    bufp->fullBit(oldp+289,((vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                             >> 0x1fU)));
    bufp->fullBit(oldp+290,((0U == vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1)));
    bufp->fullBit(oldp+291,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM));
    bufp->fullBit(oldp+292,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB));
    bufp->fullBit(oldp+293,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM)) 
                                   & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB))))));
    bufp->fullBit(oldp+294,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM));
    bufp->fullBit(oldp+295,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB));
    bufp->fullBit(oldp+296,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM)) 
                                   & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB))))));
    bufp->fullIData(oldp+297,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__NPC),30);
    bufp->fullSData(oldp+298,((0x3fffU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__NPC)),14);
    bufp->fullSData(oldp+299,((0x7ffU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__NPC 
                                         - (IData)(0x400U)))),11);
    bufp->fullSData(oldp+300,(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL),9);
    bufp->fullBit(oldp+301,((IData)(((0U != (0x1e0U 
                                             & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))) 
                                     | (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail)))));
    bufp->fullBit(oldp+302,(vlSelf->clk));
    bufp->fullBit(oldp+303,(vlSelf->rst));
    bufp->fullCData(oldp+304,(vlSelf->led),8);
    bufp->fullCData(oldp+305,(vlSelf->seg7_seg),8);
    bufp->fullCData(oldp+306,(vlSelf->seg7_seg1),8);
    bufp->fullCData(oldp+307,(vlSelf->seg7_select),8);
    bufp->fullIData(oldp+308,(((1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))
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
    bufp->fullIData(oldp+309,((0x3fffffffU & ((0x1060U 
                                               & (- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                                >> 7U))))) 
                                              | (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                                 >> 8U)))) 
                                                  & vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EPC) 
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
    bufp->fullBit(oldp+310,((((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL) 
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
    bufp->fullBit(oldp+311,(((((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.ID_uncertainJump) 
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
    bufp->fullBit(oldp+312,((((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.ID_uncertainJump) 
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
    bufp->fullBit(oldp+313,(0U));
    bufp->fullIData(oldp+314,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__MDHI),32);
    bufp->fullIData(oldp+315,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__MDLO),32);
    bufp->fullBit(oldp+316,(1U));
    bufp->fullIData(oldp+317,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__reg_index),32);
    bufp->fullIData(oldp+318,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__EX_instr),26);
    bufp->fullIData(oldp+319,(0U),32);
    bufp->fullIData(oldp+320,(vlSelf->top__DOT__mips__DOT__u_MEM__DOT__MEMout),32);
    bufp->fullBit(oldp+321,(vlSelf->top__DOT__mips__DOT__u_MEM__DOT__isDMByte));
    bufp->fullBit(oldp+322,(vlSelf->top__DOT__mips__DOT__u_MEM__DOT__isDMHalf));
    bufp->fullCData(oldp+323,(vlSelf->top__DOT__u_BRIDGE__DOT__DEV_Addr),6);
    bufp->fullIData(oldp+324,(vlSelf->top__DOT__u_BRIDGE__DOT__DEV0_RD),32);
    bufp->fullBit(oldp+325,(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.EX_FLUSH));
    bufp->fullBit(oldp+326,(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.MEM_FLUSH));
    bufp->fullBit(oldp+327,(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.__PVT__WB_FLUSH));
}
