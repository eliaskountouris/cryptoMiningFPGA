// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst));
    bufp->chgBit(oldp+2,(vlSelf->ready));
    bufp->chgIData(oldp+3,(vlSelf->out[0]),32);
    bufp->chgIData(oldp+4,(vlSelf->out[1]),32);
    bufp->chgIData(oldp+5,(vlSelf->out[2]),32);
    bufp->chgIData(oldp+6,(vlSelf->out[3]),32);
    bufp->chgIData(oldp+7,(vlSelf->out[4]),32);
    bufp->chgIData(oldp+8,(vlSelf->out[5]),32);
    bufp->chgIData(oldp+9,(vlSelf->out[6]),32);
    bufp->chgIData(oldp+10,(vlSelf->out[7]),32);
    bufp->chgIData(oldp+11,(vlSelf->i_w[0]),32);
    bufp->chgIData(oldp+12,(vlSelf->i_w[1]),32);
    bufp->chgIData(oldp+13,(vlSelf->i_w[2]),32);
    bufp->chgIData(oldp+14,(vlSelf->i_w[3]),32);
    bufp->chgIData(oldp+15,(vlSelf->i_w[4]),32);
    bufp->chgIData(oldp+16,(vlSelf->i_w[5]),32);
    bufp->chgIData(oldp+17,(vlSelf->i_w[6]),32);
    bufp->chgIData(oldp+18,(vlSelf->i_w[7]),32);
    bufp->chgIData(oldp+19,(vlSelf->i_w[8]),32);
    bufp->chgIData(oldp+20,(vlSelf->i_w[9]),32);
    bufp->chgIData(oldp+21,(vlSelf->i_w[10]),32);
    bufp->chgIData(oldp+22,(vlSelf->i_w[11]),32);
    bufp->chgIData(oldp+23,(vlSelf->i_w[12]),32);
    bufp->chgIData(oldp+24,(vlSelf->i_w[13]),32);
    bufp->chgIData(oldp+25,(vlSelf->i_w[14]),32);
    bufp->chgIData(oldp+26,(vlSelf->i_w[15]),32);
    bufp->chgBit(oldp+27,(vlSelf->o_valid));
    bufp->chgBit(oldp+28,(vlSelf->sha256_tb__DOT__clk));
    bufp->chgBit(oldp+29,(vlSelf->sha256_tb__DOT__rst));
    bufp->chgBit(oldp+30,(vlSelf->sha256_tb__DOT__ready));
    bufp->chgIData(oldp+31,(vlSelf->sha256_tb__DOT__out[0]),32);
    bufp->chgIData(oldp+32,(vlSelf->sha256_tb__DOT__out[1]),32);
    bufp->chgIData(oldp+33,(vlSelf->sha256_tb__DOT__out[2]),32);
    bufp->chgIData(oldp+34,(vlSelf->sha256_tb__DOT__out[3]),32);
    bufp->chgIData(oldp+35,(vlSelf->sha256_tb__DOT__out[4]),32);
    bufp->chgIData(oldp+36,(vlSelf->sha256_tb__DOT__out[5]),32);
    bufp->chgIData(oldp+37,(vlSelf->sha256_tb__DOT__out[6]),32);
    bufp->chgIData(oldp+38,(vlSelf->sha256_tb__DOT__out[7]),32);
    bufp->chgIData(oldp+39,(vlSelf->sha256_tb__DOT__i_w[0]),32);
    bufp->chgIData(oldp+40,(vlSelf->sha256_tb__DOT__i_w[1]),32);
    bufp->chgIData(oldp+41,(vlSelf->sha256_tb__DOT__i_w[2]),32);
    bufp->chgIData(oldp+42,(vlSelf->sha256_tb__DOT__i_w[3]),32);
    bufp->chgIData(oldp+43,(vlSelf->sha256_tb__DOT__i_w[4]),32);
    bufp->chgIData(oldp+44,(vlSelf->sha256_tb__DOT__i_w[5]),32);
    bufp->chgIData(oldp+45,(vlSelf->sha256_tb__DOT__i_w[6]),32);
    bufp->chgIData(oldp+46,(vlSelf->sha256_tb__DOT__i_w[7]),32);
    bufp->chgIData(oldp+47,(vlSelf->sha256_tb__DOT__i_w[8]),32);
    bufp->chgIData(oldp+48,(vlSelf->sha256_tb__DOT__i_w[9]),32);
    bufp->chgIData(oldp+49,(vlSelf->sha256_tb__DOT__i_w[10]),32);
    bufp->chgIData(oldp+50,(vlSelf->sha256_tb__DOT__i_w[11]),32);
    bufp->chgIData(oldp+51,(vlSelf->sha256_tb__DOT__i_w[12]),32);
    bufp->chgIData(oldp+52,(vlSelf->sha256_tb__DOT__i_w[13]),32);
    bufp->chgIData(oldp+53,(vlSelf->sha256_tb__DOT__i_w[14]),32);
    bufp->chgIData(oldp+54,(vlSelf->sha256_tb__DOT__i_w[15]),32);
    bufp->chgBit(oldp+55,(vlSelf->sha256_tb__DOT__o_valid));
    bufp->chgIData(oldp+56,(vlSelf->sha256_tb__DOT__win[0]),32);
    bufp->chgIData(oldp+57,(vlSelf->sha256_tb__DOT__win[1]),32);
    bufp->chgIData(oldp+58,(vlSelf->sha256_tb__DOT__win[2]),32);
    bufp->chgIData(oldp+59,(vlSelf->sha256_tb__DOT__win[3]),32);
    bufp->chgIData(oldp+60,(vlSelf->sha256_tb__DOT__wout),32);
    bufp->chgBit(oldp+61,(vlSelf->sha256_tb__DOT__wvalid));
    bufp->chgBit(oldp+62,(vlSelf->sha256_tb__DOT__valid));
    bufp->chgBit(oldp+63,(vlSelf->sha256_tb__DOT__valid_r));
    bufp->chgBit(oldp+64,(vlSelf->sha256_tb__DOT__rdy));
    bufp->chgCData(oldp+65,(vlSelf->sha256_tb__DOT__counter),6);
    bufp->chgIData(oldp+66,(vlSelf->sha256_tb__DOT__letter[0]),32);
    bufp->chgIData(oldp+67,(vlSelf->sha256_tb__DOT__letter[1]),32);
    bufp->chgIData(oldp+68,(vlSelf->sha256_tb__DOT__letter[2]),32);
    bufp->chgIData(oldp+69,(vlSelf->sha256_tb__DOT__letter[3]),32);
    bufp->chgIData(oldp+70,(vlSelf->sha256_tb__DOT__letter[4]),32);
    bufp->chgIData(oldp+71,(vlSelf->sha256_tb__DOT__letter[5]),32);
    bufp->chgIData(oldp+72,(vlSelf->sha256_tb__DOT__letter[6]),32);
    bufp->chgIData(oldp+73,(vlSelf->sha256_tb__DOT__letter[7]),32);
    bufp->chgIData(oldp+74,(vlSelf->sha256_tb__DOT__o_let[0]),32);
    bufp->chgIData(oldp+75,(vlSelf->sha256_tb__DOT__o_let[1]),32);
    bufp->chgIData(oldp+76,(vlSelf->sha256_tb__DOT__o_let[2]),32);
    bufp->chgIData(oldp+77,(vlSelf->sha256_tb__DOT__o_let[3]),32);
    bufp->chgIData(oldp+78,(vlSelf->sha256_tb__DOT__o_let[4]),32);
    bufp->chgIData(oldp+79,(vlSelf->sha256_tb__DOT__o_let[5]),32);
    bufp->chgIData(oldp+80,(vlSelf->sha256_tb__DOT__o_let[6]),32);
    bufp->chgIData(oldp+81,(vlSelf->sha256_tb__DOT__o_let[7]),32);
    bufp->chgBit(oldp+82,(vlSelf->sha256_tb__DOT__sha_inst__DOT__clk));
    bufp->chgBit(oldp+83,(vlSelf->sha256_tb__DOT__sha_inst__DOT__rst));
    bufp->chgIData(oldp+84,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_letters[0]),32);
    bufp->chgIData(oldp+85,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_letters[1]),32);
    bufp->chgIData(oldp+86,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_letters[2]),32);
    bufp->chgIData(oldp+87,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_letters[3]),32);
    bufp->chgIData(oldp+88,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_letters[4]),32);
    bufp->chgIData(oldp+89,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_letters[5]),32);
    bufp->chgIData(oldp+90,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_letters[6]),32);
    bufp->chgIData(oldp+91,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_letters[7]),32);
    bufp->chgCData(oldp+92,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_counter),6);
    bufp->chgIData(oldp+93,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_w[0]),32);
    bufp->chgIData(oldp+94,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_w[1]),32);
    bufp->chgIData(oldp+95,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_w[2]),32);
    bufp->chgIData(oldp+96,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_w[3]),32);
    bufp->chgBit(oldp+97,(vlSelf->sha256_tb__DOT__sha_inst__DOT__i_ready));
    bufp->chgIData(oldp+98,(vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters[0]),32);
    bufp->chgIData(oldp+99,(vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters[1]),32);
    bufp->chgIData(oldp+100,(vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters[2]),32);
    bufp->chgIData(oldp+101,(vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters[3]),32);
    bufp->chgIData(oldp+102,(vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters[4]),32);
    bufp->chgIData(oldp+103,(vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters[5]),32);
    bufp->chgIData(oldp+104,(vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters[6]),32);
    bufp->chgIData(oldp+105,(vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters[7]),32);
    bufp->chgBit(oldp+106,(vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters_valid));
    bufp->chgIData(oldp+107,(vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w),32);
    bufp->chgBit(oldp+108,(vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w_valid));
    bufp->chgIData(oldp+109,(vlSelf->sha256_tb__DOT__sha_inst__DOT__k),32);
    bufp->chgIData(oldp+110,(vlSelf->sha256_tb__DOT__sha_inst__DOT__S1),32);
    bufp->chgIData(oldp+111,(vlSelf->sha256_tb__DOT__sha_inst__DOT__ch),32);
    bufp->chgIData(oldp+112,(vlSelf->sha256_tb__DOT__sha_inst__DOT__s0),32);
    bufp->chgIData(oldp+113,(vlSelf->sha256_tb__DOT__sha_inst__DOT__s1),32);
    bufp->chgIData(oldp+114,(vlSelf->sha256_tb__DOT__sha_inst__DOT__S0),32);
    bufp->chgIData(oldp+115,(vlSelf->sha256_tb__DOT__sha_inst__DOT__maj),32);
    bufp->chgIData(oldp+116,(vlSelf->sha256_tb__DOT__sha_inst__DOT__hk_1),32);
    bufp->chgIData(oldp+117,(vlSelf->sha256_tb__DOT__sha_inst__DOT__S1_1),32);
    bufp->chgIData(oldp+118,(vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_1),32);
    bufp->chgIData(oldp+119,(vlSelf->sha256_tb__DOT__sha_inst__DOT__s0_1),32);
    bufp->chgIData(oldp+120,(vlSelf->sha256_tb__DOT__sha_inst__DOT__s1_1),32);
    bufp->chgIData(oldp+121,(vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_1),32);
    bufp->chgIData(oldp+122,(vlSelf->sha256_tb__DOT__sha_inst__DOT__S0_1),32);
    bufp->chgIData(oldp+123,(vlSelf->sha256_tb__DOT__sha_inst__DOT__maj_1),32);
    bufp->chgIData(oldp+124,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[0]),32);
    bufp->chgIData(oldp+125,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[1]),32);
    bufp->chgIData(oldp+126,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[2]),32);
    bufp->chgIData(oldp+127,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[3]),32);
    bufp->chgIData(oldp+128,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[4]),32);
    bufp->chgIData(oldp+129,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[5]),32);
    bufp->chgIData(oldp+130,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_1[6]),32);
    bufp->chgIData(oldp+131,(vlSelf->sha256_tb__DOT__sha_inst__DOT__hkS_2),32);
    bufp->chgIData(oldp+132,(vlSelf->sha256_tb__DOT__sha_inst__DOT__ch_2),32);
    bufp->chgIData(oldp+133,(vlSelf->sha256_tb__DOT__sha_inst__DOT__ss_2),32);
    bufp->chgIData(oldp+134,(vlSelf->sha256_tb__DOT__sha_inst__DOT__wsum_2),32);
    bufp->chgIData(oldp+135,(vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_2),32);
    bufp->chgIData(oldp+136,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[0]),32);
    bufp->chgIData(oldp+137,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[1]),32);
    bufp->chgIData(oldp+138,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[2]),32);
    bufp->chgIData(oldp+139,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[3]),32);
    bufp->chgIData(oldp+140,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[4]),32);
    bufp->chgIData(oldp+141,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[5]),32);
    bufp->chgIData(oldp+142,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_2[6]),32);
    bufp->chgIData(oldp+143,(vlSelf->sha256_tb__DOT__sha_inst__DOT__sch_3),32);
    bufp->chgIData(oldp+144,(vlSelf->sha256_tb__DOT__sha_inst__DOT__w_3),32);
    bufp->chgIData(oldp+145,(vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_3),32);
    bufp->chgIData(oldp+146,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[0]),32);
    bufp->chgIData(oldp+147,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[1]),32);
    bufp->chgIData(oldp+148,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[2]),32);
    bufp->chgIData(oldp+149,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[3]),32);
    bufp->chgIData(oldp+150,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[4]),32);
    bufp->chgIData(oldp+151,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[5]),32);
    bufp->chgIData(oldp+152,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_3[6]),32);
    bufp->chgIData(oldp+153,(vlSelf->sha256_tb__DOT__sha_inst__DOT__T1_4),32);
    bufp->chgIData(oldp+154,(vlSelf->sha256_tb__DOT__sha_inst__DOT__T2_4),32);
    bufp->chgIData(oldp+155,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[0]),32);
    bufp->chgIData(oldp+156,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[1]),32);
    bufp->chgIData(oldp+157,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[2]),32);
    bufp->chgIData(oldp+158,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[3]),32);
    bufp->chgIData(oldp+159,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[4]),32);
    bufp->chgIData(oldp+160,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[5]),32);
    bufp->chgIData(oldp+161,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_4[6]),32);
    bufp->chgIData(oldp+162,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[0]),32);
    bufp->chgIData(oldp+163,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[1]),32);
    bufp->chgIData(oldp+164,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[2]),32);
    bufp->chgIData(oldp+165,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[3]),32);
    bufp->chgIData(oldp+166,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[4]),32);
    bufp->chgIData(oldp+167,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[5]),32);
    bufp->chgIData(oldp+168,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[6]),32);
    bufp->chgIData(oldp+169,(vlSelf->sha256_tb__DOT__sha_inst__DOT__letters_5[7]),32);
    bufp->chgCData(oldp+170,(vlSelf->sha256_tb__DOT__sha_inst__DOT__ready),5);
    bufp->chgIData(oldp+171,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__x),32);
    bufp->chgIData(oldp+172,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__y),32);
    bufp->chgIData(oldp+173,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_2),32);
    bufp->chgIData(oldp+174,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_13),32);
    bufp->chgIData(oldp+175,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S0__DOT__rot_22),32);
    bufp->chgIData(oldp+176,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__x),32);
    bufp->chgIData(oldp+177,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__y),32);
    bufp->chgIData(oldp+178,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_6),32);
    bufp->chgIData(oldp+179,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_11),32);
    bufp->chgIData(oldp+180,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_S1__DOT__rot_25),32);
    bufp->chgIData(oldp+181,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__i_x),32);
    bufp->chgIData(oldp+182,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__i_y),32);
    bufp->chgIData(oldp+183,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__i_z),32);
    bufp->chgIData(oldp+184,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_ch__DOT__o),32);
    bufp->chgCData(oldp+185,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__i),6);
    bufp->chgIData(oldp+186,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_k__DOT__k),32);
    bufp->chgIData(oldp+187,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__i_x),32);
    bufp->chgIData(oldp+188,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__i_y),32);
    bufp->chgIData(oldp+189,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__i_z),32);
    bufp->chgIData(oldp+190,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_maj__DOT__o),32);
    bufp->chgIData(oldp+191,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__x),32);
    bufp->chgIData(oldp+192,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__y),32);
    bufp->chgIData(oldp+193,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_7),32);
    bufp->chgIData(oldp+194,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__rot_18),32);
    bufp->chgIData(oldp+195,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s0__DOT__shift_3),32);
    bufp->chgIData(oldp+196,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__x),32);
    bufp->chgIData(oldp+197,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__y),32);
    bufp->chgIData(oldp+198,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_17),32);
    bufp->chgIData(oldp+199,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__rot_19),32);
    bufp->chgIData(oldp+200,(vlSelf->sha256_tb__DOT__sha_inst__DOT__inst_s1__DOT__shift_10),32);
    bufp->chgIData(oldp+201,(vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+202,(vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgIData(oldp+203,(vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk3__DOT__i),32);
    bufp->chgIData(oldp+204,(vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk4__DOT__i),32);
    bufp->chgIData(oldp+205,(vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk5__DOT__i),32);
    bufp->chgIData(oldp+206,(vlSelf->sha256_tb__DOT__sha_inst__DOT__unnamedblk6__DOT__i),32);
    bufp->chgIData(oldp+207,(vlSelf->sha256_tb__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+208,(vlSelf->sha256_tb__DOT__unnamedblk2__DOT__i),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
