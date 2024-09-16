// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_sha256_tb);
    __Vhier.remove(&__Vscope_sha256_tb, &__Vscope_sha256_tb__sha_inst);
    __Vhier.remove(&__Vscope_sha256_tb__sha_inst, &__Vscope_sha256_tb__sha_inst__inst_S0);
    __Vhier.remove(&__Vscope_sha256_tb__sha_inst, &__Vscope_sha256_tb__sha_inst__inst_S1);
    __Vhier.remove(&__Vscope_sha256_tb__sha_inst, &__Vscope_sha256_tb__sha_inst__inst_ch);
    __Vhier.remove(&__Vscope_sha256_tb__sha_inst, &__Vscope_sha256_tb__sha_inst__inst_k);
    __Vhier.remove(&__Vscope_sha256_tb__sha_inst, &__Vscope_sha256_tb__sha_inst__inst_maj);
    __Vhier.remove(&__Vscope_sha256_tb__sha_inst, &__Vscope_sha256_tb__sha_inst__inst_s0);
    __Vhier.remove(&__Vscope_sha256_tb__sha_inst, &__Vscope_sha256_tb__sha_inst__inst_s1);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_sha256_tb.configure(this, name(), "sha256_tb", "sha256_tb", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_sha256_tb__sha_inst.configure(this, name(), "sha256_tb.sha_inst", "sha_inst", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_sha256_tb__sha_inst__inst_S0.configure(this, name(), "sha256_tb.sha_inst.inst_S0", "inst_S0", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_sha256_tb__sha_inst__inst_S1.configure(this, name(), "sha256_tb.sha_inst.inst_S1", "inst_S1", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_sha256_tb__sha_inst__inst_ch.configure(this, name(), "sha256_tb.sha_inst.inst_ch", "inst_ch", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_sha256_tb__sha_inst__inst_k.configure(this, name(), "sha256_tb.sha_inst.inst_k", "inst_k", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_sha256_tb__sha_inst__inst_maj.configure(this, name(), "sha256_tb.sha_inst.inst_maj", "inst_maj", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_sha256_tb__sha_inst__inst_s0.configure(this, name(), "sha256_tb.sha_inst.inst_s0", "inst_s0", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_sha256_tb__sha_inst__inst_s1.configure(this, name(), "sha256_tb.sha_inst.inst_s1", "inst_s1", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_sha256_tb__sha_inst__unnamedblk1.configure(this, name(), "sha256_tb.sha_inst.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_sha256_tb__sha_inst__unnamedblk2.configure(this, name(), "sha256_tb.sha_inst.unnamedblk2", "unnamedblk2", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_sha256_tb__sha_inst__unnamedblk3.configure(this, name(), "sha256_tb.sha_inst.unnamedblk3", "unnamedblk3", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_sha256_tb__sha_inst__unnamedblk4.configure(this, name(), "sha256_tb.sha_inst.unnamedblk4", "unnamedblk4", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_sha256_tb__sha_inst__unnamedblk5.configure(this, name(), "sha256_tb.sha_inst.unnamedblk5", "unnamedblk5", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_sha256_tb__sha_inst__unnamedblk6.configure(this, name(), "sha256_tb.sha_inst.unnamedblk6", "unnamedblk6", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_sha256_tb__unnamedblk1.configure(this, name(), "sha256_tb.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_sha256_tb__unnamedblk2.configure(this, name(), "sha256_tb.unnamedblk2", "unnamedblk2", -9, VerilatedScope::SCOPE_OTHER);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_sha256_tb);
    __Vhier.add(&__Vscope_sha256_tb, &__Vscope_sha256_tb__sha_inst);
    __Vhier.add(&__Vscope_sha256_tb__sha_inst, &__Vscope_sha256_tb__sha_inst__inst_S0);
    __Vhier.add(&__Vscope_sha256_tb__sha_inst, &__Vscope_sha256_tb__sha_inst__inst_S1);
    __Vhier.add(&__Vscope_sha256_tb__sha_inst, &__Vscope_sha256_tb__sha_inst__inst_ch);
    __Vhier.add(&__Vscope_sha256_tb__sha_inst, &__Vscope_sha256_tb__sha_inst__inst_k);
    __Vhier.add(&__Vscope_sha256_tb__sha_inst, &__Vscope_sha256_tb__sha_inst__inst_maj);
    __Vhier.add(&__Vscope_sha256_tb__sha_inst, &__Vscope_sha256_tb__sha_inst__inst_s0);
    __Vhier.add(&__Vscope_sha256_tb__sha_inst, &__Vscope_sha256_tb__sha_inst__inst_s1);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"i_w", &(TOP.i_w), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,2 ,31,0 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"o_valid", &(TOP.o_valid), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"out", &(TOP.out), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,2 ,31,0 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"ready", &(TOP.ready), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst", &(TOP.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_sha256_tb.varInsert(__Vfinal,"clk", &(TOP.sha256_tb__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_sha256_tb.varInsert(__Vfinal,"counter", &(TOP.sha256_tb__DOT__counter), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_sha256_tb.varInsert(__Vfinal,"i_w", &(TOP.sha256_tb__DOT__i_w), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,15,0);
        __Vscope_sha256_tb.varInsert(__Vfinal,"letter", &(TOP.sha256_tb__DOT__letter), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,7,0);
        __Vscope_sha256_tb.varInsert(__Vfinal,"o_let", &(TOP.sha256_tb__DOT__o_let), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,7,0);
        __Vscope_sha256_tb.varInsert(__Vfinal,"o_valid", &(TOP.sha256_tb__DOT__o_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_sha256_tb.varInsert(__Vfinal,"out", &(TOP.sha256_tb__DOT__out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,7,0);
        __Vscope_sha256_tb.varInsert(__Vfinal,"rdy", &(TOP.sha256_tb__DOT__rdy), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_sha256_tb.varInsert(__Vfinal,"ready", &(TOP.sha256_tb__DOT__ready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_sha256_tb.varInsert(__Vfinal,"rst", &(TOP.sha256_tb__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_sha256_tb.varInsert(__Vfinal,"valid", &(TOP.sha256_tb__DOT__valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_sha256_tb.varInsert(__Vfinal,"valid_r", &(TOP.sha256_tb__DOT__valid_r), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_sha256_tb.varInsert(__Vfinal,"w", &(TOP.sha256_tb__DOT__w), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,63,0);
        __Vscope_sha256_tb.varInsert(__Vfinal,"win", &(TOP.sha256_tb__DOT__win), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,3,0);
        __Vscope_sha256_tb.varInsert(__Vfinal,"wout", &(TOP.sha256_tb__DOT__wout), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb.varInsert(__Vfinal,"wvalid", &(TOP.sha256_tb__DOT__wvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"S0", &(TOP.sha256_tb__DOT__sha_inst__DOT__S0), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"S0_1", &(TOP.sha256_tb__DOT__sha_inst__DOT__S0_1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"S1", &(TOP.sha256_tb__DOT__sha_inst__DOT__S1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"S1_1", &(TOP.sha256_tb__DOT__sha_inst__DOT__S1_1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"T1_4", &(TOP.sha256_tb__DOT__sha_inst__DOT__T1_4), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"T2_2", &(TOP.sha256_tb__DOT__sha_inst__DOT__T2_2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"T2_3", &(TOP.sha256_tb__DOT__sha_inst__DOT__T2_3), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"T2_4", &(TOP.sha256_tb__DOT__sha_inst__DOT__T2_4), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"ch", &(TOP.sha256_tb__DOT__sha_inst__DOT__ch), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"ch_1", &(TOP.sha256_tb__DOT__sha_inst__DOT__ch_1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"ch_2", &(TOP.sha256_tb__DOT__sha_inst__DOT__ch_2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"clk", &(TOP.sha256_tb__DOT__sha_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"hkS_2", &(TOP.sha256_tb__DOT__sha_inst__DOT__hkS_2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"hk_1", &(TOP.sha256_tb__DOT__sha_inst__DOT__hk_1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"i_counter", &(TOP.sha256_tb__DOT__sha_inst__DOT__i_counter), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"i_letters", &(TOP.sha256_tb__DOT__sha_inst__DOT__i_letters), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,7,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"i_ready", &(TOP.sha256_tb__DOT__sha_inst__DOT__i_ready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"i_w", &(TOP.sha256_tb__DOT__sha_inst__DOT__i_w), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,3,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"k", &(TOP.sha256_tb__DOT__sha_inst__DOT__k), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"letters_1", &(TOP.sha256_tb__DOT__sha_inst__DOT__letters_1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,6,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"letters_2", &(TOP.sha256_tb__DOT__sha_inst__DOT__letters_2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,6,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"letters_3", &(TOP.sha256_tb__DOT__sha_inst__DOT__letters_3), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,6,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"letters_4", &(TOP.sha256_tb__DOT__sha_inst__DOT__letters_4), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,6,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"letters_5", &(TOP.sha256_tb__DOT__sha_inst__DOT__letters_5), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,7,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"maj", &(TOP.sha256_tb__DOT__sha_inst__DOT__maj), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"maj_1", &(TOP.sha256_tb__DOT__sha_inst__DOT__maj_1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"o_letters", &(TOP.sha256_tb__DOT__sha_inst__DOT__o_letters), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,7,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"o_letters_valid", &(TOP.sha256_tb__DOT__sha_inst__DOT__o_letters_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"o_w", &(TOP.sha256_tb__DOT__sha_inst__DOT__o_w), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"o_w_valid", &(TOP.sha256_tb__DOT__sha_inst__DOT__o_w_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"ready", &(TOP.sha256_tb__DOT__sha_inst__DOT__ready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"rst", &(TOP.sha256_tb__DOT__sha_inst__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"s0", &(TOP.sha256_tb__DOT__sha_inst__DOT__s0), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"s0_1", &(TOP.sha256_tb__DOT__sha_inst__DOT__s0_1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"s1", &(TOP.sha256_tb__DOT__sha_inst__DOT__s1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"s1_1", &(TOP.sha256_tb__DOT__sha_inst__DOT__s1_1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"sch_3", &(TOP.sha256_tb__DOT__sha_inst__DOT__sch_3), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"ss_2", &(TOP.sha256_tb__DOT__sha_inst__DOT__ss_2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"w_3", &(TOP.sha256_tb__DOT__sha_inst__DOT__w_3), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"wsum_1", &(TOP.sha256_tb__DOT__sha_inst__DOT__wsum_1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst.varInsert(__Vfinal,"wsum_2", &(TOP.sha256_tb__DOT__sha_inst__DOT__wsum_2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_S0.varInsert(__Vfinal,"rot_13", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_S0.varInsert(__Vfinal,"rot_2", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_S0.varInsert(__Vfinal,"rot_22", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_S0.varInsert(__Vfinal,"x", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__x), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_S0.varInsert(__Vfinal,"y", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_S1.varInsert(__Vfinal,"rot_11", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_S1.varInsert(__Vfinal,"rot_25", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_S1.varInsert(__Vfinal,"rot_6", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_S1.varInsert(__Vfinal,"x", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__x), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_S1.varInsert(__Vfinal,"y", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_ch.varInsert(__Vfinal,"i_x", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__i_x), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_ch.varInsert(__Vfinal,"i_y", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__i_y), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_ch.varInsert(__Vfinal,"i_z", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__i_z), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_ch.varInsert(__Vfinal,"o", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_k.varInsert(__Vfinal,"i", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_sha256_tb__sha_inst__inst_k.varInsert(__Vfinal,"k", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_maj.varInsert(__Vfinal,"i_x", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__i_x), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_maj.varInsert(__Vfinal,"i_y", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__i_y), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_maj.varInsert(__Vfinal,"i_z", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__i_z), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_maj.varInsert(__Vfinal,"o", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_s0.varInsert(__Vfinal,"rot_18", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_s0.varInsert(__Vfinal,"rot_7", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_s0.varInsert(__Vfinal,"shift_3", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_s0.varInsert(__Vfinal,"x", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__x), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_s0.varInsert(__Vfinal,"y", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_s1.varInsert(__Vfinal,"rot_17", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_s1.varInsert(__Vfinal,"rot_19", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_s1.varInsert(__Vfinal,"shift_10", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_s1.varInsert(__Vfinal,"x", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__x), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__inst_s1.varInsert(__Vfinal,"y", &(TOP.sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__unnamedblk1.varInsert(__Vfinal,"i", &(TOP.sha256_tb__DOT__sha_inst__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__unnamedblk2.varInsert(__Vfinal,"i", &(TOP.sha256_tb__DOT__sha_inst__DOT__unnamedblk2__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__unnamedblk3.varInsert(__Vfinal,"i", &(TOP.sha256_tb__DOT__sha_inst__DOT__unnamedblk3__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__unnamedblk4.varInsert(__Vfinal,"i", &(TOP.sha256_tb__DOT__sha_inst__DOT__unnamedblk4__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__unnamedblk5.varInsert(__Vfinal,"i", &(TOP.sha256_tb__DOT__sha_inst__DOT__unnamedblk5__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__sha_inst__unnamedblk6.varInsert(__Vfinal,"i", &(TOP.sha256_tb__DOT__sha_inst__DOT__unnamedblk6__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__unnamedblk1.varInsert(__Vfinal,"i", &(TOP.sha256_tb__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256_tb__unnamedblk2.varInsert(__Vfinal,"i", &(TOP.sha256_tb__DOT__unnamedblk2__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
    }
}
