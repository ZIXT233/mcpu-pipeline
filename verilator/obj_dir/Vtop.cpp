// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

//==========

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__top__DOT__i_bridge, Vtop_IBridge);
    VL_CELL(__PVT__top__DOT__mips__DOT__i_controller, Vtop_IController);
    VL_CELL(__PVT__top__DOT__mips__DOT__i_if_id, Vtop_IIF_ID);
    VL_CELL(__PVT__top__DOT__mips__DOT__i_id_ex, Vtop_IID_EX);
    VL_CELL(__PVT__top__DOT__mips__DOT__i_ex_mem, Vtop_IEX_MEM);
    VL_CELL(__PVT__top__DOT__mips__DOT__i_mem_wb, Vtop_IMEM_WB);
    VL_CELL(__PVT__top__DOT__mips__DOT__i_bypass, Vtop_IBypass);
    VL_CELL(__PVT__top__DOT__mips__DOT__i_cp0, Vtop_ICP0);
    VL_CELL(__PVT__top__DOT__mips__DOT__i_stallDetect, Vtop_IStallDetect);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop::~Vtop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void Vtop::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.sv", 23, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.sv", 23, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*223:0*/ __Vtemp1[7];
    // Body
    vlTOPp->top__DOT__u_BRIDGE__DOT__DEV1_RD = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0U] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[1U] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[2U] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[3U] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[4U] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[5U] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[6U] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[7U] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[8U] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[9U] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0xaU] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0xbU] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0xcU] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0xdU] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0xeU] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0xfU] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x10U] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x11U] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x12U] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x13U] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x14U] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x15U] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x16U] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x17U] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x18U] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x19U] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x1aU] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x1bU] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x1cU] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x1dU] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x1eU] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x1fU] = 0U;
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__i = 0x20U;
    vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL = 0U;
    vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA = VL_ULL(0);
    vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__pause = 0U;
    vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt = 0U;
    vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[0U] = 0U;
    vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[1U] = 0U;
    vlTOPp->seg7_select = 0U;
    vlTOPp->seg7_seg = 0U;
    vlTOPp->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt = 0xffffffffU;
    vlTOPp->top__DOT__mips__DOT__u_IF__DOT__ID_instr = 0U;
    vlTOPp->top__DOT__mips__DOT__u_IF__DOT__firstFetch = 1U;
    vlTOPp->top__DOT__mips__DOT__u_IF__DOT__IF_PC = 0xbffU;
    vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA = VL_ULL(0);
    vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_CTRL = 0U;
    vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.WB_CTRL = 0U;
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x736f7274U;
    __Vtemp1[2U] = 0x65732f71U;
    __Vtemp1[3U] = 0x5f636f64U;
    __Vtemp1[4U] = 0x6d706c65U;
    __Vtemp1[5U] = 0x2e2f7361U;
    __Vtemp1[6U] = 0x2eU;
    VL_READMEM_N(true, 32, 2048, 0, VL_CVT_PACK_STR_NW(7, __Vtemp1)
                 , vlTOPp->top__DOT__mips__DOT__u_IF__DOT__IM__DOT__u_imrom__DOT__rom
                 , 0, ~VL_ULL(0));
    vlTOPp->top__DOT__mips__DOT__u_CP0__DOT__IM = 0U;
    vlTOPp->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend = 0U;
    vlTOPp->top__DOT__mips__DOT__u_CP0__DOT__PrID = 0xbbaaccffU;
    vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[0U] = 0U;
    vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[1U] = 0U;
    vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[2U] = 0U;
    vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] = 0U;
    vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] = 0U;
    vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL = 0U;
    vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.MEM_CTRL = 0U;
    vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL = 0U;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v1;
    IData/*31:0*/ __Vdlyvval__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0;
    // Body
    __Vdlyvset__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0 = 0U;
    __Vdlyvset__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v1 = 0U;
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__i = 0x20U;
    }
    if (vlTOPp->rst) {
        if ((1U & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
                           >> 0x25U)))) {
            __Vdlyvval__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0 
                = (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
                           >> 5U));
            __Vdlyvset__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0 = 1U;
            __Vdlyvdim0__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0 
                = (0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK));
        }
    } else {
        __Vdlyvset__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v1 = 1U;
    }
    if (vlTOPp->rst) {
        if (((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__ExlSet) 
             | (IData)(vlTOPp->top__DOT__mips__DOT__u_IF__DOT__firstFetch))) {
            vlTOPp->top__DOT__mips__DOT__u_IF__DOT__ID_instr = 0U;
        } else {
            if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.stall)))) {
                vlTOPp->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                    = vlTOPp->top__DOT__mips__DOT__u_IF__DOT__IF_instr;
            }
        }
    } else {
        vlTOPp->top__DOT__mips__DOT__u_IF__DOT__ID_instr = 0U;
    }
    if (vlTOPp->rst) {
        if (VL_UNLIKELY((0xbffU == vlTOPp->top__DOT__mips__DOT__u_IF__DOT__IF_PC))) {
            VL_WRITEF("start\n");
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.stall)))) {
            vlTOPp->top__DOT__mips__DOT__u_IF__DOT__IF_PC 
                = vlTOPp->top__DOT__mips__DOT__u_IF__DOT__NPC;
        }
    } else {
        vlTOPp->top__DOT__mips__DOT__u_IF__DOT__IF_PC = 0xbffU;
    }
    if (__Vdlyvset__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0) {
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[__Vdlyvdim0__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0] 
            = __Vdlyvval__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0;
    }
    if (__Vdlyvset__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v1) {
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0U] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[1U] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[2U] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[3U] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[4U] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[5U] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[6U] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[7U] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[8U] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[9U] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0xaU] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0xbU] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0xcU] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0xdU] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0xeU] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0xfU] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x10U] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x11U] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x12U] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x13U] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x14U] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x15U] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x16U] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x17U] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x18U] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x19U] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x1aU] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x1bU] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x1cU] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x1dU] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x1eU] = 0U;
        vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x1fU] = 0U;
    }
    vlTOPp->top__DOT__mips__DOT__u_IF__DOT__firstFetch 
        = (1U & (~ (IData)(vlTOPp->rst)));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v1;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v2;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v3;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v4;
    CData/*0:0*/ __Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v4;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v5;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v6;
    CData/*7:0*/ __Vdlyvval__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v6;
    CData/*7:0*/ __Vdly__seg7_select;
    CData/*0:0*/ __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1;
    CData/*0:0*/ __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2;
    CData/*0:0*/ __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3;
    CData/*0:0*/ __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4;
    CData/*0:0*/ __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5;
    CData/*0:0*/ __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6;
    CData/*7:0*/ __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v0;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v1;
    SData/*15:0*/ __Vdlyvval__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v1;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v2;
    SData/*15:0*/ __Vdlyvval__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v2;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v3;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v4;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v5;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v6;
    SData/*15:0*/ __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1;
    SData/*15:0*/ __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2;
    IData/*31:0*/ __Vdlyvval__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v0;
    IData/*31:0*/ __Vdly__top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt;
    IData/*31:0*/ __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0;
    // Body
    __Vdly__seg7_select = vlTOPp->seg7_select;
    __Vdly__top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt 
        = vlTOPp->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt;
    __Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v1 = 0U;
    __Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v2 = 0U;
    __Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v3 = 0U;
    __Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v4 = 0U;
    __Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v5 = 0U;
    __Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v6 = 0U;
    __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1 = 0U;
    __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2 = 0U;
    __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3 = 0U;
    __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4 = 0U;
    __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5 = 0U;
    __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.stall)))) {
        vlTOPp->top__DOT__mips__DOT__u_IF__DOT__IF_instr 
            = vlTOPp->top__DOT__mips__DOT__u_IF__DOT__IM__DOT__u_imrom__DOT__rom
            [(0x7ffU & ((0x3fffU & vlTOPp->top__DOT__mips__DOT__u_IF__DOT__NPC) 
                        - (IData)(0x400U)))];
    }
    if ((0U != (IData)(vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__pause))) {
        vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__pause 
            = (0x3ffU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__pause)));
    } else {
        vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
            = (0x7ffffU & ((IData)(1U) + vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt));
        if ((0U == (IData)(vlTOPp->seg7_select))) {
            vlTOPp->seg7_seg = vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__newSeg;
            __Vdly__seg7_select = vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__newSelect;
        } else {
            if (((IData)(vlTOPp->seg7_select) != (IData)(vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__newSelect))) {
                __Vdly__seg7_select = 0U;
                vlTOPp->seg7_seg = 0U;
                vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__pause = 1U;
            }
        }
    }
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT____Vcellout__u_Access__DMout 
        = ((0xbffU >= (0xfffU & (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr 
                                 >> 2U))) ? vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram
           [(0xfffU & (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr 
                       >> 2U))] : 0U);
    if (VL_UNLIKELY((2U & (IData)(vlTOPp->top__DOT__u_BRIDGE__DOT__WeDEV)))) {
        VL_WRITEF("%11d\n",32,vlTOPp->top__DOT__u_BRIDGE__DOT__PrWD);
        vlTOPp->top__DOT__u_BRIDGE__DOT__DEV1_RD = vlTOPp->top__DOT__u_BRIDGE__DOT__PrWD;
    }
    if ((1U & (IData)(vlTOPp->top__DOT__u_BRIDGE__DOT__WeDEV))) {
        __Vdly__top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt 
            = vlTOPp->top__DOT__u_BRIDGE__DOT__PrWD;
    } else {
        if ((0U < vlTOPp->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt)) {
            __Vdly__top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt 
                = (vlTOPp->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt 
                   - (IData)(1U));
        }
    }
    if ((0x3000U > (0xffffU & vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr))) {
        if ((0xfU == (IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT____Vcellinp__u_dm_ram__wea))) {
            vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound1 
                = vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT____Vcellinp__u_dm_ram__dina;
            if ((0xbffU >= (0xfffU & (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr 
                                      >> 2U)))) {
                __Vdlyvval__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v0 
                    = vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound1;
                __Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v0 = 1U;
                __Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v0 
                    = (0xfffU & (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr 
                                 >> 2U));
            }
        } else {
            if ((3U == (IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT____Vcellinp__u_dm_ram__wea))) {
                vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound2 
                    = (0xffffU & vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT____Vcellinp__u_dm_ram__dina);
                if ((0xbffU >= (0xfffU & (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr 
                                          >> 2U)))) {
                    __Vdlyvval__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v1 
                        = vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound2;
                    __Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v1 = 1U;
                    __Vdlyvlsb__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v1 = 0U;
                    __Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v1 
                        = (0xfffU & (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr 
                                     >> 2U));
                }
            } else {
                if ((0xcU == (IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT____Vcellinp__u_dm_ram__wea))) {
                    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound3 
                        = (0xffffU & (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT____Vcellinp__u_dm_ram__dina 
                                      >> 0x10U));
                    if ((0xbffU >= (0xfffU & (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr 
                                              >> 2U)))) {
                        __Vdlyvval__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v2 
                            = vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound3;
                        __Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v2 = 1U;
                        __Vdlyvlsb__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v2 = 0x10U;
                        __Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v2 
                            = (0xfffU & (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr 
                                         >> 2U));
                    }
                } else {
                    if ((1U == (IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT____Vcellinp__u_dm_ram__wea))) {
                        vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound4 
                            = (0xffU & vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT____Vcellinp__u_dm_ram__dina);
                        if ((0xbffU >= (0xfffU & (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr 
                                                  >> 2U)))) {
                            __Vdlyvval__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v3 
                                = vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound4;
                            __Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v3 = 1U;
                            __Vdlyvlsb__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v3 = 0U;
                            __Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v3 
                                = (0xfffU & (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr 
                                             >> 2U));
                        }
                    } else {
                        if ((2U == (IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT____Vcellinp__u_dm_ram__wea))) {
                            vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound5 
                                = (0xffU & (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT____Vcellinp__u_dm_ram__dina 
                                            >> 8U));
                            if ((0xbffU >= (0xfffU 
                                            & (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr 
                                               >> 2U)))) {
                                __Vdlyvval__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v4 
                                    = vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound5;
                                __Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v4 = 1U;
                                __Vdlyvlsb__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v4 = 8U;
                                __Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v4 
                                    = (0xfffU & (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr 
                                                 >> 2U));
                            }
                        } else {
                            if ((4U == (IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT____Vcellinp__u_dm_ram__wea))) {
                                vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound6 
                                    = (0xffU & (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT____Vcellinp__u_dm_ram__dina 
                                                >> 0x10U));
                                if ((0xbffU >= (0xfffU 
                                                & (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr 
                                                   >> 2U)))) {
                                    __Vdlyvval__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v5 
                                        = vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound6;
                                    __Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v5 = 1U;
                                    __Vdlyvlsb__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v5 = 0x10U;
                                    __Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v5 
                                        = (0xfffU & 
                                           (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr 
                                            >> 2U));
                                }
                            } else {
                                if ((8U == (IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT____Vcellinp__u_dm_ram__wea))) {
                                    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound7 
                                        = (0xffU & 
                                           (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT____Vcellinp__u_dm_ram__dina 
                                            >> 0x18U));
                                    if ((0xbffU >= 
                                         (0xfffU & 
                                          (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr 
                                           >> 2U)))) {
                                        __Vdlyvval__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v6 
                                            = vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound7;
                                        __Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v6 = 1U;
                                        __Vdlyvlsb__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v6 = 0x18U;
                                        __Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v6 
                                            = (0xfffU 
                                               & (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr 
                                                  >> 2U));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_CTRL 
        = ((~ (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.EX_FLUSH)) 
           & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.MEM_CTRL));
    vlTOPp->top__DOT__u_BRIDGE__DOT__WeCPU = ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.MEM_CTRL) 
                                              & (0x3000U 
                                                 <= 
                                                 (0xffffU 
                                                  & vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr)));
    if ((4U & (IData)(vlTOPp->top__DOT__u_BRIDGE__DOT__WeDEV))) {
        if ((0xfU == (IData)(vlTOPp->top__DOT__u_BRIDGE__DOT__PrBE))) {
            __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0 
                = vlTOPp->top__DOT__u_BRIDGE__DOT__PrWD;
            __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0 = 1U;
            __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0 
                = (1U & vlTOPp->top__DOT__u_BRIDGE__DOT__PrAddr);
        } else {
            if ((3U == (IData)(vlTOPp->top__DOT__u_BRIDGE__DOT__PrBE))) {
                __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1 
                    = (0xffffU & vlTOPp->top__DOT__u_BRIDGE__DOT__PrWD);
                __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1 = 1U;
                __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1 = 0U;
                __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1 
                    = (1U & vlTOPp->top__DOT__u_BRIDGE__DOT__PrAddr);
            } else {
                if ((0xcU == (IData)(vlTOPp->top__DOT__u_BRIDGE__DOT__PrBE))) {
                    __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2 
                        = (0xffffU & (vlTOPp->top__DOT__u_BRIDGE__DOT__PrWD 
                                      >> 0x10U));
                    __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2 = 1U;
                    __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2 = 0x10U;
                    __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2 
                        = (1U & vlTOPp->top__DOT__u_BRIDGE__DOT__PrAddr);
                } else {
                    if ((1U == (IData)(vlTOPp->top__DOT__u_BRIDGE__DOT__PrBE))) {
                        __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3 
                            = (0xffU & vlTOPp->top__DOT__u_BRIDGE__DOT__PrWD);
                        __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3 = 1U;
                        __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3 = 0U;
                        __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3 
                            = (1U & vlTOPp->top__DOT__u_BRIDGE__DOT__PrAddr);
                    } else {
                        if ((2U == (IData)(vlTOPp->top__DOT__u_BRIDGE__DOT__PrBE))) {
                            __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4 
                                = (0xffU & (vlTOPp->top__DOT__u_BRIDGE__DOT__PrWD 
                                            >> 8U));
                            __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4 = 1U;
                            __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4 = 8U;
                            __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4 
                                = (1U & vlTOPp->top__DOT__u_BRIDGE__DOT__PrAddr);
                        } else {
                            if ((4U == (IData)(vlTOPp->top__DOT__u_BRIDGE__DOT__PrBE))) {
                                __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5 
                                    = (0xffU & (vlTOPp->top__DOT__u_BRIDGE__DOT__PrWD 
                                                >> 0x10U));
                                __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5 = 1U;
                                __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5 = 0x10U;
                                __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5 
                                    = (1U & vlTOPp->top__DOT__u_BRIDGE__DOT__PrAddr);
                            } else {
                                if ((8U == (IData)(vlTOPp->top__DOT__u_BRIDGE__DOT__PrBE))) {
                                    __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6 
                                        = (0xffU & 
                                           (vlTOPp->top__DOT__u_BRIDGE__DOT__PrWD 
                                            >> 0x18U));
                                    __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6 = 1U;
                                    __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6 = 0x18U;
                                    __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6 
                                        = (1U & vlTOPp->top__DOT__u_BRIDGE__DOT__PrAddr);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL 
        = ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.MEM_FLUSH)
            ? 0U : (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.WB_CTRL));
    if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.MEM_FLUSH)))) {
        vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA 
            = (((QData)((IData)(((8U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.WB_CTRL))
                                  ? ((4U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.WB_CTRL))
                                      ? ((0xffffff00U 
                                          & (VL_NEGATE_I((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.WB_CTRL) 
                                                                     & ((IData)(vlTOPp->top__DOT__mips__DOT__u_MEM__DOT__U_DREXT__DOT___byte) 
                                                                        >> 7U))))) 
                                             << 8U)) 
                                         | (IData)(vlTOPp->top__DOT__mips__DOT__u_MEM__DOT__U_DREXT__DOT___byte))
                                      : ((2U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.WB_CTRL))
                                          ? ((0xffff0000U 
                                              & (VL_NEGATE_I((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.WB_CTRL) 
                                                                         & ((IData)(vlTOPp->top__DOT__mips__DOT__u_MEM__DOT__U_DREXT__DOT__half) 
                                                                            >> 0xfU))))) 
                                                 << 0x10U)) 
                                             | (IData)(vlTOPp->top__DOT__mips__DOT__u_MEM__DOT__U_DREXT__DOT__half))
                                          : vlTOPp->top__DOT__mips__DOT__u_MEM__DOT__MEMout))
                                  : (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA)))) 
                << 5U) | (QData)((IData)((0x1fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA 
                                                           >> 0x20U))))));
    }
    vlTOPp->seg7_select = __Vdly__seg7_select;
    vlTOPp->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt 
        = __Vdly__top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt;
    if (__Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v0) {
        vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram[__Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v0] 
            = __Vdlyvval__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v0;
    }
    if (__Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v1) {
        vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram[__Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v1] 
            = (((~ ((IData)(0xffffU) << (IData)(__Vdlyvlsb__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v1))) 
                & vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram
                [__Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v1]) 
               | ((IData)(__Vdlyvval__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v1) 
                  << (IData)(__Vdlyvlsb__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v1)));
    }
    if (__Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v2) {
        vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram[__Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v2] 
            = (((~ ((IData)(0xffffU) << (IData)(__Vdlyvlsb__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v2))) 
                & vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram
                [__Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v2]) 
               | ((IData)(__Vdlyvval__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v2) 
                  << (IData)(__Vdlyvlsb__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v2)));
    }
    if (__Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v3) {
        vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram[__Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v3))) 
                & vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram
                [__Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v3]) 
               | ((IData)(__Vdlyvval__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v3) 
                  << (IData)(__Vdlyvlsb__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v3)));
    }
    if (__Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v4) {
        vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram[__Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v4] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v4))) 
                & vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram
                [__Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v4]) 
               | ((IData)(__Vdlyvval__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v4) 
                  << (IData)(__Vdlyvlsb__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v4)));
    }
    if (__Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v5) {
        vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram[__Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v5] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v5))) 
                & vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram
                [__Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v5]) 
               | ((IData)(__Vdlyvval__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v5) 
                  << (IData)(__Vdlyvlsb__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v5)));
    }
    if (__Vdlyvset__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v6) {
        vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram[__Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v6] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v6))) 
                & vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram
                [__Vdlyvdim0__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v6]) 
               | ((IData)(__Vdlyvval__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v6) 
                  << (IData)(__Vdlyvlsb__top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram__v6)));
    }
    if (__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0) {
        vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0] 
            = __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0;
    }
    if (__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1) {
        vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1] 
            = (((~ ((IData)(0xffffU) << (IData)(__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1))) 
                & vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                [__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1]) 
               | ((IData)(__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1) 
                  << (IData)(__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1)));
    }
    if (__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2) {
        vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2] 
            = (((~ ((IData)(0xffffU) << (IData)(__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2))) 
                & vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                [__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2]) 
               | ((IData)(__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2) 
                  << (IData)(__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2)));
    }
    if (__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3) {
        vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3))) 
                & vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                [__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3]) 
               | ((IData)(__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3) 
                  << (IData)(__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3)));
    }
    if (__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4) {
        vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4))) 
                & vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                [__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4]) 
               | ((IData)(__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4) 
                  << (IData)(__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4)));
    }
    if (__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5) {
        vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5))) 
                & vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                [__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5]) 
               | ((IData)(__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5) 
                  << (IData)(__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5)));
    }
    if (__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6) {
        vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6))) 
                & vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                [__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6]) 
               | ((IData)(__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6) 
                  << (IData)(__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6)));
    }
    vlTOPp->seg7_seg1 = vlTOPp->seg7_seg;
    vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__newSelect 
        = (0xffU & (0x80U >> (7U & (vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                    >> 0x10U))));
    vlTOPp->led = (0xffU & vlTOPp->top__DOT__u_BRIDGE__DOT__DEV1_RD);
    vlTOPp->top__DOT____Vcellout__u_BRIDGE__HWInt = 
        ((0x3eU & (IData)(vlTOPp->top__DOT____Vcellout__u_BRIDGE__HWInt)) 
         | (0U == vlTOPp->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt));
    vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.MEM_CTRL 
        = ((~ (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.stall)) 
           & (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__STORE));
    vlTOPp->top__DOT__u_BRIDGE__DOT__PrBE = vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__be;
    vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__newSeg 
        = (0xffU & (vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                    [(1U & (vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                            >> 0x12U))] >> (0x18U & 
                                            (vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                             >> 0xdU))));
    vlTOPp->top__DOT__u_BRIDGE__DOT__PrAddr = (0xfffU 
                                               & (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr 
                                                  >> 2U));
    vlTOPp->top__DOT__u_BRIDGE__DOT__PrWD = (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd2 
                                             << (0x18U 
                                                 & (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr 
                                                    << 3U)));
    vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
        = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                   >> 4U)))) << 0x25U) 
           | vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA);
    vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.WB_CTRL 
        = ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.EX_FLUSH)
            ? 0U : (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL));
    if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.EX_FLUSH)))) {
        vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA 
            = (((QData)((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.EX_rw)) 
                << 0x20U) | (QData)((IData)(((0x1000U 
                                              & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))
                                              ? (1U 
                                                 & (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUC 
                                                    >> 0x1fU))
                                              : ((0x800U 
                                                  & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))
                                                  ? 
                                                 (0xfffffffcU 
                                                  & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
                                                     << 2U))
                                                  : 
                                                 ((0x8000U 
                                                   & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))
                                                   ? 
                                                  ((0xcU 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                                                >> 0x20U))))
                                                    ? 
                                                   (((IData)(vlTOPp->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                                     << 0xaU) 
                                                    | (((IData)(vlTOPp->top__DOT__mips__DOT__u_CP0__DOT__EXL) 
                                                        << 1U) 
                                                       | (IData)(vlTOPp->top__DOT__mips__DOT__u_CP0__DOT__IE)))
                                                    : 
                                                   ((0xdU 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                                                 >> 0x20U))))
                                                     ? 
                                                    ((IData)(vlTOPp->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                                                     << 0xaU)
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                                                  >> 0x20U))))
                                                      ? vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EPC
                                                      : 
                                                     ((0xfU 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                                                   >> 0x20U))))
                                                       ? vlTOPp->top__DOT__mips__DOT__u_CP0__DOT__PrID
                                                       : 0U))))
                                                   : vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUC))))));
    }
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__WB_EN 
        = ((IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
                    >> 0x25U)) & (0U != (0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK))));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN 
        = ((IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
                    >> 0x25U)) & (0U != (0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK))));
    vlTOPp->top__DOT__u_BRIDGE__DOT__WeDEV = (VL_NEGATE_I((IData)((IData)(vlTOPp->top__DOT__u_BRIDGE__DOT__WeCPU))) 
                                              & (((0x81U 
                                                   == 
                                                   (0xffffffU 
                                                    & (vlTOPp->top__DOT__u_BRIDGE__DOT__PrAddr 
                                                       >> 6U))) 
                                                  << 2U) 
                                                 | (((0x80U 
                                                      == 
                                                      (0xffffffU 
                                                       & (vlTOPp->top__DOT__u_BRIDGE__DOT__PrAddr 
                                                          >> 6U))) 
                                                     << 1U) 
                                                    | (0x7fU 
                                                       == 
                                                       (0xffffffU 
                                                        & (vlTOPp->top__DOT__u_BRIDGE__DOT__PrAddr 
                                                           >> 6U))))));
    vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL 
        = ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.stall)
            ? 0U : ((((((((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                          | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__typeR)) 
                         | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__mfhi)) 
                        | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__mflo)) 
                       | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__LOAD)) 
                      | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__savePC)) 
                     << 4U) | (((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__LOAD) 
                                << 3U) | (((((0x20U 
                                              == (0x3fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x1aU)))) 
                                             | (0x24U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                            >> 0x1aU))))) 
                                            | (0x28U 
                                               == (0x3fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                              >> 0x1aU))))) 
                                           << 2U) | 
                                          (((((0x21U 
                                               == (0x3fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                              >> 0x1aU)))) 
                                              | (0x25U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x1aU))))) 
                                             | (0x29U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                            >> 0x1aU))))) 
                                            << 1U) 
                                           | ((0x20U 
                                               == (0x3fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                              >> 0x1aU)))) 
                                              | (0x21U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x1aU))))))))));
    if ((1U & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                       >> 0x25U)))) {
        if ((0xcU == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                       >> 0x20U))))) {
            vlTOPp->top__DOT__mips__DOT__u_CP0__DOT__IE 
                = (1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0));
        }
    }
    if ((1U & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                       >> 0x25U)))) {
        if ((0xcU == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                       >> 0x20U))))) {
            vlTOPp->top__DOT__mips__DOT__u_CP0__DOT__IM 
                = (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                    >> 0xaU)));
        }
    }
    if ((1U & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                       >> 0x25U)))) {
        if ((0xcU == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                       >> 0x20U))))) {
            vlTOPp->top__DOT__mips__DOT__u_CP0__DOT__EXL 
                = (1U & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                 >> 1U)));
        }
    }
    if ((2U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.CP0_CTRL))) {
        vlTOPp->top__DOT__mips__DOT__u_CP0__DOT__EXL = 1U;
    } else {
        if ((1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.CP0_CTRL))) {
            vlTOPp->top__DOT__mips__DOT__u_CP0__DOT__EXL = 0U;
        }
    }
    if ((1U & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                       >> 0x25U)))) {
        if ((0xcU != (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                       >> 0x20U))))) {
            if ((0xeU == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                           >> 0x20U))))) {
                vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EPC 
                    = (0x3fffffffU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                              >> 2U)));
            }
        }
    }
    if ((2U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.CP0_CTRL))) {
        vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EPC 
            = (0x3fffffffU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                      >> 0x20U)));
    }
    vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL 
        = ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.stall)
            ? 0U : ((((0x10U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                  >> 0x1aU)))) 
                      & (0U == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                 >> 0x15U))))) 
                     << 0xfU) | ((((0x10U == (0x3fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x1aU)))) 
                                   & (4U == (0x1fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x15U))))) 
                                  << 0xeU) | ((((((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                                                  | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__jalr)) 
                                                 | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__mfhi)) 
                                                | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__mflo)) 
                                               << 0xdU) 
                                              | ((((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__slt) 
                                                   | (0xaU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                  >> 0x1aU))))) 
                                                  << 0xcU) 
                                                 | (((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__savePC) 
                                                     << 0xbU) 
                                                    | (((((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                                                          | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__LOAD)) 
                                                         | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__STORE)) 
                                                        << 0xaU) 
                                                       | ((((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__sll)
                                                             ? 0U
                                                             : 
                                                            ((((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__OR) 
                                                               | (0xdU 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (IData)(
                                                                             (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                              >> 0x1aU))))) 
                                                              | (0xfU 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                             >> 0x1aU)))))
                                                              ? 1U
                                                              : 
                                                             (((((((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__sub) 
                                                                   | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__subu)) 
                                                                  | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__slt)) 
                                                                 | (0xaU 
                                                                    == 
                                                                    (0x3fU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0x1aU))))) 
                                                                | (4U 
                                                                   == 
                                                                   (0x3fU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                               >> 0x1aU))))) 
                                                               | (5U 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (IData)(
                                                                             (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                              >> 0x1aU)))))
                                                               ? 2U
                                                               : 
                                                              (((((((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__add) 
                                                                    | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__addu)) 
                                                                   | (8U 
                                                                      == 
                                                                      (0x3fU 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0x1aU))))) 
                                                                  | (9U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0x1aU))))) 
                                                                 | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__LOAD)) 
                                                                | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__STORE))
                                                                ? 3U
                                                                : 
                                                               (((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__AND) 
                                                                 | (0xcU 
                                                                    == 
                                                                    (0x3fU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0x1aU)))))
                                                                 ? 4U
                                                                 : 
                                                                (((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__XOR) 
                                                                  | (0xeU 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0x1aU)))))
                                                                  ? 5U
                                                                  : 
                                                                 ((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__NOR)
                                                                   ? 6U
                                                                   : 
                                                                  ((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__srl)
                                                                    ? 7U
                                                                    : 
                                                                   ((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__sra)
                                                                     ? 8U
                                                                     : 
                                                                    ((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__sllv)
                                                                      ? 9U
                                                                      : 
                                                                     ((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__srlv)
                                                                       ? 0xaU
                                                                       : 
                                                                      ((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__srav)
                                                                        ? 0xbU
                                                                        : 
                                                                       (((((7U 
                                                                            == 
                                                                            (0x3fU 
                                                                             & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0x1aU)))) 
                                                                           | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__bltz)) 
                                                                          | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__bgez)) 
                                                                         | (6U 
                                                                            == 
                                                                            (0x3fU 
                                                                             & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0x1aU)))))
                                                                         ? 0xcU
                                                                         : 0U))))))))))))) 
                                                           << 6U) 
                                                          | ((((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                                                               | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__div)) 
                                                              << 5U) 
                                                             | (((((0U 
                                                                    == 
                                                                    (0x3fU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0x1aU)))) 
                                                                   & (0x11U 
                                                                      == 
                                                                      (0x3fU 
                                                                       & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))
                                                                   ? 1U
                                                                   : 
                                                                  (((0U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0x1aU)))) 
                                                                    & (0x13U 
                                                                       == 
                                                                       (0x3fU 
                                                                        & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))
                                                                    ? 2U
                                                                    : 
                                                                   (((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                                                                     | ((0U 
                                                                         == 
                                                                         (0x3fU 
                                                                          & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0x1aU)))) 
                                                                        & (0x19U 
                                                                           == 
                                                                           (0x3fU 
                                                                            & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))))
                                                                     ? 3U
                                                                     : 
                                                                    (((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__div) 
                                                                      | ((0U 
                                                                          == 
                                                                          (0x3fU 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0x1aU)))) 
                                                                         & (0x1bU 
                                                                            == 
                                                                            (0x3fU 
                                                                             & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))))
                                                                      ? 4U
                                                                      : 0U)))) 
                                                                 << 2U) 
                                                                | (((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__mfhi) 
                                                                    << 1U) 
                                                                   | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__mflo))))))))))));
    vlTOPp->top__DOT__mips__DOT__u_MEM__DOT__MEMout 
        = ((0x3000U > (0xffffU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA)))
            ? vlTOPp->top__DOT__mips__DOT__u_EX__DOT____Vcellout__u_Access__DMout
            : ((0x7fU == (0xffffffU & (vlTOPp->top__DOT__u_BRIDGE__DOT__PrAddr 
                                       >> 6U))) ? vlTOPp->top__DOT__u_BRIDGE__DOT__DEV0_RD
                : ((0x80U == (0xffffffU & (vlTOPp->top__DOT__u_BRIDGE__DOT__PrAddr 
                                           >> 6U)))
                    ? vlTOPp->top__DOT__u_BRIDGE__DOT__DEV1_RD
                    : ((0x81U == (0xffffffU & (vlTOPp->top__DOT__u_BRIDGE__DOT__PrAddr 
                                               >> 6U)))
                        ? vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                       [(1U & vlTOPp->top__DOT__u_BRIDGE__DOT__PrAddr)]
                        : 0U))));
    vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK 
        = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.WB_CTRL) 
                                   >> 4U)))) << 0x25U) 
           | (((QData)((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA)) 
               << 5U) | (QData)((IData)((0x1fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA 
                                                          >> 0x20U)))))));
    if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.stall)))) {
        vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[0U] 
            = ((1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))
                ? ((0xffff0000U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                   >> 0xfU))))) 
                                   << 0x10U)) | (0xffffU 
                                                 & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))
                : ((2U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))
                    ? (0xffff0000U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA) 
                                      << 0x10U)) : 
                   (0xffffU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
        vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[1U] 
            = vlTOPp->top__DOT__mips__DOT__u_ID__DOT__f_rd2;
        vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[2U] 
            = (IData)((((QData)((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)) 
                        << 0x20U) | (QData)((IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__f_rd1))));
        vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
            = (IData)(((((QData)((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)) 
                         << 0x20U) | (QData)((IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__f_rd1))) 
                       >> 0x20U));
        vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
            = (0x3fffffffU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                      >> 0x20U)));
    }
    vlTOPp->top__DOT__mips__DOT__u_MEM__DOT__U_DREXT__DOT___byte 
        = (0xffU & (vlTOPp->top__DOT__mips__DOT__u_MEM__DOT__MEMout 
                    >> (0x18U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA) 
                                 << 3U))));
    vlTOPp->top__DOT__mips__DOT__u_MEM__DOT__U_DREXT__DOT__half 
        = (0xffffU & (vlTOPp->top__DOT__mips__DOT__u_MEM__DOT__MEMout 
                      >> (0x18U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA) 
                                   << 3U))));
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__MEM_EN 
        = ((IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK 
                    >> 0x25U)) & (0U != (0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK))));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN 
        = ((IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK 
                    >> 0x25U)) & (0U != (0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK))));
    if ((1U & (~ (IData)(vlTOPp->top__DOT__mips__DOT__u_CP0__DOT__EXL)))) {
        vlTOPp->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend 
            = vlTOPp->top__DOT____Vcellout__u_BRIDGE__HWInt;
    }
    vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.EX_rw 
        = ((1U & (((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                   >> 0xbU) & (~ ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                  >> 0xdU)))) ? 0x1fU
            : (0x1fU & ((0x2000U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))
                         ? ((vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
                             << 0x15U) | (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                          >> 0xbU))
                         : ((vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
                             << 0x10U) | (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                          >> 0x10U)))));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM 
        = ((IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN) 
           & ((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK)) 
              == (0x1fU & ((vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
                            << 0xbU) | (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                        >> 0x15U)))));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM 
        = ((IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN) 
           & ((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK)) 
              == (0x1fU & ((vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
                            << 0x10U) | (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                         >> 0x10U)))));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB 
        = (((IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN) 
            & ((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK)) 
               == (0x1fU & ((vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
                             << 0xbU) | (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                         >> 0x15U))))) 
           & (~ (IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM)));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB 
        = (((IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN) 
            & ((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK)) 
               == (0x1fU & ((vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
                             << 0x10U) | (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                          >> 0x10U))))) 
           & (~ (IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM)));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1 = 
        (((VL_NEGATE_I((IData)((IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM))) 
           & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK 
                      >> 5U))) | (VL_NEGATE_I((IData)((IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB))) 
                                  & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
                                             >> 5U)))) 
         | (VL_NEGATE_I((IData)((1U & ((~ (IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM)) 
                                       & (~ (IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB)))))) 
            & vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[2U]));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd2 = 
        (((VL_NEGATE_I((IData)((IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM))) 
           & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK 
                      >> 5U))) | (VL_NEGATE_I((IData)((IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB))) 
                                  & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
                                             >> 5U)))) 
         | (VL_NEGATE_I((IData)((1U & ((~ (IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM)) 
                                       & (~ (IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB)))))) 
            & vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[1U]));
    vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
        = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                   >> 0xeU)))) << 0x25U) 
           | (((QData)((IData)((0x1fU & ((vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
                                          << 0x15U) 
                                         | (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                            >> 0xbU))))) 
               << 0x20U) | (QData)((IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd2))));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB = 
        ((0x400U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))
          ? vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[0U]
          : vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd2);
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUC = 
        (((((((((0U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                >> 6U))) | (1U == (0xfU 
                                                   & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                                      >> 6U)))) 
               | (2U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                 >> 6U)))) | (3U == 
                                              (0xfU 
                                               & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                                  >> 6U)))) 
             | (4U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                               >> 6U)))) | (5U == (0xfU 
                                                   & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                                      >> 6U)))) 
           | (6U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                             >> 6U)))) | (7U == (0xfU 
                                                 & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                                    >> 6U))))
          ? ((0U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                             >> 6U))) ? (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                         << (0x1fU 
                                             & ((vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
                                                 << 0x1aU) 
                                                | (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                   >> 6U))))
              : ((1U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                 >> 6U))) ? (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                                             | vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB)
                  : ((2U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                     >> 6U))) ? (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                                                 - vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB)
                      : ((3U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                         >> 6U))) ? 
                         (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                          + vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB)
                          : ((4U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                             >> 6U)))
                              ? (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                                 & vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB)
                              : ((5U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                                 >> 6U)))
                                  ? (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                                     ^ vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB)
                                  : ((6U == (0xfU & 
                                             ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                              >> 6U)))
                                      ? (~ (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                                            | vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB))
                                      : (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                         >> (0x1fU 
                                             & ((vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
                                                 << 0x1aU) 
                                                | (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                   >> 6U)))))))))))
          : ((8U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                             >> 6U))) ? VL_SHIFTRS_III(32,32,5, vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB, 
                                                       (0x1fU 
                                                        & ((vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
                                                            << 0x1aU) 
                                                           | (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                              >> 6U))))
              : ((9U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                 >> 6U))) ? ((0x1fU 
                                              >= vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                              ? (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                                 << vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                              : 0U)
                  : ((0xaU == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                       >> 6U))) ? (
                                                   (0x1fU 
                                                    >= vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                                    ? 
                                                   (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                                    >> vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                                    : 0U)
                      : ((0xbU == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                           >> 6U)))
                          ? ((0x1fU >= vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                              ? VL_SHIFTRS_III(32,32,32, vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB, vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                              : VL_NEGATE_I((vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                             >> 0x1fU)))
                          : ((0xcU == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                               >> 6U)))
                              ? vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1
                              : 0U))))));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr 
        = (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
           + vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB);
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT____Vcellinp__u_dm_ram__dina 
        = (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd2 
           << (0x18U & (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr 
                        << 3U)));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__be 
        = (0xfU & ((4U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL))
                    ? ((IData)(1U) << (3U & vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr))
                    : ((2U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL))
                        ? ((IData)(3U) << (3U & vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr))
                        : 0xfU)));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT____Vcellinp__u_dm_ram__wea 
        = (VL_NEGATE_I((IData)(((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.MEM_CTRL) 
                                & (0x3000U > (0xffffU 
                                              & vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr))))) 
           & (IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__be));
}

