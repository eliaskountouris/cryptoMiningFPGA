import cocotb
from cocotb.triggers import RisingEdge, FallingEdge, Timer
from cocotb.clock import Clock

async def create_clock(dut):
    c = Clock(dut.clk, 10, "ns")
    await cocotb.start(c.start()) 

@cocotb.test()
async def test(dut):
    await create_clock(dut)
    
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
