// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
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
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1))) {
        vlSymsp->__Vcoverage[1562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1))) {
        vlSymsp->__Vcoverage[1530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k))) {
        vlSymsp->__Vcoverage[1274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__k 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__k));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1))) {
        vlSymsp->__Vcoverage[1498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1));
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__x 
        = vlSelf->sha256_tb__DOT__letter[4U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__i_x 
        = vlSelf->sha256_tb__DOT__letter[4U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__i_y 
        = vlSelf->sha256_tb__DOT__letter[5U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__i_z 
        = vlSelf->sha256_tb__DOT__letter[6U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__x 
        = vlSelf->sha256_tb__DOT__letter[0U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__i_x 
        = vlSelf->sha256_tb__DOT__letter[0U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__i_y 
        = vlSelf->sha256_tb__DOT__letter[1U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__i_z 
        = vlSelf->sha256_tb__DOT__letter[2U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__i_letters[7U] 
        = vlSelf->sha256_tb__DOT__letter[7U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__i_letters[6U] 
        = vlSelf->sha256_tb__DOT__letter[6U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__i_letters[5U] 
        = vlSelf->sha256_tb__DOT__letter[5U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__i_letters[4U] 
        = vlSelf->sha256_tb__DOT__letter[4U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__i_letters[3U] 
        = vlSelf->sha256_tb__DOT__letter[3U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__i_letters[2U] 
        = vlSelf->sha256_tb__DOT__letter[2U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__i_letters[1U] 
        = vlSelf->sha256_tb__DOT__letter[1U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__i_letters[0U] 
        = vlSelf->sha256_tb__DOT__letter[0U];
    if ((1U & (vlSelf->sha256_tb__DOT__letter[4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (1U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__letter[4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (2U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__letter[4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (4U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__letter[4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (8U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__letter[4U] 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x10U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__letter[4U] 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x20U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__letter[4U] 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x40U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__letter[4U] 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x80U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__letter[4U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x100U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__letter[4U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x200U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__letter[4U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x400U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__letter[4U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x800U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__letter[4U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x1000U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__letter[4U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x2000U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__letter[4U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x4000U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__letter[4U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x8000U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__letter
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x10000U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__letter
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x20000U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__letter
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x40000U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__letter
                     [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x80000U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__letter
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x100000U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__letter
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x200000U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__letter
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x400000U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__letter
                      [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x800000U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__letter
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__letter
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__letter
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__letter
                       [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__letter
                        [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__letter
                        [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__letter
                        [4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if (((vlSelf->sha256_tb__DOT__letter[4U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__letter
                  [4U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__letter[5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (1U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__letter[5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (2U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__letter[5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (4U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__letter[5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (8U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__letter[5U] 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x10U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__letter[5U] 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x20U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__letter[5U] 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x40U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__letter[5U] 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x80U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__letter[5U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x100U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__letter[5U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x200U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__letter[5U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x400U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__letter[5U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x800U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__letter[5U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x1000U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__letter[5U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x2000U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__letter[5U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x4000U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__letter[5U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x8000U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__letter
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x10000U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__letter
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x20000U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__letter
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x40000U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__letter
                     [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x80000U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__letter
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x100000U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__letter
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x200000U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__letter
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x400000U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__letter
                      [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x800000U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__letter
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__letter
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__letter
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__letter
                       [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__letter
                        [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__letter
                        [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__letter
                        [5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[3515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if (((vlSelf->sha256_tb__DOT__letter[5U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__letter
                  [5U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__letter[6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (1U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__letter[6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (2U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__letter[6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (4U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__letter[6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (8U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__letter[6U] 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x10U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__letter[6U] 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x20U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__letter[6U] 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x40U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__letter[6U] 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x80U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__letter[6U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x100U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__letter[6U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x200U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__letter[6U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x400U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__letter[6U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x800U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__letter[6U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x1000U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__letter[6U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x2000U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__letter[6U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x4000U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__letter[6U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x8000U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__letter
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x10000U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__letter
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x20000U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__letter
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x40000U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__letter
                     [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x80000U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__letter
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x100000U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__letter
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x200000U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__letter
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x400000U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__letter
                      [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x800000U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__letter
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__letter
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__letter
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__letter
                       [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__letter
                        [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__letter
                        [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__letter
                        [6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[3547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if (((vlSelf->sha256_tb__DOT__letter[6U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__letter
                  [6U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__letter[0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (1U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__letter[0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (2U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__letter[0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (4U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__letter[0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (8U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__letter[0U] 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x10U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__letter[0U] 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x20U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__letter[0U] 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x40U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__letter[0U] 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x80U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__letter[0U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x100U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__letter[0U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x200U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__letter[0U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x400U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__letter[0U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x800U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__letter[0U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x1000U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__letter[0U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x2000U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__letter[0U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x4000U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__letter[0U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x8000U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__letter
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x10000U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__letter
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x20000U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__letter
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x40000U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__letter
                     [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x80000U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__letter
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x100000U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__letter
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x200000U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__letter
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x400000U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__letter
                      [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x800000U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__letter
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__letter
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__letter
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__letter
                       [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__letter
                        [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__letter
                        [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__letter
                        [0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x))) {
        vlSymsp->__Vcoverage[3934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if (((vlSelf->sha256_tb__DOT__letter[0U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__letter
                  [0U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__letter[1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (1U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__letter[1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (2U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__letter[1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (4U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__letter[1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (8U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__letter[1U] 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x10U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__letter[1U] 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x20U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__letter[1U] 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x40U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__letter[1U] 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x80U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__letter[1U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x100U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__letter[1U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x200U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__letter[1U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x400U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__letter[1U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x800U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__letter[1U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x1000U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__letter[1U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x2000U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__letter[1U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x4000U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__letter[1U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x8000U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__letter
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x10000U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__letter
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x20000U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__letter
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x40000U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__letter
                     [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x80000U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__letter
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x100000U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__letter
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x200000U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__letter
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x400000U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__letter
                      [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x800000U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__letter
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__letter
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__letter
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__letter
                       [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__letter
                        [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__letter
                        [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__letter
                        [1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y))) {
        vlSymsp->__Vcoverage[4095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if (((vlSelf->sha256_tb__DOT__letter[1U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__letter
                  [1U]));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__letter[2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (1U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__letter[2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (2U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__letter[2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (4U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__letter[2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (8U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__letter[2U] 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x10U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__letter[2U] 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x20U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__letter[2U] 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x40U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__letter[2U] 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x80U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__letter[2U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x100U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__letter[2U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x200U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__letter[2U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x400U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__letter[2U] 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x800U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__letter[2U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x1000U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__letter[2U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x2000U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__letter[2U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x4000U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__letter[2U] 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x8000U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__letter
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x10000U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__letter
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x20000U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__letter
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x40000U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__letter
                     [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x80000U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__letter
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x100000U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__letter
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x200000U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__letter
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x400000U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__letter
                      [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x800000U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__letter
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__letter
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__letter
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__letter
                       [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__letter
                        [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__letter
                        [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__letter
                        [2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z))) {
        vlSymsp->__Vcoverage[4127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
    }
    if (((vlSelf->sha256_tb__DOT__letter[2U] ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__letter
                  [2U]));
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
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7))) {
        vlSymsp->__Vcoverage[3676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18))) {
        vlSymsp->__Vcoverage[3708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3))) {
        vlSymsp->__Vcoverage[3740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y));
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 = vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y;
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17))) {
        vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19))) {
        vlSymsp->__Vcoverage[3869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10))) {
        vlSymsp->__Vcoverage[3901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y))) {
        vlSymsp->__Vcoverage[3805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y));
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 = vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y;
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
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0))) {
        vlSymsp->__Vcoverage[1370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s0));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1))) {
        vlSymsp->__Vcoverage[1402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__s1));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch))) {
        vlSymsp->__Vcoverage[1338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__ch 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__ch));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj))) {
        vlSymsp->__Vcoverage[1466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__maj 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__maj));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1))) {
        vlSymsp->__Vcoverage[1306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S1));
    }
    if ((1U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xfffffffeU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (1U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((2U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xfffffffdU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (2U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((4U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xfffffffbU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (4U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((8U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
               ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xfffffff7U & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (8U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x10U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xffffffefU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x10U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x20U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xffffffdfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x20U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x40U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xffffffbfU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x40U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x80U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                  ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xffffff7fU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x80U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x100U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xfffffeffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x100U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x200U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xfffffdffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x200U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x400U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xfffffbffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x400U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x800U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                   ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xfffff7ffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x800U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x1000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xffffefffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x1000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x2000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xffffdfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x2000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x4000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xffffbfffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x4000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x8000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                    ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xffff7fffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x8000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x10000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xfffeffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x10000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x20000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xfffdffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x20000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x40000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xfffbffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x40000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x80000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                     ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xfff7ffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x80000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x100000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xffefffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x100000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x200000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xffdfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x200000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x400000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xffbfffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x400000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x800000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                      ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xff7fffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x800000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x1000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xfeffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x1000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x2000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xfdffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x2000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x4000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xfbffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x4000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x8000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                       ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xf7ffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x8000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x10000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xefffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x10000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x20000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xdfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x20000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if ((0x40000000U & (vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
                        ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0))) {
        vlSymsp->__Vcoverage[1434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0xbfffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x40000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
    if (((vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 
          ^ vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 
            = ((0x7fffffffU & vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0) 
               | (0x80000000U & vlSelf->sha256_tb__DOT__sha_inst__DOT__S0));
    }
}
