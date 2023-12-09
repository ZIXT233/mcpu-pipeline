// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_IController.h"

VL_ATTR_COLD void Vtop_IController___ctor_var_reset(Vtop_IController* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_IController___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->EX_FLUSH = VL_RAND_RESET_I(1);
    vlSelf->MEM_FLUSH = VL_RAND_RESET_I(1);
    vlSelf->__PVT__WB_FLUSH = VL_RAND_RESET_I(1);
    vlSelf->ID_CTRL = VL_RAND_RESET_I(9);
    vlSelf->EX_CTRL = VL_RAND_RESET_I(16);
}
