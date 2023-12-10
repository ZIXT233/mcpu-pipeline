// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _VTOP_ICONTROLLER_H_
#define _VTOP_ICONTROLLER_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop_IController) {
  public:
    
    // PORTS
    VL_IN8(clk,0,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ EX_FLUSH;
    CData/*0:0*/ MEM_FLUSH;
    CData/*0:0*/ __PVT__WB_FLUSH;
    SData/*8:0*/ ID_CTRL;
    
    // INTERNAL VARIABLES
  private:
    Vtop__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_IController);  ///< Copying not allowed
  public:
    Vtop_IController(const char* name = "TOP");
    ~Vtop_IController();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