void Vtop::_settle__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__4\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__u_BRIDGE__DOT__WeDEV = (VL_NEGATE_I((IData)((IData)(vlTOPp->top__DOT__u_BRIDGE__DOT__WeCPU))) 
                                              & (((0x81U 
                                                   == 
                                                   (0xffffffU 
                                                    & (vlTOPp->top__DOT__u_BRIDGE__DOT__PrAddr 
                                                       >> 6U))) 
                                                  << 2U) 
                                                 | (((0x80U 
                                                      == 
                                                      (0xffffffU 
                                                       & (vlTOPp->top__DOT__u_BRIDGE__DOT__PrAddr 
                                                          >> 6U))) 
                                                     << 1U) 
                                                    | (0x7fU 
                                                       == 
                                                       (0xffffffU 
                                                        & (vlTOPp->top__DOT__u_BRIDGE__DOT__PrAddr 
                                                           >> 6U))))));
    vlTOPp->led = (0xffU & vlTOPp->top__DOT__u_BRIDGE__DOT__DEV1_RD);
    vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
        = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                   >> 4U)))) << 0x25U) 
           | vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA);
    vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__newSelect 
        = (0xffU & (0x80U >> (7U & (vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                    >> 0x10U))));
    vlTOPp->seg7_seg1 = vlTOPp->seg7_seg;
    vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__newSeg 
        = (0xffU & (vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                    [(1U & (vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                            >> 0x12U))] >> (0x18U & 
                                            (vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                             >> 0xdU))));
    vlTOPp->top__DOT____Vcellout__u_BRIDGE__HWInt = 
        ((0x3eU & (IData)(vlTOPp->top__DOT____Vcellout__u_BRIDGE__HWInt)) 
         | (0U == vlTOPp->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt));
    vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
        = (((QData)((IData)(vlTOPp->top__DOT__mips__DOT__u_IF__DOT__IF_PC)) 
            << 0x20U) | (QData)((IData)(vlTOPp->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlTOPp->top__DOT__mips__DOT__u_MEM__DOT__MEMout 
        = ((0x3000U > (0xffffU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA)))
            ? vlTOPp->top__DOT__mips__DOT__u_EX__DOT____Vcellout__u_Access__DMout
            : ((0x7fU == (0xffffffU & (vlTOPp->top__DOT__u_BRIDGE__DOT__PrAddr 
                                       >> 6U))) ? vlTOPp->top__DOT__u_BRIDGE__DOT__DEV0_RD
                : ((0x80U == (0xffffffU & (vlTOPp->top__DOT__u_BRIDGE__DOT__PrAddr 
                                           >> 6U)))
                    ? vlTOPp->top__DOT__u_BRIDGE__DOT__DEV1_RD
                    : ((0x81U == (0xffffffU & (vlTOPp->top__DOT__u_BRIDGE__DOT__PrAddr 
                                               >> 6U)))
                        ? vlTOPp->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                       [(1U & vlTOPp->top__DOT__u_BRIDGE__DOT__PrAddr)]
                        : 0U))));
    vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK 
        = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.WB_CTRL) 
                                   >> 4U)))) << 0x25U) 
           | (((QData)((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA)) 
               << 5U) | (QData)((IData)((0x1fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA 
                                                          >> 0x20U)))))));
    vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.EX_rw 
        = ((1U & (((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                   >> 0xbU) & (~ ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                  >> 0xdU)))) ? 0x1fU
            : (0x1fU & ((0x2000U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))
                         ? ((vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
                             << 0x15U) | (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                          >> 0xbU))
                         : ((vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
                             << 0x10U) | (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                          >> 0x10U)))));
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__WB_EN 
        = ((IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
                    >> 0x25U)) & (0U != (0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK))));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN 
        = ((IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
                    >> 0x25U)) & (0U != (0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK))));
    if ((1U & (~ (IData)(vlTOPp->top__DOT__mips__DOT__u_CP0__DOT__EXL)))) {
        vlTOPp->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend 
            = vlTOPp->top__DOT____Vcellout__u_BRIDGE__HWInt;
    }
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__mfhi 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x10U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__mflo 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x12U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__mult 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x18U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__div 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x1aU == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__typeIA 
        = (((((((0xdU == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                           >> 0x1aU)))) 
                | (0xfU == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                             >> 0x1aU))))) 
               | (8U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                          >> 0x1aU))))) 
              | (9U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                         >> 0x1aU))))) 
             | (0xaU == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                          >> 0x1aU))))) 
            | (0xcU == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                         >> 0x1aU))))) 
           | (0xeU == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                        >> 0x1aU)))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__slt 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x2aU == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__addu 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x21U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__subu 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x23U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__AND 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x24U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__OR 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x25U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__XOR 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x26U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__NOR 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x27U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__sll 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__sllv 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (4U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__srl 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (2U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__srlv 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (6U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__sra 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (3U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__srav 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (7U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__LOAD 
        = (((((0x23U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                          >> 0x1aU)))) 
              | (0x20U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                            >> 0x1aU))))) 
             | (0x24U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                           >> 0x1aU))))) 
            | (0x21U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                          >> 0x1aU))))) 
           | (0x25U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                         >> 0x1aU)))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__STORE 
        = (((0x2bU == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                        >> 0x1aU)))) 
            | (0x28U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                          >> 0x1aU))))) 
           | (0x29U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                         >> 0x1aU)))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__eret 
        = (((0x10U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                        >> 0x1aU)))) 
            & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                       >> 0x19U))) & (0x18U == (0x3fU 
                                                & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__add 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x20U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__sub 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x22U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__jmp 
        = ((2U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) | 
           (3U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__jr 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (8U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__jalr 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (9U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__bltz 
        = ((1U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0U == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x10U)))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__bgez 
        = ((1U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (1U == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x10U)))));
    vlTOPp->top__DOT__mips__DOT__u_MEM__DOT__U_DREXT__DOT___byte 
        = (0xffU & (vlTOPp->top__DOT__mips__DOT__u_MEM__DOT__MEMout 
                    >> (0x18U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA) 
                                 << 3U))));
    vlTOPp->top__DOT__mips__DOT__u_MEM__DOT__U_DREXT__DOT__half 
        = (0xffffU & (vlTOPp->top__DOT__mips__DOT__u_MEM__DOT__MEMout 
                      >> (0x18U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA) 
                                   << 3U))));
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__MEM_EN 
        = ((IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK 
                    >> 0x25U)) & (0U != (0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK))));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN 
        = ((IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK 
                    >> 0x25U)) & (0U != (0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__typeR 
        = (((((((((((((((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__add) 
                        | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__addu)) 
                       | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__sub)) 
                      | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__subu)) 
                     | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__slt)) 
                    | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__AND)) 
                   | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__OR)) 
                  | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__XOR)) 
                 | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__NOR)) 
                | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__sll)) 
               | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__srl)) 
              | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__sra)) 
             | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__sllv)) 
            | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__srlv)) 
           | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__srav));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__savePC 
        = ((3U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__jalr));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR 
        = ((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__jr) 
           | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__jalr));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__branchType 
        = ((4U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) ? 1U
            : ((5U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                        >> 0x1aU))))
                ? 2U : ((7U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                 >> 0x1aU))))
                         ? 3U : ((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__bltz)
                                  ? 4U : ((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__bgez)
                                           ? 5U : (
                                                   (6U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                >> 0x1aU))))
                                                    ? 6U
                                                    : 0U))))));
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM 
        = ((IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__MEM_EN) 
           & ((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK)) 
              == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                   >> 0x10U)))));
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM 
        = ((IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__MEM_EN) 
           & ((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK)) 
              == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                   >> 0x15U)))));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM 
        = ((IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN) 
           & ((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK)) 
              == (0x1fU & ((vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
                            << 0xbU) | (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                        >> 0x15U)))));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM 
        = ((IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN) 
           & ((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK)) 
              == (0x1fU & ((vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
                            << 0x10U) | (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                         >> 0x10U)))));
    vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.ID_uncertainJump 
        = ((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR) 
           | (0U != (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__branchType)));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__ExlSet 
        = (((((IData)(vlTOPp->top__DOT____Vcellout__u_BRIDGE__HWInt) 
              & (IData)(vlTOPp->top__DOT__mips__DOT__u_CP0__DOT__IM)) 
             & (IData)(vlTOPp->top__DOT__mips__DOT__u_CP0__DOT__IE)) 
            & (~ (IData)(vlTOPp->top__DOT__mips__DOT__u_CP0__DOT__EXL))) 
           & (~ (((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__jmp) 
                  | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR)) 
                 | (0U != (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__branchType)))));
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB 
        = (((IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__WB_EN) 
            & ((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK)) 
               == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x10U))))) & 
           (~ (IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM)));
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB 
        = (((IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__WB_EN) 
            & ((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK)) 
               == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x15U))))) & 
           (~ (IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM)));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB 
        = (((IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN) 
            & ((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK)) 
               == (0x1fU & ((vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
                             << 0xbU) | (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                         >> 0x15U))))) 
           & (~ (IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM)));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB 
        = (((IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN) 
            & ((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK)) 
               == (0x1fU & ((vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
                             << 0x10U) | (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                          >> 0x10U))))) 
           & (~ (IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM)));
    vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.CP0_CTRL 
        = (((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__ExlSet) 
            << 1U) | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__eret));
    vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL 
        = (((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__eret) 
            << 8U) | (((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__ExlSet) 
                       << 7U) | (((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__jmp) 
                                  << 6U) | (((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR) 
                                             << 5U) 
                                            | (((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__branchType) 
                                                << 2U) 
                                               | (((((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__add) 
                                                     | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__sub)) 
                                                    | (0xfU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                   >> 0x1aU))))) 
                                                   << 1U) 
                                                  | ((((((8U 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                      >> 0x1aU)))) 
                                                         | (9U 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                        >> 0x1aU))))) 
                                                        | (0xaU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                       >> 0x1aU))))) 
                                                       | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__LOAD)) 
                                                      | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__STORE)) 
                                                     | ((((((4U 
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
                                                                           >> 0x1aU))))) 
                                                           | (7U 
                                                              == 
                                                              (0x3fU 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                          >> 0x1aU))))) 
                                                          | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__bltz)) 
                                                         | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__bgez)) 
                                                        | (6U 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                       >> 0x1aU))))))))))));
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__f_rd2 = 
        (((VL_NEGATE_I((IData)((IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM))) 
           & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK 
                      >> 5U))) | (VL_NEGATE_I((IData)((IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB))) 
                                  & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
                                             >> 5U)))) 
         | (VL_NEGATE_I((IData)((1U & ((~ (IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM)) 
                                       & (~ (IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB)))))) 
            & vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
            [(0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                               >> 0x10U)))]));
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__f_rd1 = 
        (((VL_NEGATE_I((IData)((IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM))) 
           & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK 
                      >> 5U))) | (VL_NEGATE_I((IData)((IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB))) 
                                  & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
                                             >> 5U)))) 
         | (VL_NEGATE_I((IData)((1U & ((~ (IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM)) 
                                       & (~ (IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB)))))) 
            & vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
            [(0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                               >> 0x15U)))]));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1 = 
        (((VL_NEGATE_I((IData)((IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM))) 
           & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK 
                      >> 5U))) | (VL_NEGATE_I((IData)((IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB))) 
                                  & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
                                             >> 5U)))) 
         | (VL_NEGATE_I((IData)((1U & ((~ (IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM)) 
                                       & (~ (IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB)))))) 
            & vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[2U]));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd2 = 
        (((VL_NEGATE_I((IData)((IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM))) 
           & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK 
                      >> 5U))) | (VL_NEGATE_I((IData)((IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB))) 
                                  & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
                                             >> 5U)))) 
         | (VL_NEGATE_I((IData)((1U & ((~ (IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM)) 
                                       & (~ (IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB)))))) 
            & vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[1U]));
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq 
        = (vlTOPp->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
           == vlTOPp->top__DOT__mips__DOT__u_ID__DOT__f_rd2);
    vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
        = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                   >> 0xeU)))) << 0x25U) 
           | (((QData)((IData)((0x1fU & ((vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
                                          << 0x15U) 
                                         | (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                            >> 0xbU))))) 
               << 0x20U) | (QData)((IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd2))));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB = 
        ((0x400U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))
          ? vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[0U]
          : vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd2);
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__branchAvail 
        = (((((((1U == (7U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                              >> 2U))) & (IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq)) 
               | ((2U == (7U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                >> 2U))) & (~ (IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq)))) 
              | ((3U == (7U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                               >> 2U))) & ((~ (vlTOPp->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                                               >> 0x1fU)) 
                                           & (0U != vlTOPp->top__DOT__mips__DOT__u_ID__DOT__f_rd1)))) 
             | ((4U == (7U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                              >> 2U))) & (vlTOPp->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                                          >> 0x1fU))) 
            | ((5U == (7U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                             >> 2U))) & (~ (vlTOPp->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                                            >> 0x1fU)))) 
           | ((6U == (7U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                            >> 2U))) & ((vlTOPp->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                                         >> 0x1fU) 
                                        | (0U == vlTOPp->top__DOT__mips__DOT__u_ID__DOT__f_rd1))));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUC = 
        (((((((((0U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                >> 6U))) | (1U == (0xfU 
                                                   & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                                      >> 6U)))) 
               | (2U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                 >> 6U)))) | (3U == 
                                              (0xfU 
                                               & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                                  >> 6U)))) 
             | (4U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                               >> 6U)))) | (5U == (0xfU 
                                                   & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                                      >> 6U)))) 
           | (6U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                             >> 6U)))) | (7U == (0xfU 
                                                 & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                                    >> 6U))))
          ? ((0U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                             >> 6U))) ? (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                         << (0x1fU 
                                             & ((vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
                                                 << 0x1aU) 
                                                | (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                   >> 6U))))
              : ((1U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                 >> 6U))) ? (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                                             | vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB)
                  : ((2U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                     >> 6U))) ? (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                                                 - vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB)
                      : ((3U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                         >> 6U))) ? 
                         (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                          + vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB)
                          : ((4U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                             >> 6U)))
                              ? (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                                 & vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB)
                              : ((5U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                                 >> 6U)))
                                  ? (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                                     ^ vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB)
                                  : ((6U == (0xfU & 
                                             ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                              >> 6U)))
                                      ? (~ (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                                            | vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB))
                                      : (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                         >> (0x1fU 
                                             & ((vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
                                                 << 0x1aU) 
                                                | (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                   >> 6U)))))))))))
          : ((8U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                             >> 6U))) ? VL_SHIFTRS_III(32,32,5, vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB, 
                                                       (0x1fU 
                                                        & ((vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
                                                            << 0x1aU) 
                                                           | (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                              >> 6U))))
              : ((9U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                 >> 6U))) ? ((0x1fU 
                                              >= vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                              ? (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                                 << vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                              : 0U)
                  : ((0xaU == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                       >> 6U))) ? (
                                                   (0x1fU 
                                                    >= vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                                    ? 
                                                   (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                                    >> vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                                    : 0U)
                      : ((0xbU == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                           >> 6U)))
                          ? ((0x1fU >= vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                              ? VL_SHIFTRS_III(32,32,32, vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB, vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                              : VL_NEGATE_I((vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                             >> 0x1fU)))
                          : ((0xcU == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                               >> 6U)))
                              ? vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1
                              : 0U))))));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr 
        = (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
           + vlTOPp->top__DOT__mips__DOT__u_EX__DOT__ALUB);
    vlTOPp->top__DOT__mips__DOT__u_IF__DOT__NPC = (0x3fffffffU 
                                                   & ((1U 
                                                       & ((((((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                              >> 7U) 
                                                             | ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                                >> 8U)) 
                                                            | ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                               >> 5U)) 
                                                           | ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                              >> 6U)) 
                                                          | (IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__branchAvail)))
                                                       ? 
                                                      (0x3fffffffU 
                                                       & (((((0x1060U 
                                                              & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                                                >> 7U))))) 
                                                             | (VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                                                >> 8U)))) 
                                                                & vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EPC)) 
                                                            | (VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                                                >> 5U)))) 
                                                               & (vlTOPp->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                                                                  >> 2U))) 
                                                           | (0x3ffffffU 
                                                              & (VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                                                >> 6U)))) 
                                                                 & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))) 
                                                          | (VL_NEGATE_I((IData)((IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__branchAvail))) 
                                                             & ((IData)(
                                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                         >> 0x20U)) 
                                                                + 
                                                                ((0x3fff0000U 
                                                                  & (VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0xfU))))) 
                                                                     << 0x10U)) 
                                                                 | (0xffffU 
                                                                    & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))))))
                                                       : 
                                                      ((IData)(1U) 
                                                       + vlTOPp->top__DOT__mips__DOT__u_IF__DOT__IF_PC)));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT____Vcellinp__u_dm_ram__dina 
        = (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__f_rd2 
           << (0x18U & (vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr 
                        << 3U)));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__be 
        = (0xfU & ((4U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL))
                    ? ((IData)(1U) << (3U & vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr))
                    : ((2U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL))
                        ? ((IData)(3U) << (3U & vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr))
                        : 0xfU)));
    vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT____Vcellinp__u_dm_ram__wea 
        = (VL_NEGATE_I((IData)(((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.MEM_CTRL) 
                                & (0x3000U > (0xffffU 
                                              & vlTOPp->top__DOT__mips__DOT__u_EX__DOT__accessAddr))))) 
           & (IData)(vlTOPp->top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__be));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__5\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
        = (((QData)((IData)(vlTOPp->top__DOT__mips__DOT__u_IF__DOT__IF_PC)) 
            << 0x20U) | (QData)((IData)(vlTOPp->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__mfhi 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x10U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__mflo 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x12U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__mult 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x18U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__div 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x1aU == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__typeIA 
        = (((((((0xdU == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                           >> 0x1aU)))) 
                | (0xfU == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                             >> 0x1aU))))) 
               | (8U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                          >> 0x1aU))))) 
              | (9U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                         >> 0x1aU))))) 
             | (0xaU == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                          >> 0x1aU))))) 
            | (0xcU == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                         >> 0x1aU))))) 
           | (0xeU == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                        >> 0x1aU)))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__slt 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x2aU == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__addu 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x21U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__subu 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x23U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__AND 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x24U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__OR 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x25U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__XOR 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x26U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__NOR 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x27U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__sll 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__sllv 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (4U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__srl 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (2U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__srlv 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (6U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__sra 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (3U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__srav 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (7U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__LOAD 
        = (((((0x23U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                          >> 0x1aU)))) 
              | (0x20U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                            >> 0x1aU))))) 
             | (0x24U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                           >> 0x1aU))))) 
            | (0x21U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                          >> 0x1aU))))) 
           | (0x25U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                         >> 0x1aU)))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__STORE 
        = (((0x2bU == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                        >> 0x1aU)))) 
            | (0x28U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                          >> 0x1aU))))) 
           | (0x29U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                         >> 0x1aU)))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__eret 
        = (((0x10U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                        >> 0x1aU)))) 
            & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                       >> 0x19U))) & (0x18U == (0x3fU 
                                                & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__add 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x20U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__sub 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0x22U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__jmp 
        = ((2U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) | 
           (3U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))));
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM 
        = ((IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__MEM_EN) 
           & ((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK)) 
              == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                   >> 0x10U)))));
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM 
        = ((IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__MEM_EN) 
           & ((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK)) 
              == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                   >> 0x15U)))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__jr 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (8U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__jalr 
        = ((0U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (9U == (0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__bltz 
        = ((1U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (0U == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x10U)))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__bgez 
        = ((1U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) & 
           (1U == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x10U)))));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__typeR 
        = (((((((((((((((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__add) 
                        | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__addu)) 
                       | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__sub)) 
                      | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__subu)) 
                     | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__slt)) 
                    | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__AND)) 
                   | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__OR)) 
                  | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__XOR)) 
                 | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__NOR)) 
                | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__sll)) 
               | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__srl)) 
              | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__sra)) 
             | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__sllv)) 
            | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__srlv)) 
           | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__srav));
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB 
        = (((IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__WB_EN) 
            & ((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK)) 
               == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x10U))))) & 
           (~ (IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM)));
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB 
        = (((IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__WB_EN) 
            & ((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK)) 
               == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x15U))))) & 
           (~ (IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM)));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__savePC 
        = ((3U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__jalr));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR 
        = ((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__jr) 
           | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__jalr));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__branchType 
        = ((4U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) ? 1U
            : ((5U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                        >> 0x1aU))))
                ? 2U : ((7U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                 >> 0x1aU))))
                         ? 3U : ((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__bltz)
                                  ? 4U : ((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__bgez)
                                           ? 5U : (
                                                   (6U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                >> 0x1aU))))
                                                    ? 6U
                                                    : 0U))))));
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__f_rd2 = 
        (((VL_NEGATE_I((IData)((IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM))) 
           & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK 
                      >> 5U))) | (VL_NEGATE_I((IData)((IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB))) 
                                  & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
                                             >> 5U)))) 
         | (VL_NEGATE_I((IData)((1U & ((~ (IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM)) 
                                       & (~ (IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB)))))) 
            & vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
            [(0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                               >> 0x10U)))]));
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__f_rd1 = 
        (((VL_NEGATE_I((IData)((IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM))) 
           & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK 
                      >> 5U))) | (VL_NEGATE_I((IData)((IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB))) 
                                  & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
                                             >> 5U)))) 
         | (VL_NEGATE_I((IData)((1U & ((~ (IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM)) 
                                       & (~ (IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB)))))) 
            & vlTOPp->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
            [(0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                               >> 0x15U)))]));
    vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.ID_uncertainJump 
        = ((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR) 
           | (0U != (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__branchType)));
    vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__ExlSet 
        = (((((IData)(vlTOPp->top__DOT____Vcellout__u_BRIDGE__HWInt) 
              & (IData)(vlTOPp->top__DOT__mips__DOT__u_CP0__DOT__IM)) 
             & (IData)(vlTOPp->top__DOT__mips__DOT__u_CP0__DOT__IE)) 
            & (~ (IData)(vlTOPp->top__DOT__mips__DOT__u_CP0__DOT__EXL))) 
           & (~ (((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__jmp) 
                  | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR)) 
                 | (0U != (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__branchType)))));
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq 
        = (vlTOPp->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
           == vlTOPp->top__DOT__mips__DOT__u_ID__DOT__f_rd2);
    vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.CP0_CTRL 
        = (((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__ExlSet) 
            << 1U) | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__eret));
    vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL 
        = (((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__eret) 
            << 8U) | (((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__ExlSet) 
                       << 7U) | (((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__jmp) 
                                  << 6U) | (((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR) 
                                             << 5U) 
                                            | (((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__branchType) 
                                                << 2U) 
                                               | (((((IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__add) 
                                                     | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__sub)) 
                                                    | (0xfU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                   >> 0x1aU))))) 
                                                   << 1U) 
                                                  | ((((((8U 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                      >> 0x1aU)))) 
                                                         | (9U 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                        >> 0x1aU))))) 
                                                        | (0xaU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                       >> 0x1aU))))) 
                                                       | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__LOAD)) 
                                                      | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__STORE)) 
                                                     | ((((((4U 
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
                                                                           >> 0x1aU))))) 
                                                           | (7U 
                                                              == 
                                                              (0x3fU 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                          >> 0x1aU))))) 
                                                          | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__bltz)) 
                                                         | (IData)(vlTOPp->top__DOT__mips__DOT__u_Controller__DOT__bgez)) 
                                                        | (6U 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                       >> 0x1aU))))))))))));
    vlTOPp->top__DOT__mips__DOT__u_ID__DOT__branchAvail 
        = (((((((1U == (7U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                              >> 2U))) & (IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq)) 
               | ((2U == (7U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                >> 2U))) & (~ (IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq)))) 
              | ((3U == (7U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                               >> 2U))) & ((~ (vlTOPp->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                                               >> 0x1fU)) 
                                           & (0U != vlTOPp->top__DOT__mips__DOT__u_ID__DOT__f_rd1)))) 
             | ((4U == (7U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                              >> 2U))) & (vlTOPp->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                                          >> 0x1fU))) 
            | ((5U == (7U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                             >> 2U))) & (~ (vlTOPp->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                                            >> 0x1fU)))) 
           | ((6U == (7U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                            >> 2U))) & ((vlTOPp->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                                         >> 0x1fU) 
                                        | (0U == vlTOPp->top__DOT__mips__DOT__u_ID__DOT__f_rd1))));
    vlTOPp->top__DOT__mips__DOT__u_IF__DOT__NPC = (0x3fffffffU 
                                                   & ((1U 
                                                       & ((((((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                              >> 7U) 
                                                             | ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                                >> 8U)) 
                                                            | ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                               >> 5U)) 
                                                           | ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                              >> 6U)) 
                                                          | (IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__branchAvail)))
                                                       ? 
                                                      (0x3fffffffU 
                                                       & (((((0x1060U 
                                                              & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                                                >> 7U))))) 
                                                             | (VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                                                >> 8U)))) 
                                                                & vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EPC)) 
                                                            | (VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                                                >> 5U)))) 
                                                               & (vlTOPp->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                                                                  >> 2U))) 
                                                           | (0x3ffffffU 
                                                              & (VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                                                >> 6U)))) 
                                                                 & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))) 
                                                          | (VL_NEGATE_I((IData)((IData)(vlTOPp->top__DOT__mips__DOT__u_ID__DOT__branchAvail))) 
                                                             & ((IData)(
                                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                         >> 0x20U)) 
                                                                + 
                                                                ((0x3fff0000U 
                                                                  & (VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0xfU))))) 
                                                                     << 0x10U)) 
                                                                 | (0xffffU 
                                                                    & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))))))
                                                       : 
                                                      ((IData)(1U) 
                                                       + vlTOPp->top__DOT__mips__DOT__u_IF__DOT__IF_PC)));
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlTOPp->rst)) & (IData)(vlTOPp->__Vclklast__TOP__rst)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlTOPp->rst)) & (IData)(vlTOPp->__Vclklast__TOP__rst)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
        vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect._settle__TOP__top__DOT__mips__DOT__i_stallDetect__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect._settle__TOP__top__DOT__mips__DOT__i_stallDetect__1(vlSymsp);
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    led = VL_RAND_RESET_I(8);
    seg7_seg = VL_RAND_RESET_I(8);
    seg7_seg1 = VL_RAND_RESET_I(8);
    seg7_select = VL_RAND_RESET_I(8);
    top__DOT____Vcellout__u_BRIDGE__HWInt = VL_RAND_RESET_I(6);
    top__DOT__mips__DOT__u_IF__DOT__reg_index = VL_RAND_RESET_I(32);
    top__DOT__mips__DOT__u_IF__DOT__EX_instr = VL_RAND_RESET_I(26);
    top__DOT__mips__DOT__u_IF__DOT__IF_PC = VL_RAND_RESET_I(30);
    top__DOT__mips__DOT__u_IF__DOT__NPC = VL_RAND_RESET_I(30);
    top__DOT__mips__DOT__u_IF__DOT__IF_instr = VL_RAND_RESET_I(32);
    top__DOT__mips__DOT__u_IF__DOT__ID_instr = VL_RAND_RESET_I(32);
    top__DOT__mips__DOT__u_IF__DOT__firstFetch = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2048; ++__Vi0) {
            top__DOT__mips__DOT__u_IF__DOT__IM__DOT__u_imrom__DOT__rom[__Vi0] = VL_RAND_RESET_I(32);
    }}
    top__DOT__mips__DOT__u_Controller__DOT__branchType = VL_RAND_RESET_I(3);
    top__DOT__mips__DOT__u_Controller__DOT__ExlSet = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__jmp = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__savePC = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__add = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__sub = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__jr = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__slt = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__addu = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__subu = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__AND = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__OR = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__XOR = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__NOR = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__sll = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__sllv = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__srl = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__srlv = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__sra = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__srav = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__bltz = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__bgez = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__jalr = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__mfhi = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__mflo = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__mult = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__div = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__eret = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__typeR = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__typeIA = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__LOAD = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_Controller__DOT__STORE = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_ID__DOT__f_rd1 = VL_RAND_RESET_I(32);
    top__DOT__mips__DOT__u_ID__DOT__f_rd2 = VL_RAND_RESET_I(32);
    top__DOT__mips__DOT__u_ID__DOT__branchAvail = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[__Vi0] = VL_RAND_RESET_I(32);
    }}
    top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__i = VL_RAND_RESET_I(32);
    top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__MEM_EN = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__WB_EN = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_EX__DOT__f_rd1 = VL_RAND_RESET_I(32);
    top__DOT__mips__DOT__u_EX__DOT__f_rd2 = VL_RAND_RESET_I(32);
    top__DOT__mips__DOT__u_EX__DOT__ALUB = VL_RAND_RESET_I(32);
    top__DOT__mips__DOT__u_EX__DOT__ALUC = VL_RAND_RESET_I(32);
    top__DOT__mips__DOT__u_EX__DOT__MDHI = VL_RAND_RESET_I(32);
    top__DOT__mips__DOT__u_EX__DOT__MDLO = VL_RAND_RESET_I(32);
    top__DOT__mips__DOT__u_EX__DOT__accessAddr = VL_RAND_RESET_I(32);
    top__DOT__mips__DOT__u_EX__DOT____Vcellout__u_Access__DMout = VL_RAND_RESET_I(32);
    top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__be = VL_RAND_RESET_I(4);
    top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT____Vcellinp__u_dm_ram__dina = VL_RAND_RESET_I(32);
    top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT____Vcellinp__u_dm_ram__wea = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<3072; ++__Vi0) {
            top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound1 = VL_RAND_RESET_I(32);
    top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound2 = VL_RAND_RESET_I(16);
    top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound3 = VL_RAND_RESET_I(16);
    top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound4 = VL_RAND_RESET_I(8);
    top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound5 = VL_RAND_RESET_I(8);
    top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound6 = VL_RAND_RESET_I(8);
    top__DOT__mips__DOT__u_EX__DOT__u_Access__DOT__u_dm_ram__DOT____Vlvbound7 = VL_RAND_RESET_I(8);
    top__DOT__mips__DOT__u_MEM__DOT__MEMout = VL_RAND_RESET_I(32);
    top__DOT__mips__DOT__u_MEM__DOT__U_DREXT__DOT___byte = VL_RAND_RESET_I(8);
    top__DOT__mips__DOT__u_MEM__DOT__U_DREXT__DOT__half = VL_RAND_RESET_I(16);
    top__DOT__mips__DOT__u_CP0__DOT__IM = VL_RAND_RESET_I(6);
    top__DOT__mips__DOT__u_CP0__DOT__EXL = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_CP0__DOT__IE = VL_RAND_RESET_I(1);
    top__DOT__mips__DOT__u_CP0__DOT__hwint_pend = VL_RAND_RESET_I(6);
    top__DOT__mips__DOT__u_CP0__DOT__PrID = VL_RAND_RESET_I(32);
    top__DOT__u_BRIDGE__DOT__PrAddr = VL_RAND_RESET_I(30);
    top__DOT__u_BRIDGE__DOT__PrWD = VL_RAND_RESET_I(32);
    top__DOT__u_BRIDGE__DOT__PrBE = VL_RAND_RESET_I(4);
    top__DOT__u_BRIDGE__DOT__WeCPU = VL_RAND_RESET_I(1);
    top__DOT__u_BRIDGE__DOT__DEV_Addr = VL_RAND_RESET_I(6);
    top__DOT__u_BRIDGE__DOT__DEV0_RD = VL_RAND_RESET_I(32);
    top__DOT__u_BRIDGE__DOT__DEV1_RD = VL_RAND_RESET_I(32);
    top__DOT__u_BRIDGE__DOT__WeDEV = VL_RAND_RESET_I(4);
    top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt = VL_RAND_RESET_I(19);
    top__DOT__u_BRIDGE__DOT__u_seg7__DOT__pause = VL_RAND_RESET_I(10);
    top__DOT__u_BRIDGE__DOT__u_seg7__DOT__newSeg = VL_RAND_RESET_I(8);
    top__DOT__u_BRIDGE__DOT__u_seg7__DOT__newSelect = VL_RAND_RESET_I(8);
    __Vm_traceActivity = 0;
}
