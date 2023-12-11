// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOP_H_
#define _VTOP_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;
class Vtop_IBridge;
class Vtop_IController;
class Vtop_IIF_ID;
class Vtop_IID_EX;
class Vtop_IEX_MEM;
class Vtop_IMEM_WB;
class Vtop_IBypass;
class Vtop_ICP0;
class Vtop_IStallDetect;
class Vtop_IBranchCorrect;


//----------

VL_MODULE(Vtop) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vtop_IBridge* __PVT__top__DOT__i_bridge;
    Vtop_IController* __PVT__top__DOT__mips__DOT__i_controller;
    Vtop_IIF_ID* __PVT__top__DOT__mips__DOT__i_if_id;
    Vtop_IID_EX* __PVT__top__DOT__mips__DOT__i_id_ex;
    Vtop_IEX_MEM* __PVT__top__DOT__mips__DOT__i_ex_mem;
    Vtop_IMEM_WB* __PVT__top__DOT__mips__DOT__i_mem_wb;
    Vtop_IBypass* __PVT__top__DOT__mips__DOT__i_bypass;
    Vtop_ICP0* __PVT__top__DOT__mips__DOT__i_cp0;
    Vtop_IStallDetect* __PVT__top__DOT__mips__DOT__i_stallDetect;
    Vtop_IBranchCorrect* __PVT__top__DOT__mips__DOT__i_branchCorrect;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(led,7,0);
    VL_OUT8(seg7_seg,7,0);
    VL_OUT8(seg7_seg1,7,0);
    VL_OUT8(seg7_select,7,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__mips__DOT__u_IF__DOT__firstFetch;
        CData/*2:0*/ top__DOT__mips__DOT__u_Controller__DOT__branchType;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__ID_FLUSH;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__ExlSet;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__jmp;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__savePC;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__add;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__sub;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__jr;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__slt;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__addu;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__subu;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__AND;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__OR;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__XOR;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__NOR;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__sll;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__sllv;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__srl;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__srlv;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__sra;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__srav;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__bltz;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__bgez;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__jalr;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__mfhi;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__mflo;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__mult;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__div;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__eret;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__typeR;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__typeIA;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__LOAD;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__STORE;
        CData/*0:0*/ top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__MEM_EN;
        CData/*0:0*/ top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__WB_EN;
        CData/*0:0*/ top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM;
        CData/*0:0*/ top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB;
        CData/*0:0*/ top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM;
        CData/*0:0*/ top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB;
        CData/*0:0*/ top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq;
        CData/*0:0*/ top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN;
        CData/*0:0*/ top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN;
        CData/*0:0*/ top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM;
        CData/*0:0*/ top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB;
        CData/*0:0*/ top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM;
        CData/*0:0*/ top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB;
        CData/*0:0*/ top__DOT__mips__DOT__u_EX__DOT__u_BRANCH__DOT__eq;
        CData/*3:0*/ top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__be;
        CData/*7:0*/ top__DOT__mips__DOT__u_MEM__DOT__U_DREXT__DOT___byte;
        CData/*5:0*/ top__DOT__mips__DOT__u_CP0__DOT__IM;
        CData/*0:0*/ top__DOT__mips__DOT__u_CP0__DOT__EXL;
        CData/*0:0*/ top__DOT__mips__DOT__u_CP0__DOT__IE;
        CData/*5:0*/ top__DOT__mips__DOT__u_CP0__DOT__hwint_pend;
        CData/*3:0*/ top__DOT__u_BRIDGE__DOT__PrBE;
        CData/*0:0*/ top__DOT__u_BRIDGE__DOT__WeCPU;
        CData/*5:0*/ top__DOT__u_BRIDGE__DOT__DEV_Addr;
        CData/*3:0*/ top__DOT__u_BRIDGE__DOT__WeDEV;
        CData/*7:0*/ top__DOT__u_BRIDGE__DOT__u_seg7__DOT__newSeg;
        CData/*7:0*/ top__DOT__u_BRIDGE__DOT__u_seg7__DOT__newSelect;
        SData/*15:0*/ top__DOT__mips__DOT__u_MEM__DOT__U_DREXT__DOT__half;
        SData/*9:0*/ top__DOT__u_BRIDGE__DOT__u_seg7__DOT__pause;
        IData/*31:0*/ top__DOT__mips__DOT__u_IF__DOT__reg_index;
    };
    struct {
        IData/*25:0*/ top__DOT__mips__DOT__u_IF__DOT__EX_instr;
        IData/*29:0*/ top__DOT__mips__DOT__u_IF__DOT__IF_PC;
        IData/*29:0*/ top__DOT__mips__DOT__u_IF__DOT__NPC;
        IData/*31:0*/ top__DOT__mips__DOT__u_IF__DOT__IF_instr;
        IData/*31:0*/ top__DOT__mips__DOT__u_IF__DOT__ID_instr;
        IData/*29:0*/ top__DOT__mips__DOT__u_IF__DOT__pc__DOT__line;
        IData/*31:0*/ top__DOT__mips__DOT__u_IF__DOT__pc__DOT__clkCnt;
        IData/*31:0*/ top__DOT__mips__DOT__u_IF__DOT__pc__DOT__fCnt;
        IData/*31:0*/ top__DOT__mips__DOT__u_ID__DOT__f_rd1;
        IData/*31:0*/ top__DOT__mips__DOT__u_ID__DOT__f_rd2;
        IData/*31:0*/ top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__i;
        IData/*31:0*/ top__DOT__mips__DOT__u_EX__DOT__f_rd1;
        IData/*31:0*/ top__DOT__mips__DOT__u_EX__DOT__f_rd2;
        IData/*31:0*/ top__DOT__mips__DOT__u_EX__DOT__ALUB;
        IData/*31:0*/ top__DOT__mips__DOT__u_EX__DOT__ALUC;
        IData/*31:0*/ top__DOT__mips__DOT__u_EX__DOT__MDHI;
        IData/*31:0*/ top__DOT__mips__DOT__u_EX__DOT__MDLO;
        IData/*31:0*/ top__DOT__mips__DOT__u_EX__DOT__accessAddr;
        IData/*31:0*/ top__DOT__mips__DOT__u_MEM__DOT__MEMout;
        IData/*31:0*/ top__DOT__mips__DOT__u_CP0__DOT__PrID;
        IData/*29:0*/ top__DOT__u_BRIDGE__DOT__PrAddr;
        IData/*31:0*/ top__DOT__u_BRIDGE__DOT__PrWD;
        IData/*31:0*/ top__DOT__u_BRIDGE__DOT__DEV0_RD;
        IData/*31:0*/ top__DOT__u_BRIDGE__DOT__DEV1_RD;
        IData/*31:0*/ top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt;
        IData/*18:0*/ top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt;
        IData/*31:0*/ top__DOT__mips__DOT__u_IF__DOT__IM__DOT__u_imrom__DOT__rom[2048];
        IData/*31:0*/ top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[32];
        IData/*31:0*/ top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram[3072];
        IData/*31:0*/ top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[2];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*5:0*/ top__DOT____Vcellout__u_BRIDGE__HWInt;
    CData/*3:0*/ top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT____Vcellinp__u_dm_ram__wea;
    CData/*7:0*/ top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound4;
    CData/*7:0*/ top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound5;
    CData/*7:0*/ top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound6;
    CData/*7:0*/ top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound7;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    SData/*15:0*/ top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound2;
    SData/*15:0*/ top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound3;
    IData/*31:0*/ top__DOT__mips__DOT__u_EX__DOT____Vcellout__u_Access__DMout;
    IData/*31:0*/ top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT____Vcellinp__u_dm_ram__dina;
    IData/*31:0*/ top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound1;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(Vtop__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__5(Vtop__Syms* __restrict vlSymsp);
    static void traceChgThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1__10(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) VL_ATTR_COLD;
    static void traceInitThis__1__11(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) VL_ATTR_COLD;
    static void traceInitThis__1__2(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) VL_ATTR_COLD;
    static void traceInitThis__1__3(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) VL_ATTR_COLD;
    static void traceInitThis__1__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) VL_ATTR_COLD;
    static void traceInitThis__1__5(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) VL_ATTR_COLD;
    static void traceInitThis__1__6(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) VL_ATTR_COLD;
    static void traceInitThis__1__7(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) VL_ATTR_COLD;
    static void traceInitThis__1__8(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) VL_ATTR_COLD;
    static void traceInitThis__1__9(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
