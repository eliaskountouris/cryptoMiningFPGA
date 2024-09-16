// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__1\n"); );
    // Body
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
          [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
          [6U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[6U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3
                [6U]) | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3
                         [6U]));
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
    if ((1U & (vlSelf->sha256_tb__DOT__letter[0U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [0U]))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (1U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__letter[0U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [0U]))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (2U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__letter[0U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [0U]))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (4U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__letter[0U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [0U]))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (8U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__letter[0U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [0U]))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x10U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__letter[0U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [0U]))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x20U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__letter[0U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [0U]))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x40U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__letter[0U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [0U]))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x80U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__letter[0U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [0U]))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x100U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__letter[0U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [0U]))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x200U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__letter[0U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [0U]))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x400U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__letter[0U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [0U]))) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x800U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__letter[0U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [0U]))) {
        vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x1000U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__letter[0U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [0U]))) {
        vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x2000U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__letter[0U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [0U]))) {
        vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x4000U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__letter[0U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [0U]))) {
        vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x8000U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__letter
                     [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [0U]))) {
        vlSymsp->__Vcoverage[446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x10000U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__letter
                     [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [0U]))) {
        vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x20000U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__letter
                     [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [0U]))) {
        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x40000U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__letter
                     [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [0U]))) {
        vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x80000U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__letter
                      [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [0U]))) {
        vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x100000U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__letter
                      [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [0U]))) {
        vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x200000U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__letter
                      [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [0U]))) {
        vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x400000U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__letter
                      [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [0U]))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x800000U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__letter
                       [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [0U]))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x1000000U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__letter
                       [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [0U]))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x2000000U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__letter
                       [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [0U]))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x4000000U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__letter
                       [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [0U]))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x8000000U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__letter
                        [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                        [0U]))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x10000000U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__letter
                        [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                        [0U]))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x20000000U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__letter
                        [0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                        [0U]))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x40000000U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if (((vlSelf->sha256_tb__DOT__letter[0U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
          [0U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[0U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [0U]) | (0x80000000U & vlSelf->sha256_tb__DOT__letter
                         [0U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__letter[1U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [1U]))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (1U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__letter[1U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [1U]))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (2U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__letter[1U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [1U]))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (4U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__letter[1U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [1U]))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (8U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__letter[1U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [1U]))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x10U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__letter[1U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [1U]))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x20U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__letter[1U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [1U]))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x40U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__letter[1U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [1U]))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x80U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__letter[1U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [1U]))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x100U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__letter[1U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [1U]))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x200U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__letter[1U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [1U]))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x400U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__letter[1U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [1U]))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x800U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__letter[1U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [1U]))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x1000U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__letter[1U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [1U]))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x2000U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__letter[1U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [1U]))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x4000U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__letter[1U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [1U]))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x8000U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__letter
                     [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [1U]))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x10000U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__letter
                     [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [1U]))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x20000U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__letter
                     [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [1U]))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x40000U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__letter
                     [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [1U]))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x80000U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__letter
                      [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [1U]))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x100000U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__letter
                      [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [1U]))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x200000U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__letter
                      [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [1U]))) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x400000U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__letter
                      [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [1U]))) {
        vlSymsp->__Vcoverage[485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x800000U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__letter
                       [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [1U]))) {
        vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x1000000U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__letter
                       [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [1U]))) {
        vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x2000000U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__letter
                       [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [1U]))) {
        vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x4000000U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__letter
                       [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [1U]))) {
        vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x8000000U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__letter
                        [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                        [1U]))) {
        vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x10000000U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__letter
                        [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                        [1U]))) {
        vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x20000000U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__letter
                        [1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                        [1U]))) {
        vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x40000000U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if (((vlSelf->sha256_tb__DOT__letter[1U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
          [1U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[1U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [1U]) | (0x80000000U & vlSelf->sha256_tb__DOT__letter
                         [1U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__letter[2U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [2U]))) {
        vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (1U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__letter[2U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [2U]))) {
        vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (2U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__letter[2U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [2U]))) {
        vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (4U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__letter[2U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [2U]))) {
        vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (8U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__letter[2U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [2U]))) {
        vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x10U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__letter[2U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [2U]))) {
        vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x20U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__letter[2U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [2U]))) {
        vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x40U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__letter[2U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [2U]))) {
        vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x80U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__letter[2U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [2U]))) {
        vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x100U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__letter[2U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [2U]))) {
        vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x200U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__letter[2U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [2U]))) {
        vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x400U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__letter[2U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [2U]))) {
        vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x800U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__letter[2U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [2U]))) {
        vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x1000U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__letter[2U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [2U]))) {
        vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x2000U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__letter[2U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [2U]))) {
        vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x4000U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__letter[2U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [2U]))) {
        vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x8000U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__letter
                     [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [2U]))) {
        vlSymsp->__Vcoverage[510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x10000U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__letter
                     [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [2U]))) {
        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x20000U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__letter
                     [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [2U]))) {
        vlSymsp->__Vcoverage[512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x40000U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__letter
                     [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [2U]))) {
        vlSymsp->__Vcoverage[513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x80000U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__letter
                      [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [2U]))) {
        vlSymsp->__Vcoverage[514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x100000U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__letter
                      [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [2U]))) {
        vlSymsp->__Vcoverage[515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x200000U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__letter
                      [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [2U]))) {
        vlSymsp->__Vcoverage[516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x400000U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__letter
                      [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [2U]))) {
        vlSymsp->__Vcoverage[517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x800000U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__letter
                       [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [2U]))) {
        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x1000000U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__letter
                       [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [2U]))) {
        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x2000000U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__letter
                       [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [2U]))) {
        vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x4000000U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__letter
                       [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [2U]))) {
        vlSymsp->__Vcoverage[521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x8000000U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__letter
                        [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                        [2U]))) {
        vlSymsp->__Vcoverage[522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x10000000U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__letter
                        [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                        [2U]))) {
        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x20000000U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__letter
                        [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                        [2U]))) {
        vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x40000000U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if (((vlSelf->sha256_tb__DOT__letter[2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
          [2U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[2U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [2U]) | (0x80000000U & vlSelf->sha256_tb__DOT__letter
                         [2U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__letter[3U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [3U]))) {
        vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (1U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__letter[3U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [3U]))) {
        vlSymsp->__Vcoverage[527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (2U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__letter[3U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [3U]))) {
        vlSymsp->__Vcoverage[528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (4U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__letter[3U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [3U]))) {
        vlSymsp->__Vcoverage[529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (8U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__letter[3U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [3U]))) {
        vlSymsp->__Vcoverage[530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x10U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__letter[3U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [3U]))) {
        vlSymsp->__Vcoverage[531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x20U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__letter[3U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [3U]))) {
        vlSymsp->__Vcoverage[532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x40U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__letter[3U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [3U]))) {
        vlSymsp->__Vcoverage[533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x80U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__letter[3U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [3U]))) {
        vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x100U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__letter[3U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [3U]))) {
        vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x200U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__letter[3U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [3U]))) {
        vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x400U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__letter[3U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [3U]))) {
        vlSymsp->__Vcoverage[537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x800U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__letter[3U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [3U]))) {
        vlSymsp->__Vcoverage[538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x1000U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__letter[3U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [3U]))) {
        vlSymsp->__Vcoverage[539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x2000U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__letter[3U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [3U]))) {
        vlSymsp->__Vcoverage[540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x4000U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__letter[3U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [3U]))) {
        vlSymsp->__Vcoverage[541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x8000U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__letter
                     [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [3U]))) {
        vlSymsp->__Vcoverage[542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x10000U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__letter
                     [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [3U]))) {
        vlSymsp->__Vcoverage[543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x20000U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__letter
                     [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [3U]))) {
        vlSymsp->__Vcoverage[544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x40000U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__letter
                     [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [3U]))) {
        vlSymsp->__Vcoverage[545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x80000U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__letter
                      [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [3U]))) {
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x100000U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__letter
                      [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [3U]))) {
        vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x200000U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__letter
                      [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [3U]))) {
        vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x400000U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__letter
                      [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [3U]))) {
        vlSymsp->__Vcoverage[549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x800000U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__letter
                       [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [3U]))) {
        vlSymsp->__Vcoverage[550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x1000000U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__letter
                       [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [3U]))) {
        vlSymsp->__Vcoverage[551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x2000000U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__letter
                       [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [3U]))) {
        vlSymsp->__Vcoverage[552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x4000000U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__letter
                       [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [3U]))) {
        vlSymsp->__Vcoverage[553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x8000000U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__letter
                        [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                        [3U]))) {
        vlSymsp->__Vcoverage[554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x10000000U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__letter
                        [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                        [3U]))) {
        vlSymsp->__Vcoverage[555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x20000000U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__letter
                        [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                        [3U]))) {
        vlSymsp->__Vcoverage[556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x40000000U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if (((vlSelf->sha256_tb__DOT__letter[3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
          [3U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[3U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [3U]) | (0x80000000U & vlSelf->sha256_tb__DOT__letter
                         [3U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__letter[4U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [4U]))) {
        vlSymsp->__Vcoverage[558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (1U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__letter[4U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [4U]))) {
        vlSymsp->__Vcoverage[559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (2U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__letter[4U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [4U]))) {
        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (4U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__letter[4U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [4U]))) {
        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (8U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__letter[4U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [4U]))) {
        vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x10U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__letter[4U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [4U]))) {
        vlSymsp->__Vcoverage[563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x20U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__letter[4U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [4U]))) {
        vlSymsp->__Vcoverage[564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x40U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__letter[4U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [4U]))) {
        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x80U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__letter[4U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [4U]))) {
        vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x100U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__letter[4U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [4U]))) {
        vlSymsp->__Vcoverage[567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x200U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__letter[4U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [4U]))) {
        vlSymsp->__Vcoverage[568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x400U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__letter[4U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [4U]))) {
        vlSymsp->__Vcoverage[569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x800U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__letter[4U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [4U]))) {
        vlSymsp->__Vcoverage[570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x1000U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__letter[4U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [4U]))) {
        vlSymsp->__Vcoverage[571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x2000U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__letter[4U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [4U]))) {
        vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x4000U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__letter[4U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [4U]))) {
        vlSymsp->__Vcoverage[573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x8000U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__letter
                     [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [4U]))) {
        vlSymsp->__Vcoverage[574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x10000U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__letter
                     [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [4U]))) {
        vlSymsp->__Vcoverage[575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x20000U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__letter
                     [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [4U]))) {
        vlSymsp->__Vcoverage[576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x40000U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__letter
                     [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [4U]))) {
        vlSymsp->__Vcoverage[577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x80000U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__letter
                      [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [4U]))) {
        vlSymsp->__Vcoverage[578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x100000U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__letter
                      [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [4U]))) {
        vlSymsp->__Vcoverage[579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x200000U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__letter
                      [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [4U]))) {
        vlSymsp->__Vcoverage[580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x400000U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__letter
                      [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [4U]))) {
        vlSymsp->__Vcoverage[581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x800000U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__letter
                       [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [4U]))) {
        vlSymsp->__Vcoverage[582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x1000000U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__letter
                       [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [4U]))) {
        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x2000000U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__letter
                       [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [4U]))) {
        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x4000000U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__letter
                       [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [4U]))) {
        vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x8000000U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__letter
                        [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                        [4U]))) {
        vlSymsp->__Vcoverage[586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x10000000U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__letter
                        [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                        [4U]))) {
        vlSymsp->__Vcoverage[587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x20000000U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__letter
                        [4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                        [4U]))) {
        vlSymsp->__Vcoverage[588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x40000000U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if (((vlSelf->sha256_tb__DOT__letter[4U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
          [4U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[4U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [4U]) | (0x80000000U & vlSelf->sha256_tb__DOT__letter
                         [4U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__letter[5U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [5U]))) {
        vlSymsp->__Vcoverage[590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (1U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__letter[5U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [5U]))) {
        vlSymsp->__Vcoverage[591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (2U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__letter[5U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [5U]))) {
        vlSymsp->__Vcoverage[592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (4U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__letter[5U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [5U]))) {
        vlSymsp->__Vcoverage[593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (8U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__letter[5U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [5U]))) {
        vlSymsp->__Vcoverage[594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x10U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__letter[5U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [5U]))) {
        vlSymsp->__Vcoverage[595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x20U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__letter[5U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [5U]))) {
        vlSymsp->__Vcoverage[596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x40U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__letter[5U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [5U]))) {
        vlSymsp->__Vcoverage[597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x80U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__letter[5U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [5U]))) {
        vlSymsp->__Vcoverage[598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x100U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__letter[5U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [5U]))) {
        vlSymsp->__Vcoverage[599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x200U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__letter[5U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [5U]))) {
        vlSymsp->__Vcoverage[600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x400U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__letter[5U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [5U]))) {
        vlSymsp->__Vcoverage[601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x800U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__letter[5U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [5U]))) {
        vlSymsp->__Vcoverage[602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x1000U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__letter[5U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [5U]))) {
        vlSymsp->__Vcoverage[603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x2000U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__letter[5U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [5U]))) {
        vlSymsp->__Vcoverage[604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x4000U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__letter[5U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [5U]))) {
        vlSymsp->__Vcoverage[605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x8000U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__letter
                     [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [5U]))) {
        vlSymsp->__Vcoverage[606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x10000U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__letter
                     [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [5U]))) {
        vlSymsp->__Vcoverage[607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x20000U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__letter
                     [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [5U]))) {
        vlSymsp->__Vcoverage[608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x40000U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__letter
                     [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [5U]))) {
        vlSymsp->__Vcoverage[609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x80000U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__letter
                      [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [5U]))) {
        vlSymsp->__Vcoverage[610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x100000U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__letter
                      [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [5U]))) {
        vlSymsp->__Vcoverage[611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x200000U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__letter
                      [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [5U]))) {
        vlSymsp->__Vcoverage[612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x400000U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__letter
                      [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [5U]))) {
        vlSymsp->__Vcoverage[613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x800000U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__letter
                       [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [5U]))) {
        vlSymsp->__Vcoverage[614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x1000000U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__letter
                       [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [5U]))) {
        vlSymsp->__Vcoverage[615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x2000000U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__letter
                       [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [5U]))) {
        vlSymsp->__Vcoverage[616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x4000000U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__letter
                       [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [5U]))) {
        vlSymsp->__Vcoverage[617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x8000000U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__letter
                        [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                        [5U]))) {
        vlSymsp->__Vcoverage[618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x10000000U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__letter
                        [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                        [5U]))) {
        vlSymsp->__Vcoverage[619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x20000000U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__letter
                        [5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                        [5U]))) {
        vlSymsp->__Vcoverage[620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x40000000U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if (((vlSelf->sha256_tb__DOT__letter[5U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
          [5U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[5U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [5U]) | (0x80000000U & vlSelf->sha256_tb__DOT__letter
                         [5U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__letter[6U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [6U]))) {
        vlSymsp->__Vcoverage[622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (1U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__letter[6U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [6U]))) {
        vlSymsp->__Vcoverage[623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (2U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__letter[6U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [6U]))) {
        vlSymsp->__Vcoverage[624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (4U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__letter[6U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [6U]))) {
        vlSymsp->__Vcoverage[625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (8U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__letter[6U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [6U]))) {
        vlSymsp->__Vcoverage[626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x10U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__letter[6U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [6U]))) {
        vlSymsp->__Vcoverage[627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x20U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__letter[6U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [6U]))) {
        vlSymsp->__Vcoverage[628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x40U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__letter[6U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [6U]))) {
        vlSymsp->__Vcoverage[629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x80U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__letter[6U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [6U]))) {
        vlSymsp->__Vcoverage[630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x100U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__letter[6U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [6U]))) {
        vlSymsp->__Vcoverage[631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x200U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__letter[6U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [6U]))) {
        vlSymsp->__Vcoverage[632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x400U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__letter[6U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [6U]))) {
        vlSymsp->__Vcoverage[633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x800U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__letter[6U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [6U]))) {
        vlSymsp->__Vcoverage[634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x1000U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__letter[6U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [6U]))) {
        vlSymsp->__Vcoverage[635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x2000U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__letter[6U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [6U]))) {
        vlSymsp->__Vcoverage[636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x4000U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__letter[6U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [6U]))) {
        vlSymsp->__Vcoverage[637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x8000U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__letter
                     [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [6U]))) {
        vlSymsp->__Vcoverage[638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x10000U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__letter
                     [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [6U]))) {
        vlSymsp->__Vcoverage[639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x20000U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__letter
                     [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [6U]))) {
        vlSymsp->__Vcoverage[640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x40000U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__letter
                     [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [6U]))) {
        vlSymsp->__Vcoverage[641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x80000U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__letter
                      [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [6U]))) {
        vlSymsp->__Vcoverage[642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x100000U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__letter
                      [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [6U]))) {
        vlSymsp->__Vcoverage[643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x200000U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__letter
                      [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [6U]))) {
        vlSymsp->__Vcoverage[644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x400000U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__letter
                      [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [6U]))) {
        vlSymsp->__Vcoverage[645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x800000U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__letter
                       [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [6U]))) {
        vlSymsp->__Vcoverage[646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x1000000U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__letter
                       [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [6U]))) {
        vlSymsp->__Vcoverage[647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x2000000U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__letter
                       [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [6U]))) {
        vlSymsp->__Vcoverage[648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x4000000U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__letter
                       [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [6U]))) {
        vlSymsp->__Vcoverage[649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x8000000U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__letter
                        [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                        [6U]))) {
        vlSymsp->__Vcoverage[650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x10000000U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__letter
                        [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                        [6U]))) {
        vlSymsp->__Vcoverage[651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x20000000U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__letter
                        [6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                        [6U]))) {
        vlSymsp->__Vcoverage[652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x40000000U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if (((vlSelf->sha256_tb__DOT__letter[6U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
          [6U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[6U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [6U]) | (0x80000000U & vlSelf->sha256_tb__DOT__letter
                         [6U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__letter[7U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [7U]))) {
        vlSymsp->__Vcoverage[654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (1U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__letter[7U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [7U]))) {
        vlSymsp->__Vcoverage[655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (2U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__letter[7U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [7U]))) {
        vlSymsp->__Vcoverage[656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (4U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__letter[7U] ^ 
               vlSelf->sha256_tb__DOT____Vtogcov__letter
               [7U]))) {
        vlSymsp->__Vcoverage[657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (8U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__letter[7U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [7U]))) {
        vlSymsp->__Vcoverage[658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x10U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__letter[7U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [7U]))) {
        vlSymsp->__Vcoverage[659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x20U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__letter[7U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [7U]))) {
        vlSymsp->__Vcoverage[660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x40U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__letter[7U] 
                  ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                  [7U]))) {
        vlSymsp->__Vcoverage[661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x80U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__letter[7U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [7U]))) {
        vlSymsp->__Vcoverage[662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x100U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__letter[7U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [7U]))) {
        vlSymsp->__Vcoverage[663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x200U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__letter[7U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [7U]))) {
        vlSymsp->__Vcoverage[664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x400U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__letter[7U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                   [7U]))) {
        vlSymsp->__Vcoverage[665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x800U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__letter[7U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [7U]))) {
        vlSymsp->__Vcoverage[666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x1000U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__letter[7U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [7U]))) {
        vlSymsp->__Vcoverage[667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x2000U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__letter[7U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [7U]))) {
        vlSymsp->__Vcoverage[668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x4000U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__letter[7U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                    [7U]))) {
        vlSymsp->__Vcoverage[669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x8000U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__letter
                     [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [7U]))) {
        vlSymsp->__Vcoverage[670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x10000U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__letter
                     [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [7U]))) {
        vlSymsp->__Vcoverage[671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x20000U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__letter
                     [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [7U]))) {
        vlSymsp->__Vcoverage[672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x40000U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__letter
                     [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                     [7U]))) {
        vlSymsp->__Vcoverage[673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x80000U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__letter
                      [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [7U]))) {
        vlSymsp->__Vcoverage[674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x100000U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__letter
                      [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [7U]))) {
        vlSymsp->__Vcoverage[675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x200000U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__letter
                      [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [7U]))) {
        vlSymsp->__Vcoverage[676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x400000U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__letter
                      [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                      [7U]))) {
        vlSymsp->__Vcoverage[677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x800000U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__letter
                       [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [7U]))) {
        vlSymsp->__Vcoverage[678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x1000000U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__letter
                       [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [7U]))) {
        vlSymsp->__Vcoverage[679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x2000000U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__letter
                       [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [7U]))) {
        vlSymsp->__Vcoverage[680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x4000000U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__letter
                       [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                       [7U]))) {
        vlSymsp->__Vcoverage[681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x8000000U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__letter
                        [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                        [7U]))) {
        vlSymsp->__Vcoverage[682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x10000000U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__letter
                        [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                        [7U]))) {
        vlSymsp->__Vcoverage[683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x20000000U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__letter
                        [7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
                        [7U]))) {
        vlSymsp->__Vcoverage[684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x40000000U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
    }
    if (((vlSelf->sha256_tb__DOT__letter[7U] ^ vlSelf->sha256_tb__DOT____Vtogcov__letter
          [7U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__letter[7U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__letter
                [7U]) | (0x80000000U & vlSelf->sha256_tb__DOT__letter
                         [7U]));
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
    vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w = vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3;
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k 
        = ((0x20U & (IData)(vlSelf->sha256_tb__DOT__counter))
            ? ((0x10U & (IData)(vlSelf->sha256_tb__DOT__counter))
                ? ((8U & (IData)(vlSelf->sha256_tb__DOT__counter))
                    ? ((4U & (IData)(vlSelf->sha256_tb__DOT__counter))
                        ? ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))
                            ? ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0xc67178f2U : 0xbef9a3f7U)
                            : ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0xa4506cebU : 0x90befffaU))
                        : ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))
                            ? ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x8cc70208U : 0x84c87814U)
                            : ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x78a5636fU : 0x748f82eeU)))
                    : ((4U & (IData)(vlSelf->sha256_tb__DOT__counter))
                        ? ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))
                            ? ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x682e6ff3U : 0x5b9cca4fU)
                            : ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x4ed8aa4aU : 0x391c0cb3U))
                        : ((2U & (IData)(vlSelf->sha256_tb__DOT__counter))
                            ? ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x34b0bcb5U : 0x2748774cU)
                            : ((1U & (IData)(vlSelf->sha256_tb__DOT__counter))
                                ? 0x1e376c08U : 0x19a4c116U))))
                : ((8U & (IData)(vlSelf->sha256_tb__DOT__counter))
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
                                ? 0x2e1b2138U : 0x27b70a85U)))))
            : ((0x10U & (IData)(vlSelf->sha256_tb__DOT__counter))
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
                                ? 0x71374491U : 0x428a2f98U))))));
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
        = ((vlSelf->sha256_tb__DOT__letter[4U] & vlSelf->sha256_tb__DOT__letter
            [5U]) ^ ((~ vlSelf->sha256_tb__DOT__letter
                      [4U]) & vlSelf->sha256_tb__DOT__letter
                     [6U]));
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
        = (((vlSelf->sha256_tb__DOT__letter[0U] & vlSelf->sha256_tb__DOT__letter
             [1U]) ^ (vlSelf->sha256_tb__DOT__letter
                      [0U] & vlSelf->sha256_tb__DOT__letter
                      [2U])) ^ (vlSelf->sha256_tb__DOT__letter
                                [1U] & vlSelf->sha256_tb__DOT__letter
                                [2U]));
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
        = ((vlSelf->sha256_tb__DOT__letter[4U] << 0x1aU) 
           | (vlSelf->sha256_tb__DOT__letter[4U] >> 6U));
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
        = ((vlSelf->sha256_tb__DOT__letter[4U] << 0x15U) 
           | (vlSelf->sha256_tb__DOT__letter[4U] >> 0xbU));
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
        = ((vlSelf->sha256_tb__DOT__letter[4U] << 7U) 
           | (vlSelf->sha256_tb__DOT__letter[4U] >> 0x19U));
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
        = ((vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
            ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11) 
           ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
        = ((vlSelf->sha256_tb__DOT__letter[0U] << 0x1eU) 
           | (vlSelf->sha256_tb__DOT__letter[0U] >> 2U));
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
        = ((vlSelf->sha256_tb__DOT__letter[0U] << 0x13U) 
           | (vlSelf->sha256_tb__DOT__letter[0U] >> 0xdU));
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
        = ((vlSelf->sha256_tb__DOT__letter[0U] << 0xaU) 
           | (vlSelf->sha256_tb__DOT__letter[0U] >> 0x16U));
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
        = ((vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
            ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13) 
           ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22);
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
    vlSelf->sha256_tb__DOT__sha_inst__DOT__clk = vlSelf->sha256_tb__DOT__clk;
    vlSelf->sha256_tb__DOT__sha_inst__DOT__rst = vlSelf->sha256_tb__DOT__rst;
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__i 
        = vlSelf->sha256_tb__DOT__sha_inst__DOT__i_counter;
    if (((IData)(vlSelf->sha256_tb__DOT__rdy) ^ (IData)(vlSelf->sha256_tb__DOT____Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__rdy = vlSelf->sha256_tb__DOT__rdy;
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT__i_ready 
        = vlSelf->sha256_tb__DOT__rdy;
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
    vlSelf->sha256_tb__DOT__sha_inst__DOT__k = vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k;
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[3579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o));
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT__ch = vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o;
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o))) {
        vlSymsp->__Vcoverage[4159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o));
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT__maj = vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o;
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6))) {
        vlSymsp->__Vcoverage[3418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11))) {
        vlSymsp->__Vcoverage[3450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25))) {
        vlSymsp->__Vcoverage[3482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y));
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 = vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y;
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2))) {
        vlSymsp->__Vcoverage[3998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13))) {
        vlSymsp->__Vcoverage[4030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22))) {
        vlSymsp->__Vcoverage[4062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y));
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 = vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y;
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
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__win[2U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                       [2U]))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x4000000U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__win[2U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                       [2U]))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x8000000U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__win
                        [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                        [2U]))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x10000000U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__win
                        [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                        [2U]))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x20000000U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__win
                        [2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                        [2U]))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x40000000U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if (((vlSelf->sha256_tb__DOT__win[2U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
          [2U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[2U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [2U]) | (0x80000000U & vlSelf->sha256_tb__DOT__win
                         [2U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__win[3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
               [3U]))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (1U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__win[3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
               [3U]))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (2U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__win[3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
               [3U]))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (4U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__win[3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
               [3U]))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (8U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__win[3U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__win
                  [3U]))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x10U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__win[3U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__win
                  [3U]))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x20U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__win[3U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__win
                  [3U]))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x40U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__win[3U] ^ 
                  vlSelf->sha256_tb__DOT____Vtogcov__win
                  [3U]))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x80U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__win[3U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                   [3U]))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x100U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__win[3U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                   [3U]))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x200U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__win[3U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                   [3U]))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x400U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__win[3U] 
                   ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                   [3U]))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x800U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__win[3U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                    [3U]))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x1000U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__win[3U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                    [3U]))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x2000U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__win[3U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                    [3U]))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x4000U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__win[3U] 
                    ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                    [3U]))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x8000U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__win[3U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                     [3U]))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x10000U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__win[3U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                     [3U]))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x20000U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__win[3U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                     [3U]))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x40000U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__win[3U] 
                     ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                     [3U]))) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x80000U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__win[3U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                      [3U]))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x100000U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__win[3U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                      [3U]))) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x200000U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__win[3U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                      [3U]))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x400000U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__win[3U] 
                      ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                      [3U]))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x800000U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__win[3U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                       [3U]))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x1000000U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__win[3U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                       [3U]))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x2000000U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__win[3U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                       [3U]))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x4000000U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__win[3U] 
                       ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                       [3U]))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x8000000U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__win
                        [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                        [3U]))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x10000000U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__win
                        [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                        [3U]))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x20000000U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__win
                        [3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
                        [3U]))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x40000000U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    if (((vlSelf->sha256_tb__DOT__win[3U] ^ vlSelf->sha256_tb__DOT____Vtogcov__win
          [3U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__win[3U] 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT____Vtogcov__win
                [3U]) | (0x80000000U & vlSelf->sha256_tb__DOT__win
                         [3U]));
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
        = ((vlSelf->sha256_tb__DOT__win[1U] << 0x19U) 
           | (vlSelf->sha256_tb__DOT__win[1U] >> 7U));
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
        = ((vlSelf->sha256_tb__DOT__win[1U] << 0xeU) 
           | (vlSelf->sha256_tb__DOT__win[1U] >> 0x12U));
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
        = (vlSelf->sha256_tb__DOT__win[1U] >> 3U);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
        = ((vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
            ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18) 
           ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
        = ((vlSelf->sha256_tb__DOT__win[3U] << 0xfU) 
           | (vlSelf->sha256_tb__DOT__win[3U] >> 0x11U));
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
        = ((vlSelf->sha256_tb__DOT__win[3U] << 0xdU) 
           | (vlSelf->sha256_tb__DOT__win[3U] >> 0x13U));
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
        = (vlSelf->sha256_tb__DOT__win[3U] >> 0xaU);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
        = ((vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
            ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19) 
           ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10);
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
}
