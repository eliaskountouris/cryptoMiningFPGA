// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/elias/Desktop/projects/crypto/verif/sha256/sha256_tb.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___ico_sequent__TOP__2(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        Vtop___024root___ico_sequent__TOP__1(vlSelf);
        Vtop___024root___ico_sequent__TOP__2(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->i_w[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->o_valid = VL_RAND_RESET_I(1);
    vlSelf->sha256_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->sha256_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->sha256_tb__DOT__ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sha256_tb__DOT__out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->sha256_tb__DOT__i_w[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->sha256_tb__DOT__o_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->sha256_tb__DOT__w[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->sha256_tb__DOT__win[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->sha256_tb__DOT__wout = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__wvalid = VL_RAND_RESET_I(1);
    vlSelf->sha256_tb__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->sha256_tb__DOT__valid_r = VL_RAND_RESET_I(1);
    vlSelf->sha256_tb__DOT__rdy = VL_RAND_RESET_I(1);
    vlSelf->sha256_tb__DOT__counter = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sha256_tb__DOT__letter[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sha256_tb__DOT__o_let[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->sha256_tb__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->sha256_tb__DOT____Vtogcov__rst = VL_RAND_RESET_I(1);
    vlSelf->sha256_tb__DOT____Vtogcov__ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sha256_tb__DOT____Vtogcov__out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->sha256_tb__DOT____Vtogcov__o_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->sha256_tb__DOT____Vtogcov__win[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->sha256_tb__DOT____Vtogcov__wout = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT____Vtogcov__wvalid = VL_RAND_RESET_I(1);
    vlSelf->sha256_tb__DOT____Vtogcov__valid = VL_RAND_RESET_I(1);
    vlSelf->sha256_tb__DOT____Vtogcov__valid_r = VL_RAND_RESET_I(1);
    vlSelf->sha256_tb__DOT____Vtogcov__rdy = VL_RAND_RESET_I(1);
    vlSelf->sha256_tb__DOT____Vtogcov__counter = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sha256_tb__DOT____Vtogcov__letter[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sha256_tb__DOT____Vtogcov__o_let[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->sha256_tb__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT__i_letters[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT__i_counter = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT__i_w[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT__i_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters_valid = VL_RAND_RESET_I(1);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w_valid = VL_RAND_RESET_I(1);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__S1 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__ch = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__s0 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__s1 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__S0 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__maj = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT__ready = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters_valid = VL_RAND_RESET_I(1);
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w_valid = VL_RAND_RESET_I(1);
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__k = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vtogcov__ready = VL_RAND_RESET_I(5);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk2__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk3__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk4__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk5__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk6__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT____Vlvbound_h0f206f3e__0 = VL_RAND_RESET_I(1);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__i_x = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__i_y = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__i_z = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22 = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__i_x = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__i_y = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__i_z = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z = VL_RAND_RESET_I(32);
    vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__sha256_tb__DOT__letter__v0 = 0;
    vlSelf->__Vdlyvval__sha256_tb__DOT__letter__v8 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__sha256_tb__DOT__letter__v8 = 0;
    vlSelf->__Vdlyvval__sha256_tb__DOT__letter__v9 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__sha256_tb__DOT__letter__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__sha256_tb__DOT__letter__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__sha256_tb__DOT__letter__v12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__sha256_tb__DOT__letter__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__sha256_tb__DOT__letter__v14 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__sha256_tb__DOT__letter__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
