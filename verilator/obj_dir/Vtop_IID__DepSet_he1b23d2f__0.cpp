// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_IID.h"

std::string VL_TO_STRING(const Vtop_IID* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_IID::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
