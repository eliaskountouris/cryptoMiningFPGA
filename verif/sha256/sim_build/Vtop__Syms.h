// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // COVERAGE
    std::atomic<uint32_t> __Vcoverage[4162];

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_sha256_tb;
    VerilatedScope __Vscope_sha256_tb__sha_inst;
    VerilatedScope __Vscope_sha256_tb__sha_inst__inst_S0;
    VerilatedScope __Vscope_sha256_tb__sha_inst__inst_S1;
    VerilatedScope __Vscope_sha256_tb__sha_inst__inst_ch;
    VerilatedScope __Vscope_sha256_tb__sha_inst__inst_k;
    VerilatedScope __Vscope_sha256_tb__sha_inst__inst_maj;
    VerilatedScope __Vscope_sha256_tb__sha_inst__inst_s0;
    VerilatedScope __Vscope_sha256_tb__sha_inst__inst_s1;
    VerilatedScope __Vscope_sha256_tb__sha_inst__unnamedblk1;
    VerilatedScope __Vscope_sha256_tb__sha_inst__unnamedblk2;
    VerilatedScope __Vscope_sha256_tb__sha_inst__unnamedblk3;
    VerilatedScope __Vscope_sha256_tb__sha_inst__unnamedblk4;
    VerilatedScope __Vscope_sha256_tb__sha_inst__unnamedblk5;
    VerilatedScope __Vscope_sha256_tb__sha_inst__unnamedblk6;
    VerilatedScope __Vscope_sha256_tb__unnamedblk1;
    VerilatedScope __Vscope_sha256_tb__unnamedblk2;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
