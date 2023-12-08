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
    tracep->declBit(c+300,"clk", false,-1);
    tracep->declBit(c+301,"rst", false,-1);
    tracep->declBus(c+302,"led", false,-1, 7,0);
    tracep->declBus(c+303,"seg7_seg", false,-1, 7,0);
    tracep->declBus(c+304,"seg7_seg1", false,-1, 7,0);
    tracep->declBus(c+305,"seg7_select", false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+300,"clk", false,-1);
    tracep->declBit(c+301,"rst", false,-1);
    tracep->declBus(c+302,"led", false,-1, 7,0);
    tracep->declBus(c+303,"seg7_seg", false,-1, 7,0);
    tracep->declBus(c+304,"seg7_seg1", false,-1, 7,0);
    tracep->declBus(c+305,"seg7_select", false,-1, 7,0);
    tracep->declBus(c+73,"PrAddr", false,-1, 31,2);
    tracep->declBus(c+2,"PrRD", false,-1, 31,0);
    tracep->declBus(c+74,"PrWD", false,-1, 31,0);
    tracep->declBus(c+75,"PrBE", false,-1, 3,0);
    tracep->declBus(c+3,"HWInt", false,-1, 7,2);
    tracep->declBit(c+30,"IOWrite", false,-1);
    tracep->pushNamePrefix("mips ");
    tracep->declBit(c+300,"clk", false,-1);
    tracep->declBit(c+301,"rst", false,-1);
    tracep->declBus(c+3,"HWInt", false,-1, 7,2);
    tracep->declBus(c+73,"PrAddr", false,-1, 31,2);
    tracep->declBus(c+2,"PrRD", false,-1, 31,0);
    tracep->declBus(c+74,"PrWD", false,-1, 31,0);
    tracep->declBus(c+75,"PrBE", false,-1, 3,0);
    tracep->declBit(c+30,"IOWrite", false,-1);
    tracep->declQuad(c+313,"ID_DATA_from_IF", false,-1, 61,0);
    tracep->declBit(c+315,"IF_CTRL", false,-1);
    tracep->declBus(c+316,"ID_CTRL", false,-1, 8,0);
    tracep->declBus(c+317,"EX_CTRL", false,-1, 15,0);
    tracep->declBit(c+318,"MEM_CTRL", false,-1);
    tracep->declBus(c+319,"WB_CTRL", false,-1, 4,0);
    tracep->declBus(c+306,"CP0_CTRL", false,-1, 1,0);
    tracep->declBus(c+178,"ID_PCP1", false,-1, 31,2);
    tracep->declBus(c+179,"ID_instr", false,-1, 31,0);
    tracep->declBit(c+272,"pipeline_stall", false,-1);
    tracep->declArray(c+76,"EX_DATA_from_ID", false,-1, 157,0);
    tracep->declBus(c+81,"EX_CTRL_from_ID", false,-1, 15,0);
    tracep->declBit(c+4,"MEM_CTRL_from_ID", false,-1);
    tracep->declBus(c+82,"WB_CTRL_from_ID", false,-1, 4,0);
    tracep->declBus(c+320,"JPC", false,-1, 31,2);
    tracep->declBit(c+321,"jpcAvail", false,-1);
    tracep->declBit(c+180,"ID_uncertainJump", false,-1);
    tracep->declBit(c+5,"MEM_CTRL_from_EX", false,-1);
    tracep->declBus(c+83,"WB_CTRL_from_EX", false,-1, 4,0);
    tracep->declArray(c+84,"MEM_DATA_from_EX", false,-1, 68,0);
    tracep->declBus(c+87,"EX_rw_from_EX", false,-1, 4,0);
    tracep->declQuad(c+88,"CP0_DATA_from_EX", false,-1, 37,0);
    tracep->declBus(c+90,"WB_CTRL_from_MEM", false,-1, 4,0);
    tracep->declArray(c+91,"WB_DATA_from_MEM", false,-1, 68,0);
    tracep->declQuad(c+94,"MEM_BACK_from_MEM", false,-1, 37,0);
    tracep->declQuad(c+96,"WB_BACK_from_WB", false,-1, 37,0);
    tracep->declBus(c+98,"ID_EPC_from_CP0", false,-1, 31,2);
    tracep->declBus(c+99,"EX_DATA_from_CP0", false,-1, 31,0);
    tracep->declArray(c+31,"pre_MEM_DATA_from_EX", false,-1, 66,0);
    tracep->declBit(c+34,"IntReq", false,-1);
    tracep->declBit(c+322,"EX_FLUSH", false,-1);
    tracep->declBit(c+322,"MEM_FLUSH", false,-1);
    tracep->pushNamePrefix("u_CP0 ");
    tracep->declBit(c+300,"clk", false,-1);
    tracep->declBit(c+301,"rst", false,-1);
    tracep->declBus(c+3,"HWInt", false,-1, 7,2);
    tracep->declBus(c+178,"ID_PCP1", false,-1, 31,2);
    tracep->declBus(c+98,"o_ID_EPC", false,-1, 31,2);
    tracep->declQuad(c+88,"EX_DATA", false,-1, 37,0);
    tracep->declBus(c+99,"o_EX_DATA", false,-1, 31,0);
    tracep->declBus(c+306,"CP0_CTRL", false,-1, 1,0);
    tracep->declBit(c+34,"IntReq", false,-1);
    tracep->declBit(c+273,"ExlSet", false,-1);
    tracep->declBit(c+181,"ExlClr", false,-1);
    tracep->declBus(c+100,"DIn", false,-1, 31,0);
    tracep->declBus(c+101,"Sel", false,-1, 4,0);
    tracep->declBit(c+102,"Wen", false,-1);
    tracep->declBit(c+103,"Dout", false,-1);
    tracep->declBus(c+104,"IM", false,-1, 15,10);
    tracep->declBit(c+105,"EXL", false,-1);
    tracep->declBit(c+106,"IE", false,-1);
    tracep->declBus(c+107,"hwint_pend", false,-1, 15,10);
    tracep->declBus(c+1,"PrID", false,-1, 31,0);
    tracep->declBus(c+108,"SR", false,-1, 31,0);
    tracep->declBus(c+109,"Cause", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_Controller ");
    tracep->declBit(c+300,"clk", false,-1);
    tracep->declBit(c+301,"reset", false,-1);
    tracep->declBit(c+272,"pipeline_stall", false,-1);
    tracep->declBit(c+34,"IntReq", false,-1);
    tracep->declBit(c+322,"EX_FLUSH", false,-1);
    tracep->declBit(c+322,"MEM_FLUSH", false,-1);
    tracep->declBus(c+306,"CP0_CTRL", false,-1, 1,0);
    tracep->declBit(c+180,"o_uncertainJump", false,-1);
    tracep->declBus(c+182,"aluop", false,-1, 3,0);
    tracep->declBus(c+183,"branchType", false,-1, 2,0);
    tracep->declBus(c+184,"MDFunc", false,-1, 2,0);
    tracep->declBus(c+185,"op", false,-1, 5,0);
    tracep->declBus(c+186,"func", false,-1, 5,0);
    tracep->declBus(c+187,"rs", false,-1, 4,0);
    tracep->declBus(c+188,"rt", false,-1, 4,0);
    tracep->declBit(c+273,"IF_FLUSH", false,-1);
    tracep->declBit(c+274,"PCWrite", false,-1);
    tracep->declBit(c+272,"ID_FLUSH", false,-1);
    tracep->declBit(c+181,"NPCFromEPC", false,-1);
    tracep->declBit(c+273,"ExlSet", false,-1);
    tracep->declBit(c+189,"jmp", false,-1);
    tracep->declBit(c+190,"NPCFromGPR", false,-1);
    tracep->declBit(c+191,"extop", false,-1);
    tracep->declBit(c+192,"exsign", false,-1);
    tracep->declBit(c+193,"CP0WB", false,-1);
    tracep->declBit(c+194,"CP0Write", false,-1);
    tracep->declBit(c+195,"regDst", false,-1);
    tracep->declBit(c+196,"isSlt", false,-1);
    tracep->declBit(c+197,"savePC", false,-1);
    tracep->declBit(c+198,"ALUSrc", false,-1);
    tracep->declBit(c+199,"MDSign", false,-1);
    tracep->declBit(c+200,"MDHIWB", false,-1);
    tracep->declBit(c+201,"MDLOWB", false,-1);
    tracep->declBit(c+202,"memWrite", false,-1);
    tracep->declBit(c+203,"regWrite", false,-1);
    tracep->declBit(c+204,"memToReg", false,-1);
    tracep->declBit(c+205,"isDMByte", false,-1);
    tracep->declBit(c+206,"isDMHalf", false,-1);
    tracep->declBit(c+207,"isLOADS", false,-1);
    tracep->declBit(c+181,"ExlClr", false,-1);
    tracep->declBit(c+208,"add", false,-1);
    tracep->declBit(c+209,"sub", false,-1);
    tracep->declBit(c+210,"ori", false,-1);
    tracep->declBit(c+211,"beq", false,-1);
    tracep->declBit(c+212,"sw", false,-1);
    tracep->declBit(c+213,"lw", false,-1);
    tracep->declBit(c+214,"lui", false,-1);
    tracep->declBit(c+215,"j", false,-1);
    tracep->declBit(c+216,"jal", false,-1);
    tracep->declBit(c+217,"jr", false,-1);
    tracep->declBit(c+218,"addi", false,-1);
    tracep->declBit(c+219,"addiu", false,-1);
    tracep->declBit(c+220,"slt", false,-1);
    tracep->declBit(c+221,"slti", false,-1);
    tracep->declBit(c+222,"lb", false,-1);
    tracep->declBit(c+223,"lbu", false,-1);
    tracep->declBit(c+224,"lh", false,-1);
    tracep->declBit(c+225,"lhu", false,-1);
    tracep->declBit(c+226,"sb", false,-1);
    tracep->declBit(c+227,"sh", false,-1);
    tracep->declBit(c+228,"addu", false,-1);
    tracep->declBit(c+229,"subu", false,-1);
    tracep->declBit(c+230,"AND", false,-1);
    tracep->declBit(c+231,"andi", false,-1);
    tracep->declBit(c+232,"OR", false,-1);
    tracep->declBit(c+233,"XOR", false,-1);
    tracep->declBit(c+234,"xori", false,-1);
    tracep->declBit(c+235,"NOR", false,-1);
    tracep->declBit(c+236,"sll", false,-1);
    tracep->declBit(c+237,"sllv", false,-1);
    tracep->declBit(c+238,"srl", false,-1);
    tracep->declBit(c+239,"srlv", false,-1);
    tracep->declBit(c+240,"sra", false,-1);
    tracep->declBit(c+241,"srav", false,-1);
    tracep->declBit(c+242,"bne", false,-1);
    tracep->declBit(c+243,"bgtz", false,-1);
    tracep->declBit(c+244,"bltz", false,-1);
    tracep->declBit(c+245,"bgez", false,-1);
    tracep->declBit(c+246,"blez", false,-1);
    tracep->declBit(c+247,"jalr", false,-1);
    tracep->declBit(c+248,"mthi", false,-1);
    tracep->declBit(c+249,"mtlo", false,-1);
    tracep->declBit(c+200,"mfhi", false,-1);
    tracep->declBit(c+201,"mflo", false,-1);
    tracep->declBit(c+250,"mult", false,-1);
    tracep->declBit(c+251,"multu", false,-1);
    tracep->declBit(c+252,"div", false,-1);
    tracep->declBit(c+253,"divu", false,-1);
    tracep->declBit(c+181,"eret", false,-1);
    tracep->declBit(c+193,"mfc0", false,-1);
    tracep->declBit(c+194,"mtc0", false,-1);
    tracep->declBit(c+254,"Branch", false,-1);
    tracep->declBit(c+255,"typeR", false,-1);
    tracep->declBit(c+256,"typeIA", false,-1);
    tracep->declBit(c+254,"typeIB", false,-1);
    tracep->declBit(c+257,"typeJ", false,-1);
    tracep->declBit(c+204,"LOAD", false,-1);
    tracep->declBit(c+202,"STORE", false,-1);
    tracep->declBit(c+258,"ALUAdd", false,-1);
    tracep->declBit(c+259,"ALUSub", false,-1);
    tracep->declBit(c+260,"ALUOr", false,-1);
    tracep->declBit(c+261,"ALUAnd", false,-1);
    tracep->declBit(c+262,"ALUXor", false,-1);
    tracep->declBit(c+235,"ALUNor", false,-1);
    tracep->declBit(c+263,"ALURs", false,-1);
    tracep->declBit(c+264,"MDMUL", false,-1);
    tracep->declBit(c+265,"MDDIV", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_EX ");
    tracep->declBit(c+300,"clk", false,-1);
    tracep->declBit(c+301,"rst", false,-1);
    tracep->declBit(c+322,"EX_FLUSH", false,-1);
    tracep->declBus(c+81,"EX_CTRL", false,-1, 15,0);
    tracep->declBit(c+4,"MEM_CTRL", false,-1);
    tracep->declBus(c+82,"WB_CTRL", false,-1, 4,0);
    tracep->declArray(c+76,"EX_DATA", false,-1, 157,0);
    tracep->declQuad(c+96,"WB_BACK", false,-1, 37,0);
    tracep->declQuad(c+94,"MEM_BACK", false,-1, 37,0);
    tracep->declBus(c+99,"CP0_DATA", false,-1, 31,0);
    tracep->declBit(c+5,"o_MEM_CTRL", false,-1);
    tracep->declBus(c+83,"o_WB_CTRL", false,-1, 4,0);
    tracep->declArray(c+84,"o_MEM_DATA", false,-1, 68,0);
    tracep->declArray(c+31,"o_pre_MEM_DATA", false,-1, 66,0);
    tracep->declQuad(c+88,"o_CP0_DATA", false,-1, 37,0);
    tracep->declBus(c+87,"rw", false,-1, 4,0);
    tracep->declBus(c+110,"aluop", false,-1, 3,0);
    tracep->declBus(c+111,"MDFunc", false,-1, 2,0);
    tracep->declBit(c+112,"CP0WB", false,-1);
    tracep->declBit(c+102,"CP0Write", false,-1);
    tracep->declBit(c+113,"regDst", false,-1);
    tracep->declBit(c+114,"isSlt", false,-1);
    tracep->declBit(c+115,"savePC", false,-1);
    tracep->declBit(c+116,"ALUSrc", false,-1);
    tracep->declBit(c+117,"MDSign", false,-1);
    tracep->declBit(c+118,"MDHIWB", false,-1);
    tracep->declBit(c+119,"MDLOWB", false,-1);
    tracep->declBus(c+120,"PCP1", false,-1, 31,2);
    tracep->declBus(c+121,"instr", false,-1, 31,0);
    tracep->declBus(c+122,"rd1", false,-1, 31,0);
    tracep->declBus(c+123,"rd2", false,-1, 31,0);
    tracep->declBus(c+124,"EXTB", false,-1, 31,0);
    tracep->declBus(c+125,"f_rd1", false,-1, 31,0);
    tracep->declBus(c+100,"f_rd2", false,-1, 31,0);
    tracep->declBus(c+126,"ALUB", false,-1, 31,0);
    tracep->declBus(c+127,"ALUC", false,-1, 31,0);
    tracep->declBus(c+128,"EXout", false,-1, 31,0);
    tracep->declBus(c+323,"MDHI", false,-1, 31,0);
    tracep->declBus(c+324,"MDLO", false,-1, 31,0);
    tracep->declBit(c+129,"zero", false,-1);
    tracep->declBus(c+130,"preMemAddr", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+125,"A", false,-1, 31,0);
    tracep->declBus(c+126,"B", false,-1, 31,0);
    tracep->declBus(c+131,"sa", false,-1, 4,0);
    tracep->declBus(c+110,"F", false,-1, 3,0);
    tracep->declBus(c+127,"C", false,-1, 31,0);
    tracep->declBus(c+130,"sum", false,-1, 31,0);
    tracep->declBit(c+129,"zero", false,-1);
    tracep->declBus(c+132,"sll", false,-1, 31,0);
    tracep->declBus(c+133,"srl", false,-1, 31,0);
    tracep->declBus(c+134,"sra", false,-1, 31,0);
    tracep->declBus(c+135,"sllv", false,-1, 31,0);
    tracep->declBus(c+136,"srlv", false,-1, 31,0);
    tracep->declBus(c+137,"srav", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_EX_FORWARD ");
    tracep->declQuad(c+94,"MEM_BACK", false,-1, 37,0);
    tracep->declQuad(c+96,"WB_BACK", false,-1, 37,0);
    tracep->declBit(c+325,"USE_MEM_BACK", false,-1);
    tracep->declBit(c+325,"USE_WB_BACK", false,-1);
    tracep->declBus(c+138,"rs", false,-1, 4,0);
    tracep->declBus(c+139,"rt", false,-1, 4,0);
    tracep->declBus(c+122,"rd1", false,-1, 31,0);
    tracep->declBus(c+123,"rd2", false,-1, 31,0);
    tracep->declBus(c+125,"f_rd1", false,-1, 31,0);
    tracep->declBus(c+100,"f_rd2", false,-1, 31,0);
    tracep->declBus(c+140,"WB_Wd", false,-1, 31,0);
    tracep->declBus(c+141,"MEM_Wd", false,-1, 31,0);
    tracep->declBus(c+142,"WB_rd", false,-1, 4,0);
    tracep->declBus(c+143,"MEM_rd", false,-1, 4,0);
    tracep->declBit(c+144,"WB_regWrite", false,-1);
    tracep->declBit(c+145,"MEM_regWrite", false,-1);
    tracep->declBit(c+146,"MEM_EN", false,-1);
    tracep->declBit(c+147,"WB_EN", false,-1);
    tracep->declBit(c+148,"AFromMEM", false,-1);
    tracep->declBit(c+149,"AFromWB", false,-1);
    tracep->declBit(c+150,"oriA", false,-1);
    tracep->declBit(c+151,"BFromMEM", false,-1);
    tracep->declBit(c+152,"BFromWB", false,-1);
    tracep->declBit(c+153,"oriB", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_HazardDetect ");
    tracep->declBus(c+326,"ID_rs", false,-1, 4,0);
    tracep->declBus(c+327,"ID_rt", false,-1, 4,0);
    tracep->declBus(c+87,"EX_rw", false,-1, 4,0);
    tracep->declBus(c+143,"MEM_rw", false,-1, 4,0);
    tracep->declBit(c+180,"ID_uncertainJump", false,-1);
    tracep->declBit(c+154,"EX_memToReg", false,-1);
    tracep->declBit(c+155,"EX_regWrite", false,-1);
    tracep->declBit(c+156,"MEM_memToReg", false,-1);
    tracep->declBit(c+272,"stall", false,-1);
    tracep->declBit(c+157,"LOAD", false,-1);
    tracep->declBit(c+307,"Branch_EX", false,-1);
    tracep->declBit(c+308,"Branch_LOAD", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ID ");
    tracep->declBit(c+300,"clk", false,-1);
    tracep->declBit(c+301,"rst", false,-1);
    tracep->declQuad(c+96,"WB_BACK", false,-1, 37,0);
    tracep->declQuad(c+94,"MEM_BACK", false,-1, 37,0);
    tracep->declBus(c+98,"CP0_EPC", false,-1, 31,2);
    tracep->declBus(c+81,"o_EX_CTRL", false,-1, 15,0);
    tracep->declBit(c+4,"o_MEM_CTRL", false,-1);
    tracep->declBus(c+82,"o_WB_CTRL", false,-1, 4,0);
    tracep->declArray(c+76,"o_EX_DATA", false,-1, 157,0);
    tracep->declBus(c+275,"branchType", false,-1, 2,0);
    tracep->declBit(c+276,"NPCFromEPC", false,-1);
    tracep->declBit(c+277,"ExlSet", false,-1);
    tracep->declBit(c+278,"jmp", false,-1);
    tracep->declBit(c+279,"NPCFromGPR", false,-1);
    tracep->declBit(c+280,"extop", false,-1);
    tracep->declBit(c+281,"exsign", false,-1);
    tracep->declBit(c+282,"o_uncertainJump", false,-1);
    tracep->declBus(c+178,"PCP1", false,-1, 31,2);
    tracep->declBus(c+179,"instr", false,-1, 31,0);
    tracep->declBus(c+140,"WB_Wd", false,-1, 31,0);
    tracep->declBus(c+142,"WB_rw", false,-1, 4,0);
    tracep->declBit(c+144,"WB_regWrite", false,-1);
    tracep->declBus(c+309,"rd1", false,-1, 31,0);
    tracep->declBus(c+310,"rd2", false,-1, 31,0);
    tracep->declBus(c+311,"EXTB", false,-1, 31,0);
    tracep->declBus(c+283,"f_rd1", false,-1, 31,0);
    tracep->declBus(c+284,"f_rd2", false,-1, 31,0);
    tracep->declBit(c+285,"branchAvail", false,-1);
    tracep->pushNamePrefix("EXT ");
    tracep->declBus(c+266,"A", false,-1, 15,0);
    tracep->declBit(c+280,"extop", false,-1);
    tracep->declBit(c+281,"exsign", false,-1);
    tracep->declBus(c+311,"B", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GPR ");
    tracep->declBit(c+300,"clk", false,-1);
    tracep->declBit(c+301,"reset", false,-1);
    tracep->declBit(c+144,"regWrite", false,-1);
    tracep->declBus(c+187,"rs", false,-1, 25,21);
    tracep->declBus(c+188,"rt", false,-1, 20,16);
    tracep->declBus(c+142,"rw", false,-1, 15,11);
    tracep->declBus(c+140,"Wd", false,-1, 31,0);
    tracep->declBus(c+309,"rd1", false,-1, 31,0);
    tracep->declBus(c+310,"rd2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+36+i*1,"register", true,(i+0), 31,0);
    }
    tracep->declBus(c+68,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("jpc ");
    tracep->declBus(c+178,"PC", false,-1, 31,2);
    tracep->declBit(c+285,"branchAvail", false,-1);
    tracep->declBit(c+278,"jmp", false,-1);
    tracep->declBit(c+279,"NPCFromGPR", false,-1);
    tracep->declBit(c+276,"NPCFromEPC", false,-1);
    tracep->declBit(c+277,"goExceptionHandler", false,-1);
    tracep->declBus(c+98,"EPC", false,-1, 31,2);
    tracep->declBus(c+266,"offset", false,-1, 17,2);
    tracep->declBus(c+267,"instr_index", false,-1, 27,2);
    tracep->declBus(c+283,"reg_index", false,-1, 31,0);
    tracep->declBus(c+312,"JPC", false,-1, 31,2);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_BRANCH ");
    tracep->declBus(c+283,"rd1", false,-1, 31,0);
    tracep->declBus(c+284,"rd2", false,-1, 31,0);
    tracep->declBus(c+275,"branchType", false,-1, 2,0);
    tracep->declBit(c+285,"branchAvail", false,-1);
    tracep->declBit(c+286,"eq", false,-1);
    tracep->declBit(c+287,"SF", false,-1);
    tracep->declBit(c+288,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ID_FORWARD ");
    tracep->declQuad(c+94,"MEM_BACK", false,-1, 37,0);
    tracep->declQuad(c+96,"WB_BACK", false,-1, 37,0);
    tracep->declBit(c+325,"USE_MEM_BACK", false,-1);
    tracep->declBit(c+325,"USE_WB_BACK", false,-1);
    tracep->declBus(c+187,"rs", false,-1, 4,0);
    tracep->declBus(c+188,"rt", false,-1, 4,0);
    tracep->declBus(c+309,"rd1", false,-1, 31,0);
    tracep->declBus(c+310,"rd2", false,-1, 31,0);
    tracep->declBus(c+283,"f_rd1", false,-1, 31,0);
    tracep->declBus(c+284,"f_rd2", false,-1, 31,0);
    tracep->declBus(c+140,"WB_Wd", false,-1, 31,0);
    tracep->declBus(c+141,"MEM_Wd", false,-1, 31,0);
    tracep->declBus(c+142,"WB_rd", false,-1, 4,0);
    tracep->declBus(c+143,"MEM_rd", false,-1, 4,0);
    tracep->declBit(c+144,"WB_regWrite", false,-1);
    tracep->declBit(c+145,"MEM_regWrite", false,-1);
    tracep->declBit(c+146,"MEM_EN", false,-1);
    tracep->declBit(c+147,"WB_EN", false,-1);
    tracep->declBit(c+289,"AFromMEM", false,-1);
    tracep->declBit(c+290,"AFromWB", false,-1);
    tracep->declBit(c+291,"oriA", false,-1);
    tracep->declBit(c+292,"BFromMEM", false,-1);
    tracep->declBit(c+293,"BFromWB", false,-1);
    tracep->declBit(c+294,"oriB", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_IF ");
    tracep->declBit(c+300,"clk", false,-1);
    tracep->declBit(c+301,"rst", false,-1);
    tracep->declBus(c+328,"reg_index", false,-1, 31,0);
    tracep->declBus(c+329,"EX_instr", false,-1, 25,0);
    tracep->declBus(c+69,"IF_PC", false,-1, 31,2);
    tracep->declBus(c+295,"NPC", false,-1, 31,2);
    tracep->declBus(c+158,"IF_instr", false,-1, 31,0);
    tracep->declBus(c+70,"ID_instr", false,-1, 31,0);
    tracep->declBit(c+71,"firstFetch", false,-1);
    tracep->declBus(c+69,"ID_PCP1", false,-1, 31,2);
    tracep->pushNamePrefix("IM ");
    tracep->declBit(c+300,"clk", false,-1);
    tracep->declBit(c+274,"ce", false,-1);
    tracep->declBus(c+296,"addr", false,-1, 15,2);
    tracep->declBus(c+158,"instruct", false,-1, 31,0);
    tracep->declBus(c+297,"index", false,-1, 10,0);
    tracep->pushNamePrefix("u_imrom ");
    tracep->declBit(c+300,"clka", false,-1);
    tracep->declBus(c+297,"addra", false,-1, 12,2);
    tracep->declBit(c+322,"wea", false,-1);
    tracep->declBus(c+330,"dina", false,-1, 31,0);
    tracep->declBit(c+274,"ena", false,-1);
    tracep->declBus(c+158,"douta", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc ");
    tracep->declBus(c+295,"NPC", false,-1, 31,2);
    tracep->declBit(c+300,"clk", false,-1);
    tracep->declBit(c+301,"reset", false,-1);
    tracep->declBit(c+274,"PCWrite", false,-1);
    tracep->declBus(c+69,"PC", false,-1, 31,2);
    tracep->declBus(c+72,"line", false,-1, 29,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_MEM ");
    tracep->declBit(c+300,"clk", false,-1);
    tracep->declBit(c+301,"rst", false,-1);
    tracep->declBit(c+322,"MEM_FLUSH", false,-1);
    tracep->declBit(c+5,"MEM_CTRL", false,-1);
    tracep->declBus(c+2,"PrRD", false,-1, 31,0);
    tracep->declBus(c+73,"PrAddr", false,-1, 31,2);
    tracep->declBus(c+74,"PrWD", false,-1, 31,0);
    tracep->declBus(c+75,"PrBE", false,-1, 3,0);
    tracep->declBit(c+30,"IOWrite", false,-1);
    tracep->declBus(c+83,"WB_CTRL", false,-1, 4,0);
    tracep->declArray(c+31,"pre_MEM_DATA", false,-1, 66,0);
    tracep->declArray(c+84,"MEM_DATA", false,-1, 68,0);
    tracep->declBus(c+90,"o_WB_CTRL", false,-1, 4,0);
    tracep->declArray(c+91,"o_WB_DATA", false,-1, 68,0);
    tracep->declQuad(c+94,"o_MEM_BACK", false,-1, 37,0);
    tracep->declBus(c+141,"EXout", false,-1, 31,0);
    tracep->declBus(c+159,"rd2", false,-1, 31,0);
    tracep->declBus(c+160,"MEMout", false,-1, 31,0);
    tracep->declBus(c+130,"preEXout", false,-1, 31,0);
    tracep->declBus(c+100,"prerd2", false,-1, 31,0);
    tracep->declBus(c+143,"rw", false,-1, 4,0);
    tracep->declBit(c+161,"isDMByte", false,-1);
    tracep->declBit(c+162,"isDMHalf", false,-1);
    tracep->declBit(c+4,"memWrite", false,-1);
    tracep->declBus(c+6,"Dout", false,-1, 31,0);
    tracep->declBus(c+75,"be", false,-1, 3,0);
    tracep->declBit(c+163,"preAddrInDM", false,-1);
    tracep->declBit(c+35,"DMWrite", false,-1);
    tracep->declBit(c+164,"AddrInDM", false,-1);
    tracep->pushNamePrefix("U_BEEXT ");
    tracep->declBit(c+161,"isByte", false,-1);
    tracep->declBit(c+162,"isHalf", false,-1);
    tracep->declBus(c+165,"low_addr", false,-1, 1,0);
    tracep->declBus(c+75,"be", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dm_ram ");
    tracep->declBus(c+166,"addra", false,-1, 13,2);
    tracep->declBit(c+163,"ena", false,-1);
    tracep->declBus(c+167,"wea", false,-1, 3,0);
    tracep->declBit(c+300,"clka", false,-1);
    tracep->declBus(c+74,"dina", false,-1, 31,0);
    tracep->declBus(c+6,"douta", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_WB ");
    tracep->declBit(c+300,"clk", false,-1);
    tracep->declBit(c+301,"rst", false,-1);
    tracep->declBus(c+90,"WB_CTRL", false,-1, 4,0);
    tracep->declArray(c+91,"WB_DATA", false,-1, 68,0);
    tracep->declQuad(c+96,"o_WB_BACK", false,-1, 37,0);
    tracep->declBit(c+144,"regWrite", false,-1);
    tracep->declBit(c+168,"memToReg", false,-1);
    tracep->declBit(c+169,"isDMByte", false,-1);
    tracep->declBit(c+170,"isDMHalf", false,-1);
    tracep->declBit(c+171,"isLOADS", false,-1);
    tracep->declBus(c+172,"EXout", false,-1, 31,0);
    tracep->declBus(c+173,"Dout", false,-1, 31,0);
    tracep->declBus(c+142,"rw", false,-1, 4,0);
    tracep->declBus(c+174,"EXT_Dout", false,-1, 31,0);
    tracep->declBus(c+140,"WB_Wd", false,-1, 31,0);
    tracep->pushNamePrefix("U_DREXT ");
    tracep->declBit(c+169,"isByte", false,-1);
    tracep->declBit(c+170,"isHalf", false,-1);
    tracep->declBit(c+171,"exsign", false,-1);
    tracep->declBus(c+175,"low_addr", false,-1, 1,0);
    tracep->declBus(c+173,"in_data", false,-1, 31,0);
    tracep->declBus(c+174,"out_data", false,-1, 31,0);
    tracep->declBus(c+176,"half", false,-1, 15,0);
    tracep->declBus(c+177,"shift_bit", false,-1, 4,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_BRIDGE ");
    tracep->declBit(c+300,"clk", false,-1);
    tracep->declBus(c+73,"PrAddrWire", false,-1, 31,2);
    tracep->declBus(c+74,"PrWDWire", false,-1, 31,0);
    tracep->declBus(c+75,"PrBEWire", false,-1, 3,0);
    tracep->declBit(c+30,"WeCPUWire", false,-1);
    tracep->declBus(c+2,"PrRD", false,-1, 31,0);
    tracep->declBus(c+3,"HWInt", false,-1, 7,2);
    tracep->declBus(c+302,"o_led", false,-1, 7,0);
    tracep->declBus(c+303,"seg7_seg", false,-1, 7,0);
    tracep->declBus(c+305,"seg7_select", false,-1, 7,0);
    tracep->declBus(c+7,"PrAddr", false,-1, 31,2);
    tracep->declBus(c+8,"PrWD", false,-1, 31,0);
    tracep->declBus(c+9,"PrBE", false,-1, 3,0);
    tracep->declBit(c+10,"WeCPU", false,-1);
    tracep->declBus(c+331,"DEV_Addr", false,-1, 7,2);
    tracep->declBus(c+332,"DEV0_RD", false,-1, 31,0);
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
    tracep->declBit(c+300,"clk", false,-1);
    tracep->declBus(c+11,"show", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_counter ");
    tracep->declBus(c+8,"D", false,-1, 31,0);
    tracep->declBit(c+18,"WE", false,-1);
    tracep->declBit(c+300,"clk", false,-1);
    tracep->declBit(c+19,"INT", false,-1);
    tracep->declBus(c+20,"cnt", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_seg7 ");
    tracep->declBus(c+8,"D", false,-1, 31,0);
    tracep->declBit(c+21,"A", false,-1);
    tracep->declBus(c+9,"be", false,-1, 3,0);
    tracep->declBit(c+300,"clk", false,-1);
    tracep->declBit(c+22,"we", false,-1);
    tracep->declBus(c+12,"Dout", false,-1, 31,0);
    tracep->declBus(c+303,"seg", false,-1, 7,0);
    tracep->declBus(c+305,"select", false,-1, 7,0);
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

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_controller__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_controller__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+300,"clk", false,-1);
    tracep->declBus(c+185,"op", false,-1, 31,26);
    tracep->declBus(c+186,"func", false,-1, 5,0);
    tracep->declBus(c+187,"rs", false,-1, 25,21);
    tracep->declBus(c+188,"rt", false,-1, 20,16);
    tracep->declBus(c+179,"ID_instr", false,-1, 31,0);
    tracep->declBit(c+273,"IF_FLUSH", false,-1);
    tracep->declBit(c+272,"ID_FLUSH", false,-1);
    tracep->declBit(c+333,"EX_FLUSH", false,-1);
    tracep->declBit(c+334,"MEM_FLUSH", false,-1);
    tracep->declBit(c+335,"WB_FLUSH", false,-1);
    tracep->declBus(c+274,"IF_CTRL", false,-1, 0,0);
    tracep->declBus(c+298,"ID_CTRL", false,-1, 8,0);
    tracep->declBus(c+268,"EX_CTRL", false,-1, 15,0);
    tracep->declBus(c+202,"MEM_CTRL", false,-1, 0,0);
    tracep->declBus(c+269,"WB_CTRL", false,-1, 4,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_if_id__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_if_id__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+300,"clk", false,-1);
    tracep->declQuad(c+270,"ID_DATA", false,-1, 61,0);
    tracep->declBus(c+312,"JPC", false,-1, 31,2);
    tracep->declBit(c+299,"jpcAvail", false,-1);
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
    tracep->pushNamePrefix("i_if_id ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_if_id__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_Controller ");
    tracep->pushNamePrefix("i_controller ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_controller__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ID ");
    tracep->pushNamePrefix("i_controller ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_controller__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_if_id ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_if_id__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_IF ");
    tracep->pushNamePrefix("i_controller ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_controller__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_if_id ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__mips__DOT__i_if_id__0(vlSelf, tracep);
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
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC),30);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr),32);
    bufp->fullBit(oldp+71,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__firstFetch));
    bufp->fullIData(oldp+72,((0x3fffffffU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC 
                                             << 2U))),30);
    bufp->fullIData(oldp+73,((vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                              >> 2U)),30);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__PrWD),32);
    bufp->fullCData(oldp+75,(vlSelf->top__DOT__PrBE),4);
    bufp->fullWData(oldp+76,(vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID),158);
    bufp->fullSData(oldp+81,(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID),16);
    bufp->fullCData(oldp+82,(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID),5);
    bufp->fullCData(oldp+83,(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX),5);
    bufp->fullWData(oldp+84,(vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX),69);
    bufp->fullCData(oldp+87,(vlSelf->top__DOT__mips__DOT__EX_rw_from_EX),5);
    bufp->fullQData(oldp+88,((((QData)((IData)((1U 
                                                & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                                   >> 0xeU)))) 
                               << 0x25U) | (((QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                                 >> 0xbU)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn))))),38);
    bufp->fullCData(oldp+90,(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM),5);
    bufp->fullWData(oldp+91,(vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM),69);
    bufp->fullQData(oldp+94,((((QData)((IData)((1U 
                                                & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX) 
                                                   >> 4U)))) 
                               << 0x25U) | (((QData)((IData)(
                                                             vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[1U])) 
                                             << 5U) 
                                            | (QData)((IData)(
                                                              (0x1fU 
                                                               & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U])))))),38);
    bufp->fullQData(oldp+96,((((QData)((IData)((1U 
                                                & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                                   >> 4U)))) 
                               << 0x25U) | (((QData)((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_Wd)) 
                                             << 5U) 
                                            | (QData)((IData)(
                                                              (0x1fU 
                                                               & vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[2U])))))),38);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0),30);
    bufp->fullIData(oldp+99,((1U & ((0xcU == (0x1fU 
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
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn),32);
    bufp->fullCData(oldp+101,((0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                        >> 0xbU))),5);
    bufp->fullBit(oldp+102,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+103,((1U & ((0xcU == (0x1fU 
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
                                                : 0U)))))));
    bufp->fullCData(oldp+104,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM),6);
    bufp->fullBit(oldp+105,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL));
    bufp->fullBit(oldp+106,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE));
    bufp->fullCData(oldp+107,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend),6);
    bufp->fullIData(oldp+108,((((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                << 0xaU) | (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL) 
                                             << 1U) 
                                            | (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)))),32);
    bufp->fullIData(oldp+109,(((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                               << 0xaU)),32);
    bufp->fullCData(oldp+110,((0xfU & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                       >> 6U))),4);
    bufp->fullCData(oldp+111,((7U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                     >> 2U))),3);
    bufp->fullBit(oldp+112,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+113,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+114,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+115,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+116,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+117,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                   >> 5U))));
    bufp->fullBit(oldp+118,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                   >> 1U))));
    bufp->fullBit(oldp+119,((1U & (IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID))));
    bufp->fullIData(oldp+120,((0x3fffffffU & vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[4U])),30);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U]),32);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[2U]),32);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[1U]),32);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[0U]),32);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1),32);
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB),32);
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC),32);
    bufp->fullIData(oldp+128,(((0x1000U & (IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID))
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
    bufp->fullBit(oldp+129,((0U == vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC)));
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr),32);
    bufp->fullCData(oldp+131,((0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                        >> 6U))),5);
    bufp->fullIData(oldp+132,((vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                               << (0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                            >> 6U)))),32);
    bufp->fullIData(oldp+133,((vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                               >> (0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                            >> 6U)))),32);
    bufp->fullIData(oldp+134,(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB, 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                 >> 6U)))),32);
    bufp->fullIData(oldp+135,(((0x1fU >= vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                   << vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                : 0U)),32);
    bufp->fullIData(oldp+136,(((0x1fU >= vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                   >> vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                : 0U)),32);
    bufp->fullIData(oldp+137,(((0x1fU >= vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                ? VL_SHIFTRS_III(32,32,32, vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB, vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                : (- (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                      >> 0x1fU)))),32);
    bufp->fullCData(oldp+138,((0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                        >> 0x15U))),5);
    bufp->fullCData(oldp+139,((0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                        >> 0x10U))),5);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_Wd),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[1U]),32);
    bufp->fullCData(oldp+142,((0x1fU & vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[2U])),5);
    bufp->fullCData(oldp+143,((0x1fU & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U])),5);
    bufp->fullBit(oldp+144,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                   >> 4U))));
    bufp->fullBit(oldp+145,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX) 
                                   >> 4U))));
    bufp->fullBit(oldp+146,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN));
    bufp->fullBit(oldp+147,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN));
    bufp->fullBit(oldp+148,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM));
    bufp->fullBit(oldp+149,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB));
    bufp->fullBit(oldp+150,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM)) 
                                   & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB))))));
    bufp->fullBit(oldp+151,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM));
    bufp->fullBit(oldp+152,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB));
    bufp->fullBit(oldp+153,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM)) 
                                   & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB))))));
    bufp->fullBit(oldp+154,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID) 
                                   >> 3U))));
    bufp->fullBit(oldp+155,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID) 
                                   >> 4U))));
    bufp->fullBit(oldp+156,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX) 
                                   >> 3U))));
    bufp->fullBit(oldp+157,((((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID) 
                              >> 3U) & (IData)(vlSelf->top__DOT__mips__DOT__u_HazardDetect__DOT____VdfgTmp_h6c4ba390__0))));
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_instr),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[0U]),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__mips__DOT__u_MEM__DOT__MEMout),32);
    bufp->fullBit(oldp+161,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID) 
                                   >> 2U))));
    bufp->fullBit(oldp+162,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID) 
                                   >> 1U))));
    bufp->fullBit(oldp+163,((0x3000U > (0xffffU & vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr))));
    bufp->fullBit(oldp+164,((0x3000U > (0xffffU & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[1U]))));
    bufp->fullCData(oldp+165,((3U & vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr)),2);
    bufp->fullSData(oldp+166,((0xfffU & (vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                                         >> 2U))),12);
    bufp->fullCData(oldp+167,(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea),4);
    bufp->fullBit(oldp+168,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                   >> 3U))));
    bufp->fullBit(oldp+169,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                   >> 2U))));
    bufp->fullBit(oldp+170,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                   >> 1U))));
    bufp->fullBit(oldp+171,((1U & (IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM))));
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[1U]),32);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[0U]),32);
    bufp->fullIData(oldp+174,(((4U & (IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM))
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
    bufp->fullCData(oldp+175,((3U & vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[1U])),2);
    bufp->fullSData(oldp+176,((0xffffU & vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0)),16);
    bufp->fullCData(oldp+177,((0x18U & (vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[1U] 
                                        << 3U))),5);
    bufp->fullIData(oldp+178,((0x3fffffffU & (IData)(
                                                     (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                      >> 0x20U)))),30);
    bufp->fullIData(oldp+179,((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)),32);
    bufp->fullBit(oldp+180,(vlSelf->top__DOT__mips__DOT__ID_uncertainJump));
    bufp->fullBit(oldp+181,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC));
    bufp->fullCData(oldp+182,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sll)
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
    bufp->fullCData(oldp+183,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__branchType),3);
    bufp->fullCData(oldp+184,(((IData)((0x11ULL == 
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
    bufp->fullCData(oldp+185,((0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                >> 0x1aU)))),6);
    bufp->fullCData(oldp+186,((0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))),6);
    bufp->fullCData(oldp+187,((0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                >> 0x15U)))),5);
    bufp->fullCData(oldp+188,((0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                >> 0x10U)))),5);
    bufp->fullBit(oldp+189,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp));
    bufp->fullBit(oldp+190,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR));
    bufp->fullBit(oldp+191,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add) 
                             | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
                                | (0xfU == (0x3fU & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x1aU))))))));
    bufp->fullBit(oldp+192,(((8U == (0x3fU & (IData)(
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
    bufp->fullBit(oldp+193,((IData)((0x40000000ULL 
                                     == (0xffe00000ULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
    bufp->fullBit(oldp+194,((IData)((0x40800000ULL 
                                     == (0xffe00000ULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
    bufp->fullBit(oldp+195,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                             | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                   | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB))))));
    bufp->fullBit(oldp+196,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt) 
                             | (0xaU == (0x3fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU)))))));
    bufp->fullBit(oldp+197,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC));
    bufp->fullBit(oldp+198,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                             | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1faed734__0))));
    bufp->fullBit(oldp+199,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                             | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div))));
    bufp->fullBit(oldp+200,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB));
    bufp->fullBit(oldp+201,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB));
    bufp->fullBit(oldp+202,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite));
    bufp->fullBit(oldp+203,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                             | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                   | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB) 
                                      | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                                         | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC))))))));
    bufp->fullBit(oldp+204,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg));
    bufp->fullBit(oldp+205,(((0x20U == (0x3fU & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x1aU)))) 
                             | ((0x24U == (0x3fU & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                            >> 0x1aU)))) 
                                | (0x28U == (0x3fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))))));
    bufp->fullBit(oldp+206,(((0x21U == (0x3fU & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x1aU)))) 
                             | ((0x25U == (0x3fU & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                            >> 0x1aU)))) 
                                | (0x29U == (0x3fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))))));
    bufp->fullBit(oldp+207,(((0x20U == (0x3fU & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x1aU)))) 
                             | (0x21U == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU)))))));
    bufp->fullBit(oldp+208,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add));
    bufp->fullBit(oldp+209,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub));
    bufp->fullBit(oldp+210,((0xdU == (0x3fU & (IData)(
                                                      (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                       >> 0x1aU))))));
    bufp->fullBit(oldp+211,((4U == (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+212,((0x2bU == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
    bufp->fullBit(oldp+213,((0x23U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
    bufp->fullBit(oldp+214,((0xfU == (0x3fU & (IData)(
                                                      (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                       >> 0x1aU))))));
    bufp->fullBit(oldp+215,((2U == (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+216,((3U == (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+217,((IData)((8ULL == (0xfc00003fULL 
                                              & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
    bufp->fullBit(oldp+218,((8U == (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+219,((9U == (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+220,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt));
    bufp->fullBit(oldp+221,((0xaU == (0x3fU & (IData)(
                                                      (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                       >> 0x1aU))))));
    bufp->fullBit(oldp+222,((0x20U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
    bufp->fullBit(oldp+223,((0x24U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
    bufp->fullBit(oldp+224,((0x21U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
    bufp->fullBit(oldp+225,((0x25U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
    bufp->fullBit(oldp+226,((0x28U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
    bufp->fullBit(oldp+227,((0x29U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
    bufp->fullBit(oldp+228,((IData)((0x21ULL == (0xfc00003fULL 
                                                 & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
    bufp->fullBit(oldp+229,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__subu));
    bufp->fullBit(oldp+230,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND));
    bufp->fullBit(oldp+231,((0xcU == (0x3fU & (IData)(
                                                      (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                       >> 0x1aU))))));
    bufp->fullBit(oldp+232,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR));
    bufp->fullBit(oldp+233,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR));
    bufp->fullBit(oldp+234,((0xeU == (0x3fU & (IData)(
                                                      (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                       >> 0x1aU))))));
    bufp->fullBit(oldp+235,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NOR));
    bufp->fullBit(oldp+236,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sll));
    bufp->fullBit(oldp+237,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sllv));
    bufp->fullBit(oldp+238,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srl));
    bufp->fullBit(oldp+239,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srlv));
    bufp->fullBit(oldp+240,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sra));
    bufp->fullBit(oldp+241,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srav));
    bufp->fullBit(oldp+242,((5U == (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+243,((7U == (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+244,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bltz));
    bufp->fullBit(oldp+245,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bgez));
    bufp->fullBit(oldp+246,((6U == (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+247,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr));
    bufp->fullBit(oldp+248,((IData)((0x11ULL == (0xfc00003fULL 
                                                 & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
    bufp->fullBit(oldp+249,((IData)((0x13ULL == (0xfc00003fULL 
                                                 & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
    bufp->fullBit(oldp+250,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult));
    bufp->fullBit(oldp+251,((IData)((0x19ULL == (0xfc00003fULL 
                                                 & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
    bufp->fullBit(oldp+252,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div));
    bufp->fullBit(oldp+253,((IData)((0x1bULL == (0xfc00003fULL 
                                                 & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
    bufp->fullBit(oldp+254,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__Branch));
    bufp->fullBit(oldp+255,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR));
    bufp->fullBit(oldp+256,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA));
    bufp->fullBit(oldp+257,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp) 
                             | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR))));
    bufp->fullBit(oldp+258,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h4e50702c__0) 
                             | ((8U == (0x3fU & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x1aU)))) 
                                | ((9U == (0x3fU & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                            >> 0x1aU)))) 
                                   | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1faed734__0))))));
    bufp->fullBit(oldp+259,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
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
    bufp->fullBit(oldp+260,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR) 
                             | ((0xdU == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU)))) 
                                | (0xfU == (0x3fU & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x1aU))))))));
    bufp->fullBit(oldp+261,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND) 
                             | (0xcU == (0x3fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU)))))));
    bufp->fullBit(oldp+262,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR) 
                             | (0xeU == (0x3fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU)))))));
    bufp->fullBit(oldp+263,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ALURs));
    bufp->fullBit(oldp+264,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                             | (IData)((0x19ULL == 
                                        (0xfc00003fULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))));
    bufp->fullBit(oldp+265,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div) 
                             | (IData)((0x1bULL == 
                                        (0xfc00003fULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))));
    bufp->fullSData(oldp+266,((0xffffU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))),16);
    bufp->fullIData(oldp+267,((0x3ffffffU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))),26);
    bufp->fullSData(oldp+268,(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.EX_CTRL),16);
    bufp->fullCData(oldp+269,(((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
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
    bufp->fullQData(oldp+270,(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA),62);
    bufp->fullBit(oldp+272,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ID_FLUSH));
    bufp->fullBit(oldp+273,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__IF_FLUSH));
    bufp->fullBit(oldp+274,((1U & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ID_FLUSH)))));
    bufp->fullCData(oldp+275,((7U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                     >> 2U))),3);
    bufp->fullBit(oldp+276,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                   >> 8U))));
    bufp->fullBit(oldp+277,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                   >> 7U))));
    bufp->fullBit(oldp+278,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                   >> 6U))));
    bufp->fullBit(oldp+279,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                   >> 5U))));
    bufp->fullBit(oldp+280,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                   >> 1U))));
    bufp->fullBit(oldp+281,((1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))));
    bufp->fullBit(oldp+282,((IData)((0U != (0x3cU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))))));
    bufp->fullIData(oldp+283,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1),32);
    bufp->fullIData(oldp+284,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd2),32);
    bufp->fullBit(oldp+285,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail));
    bufp->fullBit(oldp+286,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq));
    bufp->fullBit(oldp+287,((vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                             >> 0x1fU)));
    bufp->fullBit(oldp+288,((0U == vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1)));
    bufp->fullBit(oldp+289,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM));
    bufp->fullBit(oldp+290,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB));
    bufp->fullBit(oldp+291,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM)) 
                                   & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB))))));
    bufp->fullBit(oldp+292,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM));
    bufp->fullBit(oldp+293,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB));
    bufp->fullBit(oldp+294,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM)) 
                                   & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB))))));
    bufp->fullIData(oldp+295,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__NPC),30);
    bufp->fullSData(oldp+296,((0x3fffU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__NPC)),14);
    bufp->fullSData(oldp+297,((0x7ffU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__NPC 
                                         - (IData)(0x400U)))),11);
    bufp->fullSData(oldp+298,(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL),9);
    bufp->fullBit(oldp+299,((IData)(((0U != (0x1e0U 
                                             & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))) 
                                     | (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail)))));
    bufp->fullBit(oldp+300,(vlSelf->clk));
    bufp->fullBit(oldp+301,(vlSelf->rst));
    bufp->fullCData(oldp+302,(vlSelf->led),8);
    bufp->fullCData(oldp+303,(vlSelf->seg7_seg),8);
    bufp->fullCData(oldp+304,(vlSelf->seg7_seg1),8);
    bufp->fullCData(oldp+305,(vlSelf->seg7_select),8);
    bufp->fullCData(oldp+306,((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__IF_FLUSH) 
                                << 1U) | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC))),2);
    bufp->fullBit(oldp+307,(((IData)(vlSelf->top__DOT__mips__DOT__ID_uncertainJump) 
                             & ((IData)((0U != (0x18U 
                                                & (IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID)))) 
                                & ((0U != (IData)(vlSelf->top__DOT__mips__DOT__EX_rw_from_EX)) 
                                   & (IData)(vlSelf->top__DOT__mips__DOT__u_HazardDetect__DOT____VdfgTmp_h6c4ba390__0))))));
    bufp->fullBit(oldp+308,(((IData)(vlSelf->top__DOT__mips__DOT__ID_uncertainJump) 
                             & (((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX) 
                                 >> 3U) & (((0x1fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__mips__DOT__ID_DATA_from_IF 
                                                        >> 0x15U))) 
                                            == (0x1fU 
                                                & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U])) 
                                           | ((0x1fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__mips__DOT__ID_DATA_from_IF 
                                                          >> 0x10U))) 
                                              == (0x1fU 
                                                  & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U])))))));
    bufp->fullIData(oldp+309,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
                              [(0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                 >> 0x15U)))]),32);
    bufp->fullIData(oldp+310,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
                              [(0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                 >> 0x10U)))]),32);
    bufp->fullIData(oldp+311,(((1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))
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
    bufp->fullIData(oldp+312,((0x3fffffffU & ((0x1060U 
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
    bufp->fullQData(oldp+313,(vlSelf->top__DOT__mips__DOT__ID_DATA_from_IF),62);
    bufp->fullBit(oldp+315,(vlSelf->top__DOT__mips__DOT__IF_CTRL));
    bufp->fullSData(oldp+316,(vlSelf->top__DOT__mips__DOT__ID_CTRL),9);
    bufp->fullSData(oldp+317,(vlSelf->top__DOT__mips__DOT__EX_CTRL),16);
    bufp->fullBit(oldp+318,(vlSelf->top__DOT__mips__DOT__MEM_CTRL));
    bufp->fullCData(oldp+319,(vlSelf->top__DOT__mips__DOT__WB_CTRL),5);
    bufp->fullIData(oldp+320,(vlSelf->top__DOT__mips__DOT__JPC),30);
    bufp->fullBit(oldp+321,(vlSelf->top__DOT__mips__DOT__jpcAvail));
    bufp->fullBit(oldp+322,(0U));
    bufp->fullIData(oldp+323,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__MDHI),32);
    bufp->fullIData(oldp+324,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__MDLO),32);
    bufp->fullBit(oldp+325,(1U));
    bufp->fullCData(oldp+326,((0x1fU & (IData)((vlSelf->top__DOT__mips__DOT__ID_DATA_from_IF 
                                                >> 0x15U)))),5);
    bufp->fullCData(oldp+327,((0x1fU & (IData)((vlSelf->top__DOT__mips__DOT__ID_DATA_from_IF 
                                                >> 0x10U)))),5);
    bufp->fullIData(oldp+328,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__reg_index),32);
    bufp->fullIData(oldp+329,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__EX_instr),26);
    bufp->fullIData(oldp+330,(0U),32);
    bufp->fullCData(oldp+331,(vlSelf->top__DOT__u_BRIDGE__DOT__DEV_Addr),6);
    bufp->fullIData(oldp+332,(vlSelf->top__DOT__u_BRIDGE__DOT__DEV0_RD),32);
    bufp->fullBit(oldp+333,(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.__PVT__EX_FLUSH));
    bufp->fullBit(oldp+334,(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.__PVT__MEM_FLUSH));
    bufp->fullBit(oldp+335,(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.__PVT__WB_FLUSH));
}
