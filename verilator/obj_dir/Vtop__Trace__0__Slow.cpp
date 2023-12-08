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
    tracep->declBit(c+287,"clk", false,-1);
    tracep->declBit(c+288,"rst", false,-1);
    tracep->declBus(c+289,"led", false,-1, 7,0);
    tracep->declBus(c+290,"seg7_seg", false,-1, 7,0);
    tracep->declBus(c+291,"seg7_seg1", false,-1, 7,0);
    tracep->declBus(c+292,"seg7_select", false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+287,"clk", false,-1);
    tracep->declBit(c+288,"rst", false,-1);
    tracep->declBus(c+289,"led", false,-1, 7,0);
    tracep->declBus(c+290,"seg7_seg", false,-1, 7,0);
    tracep->declBus(c+291,"seg7_seg1", false,-1, 7,0);
    tracep->declBus(c+292,"seg7_select", false,-1, 7,0);
    tracep->declBus(c+69,"PrAddr", false,-1, 31,2);
    tracep->declBus(c+2,"PrRD", false,-1, 31,0);
    tracep->declBus(c+70,"PrWD", false,-1, 31,0);
    tracep->declBus(c+71,"PrBE", false,-1, 3,0);
    tracep->declBus(c+3,"HWInt", false,-1, 7,2);
    tracep->declBit(c+30,"IOWrite", false,-1);
    tracep->pushNamePrefix("mips ");
    tracep->declBit(c+287,"clk", false,-1);
    tracep->declBit(c+288,"rst", false,-1);
    tracep->declBus(c+3,"HWInt", false,-1, 7,2);
    tracep->declBus(c+69,"PrAddr", false,-1, 31,2);
    tracep->declBus(c+2,"PrRD", false,-1, 31,0);
    tracep->declBus(c+70,"PrWD", false,-1, 31,0);
    tracep->declBus(c+71,"PrBE", false,-1, 3,0);
    tracep->declBit(c+30,"IOWrite", false,-1);
    tracep->declQuad(c+172,"ID_DATA_from_IF", false,-1, 61,0);
    tracep->declBit(c+303,"IF_CTRL", false,-1);
    tracep->declBus(c+293,"ID_CTRL", false,-1, 8,0);
    tracep->declBus(c+174,"EX_CTRL", false,-1, 15,0);
    tracep->declBit(c+175,"MEM_CTRL", false,-1);
    tracep->declBus(c+176,"WB_CTRL", false,-1, 4,0);
    tracep->declBus(c+294,"CP0_CTRL", false,-1, 1,0);
    tracep->declBus(c+177,"ID_PCP1", false,-1, 31,2);
    tracep->declBus(c+178,"ID_instr", false,-1, 31,0);
    tracep->declBit(c+269,"pipeline_stall", false,-1);
    tracep->declArray(c+72,"EX_DATA_from_ID", false,-1, 157,0);
    tracep->declBus(c+77,"EX_CTRL_from_ID", false,-1, 15,0);
    tracep->declBit(c+4,"MEM_CTRL_from_ID", false,-1);
    tracep->declBus(c+78,"WB_CTRL_from_ID", false,-1, 4,0);
    tracep->declBus(c+295,"JPC", false,-1, 31,2);
    tracep->declBit(c+296,"jpcAvail", false,-1);
    tracep->declBit(c+179,"ID_uncertainJump", false,-1);
    tracep->declBit(c+5,"MEM_CTRL_from_EX", false,-1);
    tracep->declBus(c+79,"WB_CTRL_from_EX", false,-1, 4,0);
    tracep->declArray(c+80,"MEM_DATA_from_EX", false,-1, 68,0);
    tracep->declBus(c+83,"EX_rw_from_EX", false,-1, 4,0);
    tracep->declQuad(c+84,"CP0_DATA_from_EX", false,-1, 37,0);
    tracep->declBus(c+86,"WB_CTRL_from_MEM", false,-1, 4,0);
    tracep->declArray(c+87,"WB_DATA_from_MEM", false,-1, 68,0);
    tracep->declQuad(c+90,"MEM_BACK_from_MEM", false,-1, 37,0);
    tracep->declQuad(c+92,"WB_BACK_from_WB", false,-1, 37,0);
    tracep->declBus(c+94,"ID_EPC_from_CP0", false,-1, 31,2);
    tracep->declBus(c+95,"EX_DATA_from_CP0", false,-1, 31,0);
    tracep->declArray(c+31,"pre_MEM_DATA_from_EX", false,-1, 66,0);
    tracep->declBit(c+34,"IntReq", false,-1);
    tracep->declBit(c+269,"ID_FLUSH", false,-1);
    tracep->declBit(c+304,"EX_FLUSH", false,-1);
    tracep->declBit(c+304,"MEM_FLUSH", false,-1);
    tracep->pushNamePrefix("u_CP0 ");
    tracep->declBit(c+287,"clk", false,-1);
    tracep->declBit(c+288,"rst", false,-1);
    tracep->declBus(c+3,"HWInt", false,-1, 7,2);
    tracep->declBus(c+177,"ID_PCP1", false,-1, 31,2);
    tracep->declBus(c+94,"o_ID_EPC", false,-1, 31,2);
    tracep->declQuad(c+84,"EX_DATA", false,-1, 37,0);
    tracep->declBus(c+95,"o_EX_DATA", false,-1, 31,0);
    tracep->declBus(c+294,"CP0_CTRL", false,-1, 1,0);
    tracep->declBit(c+34,"IntReq", false,-1);
    tracep->declBit(c+270,"ExlSet", false,-1);
    tracep->declBit(c+180,"ExlClr", false,-1);
    tracep->declBus(c+96,"DIn", false,-1, 31,0);
    tracep->declBus(c+97,"Sel", false,-1, 4,0);
    tracep->declBit(c+98,"Wen", false,-1);
    tracep->declBit(c+99,"Dout", false,-1);
    tracep->declBus(c+100,"IM", false,-1, 15,10);
    tracep->declBit(c+101,"EXL", false,-1);
    tracep->declBit(c+102,"IE", false,-1);
    tracep->declBus(c+103,"hwint_pend", false,-1, 15,10);
    tracep->declBus(c+1,"PrID", false,-1, 31,0);
    tracep->declBus(c+104,"SR", false,-1, 31,0);
    tracep->declBus(c+105,"Cause", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_Controller ");
    tracep->declBit(c+287,"clk", false,-1);
    tracep->declBit(c+288,"reset", false,-1);
    tracep->declBus(c+181,"op", false,-1, 5,0);
    tracep->declBus(c+182,"func", false,-1, 5,0);
    tracep->declBus(c+183,"rs", false,-1, 4,0);
    tracep->declBus(c+184,"rt", false,-1, 4,0);
    tracep->declBit(c+269,"pipeline_stall", false,-1);
    tracep->declBit(c+34,"IntReq", false,-1);
    tracep->declBit(c+269,"ID_FLUSH", false,-1);
    tracep->declBit(c+304,"EX_FLUSH", false,-1);
    tracep->declBit(c+304,"MEM_FLUSH", false,-1);
    tracep->declBus(c+293,"ID_CTRL", false,-1, 8,0);
    tracep->declBus(c+174,"EX_CTRL", false,-1, 15,0);
    tracep->declBit(c+175,"MEM_CTRL", false,-1);
    tracep->declBus(c+176,"WB_CTRL", false,-1, 4,0);
    tracep->declBus(c+294,"CP0_CTRL", false,-1, 1,0);
    tracep->declBit(c+179,"o_uncertainJump", false,-1);
    tracep->declBus(c+185,"aluop", false,-1, 3,0);
    tracep->declBus(c+186,"branchType", false,-1, 2,0);
    tracep->declBus(c+187,"MDFunc", false,-1, 2,0);
    tracep->declBit(c+180,"NPCFromEPC", false,-1);
    tracep->declBit(c+270,"ExlSet", false,-1);
    tracep->declBit(c+188,"jmp", false,-1);
    tracep->declBit(c+189,"NPCFromGPR", false,-1);
    tracep->declBit(c+190,"extop", false,-1);
    tracep->declBit(c+191,"exsign", false,-1);
    tracep->declBit(c+192,"CP0WB", false,-1);
    tracep->declBit(c+193,"CP0Write", false,-1);
    tracep->declBit(c+194,"regDst", false,-1);
    tracep->declBit(c+195,"isSlt", false,-1);
    tracep->declBit(c+196,"savePC", false,-1);
    tracep->declBit(c+197,"ALUSrc", false,-1);
    tracep->declBit(c+198,"MDSign", false,-1);
    tracep->declBit(c+199,"MDHIWB", false,-1);
    tracep->declBit(c+200,"MDLOWB", false,-1);
    tracep->declBit(c+175,"memWrite", false,-1);
    tracep->declBit(c+201,"regWrite", false,-1);
    tracep->declBit(c+202,"memToReg", false,-1);
    tracep->declBit(c+203,"isDMByte", false,-1);
    tracep->declBit(c+204,"isDMHalf", false,-1);
    tracep->declBit(c+205,"isLOADS", false,-1);
    tracep->declBit(c+180,"ExlClr", false,-1);
    tracep->declBit(c+206,"add", false,-1);
    tracep->declBit(c+207,"sub", false,-1);
    tracep->declBit(c+208,"ori", false,-1);
    tracep->declBit(c+209,"beq", false,-1);
    tracep->declBit(c+210,"sw", false,-1);
    tracep->declBit(c+211,"lw", false,-1);
    tracep->declBit(c+212,"lui", false,-1);
    tracep->declBit(c+213,"j", false,-1);
    tracep->declBit(c+214,"jal", false,-1);
    tracep->declBit(c+215,"jr", false,-1);
    tracep->declBit(c+216,"addi", false,-1);
    tracep->declBit(c+217,"addiu", false,-1);
    tracep->declBit(c+218,"slt", false,-1);
    tracep->declBit(c+219,"slti", false,-1);
    tracep->declBit(c+220,"lb", false,-1);
    tracep->declBit(c+221,"lbu", false,-1);
    tracep->declBit(c+222,"lh", false,-1);
    tracep->declBit(c+223,"lhu", false,-1);
    tracep->declBit(c+224,"sb", false,-1);
    tracep->declBit(c+225,"sh", false,-1);
    tracep->declBit(c+226,"addu", false,-1);
    tracep->declBit(c+227,"subu", false,-1);
    tracep->declBit(c+228,"AND", false,-1);
    tracep->declBit(c+229,"andi", false,-1);
    tracep->declBit(c+230,"OR", false,-1);
    tracep->declBit(c+231,"XOR", false,-1);
    tracep->declBit(c+232,"xori", false,-1);
    tracep->declBit(c+233,"NOR", false,-1);
    tracep->declBit(c+234,"sll", false,-1);
    tracep->declBit(c+235,"sllv", false,-1);
    tracep->declBit(c+236,"srl", false,-1);
    tracep->declBit(c+237,"srlv", false,-1);
    tracep->declBit(c+238,"sra", false,-1);
    tracep->declBit(c+239,"srav", false,-1);
    tracep->declBit(c+240,"bne", false,-1);
    tracep->declBit(c+241,"bgtz", false,-1);
    tracep->declBit(c+242,"bltz", false,-1);
    tracep->declBit(c+243,"bgez", false,-1);
    tracep->declBit(c+244,"blez", false,-1);
    tracep->declBit(c+245,"jalr", false,-1);
    tracep->declBit(c+246,"mthi", false,-1);
    tracep->declBit(c+247,"mtlo", false,-1);
    tracep->declBit(c+199,"mfhi", false,-1);
    tracep->declBit(c+200,"mflo", false,-1);
    tracep->declBit(c+248,"mult", false,-1);
    tracep->declBit(c+249,"multu", false,-1);
    tracep->declBit(c+250,"div", false,-1);
    tracep->declBit(c+251,"divu", false,-1);
    tracep->declBit(c+180,"eret", false,-1);
    tracep->declBit(c+192,"mfc0", false,-1);
    tracep->declBit(c+193,"mtc0", false,-1);
    tracep->declBit(c+252,"Branch", false,-1);
    tracep->declBit(c+253,"typeR", false,-1);
    tracep->declBit(c+254,"typeIA", false,-1);
    tracep->declBit(c+252,"typeIB", false,-1);
    tracep->declBit(c+255,"typeJ", false,-1);
    tracep->declBit(c+202,"LOAD", false,-1);
    tracep->declBit(c+175,"STORE", false,-1);
    tracep->declBit(c+256,"ALUAdd", false,-1);
    tracep->declBit(c+257,"ALUSub", false,-1);
    tracep->declBit(c+258,"ALUOr", false,-1);
    tracep->declBit(c+259,"ALUAnd", false,-1);
    tracep->declBit(c+260,"ALUXor", false,-1);
    tracep->declBit(c+233,"ALUNor", false,-1);
    tracep->declBit(c+261,"ALURs", false,-1);
    tracep->declBit(c+262,"MDMUL", false,-1);
    tracep->declBit(c+263,"MDDIV", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_EX ");
    tracep->declBit(c+287,"clk", false,-1);
    tracep->declBit(c+288,"rst", false,-1);
    tracep->declBit(c+304,"EX_FLUSH", false,-1);
    tracep->declBus(c+77,"EX_CTRL", false,-1, 15,0);
    tracep->declBit(c+4,"MEM_CTRL", false,-1);
    tracep->declBus(c+78,"WB_CTRL", false,-1, 4,0);
    tracep->declArray(c+72,"EX_DATA", false,-1, 157,0);
    tracep->declQuad(c+92,"WB_BACK", false,-1, 37,0);
    tracep->declQuad(c+90,"MEM_BACK", false,-1, 37,0);
    tracep->declBus(c+95,"CP0_DATA", false,-1, 31,0);
    tracep->declBit(c+5,"o_MEM_CTRL", false,-1);
    tracep->declBus(c+79,"o_WB_CTRL", false,-1, 4,0);
    tracep->declArray(c+80,"o_MEM_DATA", false,-1, 68,0);
    tracep->declArray(c+31,"o_pre_MEM_DATA", false,-1, 66,0);
    tracep->declQuad(c+84,"o_CP0_DATA", false,-1, 37,0);
    tracep->declBus(c+83,"rw", false,-1, 4,0);
    tracep->declBus(c+106,"aluop", false,-1, 3,0);
    tracep->declBus(c+107,"MDFunc", false,-1, 2,0);
    tracep->declBit(c+108,"CP0WB", false,-1);
    tracep->declBit(c+98,"CP0Write", false,-1);
    tracep->declBit(c+109,"regDst", false,-1);
    tracep->declBit(c+110,"isSlt", false,-1);
    tracep->declBit(c+111,"savePC", false,-1);
    tracep->declBit(c+112,"ALUSrc", false,-1);
    tracep->declBit(c+113,"MDSign", false,-1);
    tracep->declBit(c+114,"MDHIWB", false,-1);
    tracep->declBit(c+115,"MDLOWB", false,-1);
    tracep->declBus(c+116,"PCP1", false,-1, 31,2);
    tracep->declBus(c+117,"instr", false,-1, 31,0);
    tracep->declBus(c+118,"rd1", false,-1, 31,0);
    tracep->declBus(c+119,"rd2", false,-1, 31,0);
    tracep->declBus(c+120,"EXTB", false,-1, 31,0);
    tracep->declBus(c+121,"f_rd1", false,-1, 31,0);
    tracep->declBus(c+96,"f_rd2", false,-1, 31,0);
    tracep->declBus(c+122,"ALUB", false,-1, 31,0);
    tracep->declBus(c+123,"ALUC", false,-1, 31,0);
    tracep->declBus(c+124,"EXout", false,-1, 31,0);
    tracep->declBus(c+305,"MDHI", false,-1, 31,0);
    tracep->declBus(c+306,"MDLO", false,-1, 31,0);
    tracep->declBit(c+125,"zero", false,-1);
    tracep->declBus(c+126,"preMemAddr", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+121,"A", false,-1, 31,0);
    tracep->declBus(c+122,"B", false,-1, 31,0);
    tracep->declBus(c+127,"sa", false,-1, 4,0);
    tracep->declBus(c+106,"F", false,-1, 3,0);
    tracep->declBus(c+123,"C", false,-1, 31,0);
    tracep->declBus(c+126,"sum", false,-1, 31,0);
    tracep->declBit(c+125,"zero", false,-1);
    tracep->declBus(c+128,"sll", false,-1, 31,0);
    tracep->declBus(c+129,"srl", false,-1, 31,0);
    tracep->declBus(c+130,"sra", false,-1, 31,0);
    tracep->declBus(c+131,"sllv", false,-1, 31,0);
    tracep->declBus(c+132,"srlv", false,-1, 31,0);
    tracep->declBus(c+133,"srav", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_EX_FORWARD ");
    tracep->declQuad(c+90,"MEM_BACK", false,-1, 37,0);
    tracep->declQuad(c+92,"WB_BACK", false,-1, 37,0);
    tracep->declBit(c+307,"USE_MEM_BACK", false,-1);
    tracep->declBit(c+307,"USE_WB_BACK", false,-1);
    tracep->declBus(c+134,"rs", false,-1, 4,0);
    tracep->declBus(c+135,"rt", false,-1, 4,0);
    tracep->declBus(c+118,"rd1", false,-1, 31,0);
    tracep->declBus(c+119,"rd2", false,-1, 31,0);
    tracep->declBus(c+121,"f_rd1", false,-1, 31,0);
    tracep->declBus(c+96,"f_rd2", false,-1, 31,0);
    tracep->declBus(c+136,"WB_Wd", false,-1, 31,0);
    tracep->declBus(c+137,"MEM_Wd", false,-1, 31,0);
    tracep->declBus(c+138,"WB_rd", false,-1, 4,0);
    tracep->declBus(c+139,"MEM_rd", false,-1, 4,0);
    tracep->declBit(c+140,"WB_regWrite", false,-1);
    tracep->declBit(c+141,"MEM_regWrite", false,-1);
    tracep->declBit(c+142,"MEM_EN", false,-1);
    tracep->declBit(c+143,"WB_EN", false,-1);
    tracep->declBit(c+144,"AFromMEM", false,-1);
    tracep->declBit(c+145,"AFromWB", false,-1);
    tracep->declBit(c+146,"oriA", false,-1);
    tracep->declBit(c+147,"BFromMEM", false,-1);
    tracep->declBit(c+148,"BFromWB", false,-1);
    tracep->declBit(c+149,"oriB", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_HazardDetect ");
    tracep->declBus(c+183,"ID_rs", false,-1, 4,0);
    tracep->declBus(c+184,"ID_rt", false,-1, 4,0);
    tracep->declBus(c+83,"EX_rw", false,-1, 4,0);
    tracep->declBus(c+139,"MEM_rw", false,-1, 4,0);
    tracep->declBit(c+179,"ID_uncertainJump", false,-1);
    tracep->declBit(c+150,"EX_memToReg", false,-1);
    tracep->declBit(c+151,"EX_regWrite", false,-1);
    tracep->declBit(c+152,"MEM_memToReg", false,-1);
    tracep->declBit(c+269,"stall", false,-1);
    tracep->declBit(c+297,"LOAD", false,-1);
    tracep->declBit(c+298,"Branch_EX", false,-1);
    tracep->declBit(c+299,"Branch_LOAD", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ID ");
    tracep->declBit(c+287,"clk", false,-1);
    tracep->declBit(c+288,"rst", false,-1);
    tracep->declBit(c+269,"ID_FLUSH", false,-1);
    tracep->declBus(c+293,"ID_CTRL", false,-1, 8,0);
    tracep->declBus(c+174,"EX_CTRL", false,-1, 15,0);
    tracep->declBit(c+175,"MEM_CTRL", false,-1);
    tracep->declBus(c+176,"WB_CTRL", false,-1, 4,0);
    tracep->declQuad(c+172,"ID_DATA", false,-1, 61,0);
    tracep->declQuad(c+92,"WB_BACK", false,-1, 37,0);
    tracep->declQuad(c+90,"MEM_BACK", false,-1, 37,0);
    tracep->declBus(c+94,"CP0_EPC", false,-1, 31,2);
    tracep->declBus(c+77,"o_EX_CTRL", false,-1, 15,0);
    tracep->declBit(c+4,"o_MEM_CTRL", false,-1);
    tracep->declBus(c+78,"o_WB_CTRL", false,-1, 4,0);
    tracep->declArray(c+72,"o_EX_DATA", false,-1, 157,0);
    tracep->declBus(c+295,"o_JPC", false,-1, 31,2);
    tracep->declBit(c+296,"o_jpcAvail", false,-1);
    tracep->declBus(c+186,"branchType", false,-1, 2,0);
    tracep->declBit(c+180,"NPCFromEPC", false,-1);
    tracep->declBit(c+270,"ExlSet", false,-1);
    tracep->declBit(c+188,"jmp", false,-1);
    tracep->declBit(c+189,"NPCFromGPR", false,-1);
    tracep->declBit(c+190,"extop", false,-1);
    tracep->declBit(c+191,"exsign", false,-1);
    tracep->declBit(c+179,"o_uncertainJump", false,-1);
    tracep->declBus(c+177,"PCP1", false,-1, 31,2);
    tracep->declBus(c+178,"instr", false,-1, 31,0);
    tracep->declBus(c+136,"WB_Wd", false,-1, 31,0);
    tracep->declBus(c+138,"WB_rw", false,-1, 4,0);
    tracep->declBit(c+140,"WB_regWrite", false,-1);
    tracep->declBus(c+300,"rd1", false,-1, 31,0);
    tracep->declBus(c+301,"rd2", false,-1, 31,0);
    tracep->declBus(c+264,"EXTB", false,-1, 31,0);
    tracep->declBus(c+271,"f_rd1", false,-1, 31,0);
    tracep->declBus(c+272,"f_rd2", false,-1, 31,0);
    tracep->declBit(c+273,"branchAvail", false,-1);
    tracep->pushNamePrefix("EXT ");
    tracep->declBus(c+265,"A", false,-1, 15,0);
    tracep->declBit(c+190,"extop", false,-1);
    tracep->declBit(c+191,"exsign", false,-1);
    tracep->declBus(c+264,"B", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GPR ");
    tracep->declBit(c+287,"clk", false,-1);
    tracep->declBit(c+288,"reset", false,-1);
    tracep->declBit(c+140,"regWrite", false,-1);
    tracep->declBus(c+183,"rs", false,-1, 25,21);
    tracep->declBus(c+184,"rt", false,-1, 20,16);
    tracep->declBus(c+138,"rw", false,-1, 15,11);
    tracep->declBus(c+136,"Wd", false,-1, 31,0);
    tracep->declBus(c+300,"rd1", false,-1, 31,0);
    tracep->declBus(c+301,"rd2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+36+i*1,"register", true,(i+0), 31,0);
    }
    tracep->declBus(c+68,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("jpc ");
    tracep->declBus(c+177,"PC", false,-1, 31,2);
    tracep->declBit(c+273,"branchAvail", false,-1);
    tracep->declBit(c+188,"jmp", false,-1);
    tracep->declBit(c+189,"NPCFromGPR", false,-1);
    tracep->declBit(c+180,"NPCFromEPC", false,-1);
    tracep->declBit(c+270,"goExceptionHandler", false,-1);
    tracep->declBus(c+94,"EPC", false,-1, 31,2);
    tracep->declBus(c+265,"offset", false,-1, 17,2);
    tracep->declBus(c+266,"instr_index", false,-1, 27,2);
    tracep->declBus(c+271,"reg_index", false,-1, 31,0);
    tracep->declBus(c+295,"JPC", false,-1, 31,2);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_BRANCH ");
    tracep->declBus(c+271,"rd1", false,-1, 31,0);
    tracep->declBus(c+272,"rd2", false,-1, 31,0);
    tracep->declBus(c+186,"branchType", false,-1, 2,0);
    tracep->declBit(c+273,"branchAvail", false,-1);
    tracep->declBit(c+274,"eq", false,-1);
    tracep->declBit(c+275,"SF", false,-1);
    tracep->declBit(c+276,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ID_FORWARD ");
    tracep->declQuad(c+90,"MEM_BACK", false,-1, 37,0);
    tracep->declQuad(c+92,"WB_BACK", false,-1, 37,0);
    tracep->declBit(c+307,"USE_MEM_BACK", false,-1);
    tracep->declBit(c+307,"USE_WB_BACK", false,-1);
    tracep->declBus(c+183,"rs", false,-1, 4,0);
    tracep->declBus(c+184,"rt", false,-1, 4,0);
    tracep->declBus(c+300,"rd1", false,-1, 31,0);
    tracep->declBus(c+301,"rd2", false,-1, 31,0);
    tracep->declBus(c+271,"f_rd1", false,-1, 31,0);
    tracep->declBus(c+272,"f_rd2", false,-1, 31,0);
    tracep->declBus(c+136,"WB_Wd", false,-1, 31,0);
    tracep->declBus(c+137,"MEM_Wd", false,-1, 31,0);
    tracep->declBus(c+138,"WB_rd", false,-1, 4,0);
    tracep->declBus(c+139,"MEM_rd", false,-1, 4,0);
    tracep->declBit(c+140,"WB_regWrite", false,-1);
    tracep->declBit(c+141,"MEM_regWrite", false,-1);
    tracep->declBit(c+142,"MEM_EN", false,-1);
    tracep->declBit(c+143,"WB_EN", false,-1);
    tracep->declBit(c+277,"AFromMEM", false,-1);
    tracep->declBit(c+278,"AFromWB", false,-1);
    tracep->declBit(c+279,"oriA", false,-1);
    tracep->declBit(c+280,"BFromMEM", false,-1);
    tracep->declBit(c+281,"BFromWB", false,-1);
    tracep->declBit(c+282,"oriB", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_IF ");
    tracep->declBit(c+287,"clk", false,-1);
    tracep->declBit(c+288,"rst", false,-1);
    tracep->declBit(c+296,"jpcAvail", false,-1);
    tracep->declBus(c+295,"JPC", false,-1, 31,2);
    tracep->declQuad(c+172,"o_ID_DATA", false,-1, 61,0);
    tracep->declBus(c+308,"reg_index", false,-1, 31,0);
    tracep->declBus(c+309,"EX_instr", false,-1, 25,0);
    tracep->declBus(c+177,"IF_PC", false,-1, 31,2);
    tracep->declBus(c+283,"NPC", false,-1, 31,2);
    tracep->declBus(c+302,"IF_instr", false,-1, 31,0);
    tracep->declBus(c+178,"ID_instr", false,-1, 31,0);
    tracep->declBit(c+267,"firstFetch", false,-1);
    tracep->declBus(c+177,"ID_PCP1", false,-1, 31,2);
    tracep->pushNamePrefix("IM ");
    tracep->declBit(c+287,"clk", false,-1);
    tracep->declBit(c+284,"ce", false,-1);
    tracep->declBus(c+285,"addr", false,-1, 15,2);
    tracep->declBus(c+302,"instruct", false,-1, 31,0);
    tracep->declBus(c+286,"index", false,-1, 10,0);
    tracep->pushNamePrefix("u_imrom ");
    tracep->declBit(c+287,"clka", false,-1);
    tracep->declBus(c+286,"addra", false,-1, 12,2);
    tracep->declBit(c+304,"wea", false,-1);
    tracep->declBus(c+310,"dina", false,-1, 31,0);
    tracep->declBit(c+284,"ena", false,-1);
    tracep->declBus(c+302,"douta", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc ");
    tracep->declBus(c+283,"NPC", false,-1, 31,2);
    tracep->declBit(c+287,"clk", false,-1);
    tracep->declBit(c+288,"reset", false,-1);
    tracep->declBit(c+284,"PCWrite", false,-1);
    tracep->declBus(c+177,"PC", false,-1, 31,2);
    tracep->declBus(c+268,"line", false,-1, 29,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_MEM ");
    tracep->declBit(c+287,"clk", false,-1);
    tracep->declBit(c+288,"rst", false,-1);
    tracep->declBit(c+304,"MEM_FLUSH", false,-1);
    tracep->declBit(c+5,"MEM_CTRL", false,-1);
    tracep->declBus(c+2,"PrRD", false,-1, 31,0);
    tracep->declBus(c+69,"PrAddr", false,-1, 31,2);
    tracep->declBus(c+70,"PrWD", false,-1, 31,0);
    tracep->declBus(c+71,"PrBE", false,-1, 3,0);
    tracep->declBit(c+30,"IOWrite", false,-1);
    tracep->declBus(c+79,"WB_CTRL", false,-1, 4,0);
    tracep->declArray(c+31,"pre_MEM_DATA", false,-1, 66,0);
    tracep->declArray(c+80,"MEM_DATA", false,-1, 68,0);
    tracep->declBus(c+86,"o_WB_CTRL", false,-1, 4,0);
    tracep->declArray(c+87,"o_WB_DATA", false,-1, 68,0);
    tracep->declQuad(c+90,"o_MEM_BACK", false,-1, 37,0);
    tracep->declBus(c+137,"EXout", false,-1, 31,0);
    tracep->declBus(c+153,"rd2", false,-1, 31,0);
    tracep->declBus(c+154,"MEMout", false,-1, 31,0);
    tracep->declBus(c+126,"preEXout", false,-1, 31,0);
    tracep->declBus(c+96,"prerd2", false,-1, 31,0);
    tracep->declBus(c+139,"rw", false,-1, 4,0);
    tracep->declBit(c+155,"isDMByte", false,-1);
    tracep->declBit(c+156,"isDMHalf", false,-1);
    tracep->declBit(c+4,"memWrite", false,-1);
    tracep->declBus(c+6,"Dout", false,-1, 31,0);
    tracep->declBus(c+71,"be", false,-1, 3,0);
    tracep->declBit(c+157,"preAddrInDM", false,-1);
    tracep->declBit(c+35,"DMWrite", false,-1);
    tracep->declBit(c+158,"AddrInDM", false,-1);
    tracep->pushNamePrefix("U_BEEXT ");
    tracep->declBit(c+155,"isByte", false,-1);
    tracep->declBit(c+156,"isHalf", false,-1);
    tracep->declBus(c+159,"low_addr", false,-1, 1,0);
    tracep->declBus(c+71,"be", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dm_ram ");
    tracep->declBus(c+160,"addra", false,-1, 13,2);
    tracep->declBit(c+157,"ena", false,-1);
    tracep->declBus(c+161,"wea", false,-1, 3,0);
    tracep->declBit(c+287,"clka", false,-1);
    tracep->declBus(c+70,"dina", false,-1, 31,0);
    tracep->declBus(c+6,"douta", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_WB ");
    tracep->declBit(c+287,"clk", false,-1);
    tracep->declBit(c+288,"rst", false,-1);
    tracep->declBus(c+86,"WB_CTRL", false,-1, 4,0);
    tracep->declArray(c+87,"WB_DATA", false,-1, 68,0);
    tracep->declQuad(c+92,"o_WB_BACK", false,-1, 37,0);
    tracep->declBit(c+140,"regWrite", false,-1);
    tracep->declBit(c+162,"memToReg", false,-1);
    tracep->declBit(c+163,"isDMByte", false,-1);
    tracep->declBit(c+164,"isDMHalf", false,-1);
    tracep->declBit(c+165,"isLOADS", false,-1);
    tracep->declBus(c+166,"EXout", false,-1, 31,0);
    tracep->declBus(c+167,"Dout", false,-1, 31,0);
    tracep->declBus(c+138,"rw", false,-1, 4,0);
    tracep->declBus(c+168,"EXT_Dout", false,-1, 31,0);
    tracep->declBus(c+136,"WB_Wd", false,-1, 31,0);
    tracep->pushNamePrefix("U_DREXT ");
    tracep->declBit(c+163,"isByte", false,-1);
    tracep->declBit(c+164,"isHalf", false,-1);
    tracep->declBit(c+165,"exsign", false,-1);
    tracep->declBus(c+169,"low_addr", false,-1, 1,0);
    tracep->declBus(c+167,"in_data", false,-1, 31,0);
    tracep->declBus(c+168,"out_data", false,-1, 31,0);
    tracep->declBus(c+170,"half", false,-1, 15,0);
    tracep->declBus(c+171,"shift_bit", false,-1, 4,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_BRIDGE ");
    tracep->declBit(c+287,"clk", false,-1);
    tracep->declBus(c+69,"PrAddrWire", false,-1, 31,2);
    tracep->declBus(c+70,"PrWDWire", false,-1, 31,0);
    tracep->declBus(c+71,"PrBEWire", false,-1, 3,0);
    tracep->declBit(c+30,"WeCPUWire", false,-1);
    tracep->declBus(c+2,"PrRD", false,-1, 31,0);
    tracep->declBus(c+3,"HWInt", false,-1, 7,2);
    tracep->declBus(c+289,"o_led", false,-1, 7,0);
    tracep->declBus(c+290,"seg7_seg", false,-1, 7,0);
    tracep->declBus(c+292,"seg7_select", false,-1, 7,0);
    tracep->declBus(c+7,"PrAddr", false,-1, 31,2);
    tracep->declBus(c+8,"PrWD", false,-1, 31,0);
    tracep->declBus(c+9,"PrBE", false,-1, 3,0);
    tracep->declBit(c+10,"WeCPU", false,-1);
    tracep->declBus(c+311,"DEV_Addr", false,-1, 7,2);
    tracep->declBus(c+312,"DEV0_RD", false,-1, 31,0);
    tracep->declBus(c+11,"DEV1_RD", false,-1, 31,0);
    tracep->declBus(c+12,"DEV2_RD", false,-1, 31,0);
    tracep->declBus(c+8,"DEV_WD", false,-1, 31,0);
    tracep->declBus(c+13,"WeDEV", false,-1, 3,0);
    tracep->declBit(c+14,"HitDEV0", false,-1);
    tracep->declBit(c+15,"HitDEV1", false,-1);
    tracep->declBit(c+16,"HitDEV2", false,-1);
    tracep->pushNamePrefix("U_screenBoard ");
    tracep->declBus(c+8,"D", false,-1, 31,0);
    tracep->declBit(c+17,"WE", false,-1);
    tracep->declBit(c+287,"clk", false,-1);
    tracep->declBus(c+11,"show", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_counter ");
    tracep->declBus(c+8,"D", false,-1, 31,0);
    tracep->declBit(c+18,"WE", false,-1);
    tracep->declBit(c+287,"clk", false,-1);
    tracep->declBit(c+19,"INT", false,-1);
    tracep->declBus(c+20,"cnt", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_seg7 ");
    tracep->declBus(c+8,"D", false,-1, 31,0);
    tracep->declBit(c+21,"A", false,-1);
    tracep->declBus(c+9,"be", false,-1, 3,0);
    tracep->declBit(c+287,"clk", false,-1);
    tracep->declBit(c+22,"we", false,-1);
    tracep->declBus(c+12,"Dout", false,-1, 31,0);
    tracep->declBus(c+290,"seg", false,-1, 7,0);
    tracep->declBus(c+292,"select", false,-1, 7,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+23+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+25,"cnt", false,-1, 18,0);
    tracep->declBus(c+26,"pause", false,-1, 9,0);
    tracep->declBus(c+27,"lightDig", false,-1, 2,0);
    tracep->declBus(c+28,"newSeg", false,-1, 7,0);
    tracep->declBus(c+29,"newSelect", false,-1, 7,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_if__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_if__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+287,"clk", false,-1);
    tracep->declBit(c+270,"IF_FLUSH", false,-1);
    tracep->declBit(c+284,"PCWrite", false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("top ");
    tracep->pushNamePrefix("mips ");
    tracep->pushNamePrefix("i_if ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_if__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_Controller ");
    tracep->pushNamePrefix("i_if ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_if__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_IF ");
    tracep->pushNamePrefix("i_if ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_if__0(vlSelf, tracep);
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
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__PrID),32);
    bufp->fullIData(oldp+2,(((0x7fU == (0xffffffU & 
                                        (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                         >> 6U))) ? vlSelf->top__DOT__u_BRIDGE__DOT__DEV0_RD
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
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__HWInt),6);
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_ID));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_EX));
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__mips__DOT__u_MEM__DOT__Dout),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr),30);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__u_BRIDGE__DOT__PrWD),32);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__u_BRIDGE__DOT__PrBE),4);
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__u_BRIDGE__DOT__WeCPU));
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__u_BRIDGE__DOT__DEV1_RD),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                             [(1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr)]),32);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV),4);
    bufp->fullBit(oldp+14,((0x7fU == (0xffffffU & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                                   >> 6U)))));
    bufp->fullBit(oldp+15,((0x80U == (0xffffffU & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                                   >> 6U)))));
    bufp->fullBit(oldp+16,((0x81U == (0xffffffU & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                                   >> 6U)))));
    bufp->fullBit(oldp+17,((1U & ((IData)(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV) 
                                  >> 1U))));
    bufp->fullBit(oldp+18,((1U & (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV))));
    bufp->fullBit(oldp+19,((0U == vlSelf->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt)));
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt),32);
    bufp->fullBit(oldp+21,((1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr)));
    bufp->fullBit(oldp+22,((1U & ((IData)(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV) 
                                  >> 2U))));
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[0]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[1]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt),19);
    bufp->fullSData(oldp+26,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__pause),10);
    bufp->fullCData(oldp+27,((7U & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                    >> 0x10U))),3);
    bufp->fullCData(oldp+28,((0xffU & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                                       [(1U & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                               >> 0x12U))] 
                                       >> (0x18U & 
                                           (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                            >> 0xdU))))),8);
    bufp->fullCData(oldp+29,((0xffU & (0x80U >> (7U 
                                                 & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                                    >> 0x10U))))),8);
    bufp->fullBit(oldp+30,(((0x3000U <= (0xffffU & vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr)) 
                            & (IData)(vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_ID))));
    __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr)) 
                              << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn))));
    __Vtemp_2[1U] = (IData)(((((QData)((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr)) 
                               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn))) 
                             >> 0x20U));
    __Vtemp_2[2U] = ((6U & (IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID)) 
                     | (IData)(vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_ID));
    bufp->fullWData(oldp+31,(__Vtemp_2),67);
    bufp->fullBit(oldp+34,(((IData)(vlSelf->top__DOT__HWInt) 
                            & ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                               & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL)) 
                                  & (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE))))));
    bufp->fullBit(oldp+35,(((IData)(vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_ID) 
                            & (0x3000U > (0xffffU & vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr)))));
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[1]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[2]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[3]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[4]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[5]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[6]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[7]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[8]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[9]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[10]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[11]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[12]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[13]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[14]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[15]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[16]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[17]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[18]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[19]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[20]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[21]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[22]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[23]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[24]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[25]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[26]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[27]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[28]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[29]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[30]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[31]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__i),32);
    bufp->fullIData(oldp+69,((vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                              >> 2U)),30);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__PrWD),32);
    bufp->fullCData(oldp+71,(vlSelf->top__DOT__PrBE),4);
    bufp->fullWData(oldp+72,(vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID),158);
    bufp->fullSData(oldp+77,(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID),16);
    bufp->fullCData(oldp+78,(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID),5);
    bufp->fullCData(oldp+79,(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX),5);
    bufp->fullWData(oldp+80,(vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX),69);
    bufp->fullCData(oldp+83,(vlSelf->top__DOT__mips__DOT__EX_rw_from_EX),5);
    bufp->fullQData(oldp+84,((((QData)((IData)((1U 
                                                & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                                   >> 0xeU)))) 
                               << 0x25U) | (((QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                                 >> 0xbU)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn))))),38);
    bufp->fullCData(oldp+86,(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM),5);
    bufp->fullWData(oldp+87,(vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM),69);
    bufp->fullQData(oldp+90,((((QData)((IData)((1U 
                                                & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX) 
                                                   >> 4U)))) 
                               << 0x25U) | (((QData)((IData)(
                                                             vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[1U])) 
                                             << 5U) 
                                            | (QData)((IData)(
                                                              (0x1fU 
                                                               & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U])))))),38);
    bufp->fullQData(oldp+92,((((QData)((IData)((1U 
                                                & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                                   >> 4U)))) 
                               << 0x25U) | (((QData)((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_Wd)) 
                                             << 5U) 
                                            | (QData)((IData)(
                                                              (0x1fU 
                                                               & vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[2U])))))),38);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0),30);
    bufp->fullIData(oldp+95,((1U & ((0xcU == (0x1fU 
                                              & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                 >> 0xbU)))
                                     ? (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                         << 0xaU) | 
                                        (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL) 
                                          << 1U) | (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)))
                                     : ((0xdU == (0x1fU 
                                                  & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                     >> 0xbU)))
                                         ? ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                                            << 0xaU)
                                         : ((0xeU == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                 >> 0xbU)))
                                             ? vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0
                                             : ((0xfU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                     >> 0xbU)))
                                                 ? vlSelf->top__DOT__mips__DOT__u_CP0__DOT__PrID
                                                 : 0U)))))),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn),32);
    bufp->fullCData(oldp+97,((0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                       >> 0xbU))),5);
    bufp->fullBit(oldp+98,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                  >> 0xeU))));
    bufp->fullBit(oldp+99,((1U & ((0xcU == (0x1fU & 
                                            (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                             >> 0xbU)))
                                   ? (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                       << 0xaU) | (
                                                   ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)))
                                   : ((0xdU == (0x1fU 
                                                & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                   >> 0xbU)))
                                       ? ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                                          << 0xaU) : 
                                      ((0xeU == (0x1fU 
                                                 & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                    >> 0xbU)))
                                        ? vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0
                                        : ((0xfU == 
                                            (0x1fU 
                                             & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                >> 0xbU)))
                                            ? vlSelf->top__DOT__mips__DOT__u_CP0__DOT__PrID
                                            : 0U)))))));
    bufp->fullCData(oldp+100,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM),6);
    bufp->fullBit(oldp+101,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL));
    bufp->fullBit(oldp+102,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE));
    bufp->fullCData(oldp+103,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend),6);
    bufp->fullIData(oldp+104,((((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                << 0xaU) | (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL) 
                                             << 1U) 
                                            | (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)))),32);
    bufp->fullIData(oldp+105,(((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                               << 0xaU)),32);
    bufp->fullCData(oldp+106,((0xfU & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                       >> 6U))),4);
    bufp->fullCData(oldp+107,((7U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                     >> 2U))),3);
    bufp->fullBit(oldp+108,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+109,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+110,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+111,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+112,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+113,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                   >> 5U))));
    bufp->fullBit(oldp+114,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                   >> 1U))));
    bufp->fullBit(oldp+115,((1U & (IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID))));
    bufp->fullIData(oldp+116,((0x3fffffffU & vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[4U])),30);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U]),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[2U]),32);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[1U]),32);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[0U]),32);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1),32);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB),32);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC),32);
    bufp->fullIData(oldp+124,(((0x1000U & (IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID))
                                ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC 
                                   >> 0x1fU) : ((0x800U 
                                                 & (IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID))
                                                 ? 
                                                (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[4U] 
                                                 << 2U)
                                                 : 
                                                ((0x8000U 
                                                  & (IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID))
                                                  ? 
                                                 (1U 
                                                  & ((0xcU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
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
                                                        & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                           >> 0xbU)))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                                                       << 0xaU)
                                                       : 
                                                      ((0xeU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                            >> 0xbU)))
                                                        ? vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0
                                                        : 
                                                       ((0xfU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                             >> 0xbU)))
                                                         ? vlSelf->top__DOT__mips__DOT__u_CP0__DOT__PrID
                                                         : 0U)))))
                                                  : vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC)))),32);
    bufp->fullBit(oldp+125,((0U == vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC)));
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr),32);
    bufp->fullCData(oldp+127,((0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                        >> 6U))),5);
    bufp->fullIData(oldp+128,((vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                               << (0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                            >> 6U)))),32);
    bufp->fullIData(oldp+129,((vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                               >> (0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                            >> 6U)))),32);
    bufp->fullIData(oldp+130,(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB, 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                 >> 6U)))),32);
    bufp->fullIData(oldp+131,(((0x1fU >= vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                   << vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                : 0U)),32);
    bufp->fullIData(oldp+132,(((0x1fU >= vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                   >> vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                : 0U)),32);
    bufp->fullIData(oldp+133,(((0x1fU >= vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                ? VL_SHIFTRS_III(32,32,32, vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB, vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                : (- (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                      >> 0x1fU)))),32);
    bufp->fullCData(oldp+134,((0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                        >> 0x15U))),5);
    bufp->fullCData(oldp+135,((0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                        >> 0x10U))),5);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_Wd),32);
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[1U]),32);
    bufp->fullCData(oldp+138,((0x1fU & vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[2U])),5);
    bufp->fullCData(oldp+139,((0x1fU & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U])),5);
    bufp->fullBit(oldp+140,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                   >> 4U))));
    bufp->fullBit(oldp+141,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX) 
                                   >> 4U))));
    bufp->fullBit(oldp+142,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN));
    bufp->fullBit(oldp+143,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN));
    bufp->fullBit(oldp+144,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM));
    bufp->fullBit(oldp+145,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB));
    bufp->fullBit(oldp+146,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM)) 
                                   & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB))))));
    bufp->fullBit(oldp+147,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM));
    bufp->fullBit(oldp+148,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB));
    bufp->fullBit(oldp+149,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM)) 
                                   & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB))))));
    bufp->fullBit(oldp+150,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID) 
                                   >> 3U))));
    bufp->fullBit(oldp+151,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID) 
                                   >> 4U))));
    bufp->fullBit(oldp+152,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX) 
                                   >> 3U))));
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[0U]),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__mips__DOT__u_MEM__DOT__MEMout),32);
    bufp->fullBit(oldp+155,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID) 
                                   >> 2U))));
    bufp->fullBit(oldp+156,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID) 
                                   >> 1U))));
    bufp->fullBit(oldp+157,((0x3000U > (0xffffU & vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr))));
    bufp->fullBit(oldp+158,((0x3000U > (0xffffU & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[1U]))));
    bufp->fullCData(oldp+159,((3U & vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr)),2);
    bufp->fullSData(oldp+160,((0xfffU & (vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                                         >> 2U))),12);
    bufp->fullCData(oldp+161,(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea),4);
    bufp->fullBit(oldp+162,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                   >> 3U))));
    bufp->fullBit(oldp+163,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                   >> 2U))));
    bufp->fullBit(oldp+164,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                   >> 1U))));
    bufp->fullBit(oldp+165,((1U & (IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM))));
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[1U]),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[0U]),32);
    bufp->fullIData(oldp+168,(((4U & (IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM))
                                ? (((- (IData)((1U 
                                                & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                                   & (vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0 
                                                      >> 7U))))) 
                                    << 8U) | (0xffU 
                                              & vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0))
                                : ((2U & (IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                                       & (vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0 
                                                          >> 0xfU))))) 
                                        << 0x10U) | 
                                       (0xffffU & vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0))
                                    : vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[0U]))),32);
    bufp->fullCData(oldp+169,((3U & vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[1U])),2);
    bufp->fullSData(oldp+170,((0xffffU & vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0)),16);
    bufp->fullCData(oldp+171,((0x18U & (vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[1U] 
                                        << 3U))),5);
    bufp->fullQData(oldp+172,((((QData)((IData)(vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC)) 
                                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))),62);
    bufp->fullSData(oldp+174,((((IData)((0x40000000U 
                                         == (0xffe00000U 
                                             & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr))) 
                                << 0xfU) | (((IData)(
                                                     (0x40800000U 
                                                      == 
                                                      (0xffe00000U 
                                                       & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr))) 
                                             << 0xeU) 
                                            | ((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                                                 | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr) 
                                                    | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                                       | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB)))) 
                                                << 0xdU) 
                                               | ((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt) 
                                                    | (0xaU 
                                                       == 
                                                       (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                        >> 0x1aU))) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC) 
                                                      << 0xbU) 
                                                     | ((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                                                          | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1fabfdd5__0)) 
                                                         << 0xaU) 
                                                        | ((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sll)
                                                              ? 0U
                                                              : 
                                                             (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR) 
                                                               | ((0xdU 
                                                                   == 
                                                                   (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                                    >> 0x1aU)) 
                                                                  | (0xfU 
                                                                     == 
                                                                     (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                                      >> 0x1aU))))
                                                               ? 1U
                                                               : 
                                                              (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
                                                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__subu) 
                                                                   | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt) 
                                                                      | ((0xaU 
                                                                          == 
                                                                          (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                                           >> 0x1aU)) 
                                                                         | ((4U 
                                                                             == 
                                                                             (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                                              >> 0x1aU)) 
                                                                            | (5U 
                                                                               == 
                                                                               (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                                                >> 0x1aU)))))))
                                                                ? 2U
                                                                : 
                                                               (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h4e7f6188__0) 
                                                                 | ((8U 
                                                                     == 
                                                                     (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                                      >> 0x1aU)) 
                                                                    | ((9U 
                                                                        == 
                                                                        (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                                         >> 0x1aU)) 
                                                                       | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1fabfdd5__0))))
                                                                 ? 3U
                                                                 : 
                                                                (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND) 
                                                                  | (0xcU 
                                                                     == 
                                                                     (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                                      >> 0x1aU)))
                                                                  ? 4U
                                                                  : 
                                                                 (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR) 
                                                                   | (0xeU 
                                                                      == 
                                                                      (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                                       >> 0x1aU)))
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
                                                                          : 0U))))))))))))) 
                                                            << 6U) 
                                                           | ((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                                                                | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div)) 
                                                               << 5U) 
                                                              | ((((IData)(
                                                                           (0x11U 
                                                                            == 
                                                                            (0xfc00003fU 
                                                                             & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))
                                                                    ? 1U
                                                                    : 
                                                                   ((IData)(
                                                                            (0x13U 
                                                                             == 
                                                                             (0xfc00003fU 
                                                                              & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))
                                                                     ? 2U
                                                                     : 
                                                                    (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                                                                      | (IData)(
                                                                                (0x19U 
                                                                                == 
                                                                                (0xfc00003fU 
                                                                                & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr))))
                                                                      ? 3U
                                                                      : 
                                                                     (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div) 
                                                                       | (IData)(
                                                                                (0x1bU 
                                                                                == 
                                                                                (0xfc00003fU 
                                                                                & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr))))
                                                                       ? 4U
                                                                       : 0U)))) 
                                                                  << 2U) 
                                                                 | (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB)))))))))))),16);
    bufp->fullBit(oldp+175,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite));
    bufp->fullCData(oldp+176,(((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                                 | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                                    | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                       | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB) 
                                          | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                                             | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC)))))) 
                                << 4U) | (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                                           << 3U) | 
                                          ((((0x20U 
                                              == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                  >> 0x1aU)) 
                                             | ((0x24U 
                                                 == 
                                                 (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                  >> 0x1aU)) 
                                                | (0x28U 
                                                   == 
                                                   (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                    >> 0x1aU)))) 
                                            << 2U) 
                                           | ((((0x21U 
                                                 == 
                                                 (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                  >> 0x1aU)) 
                                                | ((0x25U 
                                                    == 
                                                    (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                     >> 0x1aU)) 
                                                   | (0x29U 
                                                      == 
                                                      (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                       >> 0x1aU)))) 
                                               << 1U) 
                                              | ((0x20U 
                                                  == 
                                                  (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                   >> 0x1aU)) 
                                                 | (0x21U 
                                                    == 
                                                    (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                     >> 0x1aU)))))))),5);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC),30);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr),32);
    bufp->fullBit(oldp+179,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__o_uncertainJump));
    bufp->fullBit(oldp+180,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC));
    bufp->fullCData(oldp+181,((vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                               >> 0x1aU)),6);
    bufp->fullCData(oldp+182,((0x3fU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)),6);
    bufp->fullCData(oldp+183,((0x1fU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                        >> 0x15U))),5);
    bufp->fullCData(oldp+184,((0x1fU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                        >> 0x10U))),5);
    bufp->fullCData(oldp+185,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sll)
                                ? 0U : (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR) 
                                         | ((0xdU == 
                                             (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                              >> 0x1aU)) 
                                            | (0xfU 
                                               == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                   >> 0x1aU))))
                                         ? 1U : (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
                                                  | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__subu) 
                                                     | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt) 
                                                        | ((0xaU 
                                                            == 
                                                            (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                             >> 0x1aU)) 
                                                           | ((4U 
                                                               == 
                                                               (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                                >> 0x1aU)) 
                                                              | (5U 
                                                                 == 
                                                                 (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                                  >> 0x1aU)))))))
                                                  ? 2U
                                                  : 
                                                 (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h4e7f6188__0) 
                                                   | ((8U 
                                                       == 
                                                       (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                        >> 0x1aU)) 
                                                      | ((9U 
                                                          == 
                                                          (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                           >> 0x1aU)) 
                                                         | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1fabfdd5__0))))
                                                   ? 3U
                                                   : 
                                                  (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND) 
                                                    | (0xcU 
                                                       == 
                                                       (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                        >> 0x1aU)))
                                                    ? 4U
                                                    : 
                                                   (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR) 
                                                     | (0xeU 
                                                        == 
                                                        (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                         >> 0x1aU)))
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
    bufp->fullCData(oldp+186,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__branchType),3);
    bufp->fullCData(oldp+187,(((IData)((0x11U == (0xfc00003fU 
                                                  & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))
                                ? 1U : ((IData)((0x13U 
                                                 == 
                                                 (0xfc00003fU 
                                                  & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))
                                         ? 2U : (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                                                  | (IData)(
                                                            (0x19U 
                                                             == 
                                                             (0xfc00003fU 
                                                              & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr))))
                                                  ? 3U
                                                  : 
                                                 (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div) 
                                                   | (IData)(
                                                             (0x1bU 
                                                              == 
                                                              (0xfc00003fU 
                                                               & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr))))
                                                   ? 4U
                                                   : 0U))))),3);
    bufp->fullBit(oldp+188,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp));
    bufp->fullBit(oldp+189,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR));
    bufp->fullBit(oldp+190,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add) 
                             | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
                                | (0xfU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                            >> 0x1aU))))));
    bufp->fullBit(oldp+191,(((8U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                     >> 0x1aU)) | (
                                                   (9U 
                                                    == 
                                                    (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                     >> 0x1aU)) 
                                                   | ((0xaU 
                                                       == 
                                                       (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                        >> 0x1aU)) 
                                                      | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                                                         | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite) 
                                                            | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__Branch))))))));
    bufp->fullBit(oldp+192,((IData)((0x40000000U == 
                                     (0xffe00000U & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))));
    bufp->fullBit(oldp+193,((IData)((0x40800000U == 
                                     (0xffe00000U & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))));
    bufp->fullBit(oldp+194,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                             | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                   | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB))))));
    bufp->fullBit(oldp+195,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt) 
                             | (0xaU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                         >> 0x1aU)))));
    bufp->fullBit(oldp+196,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC));
    bufp->fullBit(oldp+197,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                             | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1fabfdd5__0))));
    bufp->fullBit(oldp+198,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                             | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div))));
    bufp->fullBit(oldp+199,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB));
    bufp->fullBit(oldp+200,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB));
    bufp->fullBit(oldp+201,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                             | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                   | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB) 
                                      | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                                         | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC))))))));
    bufp->fullBit(oldp+202,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg));
    bufp->fullBit(oldp+203,(((0x20U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                        >> 0x1aU)) 
                             | ((0x24U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                           >> 0x1aU)) 
                                | (0x28U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                             >> 0x1aU))))));
    bufp->fullBit(oldp+204,(((0x21U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                        >> 0x1aU)) 
                             | ((0x25U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                           >> 0x1aU)) 
                                | (0x29U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                             >> 0x1aU))))));
    bufp->fullBit(oldp+205,(((0x20U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                        >> 0x1aU)) 
                             | (0x21U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                          >> 0x1aU)))));
    bufp->fullBit(oldp+206,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add));
    bufp->fullBit(oldp+207,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub));
    bufp->fullBit(oldp+208,((0xdU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                      >> 0x1aU))));
    bufp->fullBit(oldp+209,((4U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+210,((0x2bU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                       >> 0x1aU))));
    bufp->fullBit(oldp+211,((0x23U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                       >> 0x1aU))));
    bufp->fullBit(oldp+212,((0xfU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                      >> 0x1aU))));
    bufp->fullBit(oldp+213,((2U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+214,((3U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+215,((IData)((8U == (0xfc00003fU 
                                            & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))));
    bufp->fullBit(oldp+216,((8U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+217,((9U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+218,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt));
    bufp->fullBit(oldp+219,((0xaU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                      >> 0x1aU))));
    bufp->fullBit(oldp+220,((0x20U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                       >> 0x1aU))));
    bufp->fullBit(oldp+221,((0x24U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                       >> 0x1aU))));
    bufp->fullBit(oldp+222,((0x21U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                       >> 0x1aU))));
    bufp->fullBit(oldp+223,((0x25U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                       >> 0x1aU))));
    bufp->fullBit(oldp+224,((0x28U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                       >> 0x1aU))));
    bufp->fullBit(oldp+225,((0x29U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                       >> 0x1aU))));
    bufp->fullBit(oldp+226,((IData)((0x21U == (0xfc00003fU 
                                               & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))));
    bufp->fullBit(oldp+227,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__subu));
    bufp->fullBit(oldp+228,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND));
    bufp->fullBit(oldp+229,((0xcU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                      >> 0x1aU))));
    bufp->fullBit(oldp+230,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR));
    bufp->fullBit(oldp+231,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR));
    bufp->fullBit(oldp+232,((0xeU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                      >> 0x1aU))));
    bufp->fullBit(oldp+233,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NOR));
    bufp->fullBit(oldp+234,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sll));
    bufp->fullBit(oldp+235,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sllv));
    bufp->fullBit(oldp+236,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srl));
    bufp->fullBit(oldp+237,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srlv));
    bufp->fullBit(oldp+238,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sra));
    bufp->fullBit(oldp+239,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srav));
    bufp->fullBit(oldp+240,((5U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+241,((7U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+242,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bltz));
    bufp->fullBit(oldp+243,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bgez));
    bufp->fullBit(oldp+244,((6U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+245,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr));
    bufp->fullBit(oldp+246,((IData)((0x11U == (0xfc00003fU 
                                               & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))));
    bufp->fullBit(oldp+247,((IData)((0x13U == (0xfc00003fU 
                                               & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))));
    bufp->fullBit(oldp+248,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult));
    bufp->fullBit(oldp+249,((IData)((0x19U == (0xfc00003fU 
                                               & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))));
    bufp->fullBit(oldp+250,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div));
    bufp->fullBit(oldp+251,((IData)((0x1bU == (0xfc00003fU 
                                               & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))));
    bufp->fullBit(oldp+252,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__Branch));
    bufp->fullBit(oldp+253,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR));
    bufp->fullBit(oldp+254,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA));
    bufp->fullBit(oldp+255,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp) 
                             | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR))));
    bufp->fullBit(oldp+256,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h4e7f6188__0) 
                             | ((8U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                        >> 0x1aU)) 
                                | ((9U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                           >> 0x1aU)) 
                                   | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1fabfdd5__0))))));
    bufp->fullBit(oldp+257,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
                             | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__subu) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt) 
                                   | ((0xaU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                >> 0x1aU)) 
                                      | ((4U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                 >> 0x1aU)) 
                                         | (5U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                   >> 0x1aU)))))))));
    bufp->fullBit(oldp+258,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR) 
                             | ((0xdU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                          >> 0x1aU)) 
                                | (0xfU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                            >> 0x1aU))))));
    bufp->fullBit(oldp+259,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND) 
                             | (0xcU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                         >> 0x1aU)))));
    bufp->fullBit(oldp+260,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR) 
                             | (0xeU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                         >> 0x1aU)))));
    bufp->fullBit(oldp+261,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ALURs));
    bufp->fullBit(oldp+262,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                             | (IData)((0x19U == (0xfc00003fU 
                                                  & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr))))));
    bufp->fullBit(oldp+263,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div) 
                             | (IData)((0x1bU == (0xfc00003fU 
                                                  & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr))))));
    bufp->fullIData(oldp+264,((((8U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                        >> 0x1aU)) 
                                | ((9U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                           >> 0x1aU)) 
                                   | ((0xaU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                >> 0x1aU)) 
                                      | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                                         | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite) 
                                            | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__Branch))))))
                                ? (((- (IData)((1U 
                                                & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                   >> 0xfU)))) 
                                    << 0x10U) | (0xffffU 
                                                 & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr))
                                : (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add) 
                                    | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
                                       | (0xfU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                   >> 0x1aU))))
                                    ? (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                       << 0x10U) : 
                                   (0xffffU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))),32);
    bufp->fullSData(oldp+265,((0xffffU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)),16);
    bufp->fullIData(oldp+266,((0x3ffffffU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)),26);
    bufp->fullBit(oldp+267,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__firstFetch));
    bufp->fullIData(oldp+268,((0x3fffffffU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC 
                                              << 2U))),30);
    bufp->fullBit(oldp+269,(vlSelf->top__DOT__mips__DOT__pipeline_stall));
    bufp->fullBit(oldp+270,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ExlSet));
    bufp->fullIData(oldp+271,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1),32);
    bufp->fullIData(oldp+272,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd2),32);
    bufp->fullBit(oldp+273,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail));
    bufp->fullBit(oldp+274,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq));
    bufp->fullBit(oldp+275,((vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                             >> 0x1fU)));
    bufp->fullBit(oldp+276,((0U == vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1)));
    bufp->fullBit(oldp+277,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM));
    bufp->fullBit(oldp+278,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB));
    bufp->fullBit(oldp+279,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM)) 
                                   & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB))))));
    bufp->fullBit(oldp+280,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM));
    bufp->fullBit(oldp+281,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB));
    bufp->fullBit(oldp+282,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM)) 
                                   & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB))))));
    bufp->fullIData(oldp+283,((0x3fffffffU & vlSelf->top__DOT__mips__DOT__u_IF__DOT____VdfgTmp_h52d3c299__0)),30);
    bufp->fullBit(oldp+284,((1U & (~ (IData)(vlSelf->top__DOT__mips__DOT__pipeline_stall)))));
    bufp->fullSData(oldp+285,((0x3fffU & vlSelf->top__DOT__mips__DOT__u_IF__DOT____VdfgTmp_h52d3c299__0)),14);
    bufp->fullSData(oldp+286,((0x7ffU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT____VdfgTmp_h52d3c299__0 
                                         - (IData)(0x400U)))),11);
    bufp->fullBit(oldp+287,(vlSelf->clk));
    bufp->fullBit(oldp+288,(vlSelf->rst));
    bufp->fullCData(oldp+289,(vlSelf->led),8);
    bufp->fullCData(oldp+290,(vlSelf->seg7_seg),8);
    bufp->fullCData(oldp+291,(vlSelf->seg7_seg1),8);
    bufp->fullCData(oldp+292,(vlSelf->seg7_select),8);
    bufp->fullSData(oldp+293,((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC) 
                                << 8U) | (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ExlSet) 
                                           << 7U) | 
                                          (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp) 
                                            << 6U) 
                                           | (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR) 
                                               << 5U) 
                                              | (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__branchType) 
                                                  << 2U) 
                                                 | ((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add) 
                                                      | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
                                                         | (0xfU 
                                                            == 
                                                            (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                             >> 0x1aU)))) 
                                                     << 1U) 
                                                    | ((8U 
                                                        == 
                                                        (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                         >> 0x1aU)) 
                                                       | ((9U 
                                                           == 
                                                           (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                            >> 0x1aU)) 
                                                          | ((0xaU 
                                                              == 
                                                              (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                               >> 0x1aU)) 
                                                             | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                                                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite) 
                                                                   | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__Branch))))))))))))),9);
    bufp->fullCData(oldp+294,((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ExlSet) 
                                << 1U) | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC))),2);
    bufp->fullIData(oldp+295,((0x3fffffffU & ((0x1060U 
                                               & (- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ExlSet)))) 
                                              | (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC))) 
                                                  & vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0) 
                                                 | (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR))) 
                                                     & (vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                                                        >> 2U)) 
                                                    | ((0x3ffffffU 
                                                        & ((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp))) 
                                                           & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)) 
                                                       | ((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail))) 
                                                          & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC 
                                                             + 
                                                             ((0x3fff0000U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                                                >> 0xfU)))) 
                                                                  << 0x10U)) 
                                                              | (0xffffU 
                                                                 & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))))))))),30);
    bufp->fullBit(oldp+296,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ExlSet) 
                             | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR) 
                                   | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp) 
                                      | (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail)))))));
    bufp->fullBit(oldp+297,((((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID) 
                              >> 3U) & (IData)(vlSelf->top__DOT__mips__DOT__u_HazardDetect__DOT____VdfgTmp_h6c4ba390__0))));
    bufp->fullBit(oldp+298,(((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__o_uncertainJump) 
                             & ((IData)((0U != (0x18U 
                                                & (IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID)))) 
                                & ((0U != (IData)(vlSelf->top__DOT__mips__DOT__EX_rw_from_EX)) 
                                   & (IData)(vlSelf->top__DOT__mips__DOT__u_HazardDetect__DOT____VdfgTmp_h6c4ba390__0))))));
    bufp->fullBit(oldp+299,(((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__o_uncertainJump) 
                             & (((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX) 
                                 >> 3U) & (((0x1fU 
                                             & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                >> 0x15U)) 
                                            == (0x1fU 
                                                & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U])) 
                                           | ((0x1fU 
                                               & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U])))))));
    bufp->fullIData(oldp+300,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
                              [(0x1fU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                         >> 0x15U))]),32);
    bufp->fullIData(oldp+301,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
                              [(0x1fU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                         >> 0x10U))]),32);
    bufp->fullIData(oldp+302,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_instr),32);
    bufp->fullBit(oldp+303,(vlSelf->top__DOT__mips__DOT__IF_CTRL));
    bufp->fullBit(oldp+304,(0U));
    bufp->fullIData(oldp+305,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__MDHI),32);
    bufp->fullIData(oldp+306,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__MDLO),32);
    bufp->fullBit(oldp+307,(1U));
    bufp->fullIData(oldp+308,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__reg_index),32);
    bufp->fullIData(oldp+309,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__EX_instr),26);
    bufp->fullIData(oldp+310,(0U),32);
    bufp->fullCData(oldp+311,(vlSelf->top__DOT__u_BRIDGE__DOT__DEV_Addr),6);
    bufp->fullIData(oldp+312,(vlSelf->top__DOT__u_BRIDGE__DOT__DEV0_RD),32);
}
