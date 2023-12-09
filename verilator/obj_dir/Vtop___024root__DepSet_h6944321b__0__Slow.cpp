// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt = 0U;
    vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__pause = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
    vlSelf->__Vtrigprevexpr_ha3f5a80b__0 = vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
        [0U];
    vlSelf->__Vtrigprevexpr_ha3f53da3__0 = vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
        [1U];
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 23, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] (top.u_BRIDGE.u_seg7.ram[1'h0]) or [changed] (top.u_BRIDGE.u_seg7.ram[1'h1]))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] (top.u_BRIDGE.u_seg7.ram[1'h0]) or [changed] (top.u_BRIDGE.u_seg7.ram[1'h1]))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->led = VL_RAND_RESET_I(8);
    vlSelf->seg7_seg = VL_RAND_RESET_I(8);
    vlSelf->seg7_seg1 = VL_RAND_RESET_I(8);
    vlSelf->seg7_select = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__PrWD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PrBE = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__HWInt = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__mips__DOT__pipeline_stall = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID);
    vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_ID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__mips__DOT__JPC = VL_RAND_RESET_I(30);
    vlSelf->top__DOT__mips__DOT__jpcAvail = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_EX = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(69, vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX);
    vlSelf->top__DOT__mips__DOT__EX_rw_from_EX = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(69, vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM);
    vlSelf->top__DOT__mips__DOT__MEM_BACK_from_MEM = VL_RAND_RESET_Q(38);
    vlSelf->top__DOT__mips__DOT__WB_BACK_from_WB = VL_RAND_RESET_Q(38);
    vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0 = VL_RAND_RESET_I(30);
    VL_RAND_RESET_W(67, vlSelf->top__DOT__mips__DOT__pre_MEM_DATA_from_EX);
    vlSelf->top__DOT__mips__DOT__Dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_IF__DOT__reg_index = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_IF__DOT__EX_instr = VL_RAND_RESET_I(26);
    vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC = VL_RAND_RESET_I(30);
    vlSelf->top__DOT__mips__DOT__u_IF__DOT__NPC = VL_RAND_RESET_I(30);
    vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_IF__DOT__firstFetch = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->top__DOT__mips__DOT__u_IF__DOT__IM__DOT__u_imrom__DOT__rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__branchType = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__IF_FLUSH = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__subu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NOR = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sll = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sllv = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srlv = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sra = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srav = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bltz = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bgez = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__Branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ALURs = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1faed734__0 = 0;
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h4e50702c__0 = 0;
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__o_MEM_CTRL = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__o_WB_CTRL = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(69, vlSelf->top__DOT__mips__DOT__u_EX__DOT__o_MEM_DATA);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__MDHI = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__MDLO = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT__MEMout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellout__u_dm_ram__douta = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT__isDMByte = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT__isDMHalf = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3072; ++__Vi0) {
        vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hf01ede65__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hc028c573__0 = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hc029c120__0 = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd433fd__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd3b6e7__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd519e0__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd09d0e__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mips__DOT__u_WB__DOT__MEMout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0 = 0;
    vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__mips__DOT__u_CP0__DOT__PrID = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr = VL_RAND_RESET_I(30);
    vlSelf->top__DOT__u_BRIDGE__DOT__PrWD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_BRIDGE__DOT__PrBE = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__u_BRIDGE__DOT__WeCPU = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_BRIDGE__DOT__DEV_Addr = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__u_BRIDGE__DOT__DEV0_RD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_BRIDGE__DOT__DEV1_RD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt = VL_RAND_RESET_I(19);
    vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__pause = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__newSeg = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__newSelect = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1 = 0;
    vlSelf->__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1 = 0;
    vlSelf->__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2 = 0;
    vlSelf->__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2 = 0;
    vlSelf->__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3 = 0;
    vlSelf->__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3 = 0;
    vlSelf->__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4 = 0;
    vlSelf->__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4 = 0;
    vlSelf->__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5 = 0;
    vlSelf->__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5 = 0;
    vlSelf->__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6 = 0;
    vlSelf->__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6 = 0;
    vlSelf->__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_ha3f5a80b__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr_ha3f53da3__0 = VL_RAND_RESET_I(32);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
