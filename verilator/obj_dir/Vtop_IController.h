// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_ICONTROLLER_H_
#define VERILATED_VTOP_ICONTROLLER_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_IController final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ __PVT__EX_FLUSH;
    CData/*0:0*/ __PVT__MEM_FLUSH;
    CData/*0:0*/ __PVT__WB_FLUSH;
    SData/*8:0*/ ID_CTRL;
    SData/*15:0*/ EX_CTRL;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_IController(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_IController();
    VL_UNCOPYABLE(Vtop_IController);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtop_IController* obj);

#endif  // guard
