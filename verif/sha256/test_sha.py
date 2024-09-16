import cocotb
from cocotb.triggers import RisingEdge, FallingEdge, Timer
from cocotb.clock import Clock

async def create_clock(dut):
    c = Clock(dut.clk, 10, "ns")
    await cocotb.start(c.start()) 

@cocotb.test()
async def test_basic(dut):
    await create_clock(dut)
   
    # Hex message of 616263
    l = [1633837952, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24]
    dut.i_w.value = l[::-1]
    await Timer(2, units="ns") 
    dut.rst.value = 1;
    await RisingEdge(dut.clk) 
    dut.rst.value = 0;
    await Timer(2, units="ns") 
    dut.ready.value = 1
    await RisingEdge(dut.clk) 
    dut.ready.value = 0

    while (dut.o_valid.value != 1):
        await RisingEdge(dut.clk)
    assert dut.out.value == [4060091821, 3021012833, 2518121116, 2953011619, 1571693091, 1094795486, 2399260650, 3128432319]
