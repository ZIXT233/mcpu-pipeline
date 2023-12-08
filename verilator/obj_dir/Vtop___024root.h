// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class Vtop_IIF;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop_IIF* __PVT__top__DOT__mips__DOT__i_if;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(led,7,0);
        VL_OUT8(seg7_seg,7,0);
        VL_OUT8(seg7_seg1,7,0);
        VL_OUT8(seg7_select,7,0);
        CData/*3:0*/ top__DOT__PrBE;
        CData/*5:0*/ top__DOT__HWInt;
        CData/*0:0*/ top__DOT__mips__DOT__IF_CTRL;
        CData/*0:0*/ top__DOT__mips__DOT__pipeline_stall;
        CData/*0:0*/ top__DOT__mips__DOT__MEM_CTRL_from_ID;
        CData/*4:0*/ top__DOT__mips__DOT__WB_CTRL_from_ID;
        CData/*0:0*/ top__DOT__mips__DOT__MEM_CTRL_from_EX;
        CData/*4:0*/ top__DOT__mips__DOT__WB_CTRL_from_EX;
        CData/*4:0*/ top__DOT__mips__DOT__EX_rw_from_EX;
        CData/*4:0*/ top__DOT__mips__DOT__WB_CTRL_from_MEM;
        CData/*0:0*/ top__DOT__mips__DOT__u_IF__DOT__firstFetch;
        CData/*2:0*/ top__DOT__mips__DOT__u_Controller__DOT__branchType;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__ExlSet;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__jmp;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__savePC;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__MDHIWB;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__MDLOWB;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__memWrite;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__memToReg;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__add;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__sub;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__slt;
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
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__mult;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__div;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__Branch;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__typeR;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__typeIA;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT__ALURs;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1fabfdd5__0;
        CData/*0:0*/ top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h4e7f6188__0;
        CData/*0:0*/ top__DOT__mips__DOT__u_HazardDetect__DOT____VdfgTmp_h6c4ba390__0;
        CData/*0:0*/ top__DOT__mips__DOT__u_ID__DOT__branchAvail;
        CData/*0:0*/ top__DOT__mips__DOT__u_ID__DOT__o_uncertainJump;
        CData/*0:0*/ top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM;
        CData/*0:0*/ top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB;
        CData/*0:0*/ top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM;
        CData/*0:0*/ top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB;
        CData/*0:0*/ top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq;
        CData/*0:0*/ top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN;
        CData/*0:0*/ top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN;
        CData/*0:0*/ top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM;
        CData/*0:0*/ top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB;
    };
    struct {
        CData/*0:0*/ top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM;
        CData/*0:0*/ top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB;
        CData/*3:0*/ top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea;
        CData/*7:0*/ top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd433fd__0;
        CData/*7:0*/ top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd3b6e7__0;
        CData/*7:0*/ top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd519e0__0;
        CData/*7:0*/ top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd09d0e__0;
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
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ top__DOT__mips__DOT__EX_CTRL_from_ID;
        SData/*15:0*/ top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hc028c573__0;
        SData/*15:0*/ top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hc029c120__0;
        SData/*9:0*/ top__DOT__u_BRIDGE__DOT__u_seg7__DOT__pause;
        IData/*31:0*/ top__DOT__PrWD;
        VlWide<5>/*157:0*/ top__DOT__mips__DOT__EX_DATA_from_ID;
        VlWide<3>/*68:0*/ top__DOT__mips__DOT__MEM_DATA_from_EX;
        VlWide<3>/*68:0*/ top__DOT__mips__DOT__WB_DATA_from_MEM;
        IData/*29:0*/ top__DOT__mips__DOT__ID_EPC_from_CP0;
        IData/*31:0*/ top__DOT__mips__DOT__u_IF__DOT__reg_index;
        IData/*25:0*/ top__DOT__mips__DOT__u_IF__DOT__EX_instr;
        IData/*29:0*/ top__DOT__mips__DOT__u_IF__DOT__IF_PC;
        IData/*31:0*/ top__DOT__mips__DOT__u_IF__DOT__IF_instr;
        IData/*31:0*/ top__DOT__mips__DOT__u_IF__DOT__ID_instr;
        IData/*31:0*/ top__DOT__mips__DOT__u_IF__DOT____VdfgTmp_h52d3c299__0;
        IData/*31:0*/ top__DOT__mips__DOT__u_ID__DOT__f_rd1;
        IData/*31:0*/ top__DOT__mips__DOT__u_ID__DOT__f_rd2;
        IData/*31:0*/ top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__i;
        IData/*31:0*/ top__DOT__mips__DOT__u_EX__DOT__f_rd1;
        IData/*31:0*/ top__DOT__mips__DOT__u_EX__DOT__ALUB;
        IData/*31:0*/ top__DOT__mips__DOT__u_EX__DOT__ALUC;
        IData/*31:0*/ top__DOT__mips__DOT__u_EX__DOT__MDHI;
        IData/*31:0*/ top__DOT__mips__DOT__u_EX__DOT__MDLO;
        IData/*31:0*/ top__DOT__mips__DOT__u_EX__DOT__preMemAddr;
        IData/*31:0*/ top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_Wd;
        IData/*31:0*/ top__DOT__mips__DOT__u_MEM__DOT__MEMout;
        IData/*31:0*/ top__DOT__mips__DOT__u_MEM__DOT__Dout;
        IData/*31:0*/ top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hf01ede65__0;
        IData/*31:0*/ top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0;
        IData/*31:0*/ top__DOT__mips__DOT__u_CP0__DOT__DIn;
        IData/*31:0*/ top__DOT__mips__DOT__u_CP0__DOT__PrID;
        IData/*29:0*/ top__DOT__u_BRIDGE__DOT__PrAddr;
        IData/*31:0*/ top__DOT__u_BRIDGE__DOT__PrWD;
        IData/*31:0*/ top__DOT__u_BRIDGE__DOT__DEV0_RD;
        IData/*31:0*/ top__DOT__u_BRIDGE__DOT__DEV1_RD;
        IData/*31:0*/ top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt;
        IData/*18:0*/ top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt;
        IData/*29:0*/ __Vdly__top__DOT__mips__DOT__u_IF__DOT__IF_PC;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __Vtrigprevexpr_ha3f5a80b__0;
        IData/*31:0*/ __Vtrigprevexpr_ha3f53da3__0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 2048> top__DOT__mips__DOT__u_IF__DOT__IM__DOT__u_imrom__DOT__rom;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 32> top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register;
        VlUnpacked<IData/*31:0*/, 3072> top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram;
        VlUnpacked<IData/*31:0*/, 2> top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
