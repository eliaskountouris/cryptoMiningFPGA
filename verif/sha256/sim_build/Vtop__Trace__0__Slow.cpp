// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"ready", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+4+i*1,"out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+12+i*1,"i_w", true,(i+0), 31,0);
    }
    tracep->declBit(c+28,"o_valid", false,-1);
    tracep->pushNamePrefix("sha256_tb ");
    tracep->declBit(c+29,"clk", false,-1);
    tracep->declBit(c+30,"rst", false,-1);
    tracep->declBit(c+31,"ready", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+32+i*1,"out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+40+i*1,"i_w", true,(i+0), 31,0);
    }
    tracep->declBit(c+56,"o_valid", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+57+i*1,"win", true,(i+0), 31,0);
    }
    tracep->declBus(c+61,"wout", false,-1, 31,0);
    tracep->declBit(c+62,"wvalid", false,-1);
    tracep->declBit(c+63,"valid", false,-1);
    tracep->declBit(c+64,"valid_r", false,-1);
    tracep->declBit(c+65,"rdy", false,-1);
    tracep->declBus(c+66,"counter", false,-1, 5,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+67+i*1,"letter", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+75+i*1,"o_let", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("sha_inst ");
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+84,"rst", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+85+i*1,"i_letters", true,(i+0), 31,0);
    }
    tracep->declBus(c+93,"i_counter", false,-1, 5,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+94+i*1,"i_w", true,(i+0), 31,0);
    }
    tracep->declBit(c+98,"i_ready", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+99+i*1,"o_letters", true,(i+0), 31,0);
    }
    tracep->declBit(c+107,"o_letters_valid", false,-1);
    tracep->declBus(c+108,"o_w", false,-1, 31,0);
    tracep->declBit(c+109,"o_w_valid", false,-1);
    tracep->declBus(c+110,"k", false,-1, 31,0);
    tracep->declBus(c+111,"S1", false,-1, 31,0);
    tracep->declBus(c+112,"ch", false,-1, 31,0);
    tracep->declBus(c+113,"s0", false,-1, 31,0);
    tracep->declBus(c+114,"s1", false,-1, 31,0);
    tracep->declBus(c+115,"S0", false,-1, 31,0);
    tracep->declBus(c+116,"maj", false,-1, 31,0);
    tracep->declBus(c+117,"hk_1", false,-1, 31,0);
    tracep->declBus(c+118,"S1_1", false,-1, 31,0);
    tracep->declBus(c+119,"ch_1", false,-1, 31,0);
    tracep->declBus(c+120,"s0_1", false,-1, 31,0);
    tracep->declBus(c+121,"s1_1", false,-1, 31,0);
    tracep->declBus(c+122,"wsum_1", false,-1, 31,0);
    tracep->declBus(c+123,"S0_1", false,-1, 31,0);
    tracep->declBus(c+124,"maj_1", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+125+i*1,"letters_1", true,(i+0), 31,0);
    }
    tracep->declBus(c+132,"hkS_2", false,-1, 31,0);
    tracep->declBus(c+133,"ch_2", false,-1, 31,0);
    tracep->declBus(c+134,"ss_2", false,-1, 31,0);
    tracep->declBus(c+135,"wsum_2", false,-1, 31,0);
    tracep->declBus(c+136,"T2_2", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+137+i*1,"letters_2", true,(i+0), 31,0);
    }
    tracep->declBus(c+144,"sch_3", false,-1, 31,0);
    tracep->declBus(c+145,"w_3", false,-1, 31,0);
    tracep->declBus(c+146,"T2_3", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+147+i*1,"letters_3", true,(i+0), 31,0);
    }
    tracep->declBus(c+154,"T1_4", false,-1, 31,0);
    tracep->declBus(c+155,"T2_4", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+156+i*1,"letters_4", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+163+i*1,"letters_5", true,(i+0), 31,0);
    }
    tracep->declBus(c+171,"ready", false,-1, 4,0);
    tracep->pushNamePrefix("inst_S0 ");
    tracep->declBus(c+172,"x", false,-1, 31,0);
    tracep->declBus(c+173,"y", false,-1, 31,0);
    tracep->declBus(c+174,"rot_2", false,-1, 31,0);
    tracep->declBus(c+175,"rot_13", false,-1, 31,0);
    tracep->declBus(c+176,"rot_22", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_S1 ");
    tracep->declBus(c+177,"x", false,-1, 31,0);
    tracep->declBus(c+178,"y", false,-1, 31,0);
    tracep->declBus(c+179,"rot_6", false,-1, 31,0);
    tracep->declBus(c+180,"rot_11", false,-1, 31,0);
    tracep->declBus(c+181,"rot_25", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_ch ");
    tracep->declBus(c+182,"i_x", false,-1, 31,0);
    tracep->declBus(c+183,"i_y", false,-1, 31,0);
    tracep->declBus(c+184,"i_z", false,-1, 31,0);
    tracep->declBus(c+185,"o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_k ");
    tracep->declBus(c+186,"i", false,-1, 5,0);
    tracep->declBus(c+187,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_maj ");
    tracep->declBus(c+188,"i_x", false,-1, 31,0);
    tracep->declBus(c+189,"i_y", false,-1, 31,0);
    tracep->declBus(c+190,"i_z", false,-1, 31,0);
    tracep->declBus(c+191,"o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_s0 ");
    tracep->declBus(c+192,"x", false,-1, 31,0);
    tracep->declBus(c+193,"y", false,-1, 31,0);
    tracep->declBus(c+194,"rot_7", false,-1, 31,0);
    tracep->declBus(c+195,"rot_18", false,-1, 31,0);
    tracep->declBus(c+196,"shift_3", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_s1 ");
    tracep->declBus(c+197,"x", false,-1, 31,0);
    tracep->declBus(c+198,"y", false,-1, 31,0);
    tracep->declBus(c+199,"rot_17", false,-1, 31,0);
    tracep->declBus(c+200,"rot_19", false,-1, 31,0);
    tracep->declBus(c+201,"shift_10", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+202,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+203,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+204,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+205,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+206,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+207,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+208,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+209,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullBit(oldp+3,(vlSelf->ready));
    bufp->fullIData(oldp+4,(vlSelf->out[0]),32);
    bufp->fullIData(oldp+5,(vlSelf->out[1]),32);
    bufp->fullIData(oldp+6,(vlSelf->out[2]),32);
    bufp->fullIData(oldp+7,(vlSelf->out[3]),32);
    bufp->fullIData(oldp+8,(vlSelf->out[4]),32);
    bufp->fullIData(oldp+9,(vlSelf->out[5]),32);
    bufp->fullIData(oldp+10,(vlSelf->out[6]),32);
    bufp->fullIData(oldp+11,(vlSelf->out[7]),32);
    bufp->fullIData(oldp+12,(vlSelf->i_w[0]),32);
    bufp->fullIData(oldp+13,(vlSelf->i_w[1]),32);
    bufp->fullIData(oldp+14,(vlSelf->i_w[2]),32);
    bufp->fullIData(oldp+15,(vlSelf->i_w[3]),32);
    bufp->fullIData(oldp+16,(vlSelf->i_w[4]),32);
    bufp->fullIData(oldp+17,(vlSelf->i_w[5]),32);
    bufp->fullIData(oldp+18,(vlSelf->i_w[6]),32);
    bufp->fullIData(oldp+19,(vlSelf->i_w[7]),32);
    bufp->fullIData(oldp+20,(vlSelf->i_w[8]),32);
    bufp->fullIData(oldp+21,(vlSelf->i_w[9]),32);
    bufp->fullIData(oldp+22,(vlSelf->i_w[10]),32);
    bufp->fullIData(oldp+23,(vlSelf->i_w[11]),32);
    bufp->fullIData(oldp+24,(vlSelf->i_w[12]),32);
    bufp->fullIData(oldp+25,(vlSelf->i_w[13]),32);
    bufp->fullIData(oldp+26,(vlSelf->i_w[14]),32);
    bufp->fullIData(oldp+27,(vlSelf->i_w[15]),32);
    bufp->fullBit(oldp+28,(vlSelf->o_valid));
    bufp->fullBit(oldp+29,(vlSelf->sha256_tb__DOT__clk));
    bufp->fullBit(oldp+30,(vlSelf->sha256_tb__DOT__rst));
    bufp->fullBit(oldp+31,(vlSelf->sha256_tb__DOT__ready));
    bufp->fullIData(oldp+32,(vlSelf->sha256_tb__DOT__out[0]),32);
    bufp->fullIData(oldp+33,(vlSelf->sha256_tb__DOT__out[1]),32);
    bufp->fullIData(oldp+34,(vlSelf->sha256_tb__DOT__out[2]),32);
    bufp->fullIData(oldp+35,(vlSelf->sha256_tb__DOT__out[3]),32);
    bufp->fullIData(oldp+36,(vlSelf->sha256_tb__DOT__out[4]),32);
    bufp->fullIData(oldp+37,(vlSelf->sha256_tb__DOT__out[5]),32);
    bufp->fullIData(oldp+38,(vlSelf->sha256_tb__DOT__out[6]),32);
    bufp->fullIData(oldp+39,(vlSelf->sha256_tb__DOT__out[7]),32);
    bufp->fullIData(oldp+40,(vlSelf->sha256_tb__DOT__i_w[0]),32);
    bufp->fullIData(oldp+41,(vlSelf->sha256_tb__DOT__i_w[1]),32);
    bufp->fullIData(oldp+42,(vlSelf->sha256_tb__DOT__i_w[2]),32);
    bufp->fullIData(oldp+43,(vlSelf->sha256_tb__DOT__i_w[3]),32);
    bufp->fullIData(oldp+44,(vlSelf->sha256_tb__DOT__i_w[4]),32);
    bufp->fullIData(oldp+45,(vlSelf->sha256_tb__DOT__i_w[5]),32);
    bufp->fullIData(oldp+46,(vlSelf->sha256_tb__DOT__i_w[6]),32);
    bufp->fullIData(oldp+47,(vlSelf->sha256_tb__DOT__i_w[7]),32);
    bufp->fullIData(oldp+48,(vlSelf->sha256_tb__DOT__i_w[8]),32);
    bufp->fullIData(oldp+49,(vlSelf->sha256_tb__DOT__i_w[9]),32);
    bufp->fullIData(oldp+50,(vlSelf->sha256_tb__DOT__i_w[10]),32);
    bufp->fullIData(oldp+51,(vlSelf->sha256_tb__DOT__i_w[11]),32);
    bufp->fullIData(oldp+52,(vlSelf->sha256_tb__DOT__i_w[12]),32);
    bufp->fullIData(oldp+53,(vlSelf->sha256_tb__DOT__i_w[13]),32);
    bufp->fullIData(oldp+54,(vlSelf->sha256_tb__DOT__i_w[14]),32);
    bufp->fullIData(oldp+55,(vlSelf->sha256_tb__DOT__i_w[15]),32);
    bufp->fullBit(oldp+56,(vlSelf->sha256_tb__DOT__o_valid));
    bufp->fullIData(oldp+57,(vlSelf->sha256_tb__DOT__win[0]),32);
    bufp->fullIData(oldp+58,(vlSelf->sha256_tb__DOT__win[1]),32);
    bufp->fullIData(oldp+59,(vlSelf->sha256_tb__DOT__win[2]),32);
    bufp->fullIData(oldp+60,(vlSelf->sha256_tb__DOT__win[3]),32);
    bufp->fullIData(oldp+61,(vlSelf->sha256_tb__DOT__wout),32);
    bufp->fullBit(oldp+62,(vlSelf->sha256_tb__DOT__wvalid));
    bufp->fullBit(oldp+63,(vlSelf->sha256_tb__DOT__valid));
    bufp->fullBit(oldp+64,(vlSelf->sha256_tb__DOT__valid_r));
    bufp->fullBit(oldp+65,(vlSelf->sha256_tb__DOT__rdy));
    bufp->fullCData(oldp+66,(vlSelf->sha256_tb__DOT__counter),6);
    bufp->fullIData(oldp+67,(vlSelf->sha256_tb__DOT__letter[0]),32);
    bufp->fullIData(oldp+68,(vlSelf->sha256_tb__DOT__letter[1]),32);
    bufp->fullIData(oldp+69,(vlSelf->sha256_tb__DOT__letter[2]),32);
    bufp->fullIData(oldp+70,(vlSelf->sha256_tb__DOT__letter[3]),32);
    bufp->fullIData(oldp+71,(vlSelf->sha256_tb__DOT__letter[4]),32);
    bufp->fullIData(oldp+72,(vlSelf->sha256_tb__DOT__letter[5]),32);
    bufp->fullIData(oldp+73,(vlSelf->sha256_tb__DOT__letter[6]),32);
    bufp->fullIData(oldp+74,(vlSelf->sha256_tb__DOT__letter[7]),32);
    bufp->fullIData(oldp+75,(vlSelf->sha256_tb__DOT__o_let[0]),32);
    bufp->fullIData(oldp+76,(vlSelf->sha256_tb__DOT__o_let[1]),32);
    bufp->fullIData(oldp+77,(vlSelf->sha256_tb__DOT__o_let[2]),32);
    bufp->fullIData(oldp+78,(vlSelf->sha256_tb__DOT__o_let[3]),32);
    bufp->fullIData(oldp+79,(vlSelf->sha256_tb__DOT__o_let[4]),32);
    bufp->fullIData(oldp+80,(vlSelf->sha256_tb__DOT__o_let[5]),32);
    bufp->fullIData(oldp+81,(vlSelf->sha256_tb__DOT__o_let[6]),32);
    bufp->fullIData(oldp+82,(vlSelf->sha256_tb__DOT__o_let[7]),32);
    bufp->fullBit(oldp+83,(vlSelf->sha256_tb__DOT__sha_inst__DOT__clk));
    bufp->fullBit(oldp+84,(vlSelf->sha256_tb__DOT__sha_inst__DOT__rst));
    bufp->fullIData(oldp+85,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_letters[0]),32);
    bufp->fullIData(oldp+86,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_letters[1]),32);
    bufp->fullIData(oldp+87,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_letters[2]),32);
    bufp->fullIData(oldp+88,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_letters[3]),32);
    bufp->fullIData(oldp+89,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_letters[4]),32);
    bufp->fullIData(oldp+90,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_letters[5]),32);
    bufp->fullIData(oldp+91,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_letters[6]),32);
    bufp->fullIData(oldp+92,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_letters[7]),32);
    bufp->fullCData(oldp+93,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_counter),6);
    bufp->fullIData(oldp+94,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_w[0]),32);
    bufp->fullIData(oldp+95,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_w[1]),32);
    bufp->fullIData(oldp+96,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_w[2]),32);
    bufp->fullIData(oldp+97,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_w[3]),32);
    bufp->fullBit(oldp+98,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_ready));
    bufp->fullIData(oldp+99,(vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters[0]),32);
    bufp->fullIData(oldp+100,(vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters[1]),32);
    bufp->fullIData(oldp+101,(vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters[2]),32);
    bufp->fullIData(oldp+102,(vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters[3]),32);
    bufp->fullIData(oldp+103,(vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters[4]),32);
    bufp->fullIData(oldp+104,(vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters[5]),32);
    bufp->fullIData(oldp+105,(vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters[6]),32);
    bufp->fullIData(oldp+106,(vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters[7]),32);
    bufp->fullBit(oldp+107,(vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters_valid));
    bufp->fullIData(oldp+108,(vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w),32);
    bufp->fullBit(oldp+109,(vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w_valid));
    bufp->fullIData(oldp+110,(vlSelf->sha256_tb__DOT__sha_inst__DOT__k),32);
    bufp->fullIData(oldp+111,(vlSelf->sha256_tb__DOT__sha_inst__DOT__S1),32);
    bufp->fullIData(oldp+112,(vlSelf->sha256_tb__DOT__sha_inst__DOT__ch),32);
    bufp->fullIData(oldp+113,(vlSelf->sha256_tb__DOT__sha_inst__DOT__s0),32);
    bufp->fullIData(oldp+114,(vlSelf->sha256_tb__DOT__sha_inst__DOT__s1),32);
    bufp->fullIData(oldp+115,(vlSelf->sha256_tb__DOT__sha_inst__DOT__S0),32);
    bufp->fullIData(oldp+116,(vlSelf->sha256_tb__DOT__sha_inst__DOT__maj),32);
    bufp->fullIData(oldp+117,(vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1),32);
    bufp->fullIData(oldp+118,(vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1),32);
    bufp->fullIData(oldp+119,(vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1),32);
    bufp->fullIData(oldp+120,(vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1),32);
    bufp->fullIData(oldp+121,(vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1),32);
    bufp->fullIData(oldp+122,(vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1),32);
    bufp->fullIData(oldp+123,(vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1),32);
    bufp->fullIData(oldp+124,(vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1),32);
    bufp->fullIData(oldp+125,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[0]),32);
    bufp->fullIData(oldp+126,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[1]),32);
    bufp->fullIData(oldp+127,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[2]),32);
    bufp->fullIData(oldp+128,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[3]),32);
    bufp->fullIData(oldp+129,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[4]),32);
    bufp->fullIData(oldp+130,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[5]),32);
    bufp->fullIData(oldp+131,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[6]),32);
    bufp->fullIData(oldp+132,(vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2),32);
    bufp->fullIData(oldp+133,(vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2),32);
    bufp->fullIData(oldp+134,(vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2),32);
    bufp->fullIData(oldp+135,(vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2),32);
    bufp->fullIData(oldp+136,(vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2),32);
    bufp->fullIData(oldp+137,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[0]),32);
    bufp->fullIData(oldp+138,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[1]),32);
    bufp->fullIData(oldp+139,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[2]),32);
    bufp->fullIData(oldp+140,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[3]),32);
    bufp->fullIData(oldp+141,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[4]),32);
    bufp->fullIData(oldp+142,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[5]),32);
    bufp->fullIData(oldp+143,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[6]),32);
    bufp->fullIData(oldp+144,(vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3),32);
    bufp->fullIData(oldp+145,(vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3),32);
    bufp->fullIData(oldp+146,(vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3),32);
    bufp->fullIData(oldp+147,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[0]),32);
    bufp->fullIData(oldp+148,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[1]),32);
    bufp->fullIData(oldp+149,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[2]),32);
    bufp->fullIData(oldp+150,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[3]),32);
    bufp->fullIData(oldp+151,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[4]),32);
    bufp->fullIData(oldp+152,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[5]),32);
    bufp->fullIData(oldp+153,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[6]),32);
    bufp->fullIData(oldp+154,(vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4),32);
    bufp->fullIData(oldp+155,(vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4),32);
    bufp->fullIData(oldp+156,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[0]),32);
    bufp->fullIData(oldp+157,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[1]),32);
    bufp->fullIData(oldp+158,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[2]),32);
    bufp->fullIData(oldp+159,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[3]),32);
    bufp->fullIData(oldp+160,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[4]),32);
    bufp->fullIData(oldp+161,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[5]),32);
    bufp->fullIData(oldp+162,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[6]),32);
    bufp->fullIData(oldp+163,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[0]),32);
    bufp->fullIData(oldp+164,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[1]),32);
    bufp->fullIData(oldp+165,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[2]),32);
    bufp->fullIData(oldp+166,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[3]),32);
    bufp->fullIData(oldp+167,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[4]),32);
    bufp->fullIData(oldp+168,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[5]),32);
    bufp->fullIData(oldp+169,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[6]),32);
    bufp->fullIData(oldp+170,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[7]),32);
    bufp->fullCData(oldp+171,(vlSelf->sha256_tb__DOT__sha_inst__DOT__ready),5);
    bufp->fullIData(oldp+172,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__x),32);
    bufp->fullIData(oldp+173,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y),32);
    bufp->fullIData(oldp+174,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2),32);
    bufp->fullIData(oldp+175,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13),32);
    bufp->fullIData(oldp+176,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22),32);
    bufp->fullIData(oldp+177,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__x),32);
    bufp->fullIData(oldp+178,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y),32);
    bufp->fullIData(oldp+179,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6),32);
    bufp->fullIData(oldp+180,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11),32);
    bufp->fullIData(oldp+181,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25),32);
    bufp->fullIData(oldp+182,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__i_x),32);
    bufp->fullIData(oldp+183,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__i_y),32);
    bufp->fullIData(oldp+184,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__i_z),32);
    bufp->fullIData(oldp+185,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o),32);
    bufp->fullCData(oldp+186,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__i),6);
    bufp->fullIData(oldp+187,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k),32);
    bufp->fullIData(oldp+188,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__i_x),32);
    bufp->fullIData(oldp+189,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__i_y),32);
    bufp->fullIData(oldp+190,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__i_z),32);
    bufp->fullIData(oldp+191,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o),32);
    bufp->fullIData(oldp+192,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__x),32);
    bufp->fullIData(oldp+193,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y),32);
    bufp->fullIData(oldp+194,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7),32);
    bufp->fullIData(oldp+195,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18),32);
    bufp->fullIData(oldp+196,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3),32);
    bufp->fullIData(oldp+197,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__x),32);
    bufp->fullIData(oldp+198,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y),32);
    bufp->fullIData(oldp+199,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17),32);
    bufp->fullIData(oldp+200,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19),32);
    bufp->fullIData(oldp+201,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10),32);
    bufp->fullIData(oldp+202,(vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+203,(vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+204,(vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+205,(vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+206,(vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+207,(vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+208,(vlSelf->sha256_tb__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+209,(vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i),32);
}
