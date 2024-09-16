// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__rst__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vdly__sha256_tb__DOT__counter;
    __Vdly__sha256_tb__DOT__counter = 0;
    IData/*31:0*/ __Vilp;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__w__v0;
    __Vdlyvval__sha256_tb__DOT__w__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sha256_tb__DOT__w__v0;
    __Vdlyvset__sha256_tb__DOT__w__v0 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__w__v1;
    __Vdlyvval__sha256_tb__DOT__w__v1 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__w__v2;
    __Vdlyvval__sha256_tb__DOT__w__v2 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__w__v3;
    __Vdlyvval__sha256_tb__DOT__w__v3 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__w__v4;
    __Vdlyvval__sha256_tb__DOT__w__v4 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__w__v5;
    __Vdlyvval__sha256_tb__DOT__w__v5 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__w__v6;
    __Vdlyvval__sha256_tb__DOT__w__v6 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__w__v7;
    __Vdlyvval__sha256_tb__DOT__w__v7 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__w__v8;
    __Vdlyvval__sha256_tb__DOT__w__v8 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__w__v9;
    __Vdlyvval__sha256_tb__DOT__w__v9 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__w__v10;
    __Vdlyvval__sha256_tb__DOT__w__v10 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__w__v11;
    __Vdlyvval__sha256_tb__DOT__w__v11 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__w__v12;
    __Vdlyvval__sha256_tb__DOT__w__v12 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__w__v13;
    __Vdlyvval__sha256_tb__DOT__w__v13 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__w__v14;
    __Vdlyvval__sha256_tb__DOT__w__v14 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__w__v15;
    __Vdlyvval__sha256_tb__DOT__w__v15 = 0;
    CData/*5:0*/ __Vdlyvdim0__sha256_tb__DOT__w__v63;
    __Vdlyvdim0__sha256_tb__DOT__w__v63 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__w__v63;
    __Vdlyvval__sha256_tb__DOT__w__v63 = 0;
    CData/*0:0*/ __Vdlyvset__sha256_tb__DOT__w__v63;
    __Vdlyvset__sha256_tb__DOT__w__v63 = 0;
    CData/*0:0*/ __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_1__v0;
    __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_1__v0 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v7;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v7 = 0;
    CData/*0:0*/ __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_1__v7;
    __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_1__v7 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v8;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v8 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v9;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v9 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v10;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v10 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v11;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v11 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v12;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v12 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v13;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v13 = 0;
    CData/*0:0*/ __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_2__v0;
    __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_2__v0 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v7;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v7 = 0;
    CData/*0:0*/ __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_2__v7;
    __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_2__v7 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v8;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v8 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v9;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v9 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v10;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v10 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v11;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v11 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v12;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v12 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v13;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v13 = 0;
    CData/*0:0*/ __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_3__v0;
    __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_3__v0 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v7;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v7 = 0;
    CData/*0:0*/ __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_3__v7;
    __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_3__v7 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v8;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v8 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v9;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v9 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v10;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v10 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v11;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v11 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v12;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v12 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v13;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v13 = 0;
    CData/*0:0*/ __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_4__v0;
    __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_4__v0 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v7;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v7 = 0;
    CData/*0:0*/ __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_4__v7;
    __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_4__v7 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v8;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v8 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v9;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v9 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v10;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v10 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v11;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v11 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v12;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v12 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v13;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v13 = 0;
    CData/*0:0*/ __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_5__v0;
    __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_5__v0 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v8;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v8 = 0;
    CData/*0:0*/ __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_5__v8;
    __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_5__v8 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v9;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v9 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v10;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v10 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v11;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v11 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v12;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v12 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v13;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v13 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v14;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v14 = 0;
    IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v15;
    __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v15 = 0;
    CData/*4:0*/ __Vdly__sha256_tb__DOT__sha_inst__DOT__ready;
    __Vdly__sha256_tb__DOT__sha_inst__DOT__ready = 0;
    // Body
    vlSymsp->__Vcoverage[950].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1951].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2339].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2663].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2955].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3215].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3224].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSymsp->__Vcoverage[949].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1950].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2338].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2662].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2954].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3214].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3223].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3221].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3221].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3221].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3221].fetch_add(1, std::memory_order_relaxed);
        if (vlSelf->sha256_tb__DOT__wvalid) {
            vlSymsp->__Vcoverage[944].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__wvalid)))) {
            vlSymsp->__Vcoverage[945].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->sha256_tb__DOT__valid) {
            vlSymsp->__Vcoverage[946].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__valid)))) {
            vlSymsp->__Vcoverage[947].fetch_add(1, std::memory_order_relaxed);
        }
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk6__DOT__i = 2U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk6__DOT__i = 3U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk6__DOT__i = 4U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk6__DOT__i = 5U;
        vlSelf->sha256_tb__DOT__valid_r = vlSelf->sha256_tb__DOT__valid;
    }
    __Vdly__sha256_tb__DOT__sha_inst__DOT__ready = vlSelf->sha256_tb__DOT__sha_inst__DOT__ready;
    __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_4__v0 = 0U;
    __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_4__v7 = 0U;
    __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_3__v0 = 0U;
    __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_3__v7 = 0U;
    __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_2__v0 = 0U;
    __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_2__v7 = 0U;
    __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_1__v0 = 0U;
    __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_1__v7 = 0U;
    __Vdlyvset__sha256_tb__DOT__w__v0 = 0U;
    __Vdlyvset__sha256_tb__DOT__w__v63 = 0U;
    __Vdly__sha256_tb__DOT__counter = vlSelf->sha256_tb__DOT__counter;
    vlSelf->__Vdlyvset__sha256_tb__DOT__letter__v0 = 0U;
    vlSelf->__Vdlyvset__sha256_tb__DOT__letter__v8 = 0U;
    __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_5__v0 = 0U;
    __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_5__v8 = 0U;
    if (vlSelf->rst) {
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[948].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1948].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1948].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1948].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1948].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1948].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1948].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1948].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1949].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2336].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2336].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2336].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2336].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2336].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2336].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2336].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2337].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2660].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2660].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2660].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2660].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2660].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2660].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2660].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2661].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2953].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2952].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2952].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2952].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2952].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2952].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2952].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2952].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3213].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3212].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3212].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3212].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3212].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3212].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3212].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3212].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3212].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__unnamedblk1__DOT__i = 1U;
        vlSelf->sha256_tb__DOT__unnamedblk1__DOT__i = 2U;
        vlSelf->sha256_tb__DOT__unnamedblk1__DOT__i = 3U;
        vlSelf->sha256_tb__DOT__unnamedblk1__DOT__i = 4U;
        vlSelf->sha256_tb__DOT__unnamedblk1__DOT__i = 5U;
        vlSelf->sha256_tb__DOT__unnamedblk1__DOT__i = 6U;
        vlSelf->sha256_tb__DOT__unnamedblk1__DOT__i = 7U;
        vlSelf->sha256_tb__DOT__unnamedblk1__DOT__i = 8U;
        vlSelf->sha256_tb__DOT__unnamedblk1__DOT__i = 9U;
        vlSelf->sha256_tb__DOT__unnamedblk1__DOT__i = 0xaU;
        vlSelf->sha256_tb__DOT__unnamedblk1__DOT__i = 0xbU;
        vlSelf->sha256_tb__DOT__unnamedblk1__DOT__i = 0xcU;
        vlSelf->sha256_tb__DOT__unnamedblk1__DOT__i = 0xdU;
        vlSelf->sha256_tb__DOT__unnamedblk1__DOT__i = 0xeU;
        vlSelf->sha256_tb__DOT__unnamedblk1__DOT__i = 0xfU;
        vlSelf->sha256_tb__DOT__unnamedblk1__DOT__i = 0x10U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x11U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x12U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x13U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x14U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x15U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x16U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x17U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x18U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x19U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x1aU;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x1bU;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x1cU;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x1dU;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x1eU;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x1fU;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x20U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x21U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x22U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x23U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x24U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x25U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x26U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x27U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x28U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x29U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x2aU;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x2bU;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x2cU;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x2dU;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x2eU;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x2fU;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x30U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x31U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x32U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x33U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x34U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x35U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x36U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x37U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x38U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x39U;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x3aU;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x3bU;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x3cU;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x3dU;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x3eU;
        vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = 0x3fU;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk1__DOT__i = 1U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk1__DOT__i = 2U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk1__DOT__i = 3U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk1__DOT__i = 4U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk1__DOT__i = 5U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk1__DOT__i = 6U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk1__DOT__i = 7U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk2__DOT__i = 1U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk2__DOT__i = 2U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk2__DOT__i = 3U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk2__DOT__i = 4U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk2__DOT__i = 5U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk2__DOT__i = 6U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk2__DOT__i = 7U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk3__DOT__i = 1U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk3__DOT__i = 2U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk3__DOT__i = 3U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk3__DOT__i = 4U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk3__DOT__i = 5U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk3__DOT__i = 6U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk3__DOT__i = 7U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk4__DOT__i = 1U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk4__DOT__i = 2U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk4__DOT__i = 3U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk4__DOT__i = 4U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk4__DOT__i = 5U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk4__DOT__i = 6U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk4__DOT__i = 7U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk5__DOT__i = 1U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk5__DOT__i = 2U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk5__DOT__i = 3U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk5__DOT__i = 4U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk5__DOT__i = 5U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk5__DOT__i = 6U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk5__DOT__i = 7U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk5__DOT__i = 8U;
        __Vdly__sha256_tb__DOT__sha_inst__DOT__ready = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__ready 
            = __Vdly__sha256_tb__DOT__sha_inst__DOT__ready;
        __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_4__v0 = 1U;
        __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_3__v0 = 1U;
    } else {
        __Vdly__sha256_tb__DOT__sha_inst__DOT__ready 
            = ((0x1eU & (IData)(__Vdly__sha256_tb__DOT__sha_inst__DOT__ready)) 
               | (IData)(vlSelf->sha256_tb__DOT__rdy));
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vlvbound_h0f206f3e__0 
            = (1U & (IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT__ready));
        __Vdly__sha256_tb__DOT__sha_inst__DOT__ready 
            = ((0x1dU & (IData)(__Vdly__sha256_tb__DOT__sha_inst__DOT__ready)) 
               | ((IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT____Vlvbound_h0f206f3e__0) 
                  << 1U));
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vlvbound_h0f206f3e__0 
            = (1U & ((IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT__ready) 
                     >> 1U));
        __Vdly__sha256_tb__DOT__sha_inst__DOT__ready 
            = ((0x1bU & (IData)(__Vdly__sha256_tb__DOT__sha_inst__DOT__ready)) 
               | ((IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT____Vlvbound_h0f206f3e__0) 
                  << 2U));
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vlvbound_h0f206f3e__0 
            = (1U & ((IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT__ready) 
                     >> 2U));
        __Vdly__sha256_tb__DOT__sha_inst__DOT__ready 
            = ((0x17U & (IData)(__Vdly__sha256_tb__DOT__sha_inst__DOT__ready)) 
               | ((IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT____Vlvbound_h0f206f3e__0) 
                  << 3U));
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vlvbound_h0f206f3e__0 
            = (1U & ((IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT__ready) 
                     >> 3U));
        __Vdly__sha256_tb__DOT__sha_inst__DOT__ready 
            = ((0xfU & (IData)(__Vdly__sha256_tb__DOT__sha_inst__DOT__ready)) 
               | ((IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT____Vlvbound_h0f206f3e__0) 
                  << 4U));
        vlSelf->sha256_tb__DOT__sha_inst__DOT__ready 
            = __Vdly__sha256_tb__DOT__sha_inst__DOT__ready;
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v7 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
            [6U];
        __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_4__v7 = 1U;
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v8 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
            [5U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v9 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
            [4U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v10 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
            [3U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v11 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
            [2U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v12 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
            [1U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v13 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
            [0U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v7 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
            [6U];
        __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_3__v7 = 1U;
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v8 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
            [5U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v9 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
            [4U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v10 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
            [3U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v11 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
            [2U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v12 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
            [1U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v13 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
            [0U];
    }
    if (__Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_3__v0) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[0U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[1U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[2U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[3U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[4U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[5U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[6U] = 0U;
    }
    if (__Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_3__v7) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[6U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v7;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[5U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v8;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[4U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v9;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[3U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v10;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[2U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v11;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[1U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v12;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[0U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_3__v13;
    }
    if (vlSelf->rst) {
        __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_2__v0 = 1U;
    } else {
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v7 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
            [6U];
        __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_2__v7 = 1U;
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v8 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
            [5U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v9 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
            [4U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v10 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
            [3U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v11 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
            [2U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v12 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
            [1U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v13 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
            [0U];
    }
    if (__Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_2__v0) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[0U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[1U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[2U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[3U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[4U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[5U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[6U] = 0U;
    }
    if (__Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_2__v7) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[6U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v7;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[5U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v8;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[4U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v9;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[3U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v10;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[2U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v11;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[1U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v12;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[0U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_2__v13;
    }
    if (vlSelf->rst) {
        __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_1__v0 = 1U;
    } else {
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v7 
            = vlSelf->sha256_tb__DOT__letter[6U];
        __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_1__v7 = 1U;
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v8 
            = vlSelf->sha256_tb__DOT__letter[5U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v9 
            = vlSelf->sha256_tb__DOT__letter[4U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v10 
            = vlSelf->sha256_tb__DOT__letter[3U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v11 
            = vlSelf->sha256_tb__DOT__letter[2U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v12 
            = vlSelf->sha256_tb__DOT__letter[1U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v13 
            = vlSelf->sha256_tb__DOT__letter[0U];
    }
    if (__Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_1__v0) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[0U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[1U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[2U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[3U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[4U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[5U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[6U] = 0U;
    }
    if (__Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_1__v7) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[6U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v7;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[5U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v8;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[4U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v9;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[3U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v10;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[2U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v11;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[1U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v12;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[0U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_1__v13;
    }
    if (vlSelf->rst) {
        __Vdly__sha256_tb__DOT__counter = 0U;
        __Vdlyvval__sha256_tb__DOT__w__v0 = vlSelf->i_w
            [0U];
        __Vdlyvset__sha256_tb__DOT__w__v0 = 1U;
        __Vdlyvval__sha256_tb__DOT__w__v1 = vlSelf->i_w
            [1U];
        __Vdlyvval__sha256_tb__DOT__w__v2 = vlSelf->i_w
            [2U];
        __Vdlyvval__sha256_tb__DOT__w__v3 = vlSelf->i_w
            [3U];
        __Vdlyvval__sha256_tb__DOT__w__v4 = vlSelf->i_w
            [4U];
        __Vdlyvval__sha256_tb__DOT__w__v5 = vlSelf->i_w
            [5U];
        __Vdlyvval__sha256_tb__DOT__w__v6 = vlSelf->i_w
            [6U];
        __Vdlyvval__sha256_tb__DOT__w__v7 = vlSelf->i_w
            [7U];
        __Vdlyvval__sha256_tb__DOT__w__v8 = vlSelf->i_w
            [8U];
        __Vdlyvval__sha256_tb__DOT__w__v9 = vlSelf->i_w
            [9U];
        __Vdlyvval__sha256_tb__DOT__w__v10 = vlSelf->i_w
            [0xaU];
        __Vdlyvval__sha256_tb__DOT__w__v11 = vlSelf->i_w
            [0xbU];
        __Vdlyvval__sha256_tb__DOT__w__v12 = vlSelf->i_w
            [0xcU];
        __Vdlyvval__sha256_tb__DOT__w__v13 = vlSelf->i_w
            [0xdU];
        __Vdlyvval__sha256_tb__DOT__w__v14 = vlSelf->i_w
            [0xeU];
        __Vdlyvval__sha256_tb__DOT__w__v15 = vlSelf->i_w
            [0xfU];
    } else {
        if (vlSelf->sha256_tb__DOT__wvalid) {
            __Vdlyvval__sha256_tb__DOT__w__v63 = vlSelf->sha256_tb__DOT__wout;
            __Vdlyvset__sha256_tb__DOT__w__v63 = 1U;
            __Vdlyvdim0__sha256_tb__DOT__w__v63 = vlSelf->sha256_tb__DOT__counter;
        }
        if (vlSelf->sha256_tb__DOT__valid) {
            __Vdly__sha256_tb__DOT__counter = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->sha256_tb__DOT__counter)));
        }
    }
    if (__Vdlyvset__sha256_tb__DOT__w__v0) {
        vlSelf->sha256_tb__DOT__w[0U] = __Vdlyvval__sha256_tb__DOT__w__v0;
        vlSelf->sha256_tb__DOT__w[1U] = __Vdlyvval__sha256_tb__DOT__w__v1;
        vlSelf->sha256_tb__DOT__w[2U] = __Vdlyvval__sha256_tb__DOT__w__v2;
        vlSelf->sha256_tb__DOT__w[3U] = __Vdlyvval__sha256_tb__DOT__w__v3;
        vlSelf->sha256_tb__DOT__w[4U] = __Vdlyvval__sha256_tb__DOT__w__v4;
        vlSelf->sha256_tb__DOT__w[5U] = __Vdlyvval__sha256_tb__DOT__w__v5;
        vlSelf->sha256_tb__DOT__w[6U] = __Vdlyvval__sha256_tb__DOT__w__v6;
        vlSelf->sha256_tb__DOT__w[7U] = __Vdlyvval__sha256_tb__DOT__w__v7;
        vlSelf->sha256_tb__DOT__w[8U] = __Vdlyvval__sha256_tb__DOT__w__v8;
        vlSelf->sha256_tb__DOT__w[9U] = __Vdlyvval__sha256_tb__DOT__w__v9;
        vlSelf->sha256_tb__DOT__w[0xaU] = __Vdlyvval__sha256_tb__DOT__w__v10;
        vlSelf->sha256_tb__DOT__w[0xbU] = __Vdlyvval__sha256_tb__DOT__w__v11;
        vlSelf->sha256_tb__DOT__w[0xcU] = __Vdlyvval__sha256_tb__DOT__w__v12;
        vlSelf->sha256_tb__DOT__w[0xdU] = __Vdlyvval__sha256_tb__DOT__w__v13;
        vlSelf->sha256_tb__DOT__w[0xeU] = __Vdlyvval__sha256_tb__DOT__w__v14;
        vlSelf->sha256_tb__DOT__w[0xfU] = __Vdlyvval__sha256_tb__DOT__w__v15;
        __Vilp = 0x10U;
        while ((__Vilp <= 0x3eU)) {
            vlSelf->sha256_tb__DOT__w[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__sha256_tb__DOT__w__v63) {
        vlSelf->sha256_tb__DOT__w[__Vdlyvdim0__sha256_tb__DOT__w__v63] 
            = __Vdlyvval__sha256_tb__DOT__w__v63;
    }
    vlSelf->sha256_tb__DOT__counter = __Vdly__sha256_tb__DOT__counter;
    if (vlSelf->rst) {
        vlSelf->__Vdlyvset__sha256_tb__DOT__letter__v0 = 1U;
        __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_5__v0 = 1U;
    } else {
        if (vlSelf->sha256_tb__DOT__valid) {
            vlSelf->__Vdlyvval__sha256_tb__DOT__letter__v8 
                = vlSelf->sha256_tb__DOT__o_let[7U];
            vlSelf->__Vdlyvset__sha256_tb__DOT__letter__v8 = 1U;
            vlSelf->__Vdlyvval__sha256_tb__DOT__letter__v9 
                = vlSelf->sha256_tb__DOT__o_let[6U];
            vlSelf->__Vdlyvval__sha256_tb__DOT__letter__v10 
                = vlSelf->sha256_tb__DOT__o_let[5U];
            vlSelf->__Vdlyvval__sha256_tb__DOT__letter__v11 
                = vlSelf->sha256_tb__DOT__o_let[4U];
            vlSelf->__Vdlyvval__sha256_tb__DOT__letter__v12 
                = vlSelf->sha256_tb__DOT__o_let[3U];
            vlSelf->__Vdlyvval__sha256_tb__DOT__letter__v13 
                = vlSelf->sha256_tb__DOT__o_let[2U];
            vlSelf->__Vdlyvval__sha256_tb__DOT__letter__v14 
                = vlSelf->sha256_tb__DOT__o_let[1U];
            vlSelf->__Vdlyvval__sha256_tb__DOT__letter__v15 
                = vlSelf->sha256_tb__DOT__o_let[0U];
        }
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v8 
            = (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
               + vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4);
        __Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_5__v8 = 1U;
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v9 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
            [0U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v10 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
            [1U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v11 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
            [2U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v12 
            = (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [3U] + vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4);
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v13 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
            [4U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v14 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
            [5U];
        __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v15 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
            [6U];
    }
    if (__Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_4__v0) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[0U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[1U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[2U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[3U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[4U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[5U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[6U] = 0U;
    }
    if (__Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_4__v7) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[6U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v7;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[5U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v8;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[4U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v9;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[3U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v10;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[2U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v11;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[1U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v12;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[0U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_4__v13;
    }
    if (__Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_5__v0) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[0U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[1U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[2U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[3U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[4U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[5U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[6U] = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[7U] = 0U;
    }
    if (__Vdlyvset__sha256_tb__DOT__sha_inst__DOT__letters_5__v8) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[0U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v8;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[1U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v9;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[2U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v10;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[3U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v11;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[4U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v12;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[5U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v13;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[6U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v14;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[7U] 
            = __Vdlyvval__sha256_tb__DOT__sha_inst__DOT__letters_5__v15;
    }
    if ((1U & ((IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT__ready) 
               ^ (IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ready)))) {
        vlSymsp->__Vcoverage[3216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ready 
            = ((0x1eU & (IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ready)) 
               | (1U & (IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT__ready)));
    }
    if ((2U & ((IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT__ready) 
               ^ (IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ready)))) {
        vlSymsp->__Vcoverage[3217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ready 
            = ((0x1dU & (IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ready)) 
               | (2U & (IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT__ready)));
    }
    if ((4U & ((IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT__ready) 
               ^ (IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ready)))) {
        vlSymsp->__Vcoverage[3218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ready 
            = ((0x1bU & (IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ready)) 
               | (4U & (IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT__ready)));
    }
    if ((8U & ((IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT__ready) 
               ^ (IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ready)))) {
        vlSymsp->__Vcoverage[3219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ready 
            = ((0x17U & (IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ready)) 
               | (8U & (IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT__ready)));
    }
    if ((0x10U & ((IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT__ready) 
                  ^ (IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ready)))) {
        vlSymsp->__Vcoverage[3220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ready 
            = ((0xfU & (IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ready)) 
               | (0x10U & (IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT__ready)));
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w_valid 
        = (1U & ((IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT__ready) 
                 >> 2U));
    vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters_valid 
        = (1U & ((IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT__ready) 
                 >> 4U));
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [0U]))) {
        vlSymsp->__Vcoverage[2436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [0U]))) {
        vlSymsp->__Vcoverage[2437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [0U]))) {
        vlSymsp->__Vcoverage[2438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [0U]))) {
        vlSymsp->__Vcoverage[2439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [0U]))) {
        vlSymsp->__Vcoverage[2440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [0U]))) {
        vlSymsp->__Vcoverage[2441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [0U]))) {
        vlSymsp->__Vcoverage[2442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [0U]))) {
        vlSymsp->__Vcoverage[2443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [0U]))) {
        vlSymsp->__Vcoverage[2444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [0U]))) {
        vlSymsp->__Vcoverage[2445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [0U]))) {
        vlSymsp->__Vcoverage[2446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [0U]))) {
        vlSymsp->__Vcoverage[2447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [0U]))) {
        vlSymsp->__Vcoverage[2448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [0U]))) {
        vlSymsp->__Vcoverage[2449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [0U]))) {
        vlSymsp->__Vcoverage[2450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [0U]))) {
        vlSymsp->__Vcoverage[2451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [0U]))) {
        vlSymsp->__Vcoverage[2452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [0U]))) {
        vlSymsp->__Vcoverage[2453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [0U]))) {
        vlSymsp->__Vcoverage[2454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [0U]))) {
        vlSymsp->__Vcoverage[2455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [0U]))) {
        vlSymsp->__Vcoverage[2456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [0U]))) {
        vlSymsp->__Vcoverage[2457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [0U]))) {
        vlSymsp->__Vcoverage[2458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [0U]))) {
        vlSymsp->__Vcoverage[2459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [0U]))) {
        vlSymsp->__Vcoverage[2460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [0U]))) {
        vlSymsp->__Vcoverage[2461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [0U]))) {
        vlSymsp->__Vcoverage[2462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [0U]))) {
        vlSymsp->__Vcoverage[2463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                        [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                        [0U]))) {
        vlSymsp->__Vcoverage[2464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                        [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                        [0U]))) {
        vlSymsp->__Vcoverage[2465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                        [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                        [0U]))) {
        vlSymsp->__Vcoverage[2466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
          [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
          [0U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[0U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [0U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [0U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [1U]))) {
        vlSymsp->__Vcoverage[2468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [1U]))) {
        vlSymsp->__Vcoverage[2469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [1U]))) {
        vlSymsp->__Vcoverage[2470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [1U]))) {
        vlSymsp->__Vcoverage[2471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [1U]))) {
        vlSymsp->__Vcoverage[2472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [1U]))) {
        vlSymsp->__Vcoverage[2473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [1U]))) {
        vlSymsp->__Vcoverage[2474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [1U]))) {
        vlSymsp->__Vcoverage[2475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [1U]))) {
        vlSymsp->__Vcoverage[2476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [1U]))) {
        vlSymsp->__Vcoverage[2477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [1U]))) {
        vlSymsp->__Vcoverage[2478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [1U]))) {
        vlSymsp->__Vcoverage[2479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [1U]))) {
        vlSymsp->__Vcoverage[2480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [1U]))) {
        vlSymsp->__Vcoverage[2481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [1U]))) {
        vlSymsp->__Vcoverage[2482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [1U]))) {
        vlSymsp->__Vcoverage[2483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [1U]))) {
        vlSymsp->__Vcoverage[2484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [1U]))) {
        vlSymsp->__Vcoverage[2485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [1U]))) {
        vlSymsp->__Vcoverage[2486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [1U]))) {
        vlSymsp->__Vcoverage[2487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [1U]))) {
        vlSymsp->__Vcoverage[2488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [1U]))) {
        vlSymsp->__Vcoverage[2489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [1U]))) {
        vlSymsp->__Vcoverage[2490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [1U]))) {
        vlSymsp->__Vcoverage[2491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [1U]))) {
        vlSymsp->__Vcoverage[2492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [1U]))) {
        vlSymsp->__Vcoverage[2493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [1U]))) {
        vlSymsp->__Vcoverage[2494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [1U]))) {
        vlSymsp->__Vcoverage[2495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                        [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                        [1U]))) {
        vlSymsp->__Vcoverage[2496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                        [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                        [1U]))) {
        vlSymsp->__Vcoverage[2497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                        [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                        [1U]))) {
        vlSymsp->__Vcoverage[2498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
          [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
          [1U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[1U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [1U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [1U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [2U]))) {
        vlSymsp->__Vcoverage[2500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [2U]))) {
        vlSymsp->__Vcoverage[2501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [2U]))) {
        vlSymsp->__Vcoverage[2502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [2U]))) {
        vlSymsp->__Vcoverage[2503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [2U]))) {
        vlSymsp->__Vcoverage[2504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [2U]))) {
        vlSymsp->__Vcoverage[2505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [2U]))) {
        vlSymsp->__Vcoverage[2506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [2U]))) {
        vlSymsp->__Vcoverage[2507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [2U]))) {
        vlSymsp->__Vcoverage[2508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [2U]))) {
        vlSymsp->__Vcoverage[2509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [2U]))) {
        vlSymsp->__Vcoverage[2510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [2U]))) {
        vlSymsp->__Vcoverage[2511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [2U]))) {
        vlSymsp->__Vcoverage[2512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [2U]))) {
        vlSymsp->__Vcoverage[2513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [2U]))) {
        vlSymsp->__Vcoverage[2514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [2U]))) {
        vlSymsp->__Vcoverage[2515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [2U]))) {
        vlSymsp->__Vcoverage[2516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [2U]))) {
        vlSymsp->__Vcoverage[2517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [2U]))) {
        vlSymsp->__Vcoverage[2518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [2U]))) {
        vlSymsp->__Vcoverage[2519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [2U]))) {
        vlSymsp->__Vcoverage[2520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [2U]))) {
        vlSymsp->__Vcoverage[2521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [2U]))) {
        vlSymsp->__Vcoverage[2522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [2U]))) {
        vlSymsp->__Vcoverage[2523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [2U]))) {
        vlSymsp->__Vcoverage[2524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [2U]))) {
        vlSymsp->__Vcoverage[2525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [2U]))) {
        vlSymsp->__Vcoverage[2526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [2U]))) {
        vlSymsp->__Vcoverage[2527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                        [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                        [2U]))) {
        vlSymsp->__Vcoverage[2528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                        [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                        [2U]))) {
        vlSymsp->__Vcoverage[2529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                        [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                        [2U]))) {
        vlSymsp->__Vcoverage[2530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
          [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
          [2U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[2U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [2U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [2U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [3U]))) {
        vlSymsp->__Vcoverage[2532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [3U]))) {
        vlSymsp->__Vcoverage[2533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [3U]))) {
        vlSymsp->__Vcoverage[2534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [3U]))) {
        vlSymsp->__Vcoverage[2535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [3U]))) {
        vlSymsp->__Vcoverage[2536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [3U]))) {
        vlSymsp->__Vcoverage[2537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [3U]))) {
        vlSymsp->__Vcoverage[2538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [3U]))) {
        vlSymsp->__Vcoverage[2539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [3U]))) {
        vlSymsp->__Vcoverage[2540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [3U]))) {
        vlSymsp->__Vcoverage[2541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [3U]))) {
        vlSymsp->__Vcoverage[2542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [3U]))) {
        vlSymsp->__Vcoverage[2543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [3U]))) {
        vlSymsp->__Vcoverage[2544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [3U]))) {
        vlSymsp->__Vcoverage[2545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [3U]))) {
        vlSymsp->__Vcoverage[2546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [3U]))) {
        vlSymsp->__Vcoverage[2547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [3U]))) {
        vlSymsp->__Vcoverage[2548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [3U]))) {
        vlSymsp->__Vcoverage[2549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [3U]))) {
        vlSymsp->__Vcoverage[2550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [3U]))) {
        vlSymsp->__Vcoverage[2551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [3U]))) {
        vlSymsp->__Vcoverage[2552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [3U]))) {
        vlSymsp->__Vcoverage[2553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [3U]))) {
        vlSymsp->__Vcoverage[2554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [3U]))) {
        vlSymsp->__Vcoverage[2555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [3U]))) {
        vlSymsp->__Vcoverage[2556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [3U]))) {
        vlSymsp->__Vcoverage[2557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [3U]))) {
        vlSymsp->__Vcoverage[2558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [3U]))) {
        vlSymsp->__Vcoverage[2559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                        [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                        [3U]))) {
        vlSymsp->__Vcoverage[2560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                        [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                        [3U]))) {
        vlSymsp->__Vcoverage[2561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                        [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                        [3U]))) {
        vlSymsp->__Vcoverage[2562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
          [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
          [3U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[3U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [3U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [3U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [4U]))) {
        vlSymsp->__Vcoverage[2564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [4U]))) {
        vlSymsp->__Vcoverage[2565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [4U]))) {
        vlSymsp->__Vcoverage[2566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [4U]))) {
        vlSymsp->__Vcoverage[2567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [4U]))) {
        vlSymsp->__Vcoverage[2568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [4U]))) {
        vlSymsp->__Vcoverage[2569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [4U]))) {
        vlSymsp->__Vcoverage[2570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [4U]))) {
        vlSymsp->__Vcoverage[2571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [4U]))) {
        vlSymsp->__Vcoverage[2572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [4U]))) {
        vlSymsp->__Vcoverage[2573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [4U]))) {
        vlSymsp->__Vcoverage[2574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [4U]))) {
        vlSymsp->__Vcoverage[2575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [4U]))) {
        vlSymsp->__Vcoverage[2576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [4U]))) {
        vlSymsp->__Vcoverage[2577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [4U]))) {
        vlSymsp->__Vcoverage[2578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [4U]))) {
        vlSymsp->__Vcoverage[2579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [4U]))) {
        vlSymsp->__Vcoverage[2580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [4U]))) {
        vlSymsp->__Vcoverage[2581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [4U]))) {
        vlSymsp->__Vcoverage[2582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [4U]))) {
        vlSymsp->__Vcoverage[2583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [4U]))) {
        vlSymsp->__Vcoverage[2584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [4U]))) {
        vlSymsp->__Vcoverage[2585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [4U]))) {
        vlSymsp->__Vcoverage[2586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [4U]))) {
        vlSymsp->__Vcoverage[2587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [4U]))) {
        vlSymsp->__Vcoverage[2588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [4U]))) {
        vlSymsp->__Vcoverage[2589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [4U]))) {
        vlSymsp->__Vcoverage[2590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [4U]))) {
        vlSymsp->__Vcoverage[2591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                        [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                        [4U]))) {
        vlSymsp->__Vcoverage[2592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                        [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                        [4U]))) {
        vlSymsp->__Vcoverage[2593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                        [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                        [4U]))) {
        vlSymsp->__Vcoverage[2594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
          [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
          [4U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[4U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [4U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [4U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [5U]))) {
        vlSymsp->__Vcoverage[2596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [5U]))) {
        vlSymsp->__Vcoverage[2597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [5U]))) {
        vlSymsp->__Vcoverage[2598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [5U]))) {
        vlSymsp->__Vcoverage[2599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [5U]))) {
        vlSymsp->__Vcoverage[2600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [5U]))) {
        vlSymsp->__Vcoverage[2601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [5U]))) {
        vlSymsp->__Vcoverage[2602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [5U]))) {
        vlSymsp->__Vcoverage[2603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [5U]))) {
        vlSymsp->__Vcoverage[2604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [5U]))) {
        vlSymsp->__Vcoverage[2605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [5U]))) {
        vlSymsp->__Vcoverage[2606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [5U]))) {
        vlSymsp->__Vcoverage[2607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [5U]))) {
        vlSymsp->__Vcoverage[2608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [5U]))) {
        vlSymsp->__Vcoverage[2609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [5U]))) {
        vlSymsp->__Vcoverage[2610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [5U]))) {
        vlSymsp->__Vcoverage[2611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [5U]))) {
        vlSymsp->__Vcoverage[2612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [5U]))) {
        vlSymsp->__Vcoverage[2613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [5U]))) {
        vlSymsp->__Vcoverage[2614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [5U]))) {
        vlSymsp->__Vcoverage[2615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [5U]))) {
        vlSymsp->__Vcoverage[2616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [5U]))) {
        vlSymsp->__Vcoverage[2617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [5U]))) {
        vlSymsp->__Vcoverage[2618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [5U]))) {
        vlSymsp->__Vcoverage[2619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [5U]))) {
        vlSymsp->__Vcoverage[2620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [5U]))) {
        vlSymsp->__Vcoverage[2621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [5U]))) {
        vlSymsp->__Vcoverage[2622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [5U]))) {
        vlSymsp->__Vcoverage[2623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                        [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                        [5U]))) {
        vlSymsp->__Vcoverage[2624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                        [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                        [5U]))) {
        vlSymsp->__Vcoverage[2625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                        [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                        [5U]))) {
        vlSymsp->__Vcoverage[2626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
          [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
          [5U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[5U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [5U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [5U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [6U]))) {
        vlSymsp->__Vcoverage[2628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [6U]))) {
        vlSymsp->__Vcoverage[2629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [6U]))) {
        vlSymsp->__Vcoverage[2630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
               [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
               [6U]))) {
        vlSymsp->__Vcoverage[2631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [6U]))) {
        vlSymsp->__Vcoverage[2632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [6U]))) {
        vlSymsp->__Vcoverage[2633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [6U]))) {
        vlSymsp->__Vcoverage[2634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                  [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                  [6U]))) {
        vlSymsp->__Vcoverage[2635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [6U]))) {
        vlSymsp->__Vcoverage[2636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [6U]))) {
        vlSymsp->__Vcoverage[2637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [6U]))) {
        vlSymsp->__Vcoverage[2638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                   [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                   [6U]))) {
        vlSymsp->__Vcoverage[2639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [6U]))) {
        vlSymsp->__Vcoverage[2640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [6U]))) {
        vlSymsp->__Vcoverage[2641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [6U]))) {
        vlSymsp->__Vcoverage[2642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                    [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                    [6U]))) {
        vlSymsp->__Vcoverage[2643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [6U]))) {
        vlSymsp->__Vcoverage[2644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [6U]))) {
        vlSymsp->__Vcoverage[2645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [6U]))) {
        vlSymsp->__Vcoverage[2646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                     [6U]))) {
        vlSymsp->__Vcoverage[2647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [6U]))) {
        vlSymsp->__Vcoverage[2648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [6U]))) {
        vlSymsp->__Vcoverage[2649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [6U]))) {
        vlSymsp->__Vcoverage[2650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                      [6U]))) {
        vlSymsp->__Vcoverage[2651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [6U]))) {
        vlSymsp->__Vcoverage[2652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [6U]))) {
        vlSymsp->__Vcoverage[2653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [6U]))) {
        vlSymsp->__Vcoverage[2654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                       [6U]))) {
        vlSymsp->__Vcoverage[2655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                        [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                        [6U]))) {
        vlSymsp->__Vcoverage[2656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                        [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                        [6U]))) {
        vlSymsp->__Vcoverage[2657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                        [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                        [6U]))) {
        vlSymsp->__Vcoverage[2658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
          [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
          [6U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [0U]))) {
        vlSymsp->__Vcoverage[2112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [0U]))) {
        vlSymsp->__Vcoverage[2113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [0U]))) {
        vlSymsp->__Vcoverage[2114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [0U]))) {
        vlSymsp->__Vcoverage[2115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [0U]))) {
        vlSymsp->__Vcoverage[2116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [0U]))) {
        vlSymsp->__Vcoverage[2117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [0U]))) {
        vlSymsp->__Vcoverage[2118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [0U]))) {
        vlSymsp->__Vcoverage[2119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [0U]))) {
        vlSymsp->__Vcoverage[2120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [0U]))) {
        vlSymsp->__Vcoverage[2121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [0U]))) {
        vlSymsp->__Vcoverage[2122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [0U]))) {
        vlSymsp->__Vcoverage[2123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [0U]))) {
        vlSymsp->__Vcoverage[2124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [0U]))) {
        vlSymsp->__Vcoverage[2125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [0U]))) {
        vlSymsp->__Vcoverage[2126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [0U]))) {
        vlSymsp->__Vcoverage[2127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [0U]))) {
        vlSymsp->__Vcoverage[2128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [0U]))) {
        vlSymsp->__Vcoverage[2129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [0U]))) {
        vlSymsp->__Vcoverage[2130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [0U]))) {
        vlSymsp->__Vcoverage[2131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [0U]))) {
        vlSymsp->__Vcoverage[2132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [0U]))) {
        vlSymsp->__Vcoverage[2133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [0U]))) {
        vlSymsp->__Vcoverage[2134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [0U]))) {
        vlSymsp->__Vcoverage[2135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [0U]))) {
        vlSymsp->__Vcoverage[2136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [0U]))) {
        vlSymsp->__Vcoverage[2137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [0U]))) {
        vlSymsp->__Vcoverage[2138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [0U]))) {
        vlSymsp->__Vcoverage[2139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                        [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                        [0U]))) {
        vlSymsp->__Vcoverage[2140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                        [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                        [0U]))) {
        vlSymsp->__Vcoverage[2141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                        [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                        [0U]))) {
        vlSymsp->__Vcoverage[2142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
          [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
          [0U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[0U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [0U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [0U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [1U]))) {
        vlSymsp->__Vcoverage[2144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [1U]))) {
        vlSymsp->__Vcoverage[2145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [1U]))) {
        vlSymsp->__Vcoverage[2146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [1U]))) {
        vlSymsp->__Vcoverage[2147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [1U]))) {
        vlSymsp->__Vcoverage[2148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [1U]))) {
        vlSymsp->__Vcoverage[2149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [1U]))) {
        vlSymsp->__Vcoverage[2150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [1U]))) {
        vlSymsp->__Vcoverage[2151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [1U]))) {
        vlSymsp->__Vcoverage[2152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [1U]))) {
        vlSymsp->__Vcoverage[2153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [1U]))) {
        vlSymsp->__Vcoverage[2154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [1U]))) {
        vlSymsp->__Vcoverage[2155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [1U]))) {
        vlSymsp->__Vcoverage[2156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [1U]))) {
        vlSymsp->__Vcoverage[2157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [1U]))) {
        vlSymsp->__Vcoverage[2158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [1U]))) {
        vlSymsp->__Vcoverage[2159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [1U]))) {
        vlSymsp->__Vcoverage[2160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [1U]))) {
        vlSymsp->__Vcoverage[2161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [1U]))) {
        vlSymsp->__Vcoverage[2162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [1U]))) {
        vlSymsp->__Vcoverage[2163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [1U]))) {
        vlSymsp->__Vcoverage[2164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [1U]))) {
        vlSymsp->__Vcoverage[2165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [1U]))) {
        vlSymsp->__Vcoverage[2166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [1U]))) {
        vlSymsp->__Vcoverage[2167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [1U]))) {
        vlSymsp->__Vcoverage[2168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [1U]))) {
        vlSymsp->__Vcoverage[2169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [1U]))) {
        vlSymsp->__Vcoverage[2170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [1U]))) {
        vlSymsp->__Vcoverage[2171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                        [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                        [1U]))) {
        vlSymsp->__Vcoverage[2172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                        [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                        [1U]))) {
        vlSymsp->__Vcoverage[2173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                        [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                        [1U]))) {
        vlSymsp->__Vcoverage[2174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
          [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
          [1U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[1U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [1U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [1U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [2U]))) {
        vlSymsp->__Vcoverage[2176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [2U]))) {
        vlSymsp->__Vcoverage[2177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [2U]))) {
        vlSymsp->__Vcoverage[2178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [2U]))) {
        vlSymsp->__Vcoverage[2179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [2U]))) {
        vlSymsp->__Vcoverage[2180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [2U]))) {
        vlSymsp->__Vcoverage[2181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [2U]))) {
        vlSymsp->__Vcoverage[2182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [2U]))) {
        vlSymsp->__Vcoverage[2183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [2U]))) {
        vlSymsp->__Vcoverage[2184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [2U]))) {
        vlSymsp->__Vcoverage[2185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [2U]))) {
        vlSymsp->__Vcoverage[2186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [2U]))) {
        vlSymsp->__Vcoverage[2187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [2U]))) {
        vlSymsp->__Vcoverage[2188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [2U]))) {
        vlSymsp->__Vcoverage[2189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [2U]))) {
        vlSymsp->__Vcoverage[2190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [2U]))) {
        vlSymsp->__Vcoverage[2191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [2U]))) {
        vlSymsp->__Vcoverage[2192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [2U]))) {
        vlSymsp->__Vcoverage[2193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [2U]))) {
        vlSymsp->__Vcoverage[2194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [2U]))) {
        vlSymsp->__Vcoverage[2195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [2U]))) {
        vlSymsp->__Vcoverage[2196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [2U]))) {
        vlSymsp->__Vcoverage[2197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [2U]))) {
        vlSymsp->__Vcoverage[2198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [2U]))) {
        vlSymsp->__Vcoverage[2199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [2U]))) {
        vlSymsp->__Vcoverage[2200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [2U]))) {
        vlSymsp->__Vcoverage[2201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [2U]))) {
        vlSymsp->__Vcoverage[2202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [2U]))) {
        vlSymsp->__Vcoverage[2203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                        [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                        [2U]))) {
        vlSymsp->__Vcoverage[2204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                        [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                        [2U]))) {
        vlSymsp->__Vcoverage[2205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                        [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                        [2U]))) {
        vlSymsp->__Vcoverage[2206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
          [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
          [2U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[2U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [2U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [2U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [3U]))) {
        vlSymsp->__Vcoverage[2208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [3U]))) {
        vlSymsp->__Vcoverage[2209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [3U]))) {
        vlSymsp->__Vcoverage[2210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [3U]))) {
        vlSymsp->__Vcoverage[2211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [3U]))) {
        vlSymsp->__Vcoverage[2212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [3U]))) {
        vlSymsp->__Vcoverage[2213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [3U]))) {
        vlSymsp->__Vcoverage[2214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [3U]))) {
        vlSymsp->__Vcoverage[2215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [3U]))) {
        vlSymsp->__Vcoverage[2216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [3U]))) {
        vlSymsp->__Vcoverage[2217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [3U]))) {
        vlSymsp->__Vcoverage[2218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [3U]))) {
        vlSymsp->__Vcoverage[2219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [3U]))) {
        vlSymsp->__Vcoverage[2220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [3U]))) {
        vlSymsp->__Vcoverage[2221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [3U]))) {
        vlSymsp->__Vcoverage[2222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [3U]))) {
        vlSymsp->__Vcoverage[2223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [3U]))) {
        vlSymsp->__Vcoverage[2224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [3U]))) {
        vlSymsp->__Vcoverage[2225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [3U]))) {
        vlSymsp->__Vcoverage[2226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [3U]))) {
        vlSymsp->__Vcoverage[2227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [3U]))) {
        vlSymsp->__Vcoverage[2228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [3U]))) {
        vlSymsp->__Vcoverage[2229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [3U]))) {
        vlSymsp->__Vcoverage[2230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [3U]))) {
        vlSymsp->__Vcoverage[2231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [3U]))) {
        vlSymsp->__Vcoverage[2232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [3U]))) {
        vlSymsp->__Vcoverage[2233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [3U]))) {
        vlSymsp->__Vcoverage[2234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [3U]))) {
        vlSymsp->__Vcoverage[2235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                        [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                        [3U]))) {
        vlSymsp->__Vcoverage[2236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                        [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                        [3U]))) {
        vlSymsp->__Vcoverage[2237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                        [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                        [3U]))) {
        vlSymsp->__Vcoverage[2238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
          [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
          [3U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[3U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [3U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [3U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [4U]))) {
        vlSymsp->__Vcoverage[2240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [4U]))) {
        vlSymsp->__Vcoverage[2241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [4U]))) {
        vlSymsp->__Vcoverage[2242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [4U]))) {
        vlSymsp->__Vcoverage[2243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [4U]))) {
        vlSymsp->__Vcoverage[2244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [4U]))) {
        vlSymsp->__Vcoverage[2245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [4U]))) {
        vlSymsp->__Vcoverage[2246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [4U]))) {
        vlSymsp->__Vcoverage[2247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [4U]))) {
        vlSymsp->__Vcoverage[2248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [4U]))) {
        vlSymsp->__Vcoverage[2249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [4U]))) {
        vlSymsp->__Vcoverage[2250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [4U]))) {
        vlSymsp->__Vcoverage[2251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [4U]))) {
        vlSymsp->__Vcoverage[2252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [4U]))) {
        vlSymsp->__Vcoverage[2253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [4U]))) {
        vlSymsp->__Vcoverage[2254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [4U]))) {
        vlSymsp->__Vcoverage[2255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [4U]))) {
        vlSymsp->__Vcoverage[2256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [4U]))) {
        vlSymsp->__Vcoverage[2257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [4U]))) {
        vlSymsp->__Vcoverage[2258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [4U]))) {
        vlSymsp->__Vcoverage[2259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [4U]))) {
        vlSymsp->__Vcoverage[2260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [4U]))) {
        vlSymsp->__Vcoverage[2261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [4U]))) {
        vlSymsp->__Vcoverage[2262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [4U]))) {
        vlSymsp->__Vcoverage[2263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [4U]))) {
        vlSymsp->__Vcoverage[2264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [4U]))) {
        vlSymsp->__Vcoverage[2265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [4U]))) {
        vlSymsp->__Vcoverage[2266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [4U]))) {
        vlSymsp->__Vcoverage[2267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                        [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                        [4U]))) {
        vlSymsp->__Vcoverage[2268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                        [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                        [4U]))) {
        vlSymsp->__Vcoverage[2269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                        [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                        [4U]))) {
        vlSymsp->__Vcoverage[2270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
          [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
          [4U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[4U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [4U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [4U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [5U]))) {
        vlSymsp->__Vcoverage[2272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [5U]))) {
        vlSymsp->__Vcoverage[2273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [5U]))) {
        vlSymsp->__Vcoverage[2274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [5U]))) {
        vlSymsp->__Vcoverage[2275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [5U]))) {
        vlSymsp->__Vcoverage[2276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [5U]))) {
        vlSymsp->__Vcoverage[2277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [5U]))) {
        vlSymsp->__Vcoverage[2278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [5U]))) {
        vlSymsp->__Vcoverage[2279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [5U]))) {
        vlSymsp->__Vcoverage[2280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [5U]))) {
        vlSymsp->__Vcoverage[2281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [5U]))) {
        vlSymsp->__Vcoverage[2282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [5U]))) {
        vlSymsp->__Vcoverage[2283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [5U]))) {
        vlSymsp->__Vcoverage[2284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [5U]))) {
        vlSymsp->__Vcoverage[2285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [5U]))) {
        vlSymsp->__Vcoverage[2286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [5U]))) {
        vlSymsp->__Vcoverage[2287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [5U]))) {
        vlSymsp->__Vcoverage[2288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [5U]))) {
        vlSymsp->__Vcoverage[2289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [5U]))) {
        vlSymsp->__Vcoverage[2290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [5U]))) {
        vlSymsp->__Vcoverage[2291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [5U]))) {
        vlSymsp->__Vcoverage[2292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [5U]))) {
        vlSymsp->__Vcoverage[2293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [5U]))) {
        vlSymsp->__Vcoverage[2294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [5U]))) {
        vlSymsp->__Vcoverage[2295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [5U]))) {
        vlSymsp->__Vcoverage[2296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [5U]))) {
        vlSymsp->__Vcoverage[2297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [5U]))) {
        vlSymsp->__Vcoverage[2298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [5U]))) {
        vlSymsp->__Vcoverage[2299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                        [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                        [5U]))) {
        vlSymsp->__Vcoverage[2300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                        [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                        [5U]))) {
        vlSymsp->__Vcoverage[2301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                        [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                        [5U]))) {
        vlSymsp->__Vcoverage[2302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
          [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
          [5U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[5U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [5U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [5U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [6U]))) {
        vlSymsp->__Vcoverage[2304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [6U]))) {
        vlSymsp->__Vcoverage[2305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [6U]))) {
        vlSymsp->__Vcoverage[2306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
               [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
               [6U]))) {
        vlSymsp->__Vcoverage[2307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [6U]))) {
        vlSymsp->__Vcoverage[2308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [6U]))) {
        vlSymsp->__Vcoverage[2309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [6U]))) {
        vlSymsp->__Vcoverage[2310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                  [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                  [6U]))) {
        vlSymsp->__Vcoverage[2311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [6U]))) {
        vlSymsp->__Vcoverage[2312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [6U]))) {
        vlSymsp->__Vcoverage[2313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [6U]))) {
        vlSymsp->__Vcoverage[2314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                   [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                   [6U]))) {
        vlSymsp->__Vcoverage[2315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [6U]))) {
        vlSymsp->__Vcoverage[2316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [6U]))) {
        vlSymsp->__Vcoverage[2317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [6U]))) {
        vlSymsp->__Vcoverage[2318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                    [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                    [6U]))) {
        vlSymsp->__Vcoverage[2319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [6U]))) {
        vlSymsp->__Vcoverage[2320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [6U]))) {
        vlSymsp->__Vcoverage[2321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [6U]))) {
        vlSymsp->__Vcoverage[2322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                     [6U]))) {
        vlSymsp->__Vcoverage[2323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [6U]))) {
        vlSymsp->__Vcoverage[2324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [6U]))) {
        vlSymsp->__Vcoverage[2325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [6U]))) {
        vlSymsp->__Vcoverage[2326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                      [6U]))) {
        vlSymsp->__Vcoverage[2327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [6U]))) {
        vlSymsp->__Vcoverage[2328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [6U]))) {
        vlSymsp->__Vcoverage[2329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [6U]))) {
        vlSymsp->__Vcoverage[2330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                       [6U]))) {
        vlSymsp->__Vcoverage[2331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                        [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                        [6U]))) {
        vlSymsp->__Vcoverage[2332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                        [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                        [6U]))) {
        vlSymsp->__Vcoverage[2333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                        [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                        [6U]))) {
        vlSymsp->__Vcoverage[2334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
          [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
          [6U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[6U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2
                [6U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2
                         [6U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [0U]))) {
        vlSymsp->__Vcoverage[1724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [0U]))) {
        vlSymsp->__Vcoverage[1725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [0U]))) {
        vlSymsp->__Vcoverage[1726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [0U]))) {
        vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [0U]))) {
        vlSymsp->__Vcoverage[1728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [0U]))) {
        vlSymsp->__Vcoverage[1729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [0U]))) {
        vlSymsp->__Vcoverage[1730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [0U]))) {
        vlSymsp->__Vcoverage[1731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [0U]))) {
        vlSymsp->__Vcoverage[1732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [0U]))) {
        vlSymsp->__Vcoverage[1733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [0U]))) {
        vlSymsp->__Vcoverage[1734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [0U]))) {
        vlSymsp->__Vcoverage[1735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [0U]))) {
        vlSymsp->__Vcoverage[1736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [0U]))) {
        vlSymsp->__Vcoverage[1737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [0U]))) {
        vlSymsp->__Vcoverage[1738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [0U]))) {
        vlSymsp->__Vcoverage[1739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [0U]))) {
        vlSymsp->__Vcoverage[1740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [0U]))) {
        vlSymsp->__Vcoverage[1741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [0U]))) {
        vlSymsp->__Vcoverage[1742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [0U]))) {
        vlSymsp->__Vcoverage[1743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [0U]))) {
        vlSymsp->__Vcoverage[1744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [0U]))) {
        vlSymsp->__Vcoverage[1745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if (vlSelf->rst) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 = 0U;
    } else {
        vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
            = (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
               + vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3);
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [0U]))) {
        vlSymsp->__Vcoverage[1746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [0U]))) {
        vlSymsp->__Vcoverage[1747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [0U]))) {
        vlSymsp->__Vcoverage[1748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [0U]))) {
        vlSymsp->__Vcoverage[1749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [0U]))) {
        vlSymsp->__Vcoverage[1750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [0U]))) {
        vlSymsp->__Vcoverage[1751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                        [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                        [0U]))) {
        vlSymsp->__Vcoverage[1752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                        [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                        [0U]))) {
        vlSymsp->__Vcoverage[1753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                        [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                        [0U]))) {
        vlSymsp->__Vcoverage[1754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
          [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
          [0U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[0U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [0U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [0U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [1U]))) {
        vlSymsp->__Vcoverage[1756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [1U]))) {
        vlSymsp->__Vcoverage[1757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [1U]))) {
        vlSymsp->__Vcoverage[1758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [1U]))) {
        vlSymsp->__Vcoverage[1759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [1U]))) {
        vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [1U]))) {
        vlSymsp->__Vcoverage[1761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [1U]))) {
        vlSymsp->__Vcoverage[1762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [1U]))) {
        vlSymsp->__Vcoverage[1763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [1U]))) {
        vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [1U]))) {
        vlSymsp->__Vcoverage[1765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [1U]))) {
        vlSymsp->__Vcoverage[1766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [1U]))) {
        vlSymsp->__Vcoverage[1767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [1U]))) {
        vlSymsp->__Vcoverage[1768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [1U]))) {
        vlSymsp->__Vcoverage[1769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [1U]))) {
        vlSymsp->__Vcoverage[1770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [1U]))) {
        vlSymsp->__Vcoverage[1771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [1U]))) {
        vlSymsp->__Vcoverage[1772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [1U]))) {
        vlSymsp->__Vcoverage[1773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [1U]))) {
        vlSymsp->__Vcoverage[1774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [1U]))) {
        vlSymsp->__Vcoverage[1775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [1U]))) {
        vlSymsp->__Vcoverage[1776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [1U]))) {
        vlSymsp->__Vcoverage[1777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [1U]))) {
        vlSymsp->__Vcoverage[1778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [1U]))) {
        vlSymsp->__Vcoverage[1779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [1U]))) {
        vlSymsp->__Vcoverage[1780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [1U]))) {
        vlSymsp->__Vcoverage[1781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [1U]))) {
        vlSymsp->__Vcoverage[1782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [1U]))) {
        vlSymsp->__Vcoverage[1783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                        [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                        [1U]))) {
        vlSymsp->__Vcoverage[1784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                        [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                        [1U]))) {
        vlSymsp->__Vcoverage[1785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                        [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                        [1U]))) {
        vlSymsp->__Vcoverage[1786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
          [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
          [1U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[1U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [1U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [1U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [2U]))) {
        vlSymsp->__Vcoverage[1788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [2U]))) {
        vlSymsp->__Vcoverage[1789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [2U]))) {
        vlSymsp->__Vcoverage[1790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [2U]))) {
        vlSymsp->__Vcoverage[1791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [2U]))) {
        vlSymsp->__Vcoverage[1792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [2U]))) {
        vlSymsp->__Vcoverage[1793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [2U]))) {
        vlSymsp->__Vcoverage[1794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [2U]))) {
        vlSymsp->__Vcoverage[1795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [2U]))) {
        vlSymsp->__Vcoverage[1796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [2U]))) {
        vlSymsp->__Vcoverage[1797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [2U]))) {
        vlSymsp->__Vcoverage[1798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [2U]))) {
        vlSymsp->__Vcoverage[1799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [2U]))) {
        vlSymsp->__Vcoverage[1800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [2U]))) {
        vlSymsp->__Vcoverage[1801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [2U]))) {
        vlSymsp->__Vcoverage[1802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [2U]))) {
        vlSymsp->__Vcoverage[1803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [2U]))) {
        vlSymsp->__Vcoverage[1804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [2U]))) {
        vlSymsp->__Vcoverage[1805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [2U]))) {
        vlSymsp->__Vcoverage[1806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [2U]))) {
        vlSymsp->__Vcoverage[1807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [2U]))) {
        vlSymsp->__Vcoverage[1808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [2U]))) {
        vlSymsp->__Vcoverage[1809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [2U]))) {
        vlSymsp->__Vcoverage[1810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [2U]))) {
        vlSymsp->__Vcoverage[1811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [2U]))) {
        vlSymsp->__Vcoverage[1812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [2U]))) {
        vlSymsp->__Vcoverage[1813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [2U]))) {
        vlSymsp->__Vcoverage[1814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [2U]))) {
        vlSymsp->__Vcoverage[1815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                        [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                        [2U]))) {
        vlSymsp->__Vcoverage[1816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                        [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                        [2U]))) {
        vlSymsp->__Vcoverage[1817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                        [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                        [2U]))) {
        vlSymsp->__Vcoverage[1818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
          [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
          [2U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[2U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [2U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [2U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [3U]))) {
        vlSymsp->__Vcoverage[1820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [3U]))) {
        vlSymsp->__Vcoverage[1821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [3U]))) {
        vlSymsp->__Vcoverage[1822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [3U]))) {
        vlSymsp->__Vcoverage[1823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [3U]))) {
        vlSymsp->__Vcoverage[1824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [3U]))) {
        vlSymsp->__Vcoverage[1825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [3U]))) {
        vlSymsp->__Vcoverage[1826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [3U]))) {
        vlSymsp->__Vcoverage[1827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [3U]))) {
        vlSymsp->__Vcoverage[1828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [3U]))) {
        vlSymsp->__Vcoverage[1829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [3U]))) {
        vlSymsp->__Vcoverage[1830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [3U]))) {
        vlSymsp->__Vcoverage[1831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [3U]))) {
        vlSymsp->__Vcoverage[1832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [3U]))) {
        vlSymsp->__Vcoverage[1833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [3U]))) {
        vlSymsp->__Vcoverage[1834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [3U]))) {
        vlSymsp->__Vcoverage[1835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [3U]))) {
        vlSymsp->__Vcoverage[1836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [3U]))) {
        vlSymsp->__Vcoverage[1837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [3U]))) {
        vlSymsp->__Vcoverage[1838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [3U]))) {
        vlSymsp->__Vcoverage[1839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [3U]))) {
        vlSymsp->__Vcoverage[1840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [3U]))) {
        vlSymsp->__Vcoverage[1841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [3U]))) {
        vlSymsp->__Vcoverage[1842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [3U]))) {
        vlSymsp->__Vcoverage[1843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [3U]))) {
        vlSymsp->__Vcoverage[1844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [3U]))) {
        vlSymsp->__Vcoverage[1845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [3U]))) {
        vlSymsp->__Vcoverage[1846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [3U]))) {
        vlSymsp->__Vcoverage[1847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                        [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                        [3U]))) {
        vlSymsp->__Vcoverage[1848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                        [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                        [3U]))) {
        vlSymsp->__Vcoverage[1849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                        [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                        [3U]))) {
        vlSymsp->__Vcoverage[1850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
          [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
          [3U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[3U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [3U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [3U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [4U]))) {
        vlSymsp->__Vcoverage[1852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [4U]))) {
        vlSymsp->__Vcoverage[1853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [4U]))) {
        vlSymsp->__Vcoverage[1854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [4U]))) {
        vlSymsp->__Vcoverage[1855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [4U]))) {
        vlSymsp->__Vcoverage[1856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [4U]))) {
        vlSymsp->__Vcoverage[1857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [4U]))) {
        vlSymsp->__Vcoverage[1858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [4U]))) {
        vlSymsp->__Vcoverage[1859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [4U]))) {
        vlSymsp->__Vcoverage[1860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [4U]))) {
        vlSymsp->__Vcoverage[1861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [4U]))) {
        vlSymsp->__Vcoverage[1862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [4U]))) {
        vlSymsp->__Vcoverage[1863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [4U]))) {
        vlSymsp->__Vcoverage[1864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [4U]))) {
        vlSymsp->__Vcoverage[1865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [4U]))) {
        vlSymsp->__Vcoverage[1866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [4U]))) {
        vlSymsp->__Vcoverage[1867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [4U]))) {
        vlSymsp->__Vcoverage[1868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [4U]))) {
        vlSymsp->__Vcoverage[1869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [4U]))) {
        vlSymsp->__Vcoverage[1870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [4U]))) {
        vlSymsp->__Vcoverage[1871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [4U]))) {
        vlSymsp->__Vcoverage[1872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [4U]))) {
        vlSymsp->__Vcoverage[1873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [4U]))) {
        vlSymsp->__Vcoverage[1874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [4U]))) {
        vlSymsp->__Vcoverage[1875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [4U]))) {
        vlSymsp->__Vcoverage[1876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [4U]))) {
        vlSymsp->__Vcoverage[1877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [4U]))) {
        vlSymsp->__Vcoverage[1878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [4U]))) {
        vlSymsp->__Vcoverage[1879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                        [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                        [4U]))) {
        vlSymsp->__Vcoverage[1880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                        [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                        [4U]))) {
        vlSymsp->__Vcoverage[1881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                        [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                        [4U]))) {
        vlSymsp->__Vcoverage[1882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
          [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
          [4U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[4U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [4U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [4U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [5U]))) {
        vlSymsp->__Vcoverage[1884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [5U]))) {
        vlSymsp->__Vcoverage[1885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [5U]))) {
        vlSymsp->__Vcoverage[1886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [5U]))) {
        vlSymsp->__Vcoverage[1887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [5U]))) {
        vlSymsp->__Vcoverage[1888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [5U]))) {
        vlSymsp->__Vcoverage[1889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [5U]))) {
        vlSymsp->__Vcoverage[1890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [5U]))) {
        vlSymsp->__Vcoverage[1891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [5U]))) {
        vlSymsp->__Vcoverage[1892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [5U]))) {
        vlSymsp->__Vcoverage[1893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [5U]))) {
        vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [5U]))) {
        vlSymsp->__Vcoverage[1895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [5U]))) {
        vlSymsp->__Vcoverage[1896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [5U]))) {
        vlSymsp->__Vcoverage[1897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [5U]))) {
        vlSymsp->__Vcoverage[1898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [5U]))) {
        vlSymsp->__Vcoverage[1899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [5U]))) {
        vlSymsp->__Vcoverage[1900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [5U]))) {
        vlSymsp->__Vcoverage[1901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [5U]))) {
        vlSymsp->__Vcoverage[1902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [5U]))) {
        vlSymsp->__Vcoverage[1903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [5U]))) {
        vlSymsp->__Vcoverage[1904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [5U]))) {
        vlSymsp->__Vcoverage[1905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [5U]))) {
        vlSymsp->__Vcoverage[1906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [5U]))) {
        vlSymsp->__Vcoverage[1907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [5U]))) {
        vlSymsp->__Vcoverage[1908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [5U]))) {
        vlSymsp->__Vcoverage[1909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [5U]))) {
        vlSymsp->__Vcoverage[1910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [5U]))) {
        vlSymsp->__Vcoverage[1911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                        [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                        [5U]))) {
        vlSymsp->__Vcoverage[1912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                        [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                        [5U]))) {
        vlSymsp->__Vcoverage[1913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                        [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                        [5U]))) {
        vlSymsp->__Vcoverage[1914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
          [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
          [5U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[5U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [5U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [5U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [6U]))) {
        vlSymsp->__Vcoverage[1916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [6U]))) {
        vlSymsp->__Vcoverage[1917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [6U]))) {
        vlSymsp->__Vcoverage[1918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
               [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
               [6U]))) {
        vlSymsp->__Vcoverage[1919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [6U]))) {
        vlSymsp->__Vcoverage[1920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [6U]))) {
        vlSymsp->__Vcoverage[1921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [6U]))) {
        vlSymsp->__Vcoverage[1922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                  [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                  [6U]))) {
        vlSymsp->__Vcoverage[1923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [6U]))) {
        vlSymsp->__Vcoverage[1924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [6U]))) {
        vlSymsp->__Vcoverage[1925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [6U]))) {
        vlSymsp->__Vcoverage[1926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                   [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                   [6U]))) {
        vlSymsp->__Vcoverage[1927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [6U]))) {
        vlSymsp->__Vcoverage[1928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [6U]))) {
        vlSymsp->__Vcoverage[1929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [6U]))) {
        vlSymsp->__Vcoverage[1930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                    [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                    [6U]))) {
        vlSymsp->__Vcoverage[1931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [6U]))) {
        vlSymsp->__Vcoverage[1932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [6U]))) {
        vlSymsp->__Vcoverage[1933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [6U]))) {
        vlSymsp->__Vcoverage[1934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                     [6U]))) {
        vlSymsp->__Vcoverage[1935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [6U]))) {
        vlSymsp->__Vcoverage[1936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [6U]))) {
        vlSymsp->__Vcoverage[1937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [6U]))) {
        vlSymsp->__Vcoverage[1938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                      [6U]))) {
        vlSymsp->__Vcoverage[1939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [6U]))) {
        vlSymsp->__Vcoverage[1940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [6U]))) {
        vlSymsp->__Vcoverage[1941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [6U]))) {
        vlSymsp->__Vcoverage[1942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                       [6U]))) {
        vlSymsp->__Vcoverage[1943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                        [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                        [6U]))) {
        vlSymsp->__Vcoverage[1944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                        [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                        [6U]))) {
        vlSymsp->__Vcoverage[1945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                        [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                        [6U]))) {
        vlSymsp->__Vcoverage[1946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
          [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
          [6U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[6U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1
                [6U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1
                         [6U]));
    }
    if ((0x10U > (IData)(vlSelf->sha256_tb__DOT__counter))) {
        vlSymsp->__Vcoverage[951].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x10U <= (IData)(vlSelf->sha256_tb__DOT__counter))) {
        vlSymsp->__Vcoverage[952].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3260].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3261].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3259].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3258].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((4U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                    if ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3264].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3265].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3263].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3262].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
            }
            if ((8U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3266].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3267].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3268].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3269].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((4U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                    if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3270].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3271].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3272].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3273].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
            }
        }
        if ((0x10U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
            if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3276].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3277].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3274].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3275].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((4U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                    if ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3281].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3280].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3279].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3278].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
            }
            if ((8U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3282].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3283].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3284].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3285].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((4U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                    if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3286].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3287].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3288].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3289].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
            }
        }
    }
    if ((0x20U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
        if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3290].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3291].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3292].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3293].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((4U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                    if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3294].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3295].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3296].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3297].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
            }
            if ((8U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                if ((4U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                    if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3303].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3302].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3305].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3304].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3301].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3300].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3299].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3298].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
            }
        }
        if ((0x10U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
            if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                    if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3310].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3311].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3313].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3312].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3309].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3308].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3307].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3306].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
            }
            if ((8U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3314].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3315].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3316].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3317].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((4U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                    if ((1U & (~ ((IData)(vlSelf->sha256_tb__DOT__counter) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3318].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3319].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                        if ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))) {
                            vlSymsp->__Vcoverage[3321].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k = 0xc67178f2U;
                        } else {
                            vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k = 0xbef9a3f7U;
                        }
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3320].fetch_add(1, std::memory_order_relaxed);
                        }
                    } else {
                        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                            = ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0xa4506cebU : 0x90befffaU);
                    }
                } else {
                    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                        = ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))
                            ? ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x8cc70208U : 0x84c87814U)
                            : ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x78a5636fU : 0x748f82eeU));
                }
            } else {
                vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                    = ((4U & (IData)(vlSelf->sha256_tb__DOT__counter))
                        ? ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))
                            ? ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x682e6ff3U : 0x5b9cca4fU)
                            : ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x4ed8aa4aU : 0x391c0cb3U))
                        : ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))
                            ? ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x34b0bcb5U : 0x2748774cU)
                            : ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x1e376c08U : 0x19a4c116U)));
            }
        } else {
            vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                = ((8U & (IData)(vlSelf->sha256_tb__DOT__counter))
                    ? ((4U & (IData)(vlSelf->sha256_tb__DOT__counter))
                        ? ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))
                            ? ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x106aa070U : 0xf40e3585U)
                            : ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0xd6990624U : 0xd192e819U))
                        : ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))
                            ? ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0xc76c51a3U : 0xc24b8b70U)
                            : ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0xa81a664bU : 0xa2bfe8a1U)))
                    : ((4U & (IData)(vlSelf->sha256_tb__DOT__counter))
                        ? ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))
                            ? ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x92722c85U : 0x81c2c92eU)
                            : ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x766a0abbU : 0x650a7354U))
                        : ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))
                            ? ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x53380d13U : 0x4d2c6dfcU)
                            : ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x2e1b2138U : 0x27b70a85U))));
        }
    } else {
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
            = ((0x10U & (IData)(vlSelf->sha256_tb__DOT__counter))
                ? ((8U & (IData)(vlSelf->sha256_tb__DOT__counter))
                    ? ((4U & (IData)(vlSelf->sha256_tb__DOT__counter))
                        ? ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))
                            ? ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x14292967U : 0x6ca6351U)
                            : ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0xd5a79147U : 0xc6e00bf3U))
                        : ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))
                            ? ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0xbf597fc7U : 0xb00327c8U)
                            : ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0xa831c66dU : 0x983e5152U)))
                    : ((4U & (IData)(vlSelf->sha256_tb__DOT__counter))
                        ? ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))
                            ? ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x76f988daU : 0x5cb0a9dcU)
                            : ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x4a7484aaU : 0x2de92c6fU))
                        : ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))
                            ? ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x240ca1ccU : 0xfc19dc6U)
                            : ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0xefbe4786U : 0xe49b69c1U))))
                : ((8U & (IData)(vlSelf->sha256_tb__DOT__counter))
                    ? ((4U & (IData)(vlSelf->sha256_tb__DOT__counter))
                        ? ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))
                            ? ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0xc19bf174U : 0x9bdc06a7U)
                            : ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x80deb1feU : 0x72be5d74U))
                        : ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))
                            ? ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x550c7dc3U : 0x243185beU)
                            : ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x12835b01U : 0xd807aa98U)))
                    : ((4U & (IData)(vlSelf->sha256_tb__DOT__counter))
                        ? ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))
                            ? ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0xab1c5ed5U : 0x923f82a4U)
                            : ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x59f111f1U : 0x3956c25bU))
                        : ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))
                            ? ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0xe9b5dba5U : 0xb5c0fbcfU)
                            : ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x71374491U : 0x428a2f98U)))));
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT__i_counter 
        = vlSelf->sha256_tb__DOT__counter;
    if ((1U & ((IData)(vlSelf->sha256_tb__DOT__counter) 
               ^ (IData)(vlSelf->sha256_tb__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__counter 
            = ((0x3eU & (IData)(vlSelf->sha256_tb__DOT____Vtogcov__counter)) 
               | (1U & (IData)(vlSelf->sha256_tb__DOT__counter)));
    }
    if ((2U & ((IData)(vlSelf->sha256_tb__DOT__counter) 
               ^ (IData)(vlSelf->sha256_tb__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__counter 
            = ((0x3dU & (IData)(vlSelf->sha256_tb__DOT____Vtogcov__counter)) 
               | (2U & (IData)(vlSelf->sha256_tb__DOT__counter)));
    }
    if ((4U & ((IData)(vlSelf->sha256_tb__DOT__counter) 
               ^ (IData)(vlSelf->sha256_tb__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__counter 
            = ((0x3bU & (IData)(vlSelf->sha256_tb__DOT____Vtogcov__counter)) 
               | (4U & (IData)(vlSelf->sha256_tb__DOT__counter)));
    }
    if ((8U & ((IData)(vlSelf->sha256_tb__DOT__counter) 
               ^ (IData)(vlSelf->sha256_tb__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__counter 
            = ((0x37U & (IData)(vlSelf->sha256_tb__DOT____Vtogcov__counter)) 
               | (8U & (IData)(vlSelf->sha256_tb__DOT__counter)));
    }
    if ((0x10U & ((IData)(vlSelf->sha256_tb__DOT__counter) 
                  ^ (IData)(vlSelf->sha256_tb__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__counter 
            = ((0x2fU & (IData)(vlSelf->sha256_tb__DOT____Vtogcov__counter)) 
               | (0x10U & (IData)(vlSelf->sha256_tb__DOT__counter)));
    }
    if ((0x20U & ((IData)(vlSelf->sha256_tb__DOT__counter) 
                  ^ (IData)(vlSelf->sha256_tb__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__counter 
            = ((0x1fU & (IData)(vlSelf->sha256_tb__DOT____Vtogcov__counter)) 
               | (0x20U & (IData)(vlSelf->sha256_tb__DOT__counter)));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [0U]))) {
        vlSymsp->__Vcoverage[2728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [0U]))) {
        vlSymsp->__Vcoverage[2729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [0U]))) {
        vlSymsp->__Vcoverage[2730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [0U]))) {
        vlSymsp->__Vcoverage[2731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [0U]))) {
        vlSymsp->__Vcoverage[2732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [0U]))) {
        vlSymsp->__Vcoverage[2733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [0U]))) {
        vlSymsp->__Vcoverage[2734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [0U]))) {
        vlSymsp->__Vcoverage[2735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [0U]))) {
        vlSymsp->__Vcoverage[2736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [0U]))) {
        vlSymsp->__Vcoverage[2737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [0U]))) {
        vlSymsp->__Vcoverage[2738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [0U]))) {
        vlSymsp->__Vcoverage[2739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [0U]))) {
        vlSymsp->__Vcoverage[2740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [0U]))) {
        vlSymsp->__Vcoverage[2741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [0U]))) {
        vlSymsp->__Vcoverage[2742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [0U]))) {
        vlSymsp->__Vcoverage[2743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [0U]))) {
        vlSymsp->__Vcoverage[2744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [0U]))) {
        vlSymsp->__Vcoverage[2745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [0U]))) {
        vlSymsp->__Vcoverage[2746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [0U]))) {
        vlSymsp->__Vcoverage[2747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [0U]))) {
        vlSymsp->__Vcoverage[2748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [0U]))) {
        vlSymsp->__Vcoverage[2749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [0U]))) {
        vlSymsp->__Vcoverage[2750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [0U]))) {
        vlSymsp->__Vcoverage[2751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [0U]))) {
        vlSymsp->__Vcoverage[2752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [0U]))) {
        vlSymsp->__Vcoverage[2753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [0U]))) {
        vlSymsp->__Vcoverage[2754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [0U]))) {
        vlSymsp->__Vcoverage[2755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                        [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                        [0U]))) {
        vlSymsp->__Vcoverage[2756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                        [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                        [0U]))) {
        vlSymsp->__Vcoverage[2757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                        [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                        [0U]))) {
        vlSymsp->__Vcoverage[2758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
          [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
          [0U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[0U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [0U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [0U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [1U]))) {
        vlSymsp->__Vcoverage[2760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [1U]))) {
        vlSymsp->__Vcoverage[2761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [1U]))) {
        vlSymsp->__Vcoverage[2762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [1U]))) {
        vlSymsp->__Vcoverage[2763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [1U]))) {
        vlSymsp->__Vcoverage[2764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [1U]))) {
        vlSymsp->__Vcoverage[2765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [1U]))) {
        vlSymsp->__Vcoverage[2766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [1U]))) {
        vlSymsp->__Vcoverage[2767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [1U]))) {
        vlSymsp->__Vcoverage[2768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [1U]))) {
        vlSymsp->__Vcoverage[2769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [1U]))) {
        vlSymsp->__Vcoverage[2770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [1U]))) {
        vlSymsp->__Vcoverage[2771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [1U]))) {
        vlSymsp->__Vcoverage[2772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [1U]))) {
        vlSymsp->__Vcoverage[2773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [1U]))) {
        vlSymsp->__Vcoverage[2774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [1U]))) {
        vlSymsp->__Vcoverage[2775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [1U]))) {
        vlSymsp->__Vcoverage[2776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [1U]))) {
        vlSymsp->__Vcoverage[2777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [1U]))) {
        vlSymsp->__Vcoverage[2778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [1U]))) {
        vlSymsp->__Vcoverage[2779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [1U]))) {
        vlSymsp->__Vcoverage[2780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [1U]))) {
        vlSymsp->__Vcoverage[2781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [1U]))) {
        vlSymsp->__Vcoverage[2782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [1U]))) {
        vlSymsp->__Vcoverage[2783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [1U]))) {
        vlSymsp->__Vcoverage[2784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [1U]))) {
        vlSymsp->__Vcoverage[2785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [1U]))) {
        vlSymsp->__Vcoverage[2786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [1U]))) {
        vlSymsp->__Vcoverage[2787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                        [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                        [1U]))) {
        vlSymsp->__Vcoverage[2788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                        [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                        [1U]))) {
        vlSymsp->__Vcoverage[2789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                        [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                        [1U]))) {
        vlSymsp->__Vcoverage[2790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
          [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
          [1U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[1U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [1U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [1U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [2U]))) {
        vlSymsp->__Vcoverage[2792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [2U]))) {
        vlSymsp->__Vcoverage[2793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [2U]))) {
        vlSymsp->__Vcoverage[2794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [2U]))) {
        vlSymsp->__Vcoverage[2795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [2U]))) {
        vlSymsp->__Vcoverage[2796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [2U]))) {
        vlSymsp->__Vcoverage[2797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [2U]))) {
        vlSymsp->__Vcoverage[2798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [2U]))) {
        vlSymsp->__Vcoverage[2799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [2U]))) {
        vlSymsp->__Vcoverage[2800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [2U]))) {
        vlSymsp->__Vcoverage[2801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [2U]))) {
        vlSymsp->__Vcoverage[2802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [2U]))) {
        vlSymsp->__Vcoverage[2803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [2U]))) {
        vlSymsp->__Vcoverage[2804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [2U]))) {
        vlSymsp->__Vcoverage[2805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [2U]))) {
        vlSymsp->__Vcoverage[2806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [2U]))) {
        vlSymsp->__Vcoverage[2807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [2U]))) {
        vlSymsp->__Vcoverage[2808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [2U]))) {
        vlSymsp->__Vcoverage[2809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [2U]))) {
        vlSymsp->__Vcoverage[2810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [2U]))) {
        vlSymsp->__Vcoverage[2811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [2U]))) {
        vlSymsp->__Vcoverage[2812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [2U]))) {
        vlSymsp->__Vcoverage[2813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [2U]))) {
        vlSymsp->__Vcoverage[2814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [2U]))) {
        vlSymsp->__Vcoverage[2815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [2U]))) {
        vlSymsp->__Vcoverage[2816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [2U]))) {
        vlSymsp->__Vcoverage[2817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [2U]))) {
        vlSymsp->__Vcoverage[2818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [2U]))) {
        vlSymsp->__Vcoverage[2819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                        [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                        [2U]))) {
        vlSymsp->__Vcoverage[2820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                        [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                        [2U]))) {
        vlSymsp->__Vcoverage[2821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                        [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                        [2U]))) {
        vlSymsp->__Vcoverage[2822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
          [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
          [2U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[2U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [2U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [2U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [3U]))) {
        vlSymsp->__Vcoverage[2824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [3U]))) {
        vlSymsp->__Vcoverage[2825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [3U]))) {
        vlSymsp->__Vcoverage[2826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [3U]))) {
        vlSymsp->__Vcoverage[2827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [3U]))) {
        vlSymsp->__Vcoverage[2828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [3U]))) {
        vlSymsp->__Vcoverage[2829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [3U]))) {
        vlSymsp->__Vcoverage[2830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [3U]))) {
        vlSymsp->__Vcoverage[2831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [3U]))) {
        vlSymsp->__Vcoverage[2832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [3U]))) {
        vlSymsp->__Vcoverage[2833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [3U]))) {
        vlSymsp->__Vcoverage[2834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [3U]))) {
        vlSymsp->__Vcoverage[2835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [3U]))) {
        vlSymsp->__Vcoverage[2836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [3U]))) {
        vlSymsp->__Vcoverage[2837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [3U]))) {
        vlSymsp->__Vcoverage[2838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [3U]))) {
        vlSymsp->__Vcoverage[2839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [3U]))) {
        vlSymsp->__Vcoverage[2840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [3U]))) {
        vlSymsp->__Vcoverage[2841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [3U]))) {
        vlSymsp->__Vcoverage[2842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [3U]))) {
        vlSymsp->__Vcoverage[2843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [3U]))) {
        vlSymsp->__Vcoverage[2844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [3U]))) {
        vlSymsp->__Vcoverage[2845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [3U]))) {
        vlSymsp->__Vcoverage[2846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [3U]))) {
        vlSymsp->__Vcoverage[2847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [3U]))) {
        vlSymsp->__Vcoverage[2848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [3U]))) {
        vlSymsp->__Vcoverage[2849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [3U]))) {
        vlSymsp->__Vcoverage[2850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [3U]))) {
        vlSymsp->__Vcoverage[2851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                        [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                        [3U]))) {
        vlSymsp->__Vcoverage[2852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                        [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                        [3U]))) {
        vlSymsp->__Vcoverage[2853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                        [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                        [3U]))) {
        vlSymsp->__Vcoverage[2854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
          [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
          [3U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[3U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [3U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [3U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [4U]))) {
        vlSymsp->__Vcoverage[2856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [4U]))) {
        vlSymsp->__Vcoverage[2857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [4U]))) {
        vlSymsp->__Vcoverage[2858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [4U]))) {
        vlSymsp->__Vcoverage[2859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [4U]))) {
        vlSymsp->__Vcoverage[2860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [4U]))) {
        vlSymsp->__Vcoverage[2861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [4U]))) {
        vlSymsp->__Vcoverage[2862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [4U]))) {
        vlSymsp->__Vcoverage[2863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [4U]))) {
        vlSymsp->__Vcoverage[2864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [4U]))) {
        vlSymsp->__Vcoverage[2865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [4U]))) {
        vlSymsp->__Vcoverage[2866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [4U]))) {
        vlSymsp->__Vcoverage[2867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [4U]))) {
        vlSymsp->__Vcoverage[2868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [4U]))) {
        vlSymsp->__Vcoverage[2869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [4U]))) {
        vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [4U]))) {
        vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [4U]))) {
        vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [4U]))) {
        vlSymsp->__Vcoverage[2873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [4U]))) {
        vlSymsp->__Vcoverage[2874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [4U]))) {
        vlSymsp->__Vcoverage[2875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [4U]))) {
        vlSymsp->__Vcoverage[2876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [4U]))) {
        vlSymsp->__Vcoverage[2877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [4U]))) {
        vlSymsp->__Vcoverage[2878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [4U]))) {
        vlSymsp->__Vcoverage[2879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [4U]))) {
        vlSymsp->__Vcoverage[2880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [4U]))) {
        vlSymsp->__Vcoverage[2881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [4U]))) {
        vlSymsp->__Vcoverage[2882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [4U]))) {
        vlSymsp->__Vcoverage[2883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                        [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                        [4U]))) {
        vlSymsp->__Vcoverage[2884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                        [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                        [4U]))) {
        vlSymsp->__Vcoverage[2885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                        [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                        [4U]))) {
        vlSymsp->__Vcoverage[2886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
          [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
          [4U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[4U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [4U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [4U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [5U]))) {
        vlSymsp->__Vcoverage[2888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [5U]))) {
        vlSymsp->__Vcoverage[2889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [5U]))) {
        vlSymsp->__Vcoverage[2890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [5U]))) {
        vlSymsp->__Vcoverage[2891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [5U]))) {
        vlSymsp->__Vcoverage[2892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [5U]))) {
        vlSymsp->__Vcoverage[2893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [5U]))) {
        vlSymsp->__Vcoverage[2894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [5U]))) {
        vlSymsp->__Vcoverage[2895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [5U]))) {
        vlSymsp->__Vcoverage[2896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [5U]))) {
        vlSymsp->__Vcoverage[2897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [5U]))) {
        vlSymsp->__Vcoverage[2898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [5U]))) {
        vlSymsp->__Vcoverage[2899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [5U]))) {
        vlSymsp->__Vcoverage[2900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [5U]))) {
        vlSymsp->__Vcoverage[2901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [5U]))) {
        vlSymsp->__Vcoverage[2902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [5U]))) {
        vlSymsp->__Vcoverage[2903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [5U]))) {
        vlSymsp->__Vcoverage[2904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [5U]))) {
        vlSymsp->__Vcoverage[2905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [5U]))) {
        vlSymsp->__Vcoverage[2906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [5U]))) {
        vlSymsp->__Vcoverage[2907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [5U]))) {
        vlSymsp->__Vcoverage[2908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [5U]))) {
        vlSymsp->__Vcoverage[2909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [5U]))) {
        vlSymsp->__Vcoverage[2910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [5U]))) {
        vlSymsp->__Vcoverage[2911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [5U]))) {
        vlSymsp->__Vcoverage[2912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [5U]))) {
        vlSymsp->__Vcoverage[2913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [5U]))) {
        vlSymsp->__Vcoverage[2914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [5U]))) {
        vlSymsp->__Vcoverage[2915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                        [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                        [5U]))) {
        vlSymsp->__Vcoverage[2916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                        [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                        [5U]))) {
        vlSymsp->__Vcoverage[2917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                        [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                        [5U]))) {
        vlSymsp->__Vcoverage[2918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
          [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
          [5U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[5U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [5U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [5U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [6U]))) {
        vlSymsp->__Vcoverage[2920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [6U]))) {
        vlSymsp->__Vcoverage[2921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [6U]))) {
        vlSymsp->__Vcoverage[2922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
               [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
               [6U]))) {
        vlSymsp->__Vcoverage[2923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [6U]))) {
        vlSymsp->__Vcoverage[2924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [6U]))) {
        vlSymsp->__Vcoverage[2925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [6U]))) {
        vlSymsp->__Vcoverage[2926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                  [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                  [6U]))) {
        vlSymsp->__Vcoverage[2927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [6U]))) {
        vlSymsp->__Vcoverage[2928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [6U]))) {
        vlSymsp->__Vcoverage[2929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [6U]))) {
        vlSymsp->__Vcoverage[2930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                   [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                   [6U]))) {
        vlSymsp->__Vcoverage[2931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [6U]))) {
        vlSymsp->__Vcoverage[2932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [6U]))) {
        vlSymsp->__Vcoverage[2933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [6U]))) {
        vlSymsp->__Vcoverage[2934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                    [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                    [6U]))) {
        vlSymsp->__Vcoverage[2935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [6U]))) {
        vlSymsp->__Vcoverage[2936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [6U]))) {
        vlSymsp->__Vcoverage[2937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [6U]))) {
        vlSymsp->__Vcoverage[2938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                     [6U]))) {
        vlSymsp->__Vcoverage[2939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [6U]))) {
        vlSymsp->__Vcoverage[2940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [6U]))) {
        vlSymsp->__Vcoverage[2941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [6U]))) {
        vlSymsp->__Vcoverage[2942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                      [6U]))) {
        vlSymsp->__Vcoverage[2943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [6U]))) {
        vlSymsp->__Vcoverage[2944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [6U]))) {
        vlSymsp->__Vcoverage[2945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [6U]))) {
        vlSymsp->__Vcoverage[2946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                       [6U]))) {
        vlSymsp->__Vcoverage[2947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                        [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                        [6U]))) {
        vlSymsp->__Vcoverage[2948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                        [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                        [6U]))) {
        vlSymsp->__Vcoverage[2949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                        [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                        [6U]))) {
        vlSymsp->__Vcoverage[2950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
          [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
          [6U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[6U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4
                [6U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4
                         [6U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [0U]))) {
        vlSymsp->__Vcoverage[2956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [0U]))) {
        vlSymsp->__Vcoverage[2957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [0U]))) {
        vlSymsp->__Vcoverage[2958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [0U]))) {
        vlSymsp->__Vcoverage[2959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [0U]))) {
        vlSymsp->__Vcoverage[2960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [0U]))) {
        vlSymsp->__Vcoverage[2961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [0U]))) {
        vlSymsp->__Vcoverage[2962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [0U]))) {
        vlSymsp->__Vcoverage[2963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [0U]))) {
        vlSymsp->__Vcoverage[2964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [0U]))) {
        vlSymsp->__Vcoverage[2965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [0U]))) {
        vlSymsp->__Vcoverage[2966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [0U]))) {
        vlSymsp->__Vcoverage[2967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [0U]))) {
        vlSymsp->__Vcoverage[2968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [0U]))) {
        vlSymsp->__Vcoverage[2969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [0U]))) {
        vlSymsp->__Vcoverage[2970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [0U]))) {
        vlSymsp->__Vcoverage[2971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [0U]))) {
        vlSymsp->__Vcoverage[2972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [0U]))) {
        vlSymsp->__Vcoverage[2973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [0U]))) {
        vlSymsp->__Vcoverage[2974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [0U]))) {
        vlSymsp->__Vcoverage[2975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [0U]))) {
        vlSymsp->__Vcoverage[2976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [0U]))) {
        vlSymsp->__Vcoverage[2977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [0U]))) {
        vlSymsp->__Vcoverage[2978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [0U]))) {
        vlSymsp->__Vcoverage[2979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [0U]))) {
        vlSymsp->__Vcoverage[2980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [0U]))) {
        vlSymsp->__Vcoverage[2981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [0U]))) {
        vlSymsp->__Vcoverage[2982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [0U]))) {
        vlSymsp->__Vcoverage[2983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                        [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                        [0U]))) {
        vlSymsp->__Vcoverage[2984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                        [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                        [0U]))) {
        vlSymsp->__Vcoverage[2985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                        [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                        [0U]))) {
        vlSymsp->__Vcoverage[2986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
          [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
          [0U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[0U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [0U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [0U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [1U]))) {
        vlSymsp->__Vcoverage[2988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [1U]))) {
        vlSymsp->__Vcoverage[2989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [1U]))) {
        vlSymsp->__Vcoverage[2990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [1U]))) {
        vlSymsp->__Vcoverage[2991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [1U]))) {
        vlSymsp->__Vcoverage[2992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [1U]))) {
        vlSymsp->__Vcoverage[2993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [1U]))) {
        vlSymsp->__Vcoverage[2994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [1U]))) {
        vlSymsp->__Vcoverage[2995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [1U]))) {
        vlSymsp->__Vcoverage[2996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [1U]))) {
        vlSymsp->__Vcoverage[2997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [1U]))) {
        vlSymsp->__Vcoverage[2998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [1U]))) {
        vlSymsp->__Vcoverage[2999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [1U]))) {
        vlSymsp->__Vcoverage[3000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [1U]))) {
        vlSymsp->__Vcoverage[3001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [1U]))) {
        vlSymsp->__Vcoverage[3002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [1U]))) {
        vlSymsp->__Vcoverage[3003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [1U]))) {
        vlSymsp->__Vcoverage[3004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [1U]))) {
        vlSymsp->__Vcoverage[3005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [1U]))) {
        vlSymsp->__Vcoverage[3006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [1U]))) {
        vlSymsp->__Vcoverage[3007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [1U]))) {
        vlSymsp->__Vcoverage[3008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [1U]))) {
        vlSymsp->__Vcoverage[3009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [1U]))) {
        vlSymsp->__Vcoverage[3010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [1U]))) {
        vlSymsp->__Vcoverage[3011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [1U]))) {
        vlSymsp->__Vcoverage[3012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [1U]))) {
        vlSymsp->__Vcoverage[3013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [1U]))) {
        vlSymsp->__Vcoverage[3014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [1U]))) {
        vlSymsp->__Vcoverage[3015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                        [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                        [1U]))) {
        vlSymsp->__Vcoverage[3016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                        [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                        [1U]))) {
        vlSymsp->__Vcoverage[3017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                        [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                        [1U]))) {
        vlSymsp->__Vcoverage[3018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
          [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
          [1U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[3019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[1U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [1U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [1U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [2U]))) {
        vlSymsp->__Vcoverage[3020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [2U]))) {
        vlSymsp->__Vcoverage[3021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [2U]))) {
        vlSymsp->__Vcoverage[3022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [2U]))) {
        vlSymsp->__Vcoverage[3023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [2U]))) {
        vlSymsp->__Vcoverage[3024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [2U]))) {
        vlSymsp->__Vcoverage[3025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [2U]))) {
        vlSymsp->__Vcoverage[3026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [2U]))) {
        vlSymsp->__Vcoverage[3027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [2U]))) {
        vlSymsp->__Vcoverage[3028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [2U]))) {
        vlSymsp->__Vcoverage[3029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [2U]))) {
        vlSymsp->__Vcoverage[3030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [2U]))) {
        vlSymsp->__Vcoverage[3031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [2U]))) {
        vlSymsp->__Vcoverage[3032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [2U]))) {
        vlSymsp->__Vcoverage[3033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [2U]))) {
        vlSymsp->__Vcoverage[3034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [2U]))) {
        vlSymsp->__Vcoverage[3035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [2U]))) {
        vlSymsp->__Vcoverage[3036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [2U]))) {
        vlSymsp->__Vcoverage[3037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [2U]))) {
        vlSymsp->__Vcoverage[3038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [2U]))) {
        vlSymsp->__Vcoverage[3039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [2U]))) {
        vlSymsp->__Vcoverage[3040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [2U]))) {
        vlSymsp->__Vcoverage[3041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [2U]))) {
        vlSymsp->__Vcoverage[3042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [2U]))) {
        vlSymsp->__Vcoverage[3043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [2U]))) {
        vlSymsp->__Vcoverage[3044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [2U]))) {
        vlSymsp->__Vcoverage[3045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [2U]))) {
        vlSymsp->__Vcoverage[3046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [2U]))) {
        vlSymsp->__Vcoverage[3047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                        [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                        [2U]))) {
        vlSymsp->__Vcoverage[3048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                        [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                        [2U]))) {
        vlSymsp->__Vcoverage[3049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                        [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                        [2U]))) {
        vlSymsp->__Vcoverage[3050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
          [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
          [2U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[3051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[2U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [2U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [2U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [3U]))) {
        vlSymsp->__Vcoverage[3052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [3U]))) {
        vlSymsp->__Vcoverage[3053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [3U]))) {
        vlSymsp->__Vcoverage[3054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [3U]))) {
        vlSymsp->__Vcoverage[3055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [3U]))) {
        vlSymsp->__Vcoverage[3056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [3U]))) {
        vlSymsp->__Vcoverage[3057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [3U]))) {
        vlSymsp->__Vcoverage[3058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [3U]))) {
        vlSymsp->__Vcoverage[3059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [3U]))) {
        vlSymsp->__Vcoverage[3060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [3U]))) {
        vlSymsp->__Vcoverage[3061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [3U]))) {
        vlSymsp->__Vcoverage[3062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [3U]))) {
        vlSymsp->__Vcoverage[3063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [3U]))) {
        vlSymsp->__Vcoverage[3064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [3U]))) {
        vlSymsp->__Vcoverage[3065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [3U]))) {
        vlSymsp->__Vcoverage[3066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [3U]))) {
        vlSymsp->__Vcoverage[3067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [3U]))) {
        vlSymsp->__Vcoverage[3068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [3U]))) {
        vlSymsp->__Vcoverage[3069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [3U]))) {
        vlSymsp->__Vcoverage[3070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [3U]))) {
        vlSymsp->__Vcoverage[3071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [3U]))) {
        vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [3U]))) {
        vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [3U]))) {
        vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [3U]))) {
        vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [3U]))) {
        vlSymsp->__Vcoverage[3076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [3U]))) {
        vlSymsp->__Vcoverage[3077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [3U]))) {
        vlSymsp->__Vcoverage[3078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [3U]))) {
        vlSymsp->__Vcoverage[3079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                        [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                        [3U]))) {
        vlSymsp->__Vcoverage[3080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                        [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                        [3U]))) {
        vlSymsp->__Vcoverage[3081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                        [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                        [3U]))) {
        vlSymsp->__Vcoverage[3082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
          [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
          [3U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[3083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[3U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [3U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [3U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [4U]))) {
        vlSymsp->__Vcoverage[3084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [4U]))) {
        vlSymsp->__Vcoverage[3085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [4U]))) {
        vlSymsp->__Vcoverage[3086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [4U]))) {
        vlSymsp->__Vcoverage[3087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [4U]))) {
        vlSymsp->__Vcoverage[3088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [4U]))) {
        vlSymsp->__Vcoverage[3089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [4U]))) {
        vlSymsp->__Vcoverage[3090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [4U]))) {
        vlSymsp->__Vcoverage[3091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [4U]))) {
        vlSymsp->__Vcoverage[3092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [4U]))) {
        vlSymsp->__Vcoverage[3093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [4U]))) {
        vlSymsp->__Vcoverage[3094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [4U]))) {
        vlSymsp->__Vcoverage[3095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [4U]))) {
        vlSymsp->__Vcoverage[3096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [4U]))) {
        vlSymsp->__Vcoverage[3097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [4U]))) {
        vlSymsp->__Vcoverage[3098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [4U]))) {
        vlSymsp->__Vcoverage[3099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [4U]))) {
        vlSymsp->__Vcoverage[3100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [4U]))) {
        vlSymsp->__Vcoverage[3101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [4U]))) {
        vlSymsp->__Vcoverage[3102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [4U]))) {
        vlSymsp->__Vcoverage[3103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [4U]))) {
        vlSymsp->__Vcoverage[3104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [4U]))) {
        vlSymsp->__Vcoverage[3105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [4U]))) {
        vlSymsp->__Vcoverage[3106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [4U]))) {
        vlSymsp->__Vcoverage[3107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [4U]))) {
        vlSymsp->__Vcoverage[3108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [4U]))) {
        vlSymsp->__Vcoverage[3109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [4U]))) {
        vlSymsp->__Vcoverage[3110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [4U]))) {
        vlSymsp->__Vcoverage[3111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                        [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                        [4U]))) {
        vlSymsp->__Vcoverage[3112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                        [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                        [4U]))) {
        vlSymsp->__Vcoverage[3113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                        [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                        [4U]))) {
        vlSymsp->__Vcoverage[3114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
          [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
          [4U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[3115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[4U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [4U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [4U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [5U]))) {
        vlSymsp->__Vcoverage[3116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [5U]))) {
        vlSymsp->__Vcoverage[3117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [5U]))) {
        vlSymsp->__Vcoverage[3118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [5U]))) {
        vlSymsp->__Vcoverage[3119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [5U]))) {
        vlSymsp->__Vcoverage[3120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [5U]))) {
        vlSymsp->__Vcoverage[3121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [5U]))) {
        vlSymsp->__Vcoverage[3122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [5U]))) {
        vlSymsp->__Vcoverage[3123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [5U]))) {
        vlSymsp->__Vcoverage[3124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [5U]))) {
        vlSymsp->__Vcoverage[3125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [5U]))) {
        vlSymsp->__Vcoverage[3126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [5U]))) {
        vlSymsp->__Vcoverage[3127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [5U]))) {
        vlSymsp->__Vcoverage[3128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [5U]))) {
        vlSymsp->__Vcoverage[3129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [5U]))) {
        vlSymsp->__Vcoverage[3130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [5U]))) {
        vlSymsp->__Vcoverage[3131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [5U]))) {
        vlSymsp->__Vcoverage[3132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [5U]))) {
        vlSymsp->__Vcoverage[3133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [5U]))) {
        vlSymsp->__Vcoverage[3134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [5U]))) {
        vlSymsp->__Vcoverage[3135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [5U]))) {
        vlSymsp->__Vcoverage[3136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [5U]))) {
        vlSymsp->__Vcoverage[3137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [5U]))) {
        vlSymsp->__Vcoverage[3138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [5U]))) {
        vlSymsp->__Vcoverage[3139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [5U]))) {
        vlSymsp->__Vcoverage[3140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [5U]))) {
        vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [5U]))) {
        vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [5U]))) {
        vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                        [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                        [5U]))) {
        vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                        [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                        [5U]))) {
        vlSymsp->__Vcoverage[3145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                        [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                        [5U]))) {
        vlSymsp->__Vcoverage[3146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
          [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
          [5U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[3147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[5U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [5U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [5U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [6U]))) {
        vlSymsp->__Vcoverage[3148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [6U]))) {
        vlSymsp->__Vcoverage[3149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [6U]))) {
        vlSymsp->__Vcoverage[3150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [6U]))) {
        vlSymsp->__Vcoverage[3151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [6U]))) {
        vlSymsp->__Vcoverage[3152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [6U]))) {
        vlSymsp->__Vcoverage[3153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [6U]))) {
        vlSymsp->__Vcoverage[3154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [6U]))) {
        vlSymsp->__Vcoverage[3155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [6U]))) {
        vlSymsp->__Vcoverage[3156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [6U]))) {
        vlSymsp->__Vcoverage[3157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
}
