// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__2\n"); );
    // Body
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
}
