// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"
#include "Vtop___024unit.h"
#include "Vtop_IController.h"
#include "Vtop_IStallDetect.h"
#include "Vtop_IIF_ID.h"
#include "Vtop_IID_EX.h"
#include "Vtop_IEX_MEM.h"
#include "Vtop_IMEM_WB.h"
#include "Vtop_IBypass.h"
#include "Vtop_ICP0.h"
#include "Vtop_IBridge.h"



// FUNCTIONS
Vtop__Syms::Vtop__Syms(Vtop* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__top__DOT__i_bridge(Verilated::catName(topp->name(), "top.i_bridge"))
    , TOP__top__DOT__mips__DOT__i_bypass(Verilated::catName(topp->name(), "top.mips.i_bypass"))
    , TOP__top__DOT__mips__DOT__i_controller(Verilated::catName(topp->name(), "top.mips.i_controller"))
    , TOP__top__DOT__mips__DOT__i_cp0(Verilated::catName(topp->name(), "top.mips.i_cp0"))
    , TOP__top__DOT__mips__DOT__i_ex_mem(Verilated::catName(topp->name(), "top.mips.i_ex_mem"))
    , TOP__top__DOT__mips__DOT__i_id_ex(Verilated::catName(topp->name(), "top.mips.i_id_ex"))
    , TOP__top__DOT__mips__DOT__i_if_id(Verilated::catName(topp->name(), "top.mips.i_if_id"))
    , TOP__top__DOT__mips__DOT__i_mem_wb(Verilated::catName(topp->name(), "top.mips.i_mem_wb"))
    , TOP__top__DOT__mips__DOT__i_stallDetect(Verilated::catName(topp->name(), "top.mips.i_stallDetect"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__top__DOT__i_bridge = &TOP__top__DOT__i_bridge;
    TOPp->__PVT__top__DOT__mips__DOT__i_bypass = &TOP__top__DOT__mips__DOT__i_bypass;
    TOPp->__PVT__top__DOT__mips__DOT__i_controller = &TOP__top__DOT__mips__DOT__i_controller;
    TOPp->__PVT__top__DOT__mips__DOT__i_cp0 = &TOP__top__DOT__mips__DOT__i_cp0;
    TOPp->__PVT__top__DOT__mips__DOT__i_ex_mem = &TOP__top__DOT__mips__DOT__i_ex_mem;
    TOPp->__PVT__top__DOT__mips__DOT__i_id_ex = &TOP__top__DOT__mips__DOT__i_id_ex;
    TOPp->__PVT__top__DOT__mips__DOT__i_if_id = &TOP__top__DOT__mips__DOT__i_if_id;
    TOPp->__PVT__top__DOT__mips__DOT__i_mem_wb = &TOP__top__DOT__mips__DOT__i_mem_wb;
    TOPp->__PVT__top__DOT__mips__DOT__i_stallDetect = &TOP__top__DOT__mips__DOT__i_stallDetect;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__top__DOT__i_bridge.__Vconfigure(this, true);
    TOP__top__DOT__mips__DOT__i_bypass.__Vconfigure(this, true);
    TOP__top__DOT__mips__DOT__i_controller.__Vconfigure(this, true);
    TOP__top__DOT__mips__DOT__i_cp0.__Vconfigure(this, true);
    TOP__top__DOT__mips__DOT__i_ex_mem.__Vconfigure(this, true);
    TOP__top__DOT__mips__DOT__i_id_ex.__Vconfigure(this, true);
    TOP__top__DOT__mips__DOT__i_if_id.__Vconfigure(this, true);
    TOP__top__DOT__mips__DOT__i_mem_wb.__Vconfigure(this, true);
    TOP__top__DOT__mips__DOT__i_stallDetect.__Vconfigure(this, true);
}
