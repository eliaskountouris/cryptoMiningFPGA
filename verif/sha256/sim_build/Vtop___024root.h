// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(ready,0,0);
        VL_OUT8(o_valid,0,0);
        CData/*0:0*/ sha256_tb__DOT__clk;
        CData/*0:0*/ sha256_tb__DOT__rst;
        CData/*0:0*/ sha256_tb__DOT__ready;
        CData/*0:0*/ sha256_tb__DOT__o_valid;
        CData/*0:0*/ sha256_tb__DOT__wvalid;
        CData/*0:0*/ sha256_tb__DOT__valid;
        CData/*0:0*/ sha256_tb__DOT__valid_r;
        CData/*0:0*/ sha256_tb__DOT__rdy;
        CData/*5:0*/ sha256_tb__DOT__counter;
        CData/*0:0*/ sha256_tb__DOT____Vtogcov__clk;
        CData/*0:0*/ sha256_tb__DOT____Vtogcov__rst;
        CData/*0:0*/ sha256_tb__DOT____Vtogcov__ready;
        CData/*0:0*/ sha256_tb__DOT____Vtogcov__o_valid;
        CData/*0:0*/ sha256_tb__DOT____Vtogcov__wvalid;
        CData/*0:0*/ sha256_tb__DOT____Vtogcov__valid;
        CData/*0:0*/ sha256_tb__DOT____Vtogcov__valid_r;
        CData/*0:0*/ sha256_tb__DOT____Vtogcov__rdy;
        CData/*5:0*/ sha256_tb__DOT____Vtogcov__counter;
        CData/*0:0*/ sha256_tb__DOT__sha_inst__DOT__clk;
        CData/*0:0*/ sha256_tb__DOT__sha_inst__DOT__rst;
        CData/*5:0*/ sha256_tb__DOT__sha_inst__DOT__i_counter;
        CData/*0:0*/ sha256_tb__DOT__sha_inst__DOT__i_ready;
        CData/*0:0*/ sha256_tb__DOT__sha_inst__DOT__o_letters_valid;
        CData/*0:0*/ sha256_tb__DOT__sha_inst__DOT__o_w_valid;
        CData/*4:0*/ sha256_tb__DOT__sha_inst__DOT__ready;
        CData/*0:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters_valid;
        CData/*0:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w_valid;
        CData/*4:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__ready;
        CData/*0:0*/ sha256_tb__DOT__sha_inst__DOT____Vlvbound_h0f206f3e__0;
        CData/*5:0*/ sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__i;
        CData/*0:0*/ __Vdlyvset__sha256_tb__DOT__letter__v0;
        CData/*0:0*/ __Vdlyvset__sha256_tb__DOT__letter__v8;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ sha256_tb__DOT__wout;
        IData/*31:0*/ sha256_tb__DOT____Vtogcov__wout;
        IData/*31:0*/ sha256_tb__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ sha256_tb__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__o_w;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__k;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__S1;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__ch;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__s0;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__s1;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__S0;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__maj;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__hk_1;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__S1_1;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__ch_1;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__s0_1;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__s1_1;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__wsum_1;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__S0_1;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__maj_1;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__hkS_2;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__ch_2;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__ss_2;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__wsum_2;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__T2_2;
    };
    struct {
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__sch_3;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__w_3;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__T2_3;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__T1_4;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__T2_4;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_w;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__k;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__hk_1;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__S1_1;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_1;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__s0_1;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__s1_1;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_1;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__S0_1;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__maj_1;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__hkS_2;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__ch_2;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__ss_2;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__wsum_2;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_2;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__sch_3;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__w_3;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_3;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__T1_4;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT____Vtogcov__T2_4;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__unnamedblk5__DOT__i;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__unnamedblk6__DOT__i;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_k__DOT____Vtogcov__k;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__x;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__x;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__y;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_6;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_11;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT____Vtogcov__rot_25;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__i_x;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__i_y;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__i_z;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_y;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__i_z;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT____Vtogcov__o;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__x;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__x;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__y;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_7;
    };
    struct {
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__rot_18;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT____Vtogcov__shift_3;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__x;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__x;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__y;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_17;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__rot_19;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT____Vtogcov__shift_10;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__x;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__x;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__y;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_2;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_13;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT____Vtogcov__rot_22;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__i_x;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__i_y;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__i_z;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_y;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__i_z;
        IData/*31:0*/ sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT____Vtogcov__o;
        IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__letter__v8;
        IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__letter__v9;
        IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__letter__v10;
        IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__letter__v11;
        IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__letter__v12;
        IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__letter__v13;
        IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__letter__v14;
        IData/*31:0*/ __Vdlyvval__sha256_tb__DOT__letter__v15;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(out[8],31,0);
        VL_IN(i_w[16],31,0);
        VlUnpacked<IData/*31:0*/, 8> sha256_tb__DOT__out;
        VlUnpacked<IData/*31:0*/, 16> sha256_tb__DOT__i_w;
        VlUnpacked<IData/*31:0*/, 64> sha256_tb__DOT__w;
        VlUnpacked<IData/*31:0*/, 4> sha256_tb__DOT__win;
        VlUnpacked<IData/*31:0*/, 8> sha256_tb__DOT__letter;
        VlUnpacked<IData/*31:0*/, 8> sha256_tb__DOT__o_let;
        VlUnpacked<IData/*31:0*/, 8> sha256_tb__DOT____Vtogcov__out;
        VlUnpacked<IData/*31:0*/, 4> sha256_tb__DOT____Vtogcov__win;
        VlUnpacked<IData/*31:0*/, 8> sha256_tb__DOT____Vtogcov__letter;
        VlUnpacked<IData/*31:0*/, 8> sha256_tb__DOT____Vtogcov__o_let;
        VlUnpacked<IData/*31:0*/, 8> sha256_tb__DOT__sha_inst__DOT__i_letters;
        VlUnpacked<IData/*31:0*/, 4> sha256_tb__DOT__sha_inst__DOT__i_w;
        VlUnpacked<IData/*31:0*/, 8> sha256_tb__DOT__sha_inst__DOT__o_letters;
        VlUnpacked<IData/*31:0*/, 7> sha256_tb__DOT__sha_inst__DOT__letters_1;
        VlUnpacked<IData/*31:0*/, 7> sha256_tb__DOT__sha_inst__DOT__letters_2;
        VlUnpacked<IData/*31:0*/, 7> sha256_tb__DOT__sha_inst__DOT__letters_3;
        VlUnpacked<IData/*31:0*/, 7> sha256_tb__DOT__sha_inst__DOT__letters_4;
        VlUnpacked<IData/*31:0*/, 8> sha256_tb__DOT__sha_inst__DOT__letters_5;
        VlUnpacked<IData/*31:0*/, 8> sha256_tb__DOT__sha_inst__DOT____Vtogcov__o_letters;
        VlUnpacked<IData/*31:0*/, 7> sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_1;
        VlUnpacked<IData/*31:0*/, 7> sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_2;
        VlUnpacked<IData/*31:0*/, 7> sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_3;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 7> sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_4;
        VlUnpacked<IData/*31:0*/, 8> sha256_tb__DOT__sha_inst__DOT____Vtogcov__letters_5;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
