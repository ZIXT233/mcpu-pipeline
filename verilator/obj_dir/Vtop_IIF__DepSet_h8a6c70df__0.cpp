// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_IIF.h"

std::string VL_TO_STRING(const Vtop_IIF* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_IIF::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
