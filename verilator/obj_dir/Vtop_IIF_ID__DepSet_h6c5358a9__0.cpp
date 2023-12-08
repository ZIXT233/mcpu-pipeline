// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_IIF_ID.h"

std::string VL_TO_STRING(const Vtop_IIF_ID* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_IIF_ID::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
