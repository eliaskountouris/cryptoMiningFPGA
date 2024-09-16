// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [6U]))) {
        vlSymsp->__Vcoverage[3158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [6U]))) {
        vlSymsp->__Vcoverage[3159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [6U]))) {
        vlSymsp->__Vcoverage[3160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [6U]))) {
        vlSymsp->__Vcoverage[3161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [6U]))) {
        vlSymsp->__Vcoverage[3162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [6U]))) {
        vlSymsp->__Vcoverage[3163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [6U]))) {
        vlSymsp->__Vcoverage[3164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [6U]))) {
        vlSymsp->__Vcoverage[3165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [6U]))) {
        vlSymsp->__Vcoverage[3166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [6U]))) {
        vlSymsp->__Vcoverage[3167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [6U]))) {
        vlSymsp->__Vcoverage[3168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [6U]))) {
        vlSymsp->__Vcoverage[3169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [6U]))) {
        vlSymsp->__Vcoverage[3170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [6U]))) {
        vlSymsp->__Vcoverage[3171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [6U]))) {
        vlSymsp->__Vcoverage[3172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [6U]))) {
        vlSymsp->__Vcoverage[3173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [6U]))) {
        vlSymsp->__Vcoverage[3174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [6U]))) {
        vlSymsp->__Vcoverage[3175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                        [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                        [6U]))) {
        vlSymsp->__Vcoverage[3176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                        [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                        [6U]))) {
        vlSymsp->__Vcoverage[3177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                        [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                        [6U]))) {
        vlSymsp->__Vcoverage[3178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
          [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
          [6U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[3179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[6U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [6U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [6U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [7U]))) {
        vlSymsp->__Vcoverage[3180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [7U]))) {
        vlSymsp->__Vcoverage[3181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [7U]))) {
        vlSymsp->__Vcoverage[3182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
               [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
               [7U]))) {
        vlSymsp->__Vcoverage[3183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [7U]))) {
        vlSymsp->__Vcoverage[3184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [7U]))) {
        vlSymsp->__Vcoverage[3185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [7U]))) {
        vlSymsp->__Vcoverage[3186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                  [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                  [7U]))) {
        vlSymsp->__Vcoverage[3187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [7U]))) {
        vlSymsp->__Vcoverage[3188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [7U]))) {
        vlSymsp->__Vcoverage[3189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [7U]))) {
        vlSymsp->__Vcoverage[3190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                   [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                   [7U]))) {
        vlSymsp->__Vcoverage[3191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [7U]))) {
        vlSymsp->__Vcoverage[3192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [7U]))) {
        vlSymsp->__Vcoverage[3193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [7U]))) {
        vlSymsp->__Vcoverage[3194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                    [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                    [7U]))) {
        vlSymsp->__Vcoverage[3195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [7U]))) {
        vlSymsp->__Vcoverage[3196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [7U]))) {
        vlSymsp->__Vcoverage[3197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [7U]))) {
        vlSymsp->__Vcoverage[3198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                     [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                     [7U]))) {
        vlSymsp->__Vcoverage[3199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [7U]))) {
        vlSymsp->__Vcoverage[3200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [7U]))) {
        vlSymsp->__Vcoverage[3201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [7U]))) {
        vlSymsp->__Vcoverage[3202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                      [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                      [7U]))) {
        vlSymsp->__Vcoverage[3203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [7U]))) {
        vlSymsp->__Vcoverage[3204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [7U]))) {
        vlSymsp->__Vcoverage[3205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [7U]))) {
        vlSymsp->__Vcoverage[3206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                       [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                       [7U]))) {
        vlSymsp->__Vcoverage[3207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                        [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                        [7U]))) {
        vlSymsp->__Vcoverage[3208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                        [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                        [7U]))) {
        vlSymsp->__Vcoverage[3209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                        [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                        [7U]))) {
        vlSymsp->__Vcoverage[3210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
          [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
          [7U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[3211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[7U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5
                [7U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
                         [7U]));
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters[7U] 
        = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
        [7U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters[6U] 
        = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
        [6U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters[5U] 
        = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
        [5U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters[4U] 
        = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
        [4U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters[3U] 
        = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
        [3U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters[2U] 
        = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
        [2U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters[1U] 
        = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
        [1U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters[0U] 
        = vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5
        [0U];
    if (((IData)(vlSelf->sha256_tb__DOT__valid_r) ^ (IData)(vlSelf->sha256_tb__DOT____Vtogcov__valid_r))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__valid_r 
            = vlSelf->sha256_tb__DOT__valid_r;
    }
    vlSelf->sha256_tb__DOT__rdy = ((IData)(vlSelf->ready) 
                                   | (IData)(vlSelf->sha256_tb__DOT__valid_r));
    if (((IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w_valid) 
         ^ (IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w_valid))) {
        vlSymsp->__Vcoverage[1243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w_valid 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w_valid;
    }
    vlSelf->sha256_tb__DOT__wvalid = vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w_valid;
    if (((IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters_valid) 
         ^ (IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters_valid))) {
        vlSymsp->__Vcoverage[1210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters_valid 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters_valid;
    }
    vlSelf->sha256_tb__DOT__valid = vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters_valid;
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__i 
        = vlSelf->sha256_tb__DOT__sha_inst__DOT__i_counter;
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[3256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [0U]))) {
        vlSymsp->__Vcoverage[954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [0U]))) {
        vlSymsp->__Vcoverage[955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [0U]))) {
        vlSymsp->__Vcoverage[956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [0U]))) {
        vlSymsp->__Vcoverage[957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [0U]))) {
        vlSymsp->__Vcoverage[958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [0U]))) {
        vlSymsp->__Vcoverage[959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [0U]))) {
        vlSymsp->__Vcoverage[960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [0U]))) {
        vlSymsp->__Vcoverage[961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [0U]))) {
        vlSymsp->__Vcoverage[962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [0U]))) {
        vlSymsp->__Vcoverage[963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [0U]))) {
        vlSymsp->__Vcoverage[964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [0U]))) {
        vlSymsp->__Vcoverage[965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [0U]))) {
        vlSymsp->__Vcoverage[966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [0U]))) {
        vlSymsp->__Vcoverage[967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [0U]))) {
        vlSymsp->__Vcoverage[968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [0U]))) {
        vlSymsp->__Vcoverage[969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [0U]))) {
        vlSymsp->__Vcoverage[970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [0U]))) {
        vlSymsp->__Vcoverage[971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [0U]))) {
        vlSymsp->__Vcoverage[972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [0U]))) {
        vlSymsp->__Vcoverage[973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [0U]))) {
        vlSymsp->__Vcoverage[974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [0U]))) {
        vlSymsp->__Vcoverage[975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [0U]))) {
        vlSymsp->__Vcoverage[976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [0U]))) {
        vlSymsp->__Vcoverage[977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [0U]))) {
        vlSymsp->__Vcoverage[978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [0U]))) {
        vlSymsp->__Vcoverage[979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [0U]))) {
        vlSymsp->__Vcoverage[980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [0U]))) {
        vlSymsp->__Vcoverage[981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                        [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                        [0U]))) {
        vlSymsp->__Vcoverage[982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                        [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                        [0U]))) {
        vlSymsp->__Vcoverage[983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                        [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                        [0U]))) {
        vlSymsp->__Vcoverage[984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
          [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
          [0U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[0U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [0U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [0U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [1U]))) {
        vlSymsp->__Vcoverage[986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [1U]))) {
        vlSymsp->__Vcoverage[987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [1U]))) {
        vlSymsp->__Vcoverage[988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [1U]))) {
        vlSymsp->__Vcoverage[989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [1U]))) {
        vlSymsp->__Vcoverage[990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [1U]))) {
        vlSymsp->__Vcoverage[991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [1U]))) {
        vlSymsp->__Vcoverage[992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [1U]))) {
        vlSymsp->__Vcoverage[993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [1U]))) {
        vlSymsp->__Vcoverage[994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [1U]))) {
        vlSymsp->__Vcoverage[995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [1U]))) {
        vlSymsp->__Vcoverage[996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [1U]))) {
        vlSymsp->__Vcoverage[997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [1U]))) {
        vlSymsp->__Vcoverage[998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [1U]))) {
        vlSymsp->__Vcoverage[999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [1U]))) {
        vlSymsp->__Vcoverage[1000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [1U]))) {
        vlSymsp->__Vcoverage[1001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [1U]))) {
        vlSymsp->__Vcoverage[1002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [1U]))) {
        vlSymsp->__Vcoverage[1003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [1U]))) {
        vlSymsp->__Vcoverage[1004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [1U]))) {
        vlSymsp->__Vcoverage[1005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [1U]))) {
        vlSymsp->__Vcoverage[1006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [1U]))) {
        vlSymsp->__Vcoverage[1007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [1U]))) {
        vlSymsp->__Vcoverage[1008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [1U]))) {
        vlSymsp->__Vcoverage[1009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [1U]))) {
        vlSymsp->__Vcoverage[1010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [1U]))) {
        vlSymsp->__Vcoverage[1011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [1U]))) {
        vlSymsp->__Vcoverage[1012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [1U]))) {
        vlSymsp->__Vcoverage[1013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                        [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                        [1U]))) {
        vlSymsp->__Vcoverage[1014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                        [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                        [1U]))) {
        vlSymsp->__Vcoverage[1015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                        [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                        [1U]))) {
        vlSymsp->__Vcoverage[1016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
          [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
          [1U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[1U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [1U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [1U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [2U]))) {
        vlSymsp->__Vcoverage[1018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [2U]))) {
        vlSymsp->__Vcoverage[1019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [2U]))) {
        vlSymsp->__Vcoverage[1020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [2U]))) {
        vlSymsp->__Vcoverage[1021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [2U]))) {
        vlSymsp->__Vcoverage[1022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [2U]))) {
        vlSymsp->__Vcoverage[1023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [2U]))) {
        vlSymsp->__Vcoverage[1024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [2U]))) {
        vlSymsp->__Vcoverage[1025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [2U]))) {
        vlSymsp->__Vcoverage[1026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [2U]))) {
        vlSymsp->__Vcoverage[1027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [2U]))) {
        vlSymsp->__Vcoverage[1028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [2U]))) {
        vlSymsp->__Vcoverage[1029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [2U]))) {
        vlSymsp->__Vcoverage[1030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [2U]))) {
        vlSymsp->__Vcoverage[1031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [2U]))) {
        vlSymsp->__Vcoverage[1032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [2U]))) {
        vlSymsp->__Vcoverage[1033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [2U]))) {
        vlSymsp->__Vcoverage[1034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [2U]))) {
        vlSymsp->__Vcoverage[1035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [2U]))) {
        vlSymsp->__Vcoverage[1036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [2U]))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [2U]))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [2U]))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [2U]))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [2U]))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [2U]))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [2U]))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [2U]))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [2U]))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                        [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                        [2U]))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                        [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                        [2U]))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                        [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                        [2U]))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
          [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
          [2U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[2U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [2U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [2U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [3U]))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [3U]))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [3U]))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [3U]))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [3U]))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [3U]))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [3U]))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [3U]))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [3U]))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [3U]))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [3U]))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [3U]))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [3U]))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [3U]))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [3U]))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [3U]))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [3U]))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [3U]))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [3U]))) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [3U]))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [3U]))) {
        vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [3U]))) {
        vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [3U]))) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [3U]))) {
        vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [3U]))) {
        vlSymsp->__Vcoverage[1074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [3U]))) {
        vlSymsp->__Vcoverage[1075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [3U]))) {
        vlSymsp->__Vcoverage[1076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [3U]))) {
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                        [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                        [3U]))) {
        vlSymsp->__Vcoverage[1078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                        [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                        [3U]))) {
        vlSymsp->__Vcoverage[1079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                        [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                        [3U]))) {
        vlSymsp->__Vcoverage[1080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
          [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
          [3U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[3U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [3U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [3U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [4U]))) {
        vlSymsp->__Vcoverage[1082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [4U]))) {
        vlSymsp->__Vcoverage[1083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [4U]))) {
        vlSymsp->__Vcoverage[1084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [4U]))) {
        vlSymsp->__Vcoverage[1085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [4U]))) {
        vlSymsp->__Vcoverage[1086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [4U]))) {
        vlSymsp->__Vcoverage[1087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [4U]))) {
        vlSymsp->__Vcoverage[1088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [4U]))) {
        vlSymsp->__Vcoverage[1089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [4U]))) {
        vlSymsp->__Vcoverage[1090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [4U]))) {
        vlSymsp->__Vcoverage[1091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [4U]))) {
        vlSymsp->__Vcoverage[1092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [4U]))) {
        vlSymsp->__Vcoverage[1093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [4U]))) {
        vlSymsp->__Vcoverage[1094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [4U]))) {
        vlSymsp->__Vcoverage[1095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [4U]))) {
        vlSymsp->__Vcoverage[1096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [4U]))) {
        vlSymsp->__Vcoverage[1097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [4U]))) {
        vlSymsp->__Vcoverage[1098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [4U]))) {
        vlSymsp->__Vcoverage[1099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [4U]))) {
        vlSymsp->__Vcoverage[1100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [4U]))) {
        vlSymsp->__Vcoverage[1101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [4U]))) {
        vlSymsp->__Vcoverage[1102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [4U]))) {
        vlSymsp->__Vcoverage[1103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [4U]))) {
        vlSymsp->__Vcoverage[1104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [4U]))) {
        vlSymsp->__Vcoverage[1105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [4U]))) {
        vlSymsp->__Vcoverage[1106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [4U]))) {
        vlSymsp->__Vcoverage[1107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [4U]))) {
        vlSymsp->__Vcoverage[1108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [4U]))) {
        vlSymsp->__Vcoverage[1109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                        [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                        [4U]))) {
        vlSymsp->__Vcoverage[1110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                        [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                        [4U]))) {
        vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                        [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                        [4U]))) {
        vlSymsp->__Vcoverage[1112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
          [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
          [4U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[4U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [4U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [4U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [5U]))) {
        vlSymsp->__Vcoverage[1114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [5U]))) {
        vlSymsp->__Vcoverage[1115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [5U]))) {
        vlSymsp->__Vcoverage[1116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [5U]))) {
        vlSymsp->__Vcoverage[1117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [5U]))) {
        vlSymsp->__Vcoverage[1118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [5U]))) {
        vlSymsp->__Vcoverage[1119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [5U]))) {
        vlSymsp->__Vcoverage[1120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [5U]))) {
        vlSymsp->__Vcoverage[1121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [5U]))) {
        vlSymsp->__Vcoverage[1122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [5U]))) {
        vlSymsp->__Vcoverage[1123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [5U]))) {
        vlSymsp->__Vcoverage[1124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [5U]))) {
        vlSymsp->__Vcoverage[1125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [5U]))) {
        vlSymsp->__Vcoverage[1126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [5U]))) {
        vlSymsp->__Vcoverage[1127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [5U]))) {
        vlSymsp->__Vcoverage[1128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [5U]))) {
        vlSymsp->__Vcoverage[1129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [5U]))) {
        vlSymsp->__Vcoverage[1130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [5U]))) {
        vlSymsp->__Vcoverage[1131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [5U]))) {
        vlSymsp->__Vcoverage[1132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [5U]))) {
        vlSymsp->__Vcoverage[1133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [5U]))) {
        vlSymsp->__Vcoverage[1134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [5U]))) {
        vlSymsp->__Vcoverage[1135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [5U]))) {
        vlSymsp->__Vcoverage[1136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [5U]))) {
        vlSymsp->__Vcoverage[1137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [5U]))) {
        vlSymsp->__Vcoverage[1138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [5U]))) {
        vlSymsp->__Vcoverage[1139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [5U]))) {
        vlSymsp->__Vcoverage[1140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [5U]))) {
        vlSymsp->__Vcoverage[1141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                        [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                        [5U]))) {
        vlSymsp->__Vcoverage[1142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                        [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                        [5U]))) {
        vlSymsp->__Vcoverage[1143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                        [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                        [5U]))) {
        vlSymsp->__Vcoverage[1144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
          [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
          [5U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[5U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [5U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [5U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [6U]))) {
        vlSymsp->__Vcoverage[1146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [6U]))) {
        vlSymsp->__Vcoverage[1147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [6U]))) {
        vlSymsp->__Vcoverage[1148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [6U]))) {
        vlSymsp->__Vcoverage[1149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [6U]))) {
        vlSymsp->__Vcoverage[1150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [6U]))) {
        vlSymsp->__Vcoverage[1151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [6U]))) {
        vlSymsp->__Vcoverage[1152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [6U]))) {
        vlSymsp->__Vcoverage[1153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [6U]))) {
        vlSymsp->__Vcoverage[1154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [6U]))) {
        vlSymsp->__Vcoverage[1155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [6U]))) {
        vlSymsp->__Vcoverage[1156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [6U]))) {
        vlSymsp->__Vcoverage[1157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [6U]))) {
        vlSymsp->__Vcoverage[1158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [6U]))) {
        vlSymsp->__Vcoverage[1159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [6U]))) {
        vlSymsp->__Vcoverage[1160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [6U]))) {
        vlSymsp->__Vcoverage[1161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [6U]))) {
        vlSymsp->__Vcoverage[1162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [6U]))) {
        vlSymsp->__Vcoverage[1163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [6U]))) {
        vlSymsp->__Vcoverage[1164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [6U]))) {
        vlSymsp->__Vcoverage[1165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [6U]))) {
        vlSymsp->__Vcoverage[1166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [6U]))) {
        vlSymsp->__Vcoverage[1167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [6U]))) {
        vlSymsp->__Vcoverage[1168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [6U]))) {
        vlSymsp->__Vcoverage[1169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [6U]))) {
        vlSymsp->__Vcoverage[1170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [6U]))) {
        vlSymsp->__Vcoverage[1171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [6U]))) {
        vlSymsp->__Vcoverage[1172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [6U]))) {
        vlSymsp->__Vcoverage[1173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                        [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                        [6U]))) {
        vlSymsp->__Vcoverage[1174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                        [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                        [6U]))) {
        vlSymsp->__Vcoverage[1175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                        [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                        [6U]))) {
        vlSymsp->__Vcoverage[1176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
          [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
          [6U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[6U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [6U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [6U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [7U]))) {
        vlSymsp->__Vcoverage[1178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [7U]))) {
        vlSymsp->__Vcoverage[1179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [7U]))) {
        vlSymsp->__Vcoverage[1180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
               [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
               [7U]))) {
        vlSymsp->__Vcoverage[1181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [7U]))) {
        vlSymsp->__Vcoverage[1182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [7U]))) {
        vlSymsp->__Vcoverage[1183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [7U]))) {
        vlSymsp->__Vcoverage[1184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                  [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                  [7U]))) {
        vlSymsp->__Vcoverage[1185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [7U]))) {
        vlSymsp->__Vcoverage[1186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [7U]))) {
        vlSymsp->__Vcoverage[1187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [7U]))) {
        vlSymsp->__Vcoverage[1188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                   [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                   [7U]))) {
        vlSymsp->__Vcoverage[1189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [7U]))) {
        vlSymsp->__Vcoverage[1190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [7U]))) {
        vlSymsp->__Vcoverage[1191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [7U]))) {
        vlSymsp->__Vcoverage[1192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                    [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                    [7U]))) {
        vlSymsp->__Vcoverage[1193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [7U]))) {
        vlSymsp->__Vcoverage[1194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [7U]))) {
        vlSymsp->__Vcoverage[1195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [7U]))) {
        vlSymsp->__Vcoverage[1196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                     [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                     [7U]))) {
        vlSymsp->__Vcoverage[1197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [7U]))) {
        vlSymsp->__Vcoverage[1198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [7U]))) {
        vlSymsp->__Vcoverage[1199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [7U]))) {
        vlSymsp->__Vcoverage[1200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                      [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                      [7U]))) {
        vlSymsp->__Vcoverage[1201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [7U]))) {
        vlSymsp->__Vcoverage[1202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [7U]))) {
        vlSymsp->__Vcoverage[1203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [7U]))) {
        vlSymsp->__Vcoverage[1204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                       [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                       [7U]))) {
        vlSymsp->__Vcoverage[1205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                        [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                        [7U]))) {
        vlSymsp->__Vcoverage[1206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                        [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                        [7U]))) {
        vlSymsp->__Vcoverage[1207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                        [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                        [7U]))) {
        vlSymsp->__Vcoverage[1208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
          [7U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
          [7U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[7U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters
                [7U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
                         [7U]));
    }
    vlSelf->sha256_tb__DOT__o_let[7U] = vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
        [7U];
    vlSelf->sha256_tb__DOT__o_let[6U] = vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
        [6U];
    vlSelf->sha256_tb__DOT__o_let[5U] = vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
        [5U];
    vlSelf->sha256_tb__DOT__o_let[4U] = vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
        [4U];
    vlSelf->sha256_tb__DOT__o_let[3U] = vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
        [3U];
    vlSelf->sha256_tb__DOT__o_let[2U] = vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
        [2U];
    vlSelf->sha256_tb__DOT__o_let[1U] = vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
        [1U];
    vlSelf->sha256_tb__DOT__o_let[0U] = vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters
        [0U];
    if (((IData)(vlSelf->sha256_tb__DOT__rdy) ^ (IData)(vlSelf->sha256_tb__DOT____Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__rdy = vlSelf->sha256_tb__DOT__rdy;
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT__i_ready 
        = vlSelf->sha256_tb__DOT__rdy;
    if (((IData)(vlSelf->sha256_tb__DOT__wvalid) ^ (IData)(vlSelf->sha256_tb__DOT____Vtogcov__wvalid))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wvalid = vlSelf->sha256_tb__DOT__wvalid;
    }
    if (((IData)(vlSelf->sha256_tb__DOT__valid) ^ (IData)(vlSelf->sha256_tb__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__valid = vlSelf->sha256_tb__DOT__valid;
    }
    vlSelf->sha256_tb__DOT__o_valid = ((0x3fU == (IData)(vlSelf->sha256_tb__DOT__counter)) 
                                       & (IData)(vlSelf->sha256_tb__DOT__valid));
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4))) {
        vlSymsp->__Vcoverage[2726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4))) {
        vlSymsp->__Vcoverage[2694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__o_let[0U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [0U]))) {
        vlSymsp->__Vcoverage[686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (1U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__o_let[0U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [0U]))) {
        vlSymsp->__Vcoverage[687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (2U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__o_let[0U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [0U]))) {
        vlSymsp->__Vcoverage[688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (4U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__o_let[0U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [0U]))) {
        vlSymsp->__Vcoverage[689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (8U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__o_let[0U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [0U]))) {
        vlSymsp->__Vcoverage[690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x10U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__o_let[0U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [0U]))) {
        vlSymsp->__Vcoverage[691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x20U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__o_let[0U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [0U]))) {
        vlSymsp->__Vcoverage[692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x40U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__o_let[0U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [0U]))) {
        vlSymsp->__Vcoverage[693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x80U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__o_let[0U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [0U]))) {
        vlSymsp->__Vcoverage[694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x100U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__o_let[0U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [0U]))) {
        vlSymsp->__Vcoverage[695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x200U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__o_let[0U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [0U]))) {
        vlSymsp->__Vcoverage[696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x400U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__o_let[0U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [0U]))) {
        vlSymsp->__Vcoverage[697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x800U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__o_let[0U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [0U]))) {
        vlSymsp->__Vcoverage[698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x1000U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__o_let[0U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [0U]))) {
        vlSymsp->__Vcoverage[699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x2000U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__o_let[0U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [0U]))) {
        vlSymsp->__Vcoverage[700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x4000U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__o_let[0U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [0U]))) {
        vlSymsp->__Vcoverage[701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x8000U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__o_let[0U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [0U]))) {
        vlSymsp->__Vcoverage[702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x10000U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__o_let[0U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [0U]))) {
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x20000U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__o_let[0U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [0U]))) {
        vlSymsp->__Vcoverage[704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x40000U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__o_let[0U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [0U]))) {
        vlSymsp->__Vcoverage[705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x80000U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__o_let
                      [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [0U]))) {
        vlSymsp->__Vcoverage[706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x100000U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__o_let
                      [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [0U]))) {
        vlSymsp->__Vcoverage[707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x200000U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__o_let
                      [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [0U]))) {
        vlSymsp->__Vcoverage[708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x400000U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__o_let
                      [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [0U]))) {
        vlSymsp->__Vcoverage[709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x800000U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__o_let
                       [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [0U]))) {
        vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x1000000U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__o_let
                       [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [0U]))) {
        vlSymsp->__Vcoverage[711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x2000000U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__o_let
                       [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [0U]))) {
        vlSymsp->__Vcoverage[712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x4000000U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__o_let
                       [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [0U]))) {
        vlSymsp->__Vcoverage[713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x8000000U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__o_let
                        [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                        [0U]))) {
        vlSymsp->__Vcoverage[714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x10000000U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__o_let
                        [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                        [0U]))) {
        vlSymsp->__Vcoverage[715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x20000000U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__o_let
                        [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                        [0U]))) {
        vlSymsp->__Vcoverage[716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x40000000U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if (((vlSelf->sha256_tb__DOT__o_let[0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
          [0U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[0U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [0U]) | (0x80000000U & vlSelf->sha256_tb__DOT__o_let
                         [0U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__o_let[1U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [1U]))) {
        vlSymsp->__Vcoverage[718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (1U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__o_let[1U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [1U]))) {
        vlSymsp->__Vcoverage[719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (2U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__o_let[1U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [1U]))) {
        vlSymsp->__Vcoverage[720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (4U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__o_let[1U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [1U]))) {
        vlSymsp->__Vcoverage[721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (8U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__o_let[1U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [1U]))) {
        vlSymsp->__Vcoverage[722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x10U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__o_let[1U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [1U]))) {
        vlSymsp->__Vcoverage[723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x20U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__o_let[1U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [1U]))) {
        vlSymsp->__Vcoverage[724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x40U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__o_let[1U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [1U]))) {
        vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x80U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__o_let[1U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [1U]))) {
        vlSymsp->__Vcoverage[726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x100U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__o_let[1U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [1U]))) {
        vlSymsp->__Vcoverage[727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x200U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__o_let[1U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [1U]))) {
        vlSymsp->__Vcoverage[728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x400U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__o_let[1U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [1U]))) {
        vlSymsp->__Vcoverage[729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x800U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__o_let[1U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [1U]))) {
        vlSymsp->__Vcoverage[730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x1000U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__o_let[1U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [1U]))) {
        vlSymsp->__Vcoverage[731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x2000U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__o_let[1U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [1U]))) {
        vlSymsp->__Vcoverage[732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x4000U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__o_let[1U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [1U]))) {
        vlSymsp->__Vcoverage[733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x8000U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__o_let[1U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [1U]))) {
        vlSymsp->__Vcoverage[734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x10000U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__o_let[1U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [1U]))) {
        vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x20000U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__o_let[1U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [1U]))) {
        vlSymsp->__Vcoverage[736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x40000U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__o_let[1U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [1U]))) {
        vlSymsp->__Vcoverage[737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x80000U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__o_let
                      [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [1U]))) {
        vlSymsp->__Vcoverage[738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x100000U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__o_let
                      [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [1U]))) {
        vlSymsp->__Vcoverage[739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x200000U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__o_let
                      [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [1U]))) {
        vlSymsp->__Vcoverage[740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x400000U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__o_let
                      [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [1U]))) {
        vlSymsp->__Vcoverage[741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x800000U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__o_let
                       [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [1U]))) {
        vlSymsp->__Vcoverage[742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x1000000U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__o_let
                       [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [1U]))) {
        vlSymsp->__Vcoverage[743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x2000000U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__o_let
                       [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [1U]))) {
        vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x4000000U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__o_let
                       [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [1U]))) {
        vlSymsp->__Vcoverage[745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x8000000U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__o_let
                        [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                        [1U]))) {
        vlSymsp->__Vcoverage[746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x10000000U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__o_let
                        [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                        [1U]))) {
        vlSymsp->__Vcoverage[747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x20000000U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__o_let
                        [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                        [1U]))) {
        vlSymsp->__Vcoverage[748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x40000000U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if (((vlSelf->sha256_tb__DOT__o_let[1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
          [1U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[1U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [1U]) | (0x80000000U & vlSelf->sha256_tb__DOT__o_let
                         [1U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__o_let[2U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [2U]))) {
        vlSymsp->__Vcoverage[750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (1U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__o_let[2U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [2U]))) {
        vlSymsp->__Vcoverage[751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (2U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__o_let[2U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [2U]))) {
        vlSymsp->__Vcoverage[752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (4U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__o_let[2U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [2U]))) {
        vlSymsp->__Vcoverage[753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (8U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__o_let[2U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [2U]))) {
        vlSymsp->__Vcoverage[754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x10U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__o_let[2U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [2U]))) {
        vlSymsp->__Vcoverage[755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x20U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__o_let[2U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [2U]))) {
        vlSymsp->__Vcoverage[756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x40U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__o_let[2U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [2U]))) {
        vlSymsp->__Vcoverage[757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x80U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__o_let[2U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [2U]))) {
        vlSymsp->__Vcoverage[758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x100U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__o_let[2U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [2U]))) {
        vlSymsp->__Vcoverage[759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x200U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__o_let[2U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [2U]))) {
        vlSymsp->__Vcoverage[760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x400U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__o_let[2U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [2U]))) {
        vlSymsp->__Vcoverage[761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x800U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__o_let[2U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [2U]))) {
        vlSymsp->__Vcoverage[762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x1000U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__o_let[2U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [2U]))) {
        vlSymsp->__Vcoverage[763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x2000U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__o_let[2U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [2U]))) {
        vlSymsp->__Vcoverage[764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x4000U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__o_let[2U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [2U]))) {
        vlSymsp->__Vcoverage[765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x8000U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__o_let[2U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [2U]))) {
        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x10000U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__o_let[2U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [2U]))) {
        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x20000U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__o_let[2U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [2U]))) {
        vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x40000U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__o_let[2U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [2U]))) {
        vlSymsp->__Vcoverage[769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x80000U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__o_let
                      [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [2U]))) {
        vlSymsp->__Vcoverage[770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x100000U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__o_let
                      [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [2U]))) {
        vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x200000U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__o_let
                      [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [2U]))) {
        vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x400000U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__o_let
                      [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [2U]))) {
        vlSymsp->__Vcoverage[773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x800000U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__o_let
                       [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [2U]))) {
        vlSymsp->__Vcoverage[774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x1000000U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__o_let
                       [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [2U]))) {
        vlSymsp->__Vcoverage[775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x2000000U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__o_let
                       [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [2U]))) {
        vlSymsp->__Vcoverage[776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x4000000U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__o_let
                       [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [2U]))) {
        vlSymsp->__Vcoverage[777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x8000000U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__o_let
                        [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                        [2U]))) {
        vlSymsp->__Vcoverage[778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x10000000U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__o_let
                        [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                        [2U]))) {
        vlSymsp->__Vcoverage[779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x20000000U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__o_let
                        [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                        [2U]))) {
        vlSymsp->__Vcoverage[780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x40000000U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if (((vlSelf->sha256_tb__DOT__o_let[2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
          [2U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[2U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [2U]) | (0x80000000U & vlSelf->sha256_tb__DOT__o_let
                         [2U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__o_let[3U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [3U]))) {
        vlSymsp->__Vcoverage[782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (1U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__o_let[3U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [3U]))) {
        vlSymsp->__Vcoverage[783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (2U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__o_let[3U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [3U]))) {
        vlSymsp->__Vcoverage[784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (4U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__o_let[3U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [3U]))) {
        vlSymsp->__Vcoverage[785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (8U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__o_let[3U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [3U]))) {
        vlSymsp->__Vcoverage[786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x10U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__o_let[3U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [3U]))) {
        vlSymsp->__Vcoverage[787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x20U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__o_let[3U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [3U]))) {
        vlSymsp->__Vcoverage[788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x40U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__o_let[3U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [3U]))) {
        vlSymsp->__Vcoverage[789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x80U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__o_let[3U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [3U]))) {
        vlSymsp->__Vcoverage[790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x100U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__o_let[3U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [3U]))) {
        vlSymsp->__Vcoverage[791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x200U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__o_let[3U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [3U]))) {
        vlSymsp->__Vcoverage[792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x400U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__o_let[3U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [3U]))) {
        vlSymsp->__Vcoverage[793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x800U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__o_let[3U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [3U]))) {
        vlSymsp->__Vcoverage[794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x1000U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__o_let[3U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [3U]))) {
        vlSymsp->__Vcoverage[795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x2000U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__o_let[3U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [3U]))) {
        vlSymsp->__Vcoverage[796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x4000U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__o_let[3U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [3U]))) {
        vlSymsp->__Vcoverage[797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x8000U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__o_let[3U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [3U]))) {
        vlSymsp->__Vcoverage[798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x10000U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__o_let[3U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [3U]))) {
        vlSymsp->__Vcoverage[799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x20000U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__o_let[3U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [3U]))) {
        vlSymsp->__Vcoverage[800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x40000U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__o_let[3U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [3U]))) {
        vlSymsp->__Vcoverage[801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x80000U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__o_let
                      [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [3U]))) {
        vlSymsp->__Vcoverage[802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x100000U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__o_let
                      [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [3U]))) {
        vlSymsp->__Vcoverage[803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x200000U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__o_let
                      [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [3U]))) {
        vlSymsp->__Vcoverage[804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x400000U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__o_let
                      [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [3U]))) {
        vlSymsp->__Vcoverage[805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x800000U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__o_let
                       [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [3U]))) {
        vlSymsp->__Vcoverage[806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x1000000U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__o_let
                       [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [3U]))) {
        vlSymsp->__Vcoverage[807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x2000000U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__o_let
                       [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [3U]))) {
        vlSymsp->__Vcoverage[808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x4000000U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__o_let
                       [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [3U]))) {
        vlSymsp->__Vcoverage[809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x8000000U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__o_let
                        [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                        [3U]))) {
        vlSymsp->__Vcoverage[810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x10000000U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__o_let
                        [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                        [3U]))) {
        vlSymsp->__Vcoverage[811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x20000000U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__o_let
                        [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                        [3U]))) {
        vlSymsp->__Vcoverage[812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x40000000U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if (((vlSelf->sha256_tb__DOT__o_let[3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
          [3U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[3U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [3U]) | (0x80000000U & vlSelf->sha256_tb__DOT__o_let
                         [3U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__o_let[4U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [4U]))) {
        vlSymsp->__Vcoverage[814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (1U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__o_let[4U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [4U]))) {
        vlSymsp->__Vcoverage[815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (2U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__o_let[4U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [4U]))) {
        vlSymsp->__Vcoverage[816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (4U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__o_let[4U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [4U]))) {
        vlSymsp->__Vcoverage[817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (8U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__o_let[4U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [4U]))) {
        vlSymsp->__Vcoverage[818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x10U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__o_let[4U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [4U]))) {
        vlSymsp->__Vcoverage[819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x20U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__o_let[4U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [4U]))) {
        vlSymsp->__Vcoverage[820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x40U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__o_let[4U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [4U]))) {
        vlSymsp->__Vcoverage[821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x80U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__o_let[4U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [4U]))) {
        vlSymsp->__Vcoverage[822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x100U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__o_let[4U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [4U]))) {
        vlSymsp->__Vcoverage[823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x200U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__o_let[4U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [4U]))) {
        vlSymsp->__Vcoverage[824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x400U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__o_let[4U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [4U]))) {
        vlSymsp->__Vcoverage[825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x800U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__o_let[4U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [4U]))) {
        vlSymsp->__Vcoverage[826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x1000U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__o_let[4U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [4U]))) {
        vlSymsp->__Vcoverage[827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x2000U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__o_let[4U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [4U]))) {
        vlSymsp->__Vcoverage[828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x4000U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__o_let[4U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [4U]))) {
        vlSymsp->__Vcoverage[829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x8000U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__o_let[4U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [4U]))) {
        vlSymsp->__Vcoverage[830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x10000U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__o_let[4U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [4U]))) {
        vlSymsp->__Vcoverage[831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x20000U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__o_let[4U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [4U]))) {
        vlSymsp->__Vcoverage[832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x40000U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__o_let[4U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [4U]))) {
        vlSymsp->__Vcoverage[833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x80000U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__o_let
                      [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [4U]))) {
        vlSymsp->__Vcoverage[834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x100000U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__o_let
                      [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [4U]))) {
        vlSymsp->__Vcoverage[835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x200000U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__o_let
                      [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [4U]))) {
        vlSymsp->__Vcoverage[836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x400000U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__o_let
                      [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [4U]))) {
        vlSymsp->__Vcoverage[837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x800000U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__o_let
                       [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [4U]))) {
        vlSymsp->__Vcoverage[838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x1000000U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__o_let
                       [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [4U]))) {
        vlSymsp->__Vcoverage[839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x2000000U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__o_let
                       [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [4U]))) {
        vlSymsp->__Vcoverage[840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x4000000U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__o_let
                       [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [4U]))) {
        vlSymsp->__Vcoverage[841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x8000000U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__o_let
                        [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                        [4U]))) {
        vlSymsp->__Vcoverage[842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x10000000U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__o_let
                        [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                        [4U]))) {
        vlSymsp->__Vcoverage[843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x20000000U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__o_let
                        [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                        [4U]))) {
        vlSymsp->__Vcoverage[844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x40000000U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if (((vlSelf->sha256_tb__DOT__o_let[4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
          [4U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[4U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [4U]) | (0x80000000U & vlSelf->sha256_tb__DOT__o_let
                         [4U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__o_let[5U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [5U]))) {
        vlSymsp->__Vcoverage[846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (1U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__o_let[5U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [5U]))) {
        vlSymsp->__Vcoverage[847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (2U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__o_let[5U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [5U]))) {
        vlSymsp->__Vcoverage[848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (4U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__o_let[5U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [5U]))) {
        vlSymsp->__Vcoverage[849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (8U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__o_let[5U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [5U]))) {
        vlSymsp->__Vcoverage[850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x10U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__o_let[5U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [5U]))) {
        vlSymsp->__Vcoverage[851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x20U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__o_let[5U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [5U]))) {
        vlSymsp->__Vcoverage[852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x40U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__o_let[5U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [5U]))) {
        vlSymsp->__Vcoverage[853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x80U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__o_let[5U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [5U]))) {
        vlSymsp->__Vcoverage[854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x100U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__o_let[5U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [5U]))) {
        vlSymsp->__Vcoverage[855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x200U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__o_let[5U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [5U]))) {
        vlSymsp->__Vcoverage[856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x400U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__o_let[5U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [5U]))) {
        vlSymsp->__Vcoverage[857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x800U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__o_let[5U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [5U]))) {
        vlSymsp->__Vcoverage[858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x1000U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__o_let[5U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [5U]))) {
        vlSymsp->__Vcoverage[859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x2000U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__o_let[5U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [5U]))) {
        vlSymsp->__Vcoverage[860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x4000U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__o_let[5U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [5U]))) {
        vlSymsp->__Vcoverage[861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x8000U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__o_let[5U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [5U]))) {
        vlSymsp->__Vcoverage[862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x10000U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__o_let[5U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [5U]))) {
        vlSymsp->__Vcoverage[863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x20000U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__o_let[5U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [5U]))) {
        vlSymsp->__Vcoverage[864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x40000U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__o_let[5U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [5U]))) {
        vlSymsp->__Vcoverage[865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x80000U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__o_let
                      [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [5U]))) {
        vlSymsp->__Vcoverage[866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x100000U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__o_let
                      [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [5U]))) {
        vlSymsp->__Vcoverage[867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x200000U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__o_let
                      [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [5U]))) {
        vlSymsp->__Vcoverage[868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x400000U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__o_let
                      [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [5U]))) {
        vlSymsp->__Vcoverage[869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x800000U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__o_let
                       [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [5U]))) {
        vlSymsp->__Vcoverage[870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x1000000U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__o_let
                       [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [5U]))) {
        vlSymsp->__Vcoverage[871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x2000000U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__o_let
                       [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [5U]))) {
        vlSymsp->__Vcoverage[872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x4000000U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__o_let
                       [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [5U]))) {
        vlSymsp->__Vcoverage[873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x8000000U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__o_let
                        [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                        [5U]))) {
        vlSymsp->__Vcoverage[874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x10000000U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__o_let
                        [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                        [5U]))) {
        vlSymsp->__Vcoverage[875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x20000000U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__o_let
                        [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                        [5U]))) {
        vlSymsp->__Vcoverage[876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x40000000U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if (((vlSelf->sha256_tb__DOT__o_let[5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
          [5U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[5U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [5U]) | (0x80000000U & vlSelf->sha256_tb__DOT__o_let
                         [5U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__o_let[6U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [6U]))) {
        vlSymsp->__Vcoverage[878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (1U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__o_let[6U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [6U]))) {
        vlSymsp->__Vcoverage[879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (2U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__o_let[6U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [6U]))) {
        vlSymsp->__Vcoverage[880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (4U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__o_let[6U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [6U]))) {
        vlSymsp->__Vcoverage[881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (8U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__o_let[6U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [6U]))) {
        vlSymsp->__Vcoverage[882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x10U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__o_let[6U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [6U]))) {
        vlSymsp->__Vcoverage[883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x20U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__o_let[6U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [6U]))) {
        vlSymsp->__Vcoverage[884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x40U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__o_let[6U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [6U]))) {
        vlSymsp->__Vcoverage[885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x80U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__o_let[6U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [6U]))) {
        vlSymsp->__Vcoverage[886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x100U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__o_let[6U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [6U]))) {
        vlSymsp->__Vcoverage[887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x200U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__o_let[6U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [6U]))) {
        vlSymsp->__Vcoverage[888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x400U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__o_let[6U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [6U]))) {
        vlSymsp->__Vcoverage[889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x800U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__o_let[6U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [6U]))) {
        vlSymsp->__Vcoverage[890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x1000U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__o_let[6U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [6U]))) {
        vlSymsp->__Vcoverage[891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x2000U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__o_let[6U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [6U]))) {
        vlSymsp->__Vcoverage[892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x4000U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__o_let[6U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [6U]))) {
        vlSymsp->__Vcoverage[893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x8000U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__o_let[6U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [6U]))) {
        vlSymsp->__Vcoverage[894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x10000U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__o_let[6U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [6U]))) {
        vlSymsp->__Vcoverage[895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x20000U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__o_let[6U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [6U]))) {
        vlSymsp->__Vcoverage[896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x40000U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__o_let[6U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [6U]))) {
        vlSymsp->__Vcoverage[897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x80000U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__o_let
                      [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [6U]))) {
        vlSymsp->__Vcoverage[898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x100000U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__o_let
                      [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [6U]))) {
        vlSymsp->__Vcoverage[899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x200000U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__o_let
                      [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [6U]))) {
        vlSymsp->__Vcoverage[900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x400000U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__o_let
                      [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [6U]))) {
        vlSymsp->__Vcoverage[901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x800000U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__o_let
                       [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [6U]))) {
        vlSymsp->__Vcoverage[902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x1000000U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__o_let
                       [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [6U]))) {
        vlSymsp->__Vcoverage[903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x2000000U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__o_let
                       [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [6U]))) {
        vlSymsp->__Vcoverage[904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x4000000U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__o_let
                       [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [6U]))) {
        vlSymsp->__Vcoverage[905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x8000000U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__o_let
                        [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                        [6U]))) {
        vlSymsp->__Vcoverage[906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x10000000U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__o_let
                        [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                        [6U]))) {
        vlSymsp->__Vcoverage[907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x20000000U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__o_let
                        [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                        [6U]))) {
        vlSymsp->__Vcoverage[908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x40000000U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if (((vlSelf->sha256_tb__DOT__o_let[6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
          [6U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[6U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [6U]) | (0x80000000U & vlSelf->sha256_tb__DOT__o_let
                         [6U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__o_let[7U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [7U]))) {
        vlSymsp->__Vcoverage[910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (1U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__o_let[7U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [7U]))) {
        vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (2U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__o_let[7U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [7U]))) {
        vlSymsp->__Vcoverage[912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (4U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__o_let[7U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__o_let
               [7U]))) {
        vlSymsp->__Vcoverage[913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (8U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__o_let[7U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [7U]))) {
        vlSymsp->__Vcoverage[914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x10U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__o_let[7U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [7U]))) {
        vlSymsp->__Vcoverage[915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x20U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__o_let[7U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [7U]))) {
        vlSymsp->__Vcoverage[916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x40U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__o_let[7U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                  [7U]))) {
        vlSymsp->__Vcoverage[917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x80U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__o_let[7U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [7U]))) {
        vlSymsp->__Vcoverage[918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x100U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__o_let[7U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [7U]))) {
        vlSymsp->__Vcoverage[919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x200U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__o_let[7U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [7U]))) {
        vlSymsp->__Vcoverage[920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x400U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__o_let[7U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                   [7U]))) {
        vlSymsp->__Vcoverage[921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x800U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__o_let[7U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [7U]))) {
        vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x1000U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__o_let[7U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [7U]))) {
        vlSymsp->__Vcoverage[923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x2000U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__o_let[7U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [7U]))) {
        vlSymsp->__Vcoverage[924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x4000U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__o_let[7U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                    [7U]))) {
        vlSymsp->__Vcoverage[925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x8000U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__o_let[7U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [7U]))) {
        vlSymsp->__Vcoverage[926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x10000U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__o_let[7U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [7U]))) {
        vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x20000U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__o_let[7U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [7U]))) {
        vlSymsp->__Vcoverage[928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x40000U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__o_let[7U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                     [7U]))) {
        vlSymsp->__Vcoverage[929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x80000U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__o_let
                      [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [7U]))) {
        vlSymsp->__Vcoverage[930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x100000U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__o_let
                      [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [7U]))) {
        vlSymsp->__Vcoverage[931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x200000U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__o_let
                      [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [7U]))) {
        vlSymsp->__Vcoverage[932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x400000U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__o_let
                      [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                      [7U]))) {
        vlSymsp->__Vcoverage[933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x800000U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__o_let
                       [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [7U]))) {
        vlSymsp->__Vcoverage[934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x1000000U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__o_let
                       [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [7U]))) {
        vlSymsp->__Vcoverage[935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x2000000U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__o_let
                       [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [7U]))) {
        vlSymsp->__Vcoverage[936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x4000000U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__o_let
                       [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                       [7U]))) {
        vlSymsp->__Vcoverage[937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x8000000U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__o_let
                        [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                        [7U]))) {
        vlSymsp->__Vcoverage[938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x10000000U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__o_let
                        [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                        [7U]))) {
        vlSymsp->__Vcoverage[939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x20000000U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__o_let
                        [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
                        [7U]))) {
        vlSymsp->__Vcoverage[940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x40000000U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    if (((vlSelf->sha256_tb__DOT__o_let[7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__o_let
          [7U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[7U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__o_let
                [7U]) | (0x80000000U & vlSelf->sha256_tb__DOT__o_let
                         [7U]));
    }
    vlSelf->sha256_tb__DOT__out[0U] = ((IData)(0x6a09e667U) 
                                       + vlSelf->sha256_tb__DOT__o_let
                                       [0U]);
    vlSelf->sha256_tb__DOT__out[1U] = ((IData)(0xbb67ae85U) 
                                       + vlSelf->sha256_tb__DOT__o_let
                                       [1U]);
    vlSelf->sha256_tb__DOT__out[2U] = ((IData)(0x3c6ef372U) 
                                       + vlSelf->sha256_tb__DOT__o_let
                                       [2U]);
    vlSelf->sha256_tb__DOT__out[3U] = ((IData)(0xa54ff53aU) 
                                       + vlSelf->sha256_tb__DOT__o_let
                                       [3U]);
    vlSelf->sha256_tb__DOT__out[4U] = ((IData)(0x510e527fU) 
                                       + vlSelf->sha256_tb__DOT__o_let
                                       [4U]);
    vlSelf->sha256_tb__DOT__out[5U] = ((IData)(0x9b05688cU) 
                                       + vlSelf->sha256_tb__DOT__o_let
                                       [5U]);
    vlSelf->sha256_tb__DOT__out[6U] = ((IData)(0x1f83d9abU) 
                                       + vlSelf->sha256_tb__DOT__o_let
                                       [6U]);
    vlSelf->sha256_tb__DOT__out[7U] = ((IData)(0x5be0cd19U) 
                                       + vlSelf->sha256_tb__DOT__o_let
                                       [7U]);
    if (((IData)(vlSelf->sha256_tb__DOT__o_valid) ^ (IData)(vlSelf->sha256_tb__DOT____Vtogcov__o_valid))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__o_valid 
            = vlSelf->sha256_tb__DOT__o_valid;
    }
    vlSelf->o_valid = vlSelf->sha256_tb__DOT__o_valid;
    vlSelf->out[7U] = vlSelf->sha256_tb__DOT__out[7U];
    vlSelf->out[6U] = vlSelf->sha256_tb__DOT__out[6U];
    vlSelf->out[5U] = vlSelf->sha256_tb__DOT__out[5U];
    vlSelf->out[4U] = vlSelf->sha256_tb__DOT__out[4U];
    vlSelf->out[3U] = vlSelf->sha256_tb__DOT__out[3U];
    vlSelf->out[2U] = vlSelf->sha256_tb__DOT__out[2U];
    vlSelf->out[1U] = vlSelf->sha256_tb__DOT__out[1U];
    vlSelf->out[0U] = vlSelf->sha256_tb__DOT__out[0U];
    if ((1U & (vlSelf->sha256_tb__DOT__out[0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [0U]))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (1U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__out[0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [0U]))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (2U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__out[0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [0U]))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (4U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__out[0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [0U]))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (8U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__out[0U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [0U]))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x10U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__out[0U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [0U]))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x20U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__out[0U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [0U]))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x40U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__out[0U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [0U]))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x80U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__out[0U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [0U]))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x100U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__out[0U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [0U]))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x200U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__out[0U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [0U]))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x400U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__out[0U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [0U]))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x800U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__out[0U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [0U]))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x1000U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__out[0U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [0U]))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x2000U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__out[0U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [0U]))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x4000U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__out[0U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [0U]))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x8000U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__out[0U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [0U]))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x10000U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__out[0U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [0U]))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x20000U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__out[0U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [0U]))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x40000U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__out[0U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [0U]))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x80000U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__out[0U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [0U]))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x100000U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__out[0U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [0U]))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x200000U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__out[0U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [0U]))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x400000U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__out[0U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [0U]))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x800000U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__out[0U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [0U]))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x1000000U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__out[0U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [0U]))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x2000000U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__out[0U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [0U]))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x4000000U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__out[0U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [0U]))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x8000000U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__out
                        [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                        [0U]))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x10000000U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__out
                        [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                        [0U]))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x20000000U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__out
                        [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                        [0U]))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x40000000U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if (((vlSelf->sha256_tb__DOT__out[0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
          [0U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[0U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [0U]) | (0x80000000U & vlSelf->sha256_tb__DOT__out
                         [0U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__out[1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [1U]))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (1U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__out[1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [1U]))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (2U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__out[1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [1U]))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (4U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__out[1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [1U]))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (8U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__out[1U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [1U]))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x10U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__out[1U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [1U]))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x20U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__out[1U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [1U]))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x40U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__out[1U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [1U]))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x80U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__out[1U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [1U]))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x100U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__out[1U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [1U]))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x200U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__out[1U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [1U]))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x400U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__out[1U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [1U]))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x800U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__out[1U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [1U]))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x1000U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__out[1U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [1U]))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x2000U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__out[1U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [1U]))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x4000U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__out[1U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [1U]))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x8000U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__out[1U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [1U]))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x10000U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__out[1U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [1U]))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x20000U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__out[1U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [1U]))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x40000U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__out[1U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [1U]))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x80000U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__out[1U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [1U]))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x100000U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__out[1U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [1U]))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x200000U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__out[1U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [1U]))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x400000U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__out[1U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [1U]))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x800000U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__out[1U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [1U]))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x1000000U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__out[1U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [1U]))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x2000000U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__out[1U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [1U]))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x4000000U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__out[1U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [1U]))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x8000000U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__out
                        [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                        [1U]))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x10000000U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__out
                        [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                        [1U]))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x20000000U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__out
                        [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                        [1U]))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x40000000U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if (((vlSelf->sha256_tb__DOT__out[1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
          [1U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[1U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [1U]) | (0x80000000U & vlSelf->sha256_tb__DOT__out
                         [1U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__out[2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [2U]))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (1U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__out[2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [2U]))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (2U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__out[2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [2U]))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (4U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__out[2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [2U]))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (8U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__out[2U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [2U]))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x10U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__out[2U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [2U]))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x20U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__out[2U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [2U]))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x40U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__out[2U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [2U]))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x80U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__out[2U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [2U]))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x100U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__out[2U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [2U]))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x200U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__out[2U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [2U]))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x400U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__out[2U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [2U]))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x800U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__out[2U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [2U]))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x1000U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__out[2U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [2U]))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x2000U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if (vlSelf->rst) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 = 0U;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 = 0U;
    } else {
        vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
            = (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
               + vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
            = (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
               + vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
            = (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
               + vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
            = (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
               + vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
            = (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
               + vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__S0;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__maj;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__s0;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__s1;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
            = (vlSelf->sha256_tb__DOT__win[2U] + vlSelf->sha256_tb__DOT__win
               [0U]);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__ch;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
            = vlSelf->sha256_tb__DOT__sha_inst__DOT__S1;
        vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
            = (vlSelf->sha256_tb__DOT__letter[7U] + vlSelf->sha256_tb__DOT__sha_inst__DOT__k);
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__out[2U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [2U]))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x4000U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__out[2U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [2U]))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x8000U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__out[2U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [2U]))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x10000U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__out[2U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [2U]))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x20000U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__out[2U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [2U]))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x40000U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__out[2U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [2U]))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x80000U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__out[2U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [2U]))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x100000U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__out[2U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [2U]))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x200000U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__out[2U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [2U]))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x400000U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__out[2U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [2U]))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x800000U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__out[2U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [2U]))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x1000000U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__out[2U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [2U]))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x2000000U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__out[2U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [2U]))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x4000000U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__out[2U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [2U]))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x8000000U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__out
                        [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                        [2U]))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x10000000U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__out
                        [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                        [2U]))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x20000000U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__out
                        [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                        [2U]))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x40000000U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if (((vlSelf->sha256_tb__DOT__out[2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
          [2U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[2U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [2U]) | (0x80000000U & vlSelf->sha256_tb__DOT__out
                         [2U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__out[3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [3U]))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (1U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__out[3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [3U]))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (2U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__out[3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [3U]))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (4U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__out[3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [3U]))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (8U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__out[3U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [3U]))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x10U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__out[3U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [3U]))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x20U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__out[3U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [3U]))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x40U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__out[3U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [3U]))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x80U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__out[3U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [3U]))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x100U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__out[3U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [3U]))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x200U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__out[3U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [3U]))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x400U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__out[3U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [3U]))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x800U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__out[3U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [3U]))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x1000U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__out[3U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [3U]))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x2000U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__out[3U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [3U]))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x4000U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__out[3U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [3U]))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x8000U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__out[3U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [3U]))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x10000U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__out[3U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [3U]))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x20000U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__out[3U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [3U]))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x40000U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__out[3U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [3U]))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x80000U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__out[3U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [3U]))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x100000U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__out[3U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [3U]))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x200000U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__out[3U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [3U]))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x400000U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__out[3U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [3U]))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x800000U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__out[3U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [3U]))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x1000000U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__out[3U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [3U]))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x2000000U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__out[3U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [3U]))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x4000000U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__out[3U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [3U]))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x8000000U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__out
                        [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                        [3U]))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x10000000U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__out
                        [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                        [3U]))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x20000000U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__out
                        [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                        [3U]))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x40000000U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if (((vlSelf->sha256_tb__DOT__out[3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
          [3U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[3U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [3U]) | (0x80000000U & vlSelf->sha256_tb__DOT__out
                         [3U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__out[4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [4U]))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (1U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__out[4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [4U]))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (2U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__out[4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [4U]))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (4U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__out[4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [4U]))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (8U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__out[4U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [4U]))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x10U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__out[4U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [4U]))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x20U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__out[4U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [4U]))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x40U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__out[4U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [4U]))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x80U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__out[4U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [4U]))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x100U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__out[4U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [4U]))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x200U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__out[4U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [4U]))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x400U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__out[4U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [4U]))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x800U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__out[4U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [4U]))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x1000U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__out[4U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [4U]))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x2000U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__out[4U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [4U]))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x4000U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__out[4U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [4U]))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x8000U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__out[4U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [4U]))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x10000U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__out[4U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [4U]))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x20000U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__out[4U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [4U]))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x40000U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__out[4U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [4U]))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x80000U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__out[4U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [4U]))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x100000U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__out[4U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [4U]))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x200000U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__out[4U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [4U]))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x400000U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__out[4U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [4U]))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x800000U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__out[4U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [4U]))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x1000000U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__out[4U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [4U]))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x2000000U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__out[4U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [4U]))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x4000000U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__out[4U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [4U]))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x8000000U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__out
                        [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                        [4U]))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x10000000U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__out
                        [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                        [4U]))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x20000000U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__out
                        [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                        [4U]))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x40000000U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if (((vlSelf->sha256_tb__DOT__out[4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
          [4U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[4U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [4U]) | (0x80000000U & vlSelf->sha256_tb__DOT__out
                         [4U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__out[5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [5U]))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (1U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__out[5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [5U]))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (2U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__out[5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [5U]))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (4U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__out[5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [5U]))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (8U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__out[5U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [5U]))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x10U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__out[5U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [5U]))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x20U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__out[5U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [5U]))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x40U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__out[5U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [5U]))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x80U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__out[5U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [5U]))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x100U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__out[5U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [5U]))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x200U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__out[5U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [5U]))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x400U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__out[5U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [5U]))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x800U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__out[5U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [5U]))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x1000U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__out[5U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [5U]))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x2000U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__out[5U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [5U]))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x4000U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__out[5U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [5U]))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x8000U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__out[5U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [5U]))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x10000U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__out[5U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [5U]))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x20000U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__out[5U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [5U]))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x40000U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__out[5U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [5U]))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x80000U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__out[5U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [5U]))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x100000U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__out[5U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [5U]))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x200000U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__out[5U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [5U]))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x400000U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__out[5U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [5U]))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x800000U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__out[5U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [5U]))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x1000000U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__out[5U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [5U]))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x2000000U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__out[5U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [5U]))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x4000000U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__out[5U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [5U]))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x8000000U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__out
                        [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                        [5U]))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x10000000U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__out
                        [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                        [5U]))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x20000000U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__out
                        [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                        [5U]))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x40000000U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if (((vlSelf->sha256_tb__DOT__out[5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
          [5U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[5U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [5U]) | (0x80000000U & vlSelf->sha256_tb__DOT__out
                         [5U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__out[6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [6U]))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (1U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__out[6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [6U]))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (2U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__out[6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [6U]))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (4U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__out[6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [6U]))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (8U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__out[6U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [6U]))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x10U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__out[6U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [6U]))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x20U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__out[6U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [6U]))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x40U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__out[6U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [6U]))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x80U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__out[6U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [6U]))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x100U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__out[6U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [6U]))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x200U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__out[6U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [6U]))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x400U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__out[6U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [6U]))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x800U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__out[6U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [6U]))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x1000U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__out[6U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [6U]))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x2000U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__out[6U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [6U]))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x4000U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__out[6U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [6U]))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x8000U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__out[6U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [6U]))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x10000U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__out[6U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [6U]))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x20000U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__out[6U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [6U]))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x40000U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__out[6U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [6U]))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x80000U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__out[6U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [6U]))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x100000U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__out[6U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [6U]))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x200000U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__out[6U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [6U]))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x400000U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__out[6U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [6U]))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x800000U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__out[6U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [6U]))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x1000000U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__out[6U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [6U]))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x2000000U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__out[6U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [6U]))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x4000000U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__out[6U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [6U]))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x8000000U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__out
                        [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                        [6U]))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x10000000U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__out
                        [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                        [6U]))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x20000000U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__out
                        [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                        [6U]))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x40000000U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if (((vlSelf->sha256_tb__DOT__out[6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
          [6U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[6U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [6U]) | (0x80000000U & vlSelf->sha256_tb__DOT__out
                         [6U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__out[7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [7U]))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (1U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__out[7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [7U]))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (2U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__out[7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [7U]))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (4U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__out[7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
               [7U]))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (8U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__out[7U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [7U]))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x10U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__out[7U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [7U]))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x20U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__out[7U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [7U]))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x40U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__out[7U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__out
                  [7U]))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x80U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__out[7U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [7U]))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x100U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__out[7U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [7U]))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x200U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__out[7U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [7U]))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x400U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__out[7U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                   [7U]))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x800U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__out[7U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [7U]))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x1000U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__out[7U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [7U]))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x2000U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__out[7U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [7U]))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x4000U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__out[7U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                    [7U]))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x8000U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__out[7U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [7U]))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x10000U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__out[7U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [7U]))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x20000U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__out[7U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [7U]))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x40000U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__out[7U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                     [7U]))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x80000U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__out[7U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [7U]))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x100000U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__out[7U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [7U]))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x200000U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__out[7U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [7U]))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x400000U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__out[7U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                      [7U]))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x800000U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__out[7U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [7U]))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x1000000U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__out[7U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [7U]))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x2000000U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__out[7U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [7U]))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x4000000U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__out[7U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                       [7U]))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x8000000U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__out
                        [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                        [7U]))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x10000000U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__out
                        [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                        [7U]))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x20000000U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__out
                        [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
                        [7U]))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x40000000U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if (((vlSelf->sha256_tb__DOT__out[7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__out
          [7U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__out[7U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__out
                [7U]) | (0x80000000U & vlSelf->sha256_tb__DOT__out
                         [7U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3))) {
        vlSymsp->__Vcoverage[2434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3))) {
        vlSymsp->__Vcoverage[2402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3));
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w = vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3;
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3))) {
        vlSymsp->__Vcoverage[2370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w))) {
        vlSymsp->__Vcoverage[1241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w));
    }
    vlSelf->sha256_tb__DOT__wout = vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w;
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2))) {
        vlSymsp->__Vcoverage[2110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__wout ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xfffffffeU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (1U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__wout ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xfffffffdU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (2U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__wout ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xfffffffbU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (4U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__wout ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xfffffff7U 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (8U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__wout ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xffffffefU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x10U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__wout ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xffffffdfU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x20U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__wout ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xffffffbfU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x40U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__wout ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xffffff7fU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x80U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__wout ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xfffffeffU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x100U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__wout ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xfffffdffU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x200U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__wout ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xfffffbffU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x400U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__wout ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xfffff7ffU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x800U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__wout ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xffffefffU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x1000U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__wout ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xffffdfffU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x2000U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__wout ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xffffbfffU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x4000U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__wout ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xffff7fffU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x8000U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__wout ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xfffeffffU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x10000U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__wout ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xfffdffffU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x20000U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__wout ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xfffbffffU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x40000U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__wout ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xfff7ffffU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x80000U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__wout 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xffefffffU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x100000U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__wout 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xffdfffffU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x200000U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__wout 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xffbfffffU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x400000U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__wout 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xff7fffffU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x800000U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__wout 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xfeffffffU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x1000000U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__wout 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xfdffffffU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x2000000U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__wout 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xfbffffffU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x4000000U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__wout 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xf7ffffffU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x8000000U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__wout 
                        ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xefffffffU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x10000000U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__wout 
                        ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xdfffffffU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x20000000U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__wout 
                        ^ vlSelf->sha256_tb__DOT____Vtogcov__wout))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0xbfffffffU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x40000000U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if (((vlSelf->sha256_tb__DOT__wout ^ vlSelf->sha256_tb__DOT____Vtogcov__wout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__wout = (
                                                   (0x7fffffffU 
                                                    & vlSelf->sha256_tb__DOT____Vtogcov__wout) 
                                                   | (0x80000000U 
                                                      & vlSelf->sha256_tb__DOT__wout));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2))) {
        vlSymsp->__Vcoverage[2046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2))) {
        vlSymsp->__Vcoverage[2078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[1984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[1985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[1986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[1987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[1988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[1989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[1990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[1991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[1992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[1993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[1994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[1995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[1996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[1997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[1998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[1999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[2000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[2001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[2002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[2003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[2004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[2009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[2010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[2011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[2012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[2013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2))) {
        vlSymsp->__Vcoverage[2014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2))) {
        vlSymsp->__Vcoverage[1982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2));
    }
    if ((0x10U > (IData)(vlSelf->sha256_tb__DOT__counter))) {
        vlSelf->sha256_tb__DOT__win[0U] = vlSelf->sha256_tb__DOT__w
            [vlSelf->sha256_tb__DOT__counter];
        vlSelf->sha256_tb__DOT__win[1U] = 0U;
        vlSelf->sha256_tb__DOT__win[2U] = 0U;
        vlSelf->sha256_tb__DOT__win[3U] = 0U;
    } else {
        vlSelf->sha256_tb__DOT__win[0U] = vlSelf->sha256_tb__DOT__w
            [(0x3fU & ((IData)(vlSelf->sha256_tb__DOT__counter) 
                       - (IData)(0x10U)))];
        vlSelf->sha256_tb__DOT__win[1U] = vlSelf->sha256_tb__DOT__w
            [(0x3fU & ((IData)(vlSelf->sha256_tb__DOT__counter) 
                       - (IData)(0xfU)))];
        vlSelf->sha256_tb__DOT__win[2U] = vlSelf->sha256_tb__DOT__w
            [(0x3fU & ((IData)(vlSelf->sha256_tb__DOT__counter) 
                       - (IData)(7U)))];
        vlSelf->sha256_tb__DOT__win[3U] = vlSelf->sha256_tb__DOT__w
            [(0x3fU & ((IData)(vlSelf->sha256_tb__DOT__counter) 
                       - (IData)(2U)))];
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT__k = vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k;
    if (vlSelf->__Vdlyvset__sha256_tb__DOT__letter__v0) {
        vlSelf->sha256_tb__DOT__letter[0U] = 0x6a09e667U;
        vlSelf->sha256_tb__DOT__letter[1U] = 0xbb67ae85U;
        vlSelf->sha256_tb__DOT__letter[2U] = 0x3c6ef372U;
        vlSelf->sha256_tb__DOT__letter[3U] = 0xa54ff53aU;
        vlSelf->sha256_tb__DOT__letter[4U] = 0x510e527fU;
        vlSelf->sha256_tb__DOT__letter[5U] = 0x9b05688cU;
        vlSelf->sha256_tb__DOT__letter[6U] = 0x1f83d9abU;
        vlSelf->sha256_tb__DOT__letter[7U] = 0x5be0cd19U;
    }
    if (vlSelf->__Vdlyvset__sha256_tb__DOT__letter__v8) {
        vlSelf->sha256_tb__DOT__letter[7U] = vlSelf->__Vdlyvval__sha256_tb__DOT__letter__v8;
        vlSelf->sha256_tb__DOT__letter[6U] = vlSelf->__Vdlyvval__sha256_tb__DOT__letter__v9;
        vlSelf->sha256_tb__DOT__letter[5U] = vlSelf->__Vdlyvval__sha256_tb__DOT__letter__v10;
        vlSelf->sha256_tb__DOT__letter[4U] = vlSelf->__Vdlyvval__sha256_tb__DOT__letter__v11;
        vlSelf->sha256_tb__DOT__letter[3U] = vlSelf->__Vdlyvval__sha256_tb__DOT__letter__v12;
        vlSelf->sha256_tb__DOT__letter[2U] = vlSelf->__Vdlyvval__sha256_tb__DOT__letter__v13;
        vlSelf->sha256_tb__DOT__letter[1U] = vlSelf->__Vdlyvval__sha256_tb__DOT__letter__v14;
        vlSelf->sha256_tb__DOT__letter[0U] = vlSelf->__Vdlyvval__sha256_tb__DOT__letter__v15;
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1))) {
        vlSymsp->__Vcoverage[1690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1))) {
        vlSymsp->__Vcoverage[1722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1))) {
        vlSymsp->__Vcoverage[1594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1))) {
        vlSymsp->__Vcoverage[1626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1))) {
        vlSymsp->__Vcoverage[1658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1));
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__x 
        = vlSelf->sha256_tb__DOT__win[1U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__x 
        = vlSelf->sha256_tb__DOT__win[3U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__i_w[3U] 
        = vlSelf->sha256_tb__DOT__win[3U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__i_w[2U] 
        = vlSelf->sha256_tb__DOT__win[2U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__i_w[1U] 
        = vlSelf->sha256_tb__DOT__win[1U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__i_w[0U] 
        = vlSelf->sha256_tb__DOT__win[0U];
    if ((1U & (vlSelf->sha256_tb__DOT__win[1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (1U & vlSelf->sha256_tb__DOT__win[1U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__win[1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (2U & vlSelf->sha256_tb__DOT__win[1U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__win[1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (4U & vlSelf->sha256_tb__DOT__win[1U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__win[1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (8U & vlSelf->sha256_tb__DOT__win[1U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__win[1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x10U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__win[1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x20U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__win[1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x40U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__win[1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x80U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__win[1U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x100U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__win[1U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x200U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__win[1U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x400U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__win[1U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x800U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__win[1U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x1000U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__win[1U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x2000U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__win[1U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x4000U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__win[1U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x8000U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__win[1U] 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x10000U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__win[1U] 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x20000U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__win[1U] 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x40000U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__win[1U] 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x80000U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__win[1U] 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x100000U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__win[1U] 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x200000U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__win[1U] 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x400000U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__win[1U] 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x800000U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__win[1U] 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__win[1U] 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__win[1U] 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__win[1U] 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__win
                        [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__win
                        [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__win
                        [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if (((vlSelf->sha256_tb__DOT__win[1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__win
                  [1U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__win[3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (1U & vlSelf->sha256_tb__DOT__win[3U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__win[3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (2U & vlSelf->sha256_tb__DOT__win[3U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__win[3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (4U & vlSelf->sha256_tb__DOT__win[3U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__win[3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (8U & vlSelf->sha256_tb__DOT__win[3U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__win[3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x10U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__win[3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x20U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__win[3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x40U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__win[3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x80U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__win[3U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x100U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__win[3U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x200U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__win[3U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x400U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__win[3U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x800U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__win[3U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x1000U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__win[3U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x2000U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__win[3U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x4000U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__win[3U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x8000U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__win[3U] 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x10000U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__win[3U] 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x20000U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__win[3U] 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x40000U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__win[3U] 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x80000U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__win[3U] 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x100000U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__win[3U] 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x200000U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__win[3U] 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x400000U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__win[3U] 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x800000U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__win[3U] 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__win[3U] 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__win[3U] 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__win[3U] 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__win
                        [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__win
                        [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__win
                        [3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if (((vlSelf->sha256_tb__DOT__win[3U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__win
                  [3U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__win[0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
               [0U]))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (1U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__win[0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
               [0U]))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (2U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__win[0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
               [0U]))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (4U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__win[0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
               [0U]))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (8U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__win[0U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__win
                  [0U]))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x10U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__win[0U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__win
                  [0U]))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x20U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__win[0U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__win
                  [0U]))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x40U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__win[0U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__win
                  [0U]))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x80U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__win[0U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                   [0U]))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x100U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__win[0U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                   [0U]))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x200U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__win[0U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                   [0U]))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x400U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__win[0U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                   [0U]))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x800U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__win[0U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                    [0U]))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x1000U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__win[0U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                    [0U]))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x2000U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__win[0U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                    [0U]))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x4000U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__win[0U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                    [0U]))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x8000U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__win[0U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                     [0U]))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x10000U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__win[0U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                     [0U]))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x20000U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__win[0U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                     [0U]))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x40000U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__win[0U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                     [0U]))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x80000U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__win[0U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                      [0U]))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x100000U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__win[0U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                      [0U]))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x200000U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__win[0U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                      [0U]))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x400000U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__win[0U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                      [0U]))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x800000U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__win[0U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                       [0U]))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x1000000U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__win[0U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                       [0U]))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x2000000U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__win[0U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                       [0U]))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x4000000U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__win[0U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                       [0U]))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x8000000U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__win
                        [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                        [0U]))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x10000000U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__win
                        [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                        [0U]))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x20000000U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__win
                        [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                        [0U]))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x40000000U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if (((vlSelf->sha256_tb__DOT__win[0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
          [0U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[0U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [0U]) | (0x80000000U & vlSelf->sha256_tb__DOT__win
                         [0U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__win[1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
               [1U]))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (1U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__win[1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
               [1U]))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (2U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__win[1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
               [1U]))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (4U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__win[1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
               [1U]))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (8U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__win[1U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__win
                  [1U]))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x10U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__win[1U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__win
                  [1U]))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x20U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__win[1U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__win
                  [1U]))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x40U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__win[1U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__win
                  [1U]))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x80U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__win[1U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                   [1U]))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x100U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__win[1U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                   [1U]))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x200U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__win[1U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                   [1U]))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x400U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__win[1U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                   [1U]))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x800U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__win[1U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                    [1U]))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x1000U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__win[1U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                    [1U]))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x2000U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__win[1U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                    [1U]))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x4000U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__win[1U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                    [1U]))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x8000U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__win[1U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                     [1U]))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x10000U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__win[1U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                     [1U]))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x20000U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__win[1U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                     [1U]))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x40000U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__win[1U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                     [1U]))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x80000U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__win[1U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                      [1U]))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x100000U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__win[1U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                      [1U]))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x200000U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__win[1U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                      [1U]))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x400000U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__win[1U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                      [1U]))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x800000U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__win[1U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                       [1U]))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x1000000U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__win[1U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                       [1U]))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x2000000U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__win[1U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                       [1U]))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x4000000U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__win[1U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                       [1U]))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x8000000U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__win
                        [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                        [1U]))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x10000000U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__win
                        [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                        [1U]))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x20000000U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__win
                        [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                        [1U]))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x40000000U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if (((vlSelf->sha256_tb__DOT__win[1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
          [1U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[1U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [1U]) | (0x80000000U & vlSelf->sha256_tb__DOT__win
                         [1U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__win[2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
               [2U]))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (1U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__win[2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
               [2U]))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (2U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__win[2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
               [2U]))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (4U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__win[2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
               [2U]))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (8U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__win[2U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__win
                  [2U]))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x10U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__win[2U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__win
                  [2U]))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x20U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__win[2U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__win
                  [2U]))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x40U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__win[2U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__win
                  [2U]))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x80U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__win[2U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                   [2U]))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x100U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__win[2U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                   [2U]))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x200U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__win[2U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                   [2U]))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x400U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__win[2U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                   [2U]))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x800U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__win[2U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                    [2U]))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x1000U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__win[2U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                    [2U]))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x2000U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__win[2U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                    [2U]))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x4000U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__win[2U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                    [2U]))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x8000U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__win[2U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                     [2U]))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x10000U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__win[2U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                     [2U]))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x20000U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__win[2U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                     [2U]))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x40000U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__win[2U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                     [2U]))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x80000U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__win[2U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                      [2U]))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x100000U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__win[2U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                      [2U]))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x200000U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__win[2U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                      [2U]))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x400000U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__win[2U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                      [2U]))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x800000U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__win[2U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                       [2U]))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x1000000U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__win[2U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                       [2U]))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x2000000U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
}
