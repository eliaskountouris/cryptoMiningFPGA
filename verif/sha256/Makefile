# Makefile

# defaults
SIM ?= verilator 
EXTRA_ARGS += --coverage
EXTRA_ARGS += --trace --trace-structs
TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES += $(PWD)/sha256_tb.sv
VERILOG_SOURCES += $(PWD)/sha256.sv
VERILOG_SOURCES += $(PWD)/funcs/*.sv

# TOPLEVEL is the name of the toplevel module in your Verilog or VHDL file
TOPLEVEL = sha256_tb

# MODULE is the basename of the Python test file
MODULE = test_sha

# include cocotb's make rules to take care of the simulator setup
include $(shell cocotb-config --makefiles)/Makefile.sim

clean::
	rm -rf __pycache__
	rm -rf results.xml 
	rm -rf coverage.dat 
