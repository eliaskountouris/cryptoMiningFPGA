// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
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
                        }
                        if ((1U & (~ (IData)(vlSelf->sha256_tb__DOT__counter)))) {
                            vlSymsp->__Vcoverage[3320].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
            }
        }
    }
    vlSelf->sha256_tb__DOT__ready = vlSelf->ready;
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->sha256_tb__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->rst) ^ (IData)(vlSelf->sha256_tb__DOT____Vtogcov__rst))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__rst = vlSelf->rst;
    }
    if (((IData)(vlSelf->ready) ^ (IData)(vlSelf->sha256_tb__DOT____Vtogcov__ready))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__ready = vlSelf->ready;
    }
    if (((IData)(vlSelf->sha256_tb__DOT__valid_r) ^ (IData)(vlSelf->sha256_tb__DOT____Vtogcov__valid_r))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->sha256_tb__DOT____Vtogcov__valid_r 
            = vlSelf->sha256_tb__DOT__valid_r;
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
    vlSelf->sha256_tb__DOT__clk = vlSelf->clk;
    vlSelf->sha256_tb__DOT__rst = vlSelf->rst;
    vlSelf->sha256_tb__DOT__sha_inst__DOT__i_counter 
        = vlSelf->sha256_tb__DOT__counter;
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
    vlSelf->sha256_tb__DOT__rdy = ((IData)(vlSelf->ready) 
                                   | (IData)(vlSelf->sha256_tb__DOT__valid_r));
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
    vlSelf->sha256_tb__DOT__sha_inst__DOT__o_w_valid 
        = (1U & ((IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT__ready) 
                 >> 2U));
    vlSelf->sha256_tb__DOT__i_w[0xfU] = vlSelf->i_w
        [0xfU];
    vlSelf->sha256_tb__DOT__i_w[0xeU] = vlSelf->i_w
        [0xeU];
    vlSelf->sha256_tb__DOT__i_w[0xdU] = vlSelf->i_w
        [0xdU];
    vlSelf->sha256_tb__DOT__i_w[0xcU] = vlSelf->i_w
        [0xcU];
    vlSelf->sha256_tb__DOT__i_w[0xbU] = vlSelf->i_w
        [0xbU];
    vlSelf->sha256_tb__DOT__i_w[0xaU] = vlSelf->i_w
        [0xaU];
    vlSelf->sha256_tb__DOT__i_w[9U] = vlSelf->i_w[9U];
    vlSelf->sha256_tb__DOT__i_w[8U] = vlSelf->i_w[8U];
    vlSelf->sha256_tb__DOT__i_w[7U] = vlSelf->i_w[7U];
    vlSelf->sha256_tb__DOT__i_w[6U] = vlSelf->i_w[6U];
    vlSelf->sha256_tb__DOT__i_w[5U] = vlSelf->i_w[5U];
    vlSelf->sha256_tb__DOT__i_w[4U] = vlSelf->i_w[4U];
    vlSelf->sha256_tb__DOT__i_w[3U] = vlSelf->i_w[3U];
    vlSelf->sha256_tb__DOT__i_w[2U] = vlSelf->i_w[2U];
    vlSelf->sha256_tb__DOT__i_w[1U] = vlSelf->i_w[1U];
    vlSelf->sha256_tb__DOT__i_w[0U] = vlSelf->i_w[0U];
    vlSelf->sha256_tb__DOT__sha_inst__DOT__o_letters_valid 
        = (1U & ((IData)(vlSelf->sha256_tb__DOT__sha_inst__DOT__ready) 
                 >> 4U));
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
}
