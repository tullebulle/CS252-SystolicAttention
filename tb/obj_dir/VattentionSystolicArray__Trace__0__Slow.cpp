// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VattentionSystolicArray__Syms.h"


VL_ATTR_COLD void VattentionSystolicArray___024root__trace_init_sub__TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray__0(VattentionSystolicArray___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VattentionSystolicArray___024root__trace_init_sub__TOP__attentionSystolicArray__DOT__V_mult_systolicArray__0(VattentionSystolicArray___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VattentionSystolicArray___024root__trace_init_sub__TOP__0(VattentionSystolicArray___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VattentionSystolicArray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VattentionSystolicArray___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1661,0,"valid_input",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("K_matrix", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1662,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1664,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1666,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1668,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1670,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1672,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1674,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1676,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1678,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1680,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1682,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1684,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1686,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1688,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1690,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1692,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("factorial_arr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declDouble(c+1694+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("Q_matrix", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1716,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1718,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1720,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1722,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1724,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1726,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1728,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1730,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1732,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1734,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1736,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1738,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1740,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1742,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1744,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1746,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("V_matrix", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1748,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1750,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1752,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1754,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1756,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1758,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1760,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1762,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1764,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1766,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1768,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1770,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1772,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1774,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1776,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1778,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declDouble(c+1780,0,"softmax_temp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->pushPrefix("Q_mult_K", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1782,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1784,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1786,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1788,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1790,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1792,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1794,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1796,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1798,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1800,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1802,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1804,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1806,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1808,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1810,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1812,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("exp_Q_mult_K", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1814,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1816,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1818,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1820,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1822,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1824,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1826,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1828,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1830,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1832,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1834,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1836,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1838,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1840,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1842,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1844,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("exp_K_mult_Q_mult_V", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1846,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1848,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1850,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1852,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1854,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1856,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1858,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1860,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1862,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1864,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1866,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1868,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1870,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1872,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1874,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1876,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("attention", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1878,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1880,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1882,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1884,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1886,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1888,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1890,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1892,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1894,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1896,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1898,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1900,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1902,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1904,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1906,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1908,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+1910,0,"valid_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("attentionSystolicArray", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1929,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1929,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1930,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1661,0,"valid_input",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("K_matrix", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1662,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1664,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1666,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1668,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1670,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1672,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1674,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1676,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1678,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1680,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1682,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1684,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1686,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1688,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1690,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1692,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("factorial_arr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declDouble(c+1694+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("Q_matrix", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1716,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1718,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1720,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1722,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1724,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1726,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1728,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1730,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1732,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1734,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1736,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1738,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1740,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1742,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1744,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1746,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("V_matrix", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1748,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1750,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1752,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1754,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1756,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1758,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1760,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1762,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1764,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1766,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1768,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1770,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1772,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1774,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1776,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1778,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declDouble(c+1780,0,"softmax_temp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->pushPrefix("Q_mult_K", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1782,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1784,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1786,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1788,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1790,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1792,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1794,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1796,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1798,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1800,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1802,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1804,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1806,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1808,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1810,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1812,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("exp_Q_mult_K", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1814,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1816,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1818,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1820,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1822,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1824,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1826,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1828,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1830,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1832,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1834,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1836,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1838,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1840,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1842,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1844,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("exp_K_mult_Q_mult_V", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1846,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1848,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1850,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1852,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1854,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1856,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1858,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1860,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1862,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1864,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1866,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1868,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1870,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1872,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1874,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1876,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("attention", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1878,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1880,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1882,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1884,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1886,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1888,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1890,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1892,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1894,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1896,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1898,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1900,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1902,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1904,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1906,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1908,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+1910,0,"valid_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1931,0,"MULT_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+490,0,"counter_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+491,0,"counter_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+492,0,"valid_result_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"doProcess_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+495,0,"weight_load_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+496,0,"weight_load_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("data_in_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declDouble(c+497+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("K_matrix_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+3,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+5,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+7,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+9,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+11,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+13,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+15,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+17,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+19,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+21,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+23,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+25,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+27,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+29,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+31,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Q_mult_K_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declDouble(c+505+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("K_mult_Q_systolicArray", VerilatedTracePrefixType::SCOPE_MODULE);
    VattentionSystolicArray___024root__trace_init_sub__TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("exp_Q_mult_K_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declDouble(c+513+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declDouble(c+521,0,"softmax_norm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->pushPrefix("Q_mult_K_result_normed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declDouble(c+194+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_in_v", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declDouble(c+523+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("weight_V_matrix", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+33,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+35,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+37,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+39,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+41,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+43,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+45,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+47,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+49,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+51,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+53,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+55,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+57,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+59,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+61,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+63,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("exp_Q_mult_K_mult_V_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declDouble(c+531+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("V_mult_systolicArray", VerilatedTracePrefixType::SCOPE_MODULE);
    VattentionSystolicArray___024root__trace_init_sub__TOP__attentionSystolicArray__DOT__V_mult_systolicArray__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("attention_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declDouble(c+539+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("exp_systolic_array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1930,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1929,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("factorial_arr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declDouble(c+1694+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declDouble(c+194+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("exp_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declDouble(c+513+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declDouble(c+521,0,"exp_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->pushPrefix("accumulated_sum_wire", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declDouble(c+547+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("row[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1911,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+202,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+557,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+559,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+561,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+563,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+565,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+204,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+206,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+208,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1913,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+210,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+567,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+569,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+571,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+573,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+575,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+212,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+214,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+216,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1915,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+218,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+577,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+579,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+581,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+583,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+585,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+220,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+222,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+224,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1917,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+226,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+587,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+589,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+591,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+593,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+595,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+228,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+230,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+232,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1919,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+234,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+597,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+599,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+601,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+603,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+605,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+236,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+238,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+240,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1921,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+242,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+607,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+609,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+611,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+613,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+615,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+244,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+246,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+248,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1923,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+250,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+617,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+619,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+621,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+623,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+625,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+252,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+254,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+256,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1925,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+258,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+627,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+629,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+631,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+633,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+635,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+260,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+262,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+264,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1927,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+266,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+637,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+639,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+641,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+643,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+645,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+268,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+270,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+272,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_acc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+647,0,"exp_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+649,0,"exp_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+651,0,"exp_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+653,0,"exp_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+655,0,"cumulative_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("row[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1911,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+274,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+657,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+659,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+661,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+663,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+665,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+276,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+278,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+280,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1913,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+282,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+667,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+669,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+671,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+673,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+675,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+284,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+286,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+288,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1915,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+290,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+677,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+679,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+681,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+683,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+685,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+292,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+294,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+296,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1917,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+298,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+687,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+689,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+691,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+693,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+695,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+300,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+302,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+304,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1919,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+306,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+697,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+699,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+701,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+703,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+705,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+308,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+310,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+312,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1921,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+314,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+707,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+709,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+711,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+713,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+715,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+316,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+318,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+320,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1923,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+322,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+717,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+719,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+721,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+723,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+725,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+324,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+326,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+328,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1925,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+330,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+727,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+729,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+731,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+733,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+735,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+332,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+334,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+336,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1927,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+338,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+737,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+739,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+741,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+743,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+745,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+340,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+342,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+344,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_acc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+747,0,"exp_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+749,0,"exp_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+751,0,"exp_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+753,0,"exp_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+755,0,"cumulative_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("row[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1911,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+346,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+757,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+759,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+761,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+763,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+765,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+348,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+350,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+352,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1913,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+354,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+767,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+769,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+771,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+773,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+775,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+356,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+358,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+360,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1915,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+362,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+777,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+779,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+781,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+783,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+785,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+364,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+366,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+368,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1917,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+370,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+787,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+789,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+791,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+793,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+795,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+372,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+374,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+376,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1919,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+378,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+797,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+799,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+801,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+803,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+805,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+380,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+382,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+384,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1921,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+386,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+807,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+809,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+811,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+813,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+815,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+388,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+390,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+392,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1923,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+394,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+817,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+819,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+821,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+823,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+825,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+396,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+398,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+400,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1925,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+402,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+827,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+829,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+831,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+833,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+835,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+404,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+406,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+408,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1927,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+410,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+837,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+839,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+841,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+843,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+845,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+412,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+414,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+416,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_acc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+847,0,"exp_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+849,0,"exp_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+851,0,"exp_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+853,0,"exp_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+855,0,"cumulative_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("row[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1911,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+418,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+857,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+859,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+861,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+863,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+865,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+420,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+422,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+424,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1913,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+426,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+867,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+869,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+871,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+873,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+875,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+428,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+430,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+432,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1915,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+434,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+877,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+879,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+881,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+883,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+885,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+436,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+438,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+440,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1917,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+442,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+887,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+889,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+891,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+893,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+895,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+444,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+446,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+448,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1919,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+450,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+897,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+899,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+901,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+903,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+905,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+452,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+454,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+456,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1921,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+458,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+907,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+909,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+911,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+913,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+915,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+460,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+462,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+464,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1923,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+466,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+917,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+919,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+921,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+923,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+925,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+468,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+470,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+472,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1925,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+474,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+927,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+929,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+931,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+933,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+935,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+476,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+478,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+480,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+1927,0,"k_factorial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+482,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+937,0,"x_pow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+939,0,"taylor_approx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+941,0,"x_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+943,0,"x_pow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+945,0,"taylor_approx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+484,0,"exp_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+486,0,"taylor_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+488,0,"taylor_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_acc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+947,0,"exp_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+949,0,"exp_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+951,0,"exp_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+953,0,"exp_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+955,0,"cumulative_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("softmax_norm_systolic_array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1929,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+521,0,"norm_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->pushPrefix("data_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declDouble(c+531+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_normed_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declDouble(c+539+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("norm_wire", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declDouble(c+957+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("dummy_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+521,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+967,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("row[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+969,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+971,0,"norm_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+973,0,"x_normed_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+975,0,"norm_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+977,0,"normed_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("row[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+979,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+981,0,"norm_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+983,0,"x_normed_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+985,0,"norm_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+987,0,"normed_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("row[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+989,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+991,0,"norm_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+993,0,"x_normed_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+995,0,"norm_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+997,0,"normed_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("row[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+999,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1001,0,"norm_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1003,0,"x_normed_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1005,0,"norm_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1007,0,"normed_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1009,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1010,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1011,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1012,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1013,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1014,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1015,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1016,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1932,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1932,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1932,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1932,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1932,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1932,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1017,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1018,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VattentionSystolicArray___024root__trace_init_sub__TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray__0(VattentionSystolicArray___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VattentionSystolicArray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VattentionSystolicArray___024root__trace_init_sub__TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1929,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1929,0,"M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("weight_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+65,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+67,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+69,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+71,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+73,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+75,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+77,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+79,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+81,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+83,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+85,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+87,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+89,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+91,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+93,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+95,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("data_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declDouble(c+1019+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("result_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declDouble(c+1027+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_wire", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1035,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1037,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1039,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1041,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1043,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1045,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1047,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1049,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1051,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1053,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1055,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1057,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1059,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1061,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1063,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1065,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1067,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1069,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1071,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1073,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("partial_sum_wire", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1075,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1077,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1079,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1081,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1083,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1085,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1087,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1089,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1091,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1093,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1095,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1097,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1099,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1101,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1103,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1105,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1107,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1109,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1111,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1113,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("row[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+97,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1115,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1117,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1119,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1121,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1123,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1125,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1127,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+99,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1129,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1131,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1133,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1135,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1137,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1139,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1141,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+101,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1143,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1145,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1147,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1149,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1151,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1153,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1155,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+103,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1157,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1159,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1161,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1163,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1165,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1167,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1169,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("row[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+105,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1171,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1173,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1175,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1177,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1179,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1181,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1183,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+107,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1185,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1187,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1189,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1191,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1193,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1195,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1197,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+109,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1199,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1201,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1203,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1205,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1207,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1209,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1211,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+111,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1213,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1215,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1217,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1219,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1221,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1223,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1225,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("row[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+113,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1227,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1229,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1231,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1233,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1235,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1237,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1239,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+115,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1241,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1243,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1245,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1247,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1249,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1251,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1253,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+117,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1255,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1257,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1259,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1261,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1263,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1265,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1267,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+119,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1269,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1271,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1273,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1275,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1277,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1279,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1281,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("row[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+121,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1283,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1285,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1287,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1289,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1291,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1293,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1295,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+123,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1297,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1299,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1301,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1303,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1305,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1307,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1309,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+125,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1311,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1313,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1315,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1317,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1319,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1321,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1323,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+127,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1325,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1327,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1329,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1331,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1333,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1335,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1337,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VattentionSystolicArray___024root__trace_init_sub__TOP__attentionSystolicArray__DOT__V_mult_systolicArray__0(VattentionSystolicArray___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VattentionSystolicArray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VattentionSystolicArray___024root__trace_init_sub__TOP__attentionSystolicArray__DOT__V_mult_systolicArray__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1929,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1929,0,"M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("weight_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+129,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+131,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+133,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+135,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+137,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+139,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+141,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+143,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+145,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+147,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+149,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+151,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+153,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+155,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+157,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+159,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("data_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declDouble(c+1339+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("result_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declDouble(c+1347+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_wire", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1355,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1357,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1359,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1361,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1363,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1365,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1367,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1369,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1371,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1373,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1375,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1377,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1379,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1381,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1383,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1385,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1387,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1389,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1391,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1393,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("partial_sum_wire", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1395,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1397,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1399,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1401,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1403,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1405,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1407,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1409,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1411,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1413,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1415,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1417,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1419,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1421,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1423,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declDouble(c+1425,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1427,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1429,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1431,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1433,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("row[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+161,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1435,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1437,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1439,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1441,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1443,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1445,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1447,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+163,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1449,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1451,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1453,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1455,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1457,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1459,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1461,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+165,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1463,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1465,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1467,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1469,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1471,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1473,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1475,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+167,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1477,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1479,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1481,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1483,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1485,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1487,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1489,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("row[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+169,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1491,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1493,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1495,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1497,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1499,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1501,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1503,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+171,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1505,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1507,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1509,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1511,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1513,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1515,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1517,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+173,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1519,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1521,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1523,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1525,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1527,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1529,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1531,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+175,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1533,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1535,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1537,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1539,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1541,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1543,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1545,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("row[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+177,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1547,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1549,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1551,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1553,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1555,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1557,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1559,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+179,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1561,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1563,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1565,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1567,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1569,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1571,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1573,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+181,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1575,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1577,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1579,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1581,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1583,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1585,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1587,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+183,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1589,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1591,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1593,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1595,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1597,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1599,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1601,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("row[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+185,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1603,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1605,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1607,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1609,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1611,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1613,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1615,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+187,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1617,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1619,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1621,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1623,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1625,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1627,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1629,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+189,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1631,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1633,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1635,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1637,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1639,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1641,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1643,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1659,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1660,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"doProcess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"weight_load_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+191,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1645,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1647,0,"partial_sum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1649,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1651,0,"partial_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1653,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1655,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+1657,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VattentionSystolicArray___024root__trace_init_top(VattentionSystolicArray___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VattentionSystolicArray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VattentionSystolicArray___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VattentionSystolicArray___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VattentionSystolicArray___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VattentionSystolicArray___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VattentionSystolicArray___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VattentionSystolicArray___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VattentionSystolicArray___024root__trace_register(VattentionSystolicArray___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VattentionSystolicArray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VattentionSystolicArray___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VattentionSystolicArray___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VattentionSystolicArray___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VattentionSystolicArray___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VattentionSystolicArray___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VattentionSystolicArray___024root__trace_const_0_sub_0(VattentionSystolicArray___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VattentionSystolicArray___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VattentionSystolicArray___024root__trace_const_0\n"); );
    // Init
    VattentionSystolicArray___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VattentionSystolicArray___024root*>(voidSelf);
    VattentionSystolicArray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VattentionSystolicArray___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VattentionSystolicArray___024root__trace_const_0_sub_0(VattentionSystolicArray___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VattentionSystolicArray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VattentionSystolicArray___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1929,(4U),32);
    bufp->fullIData(oldp+1930,(0xaU),32);
    bufp->fullIData(oldp+1931,(0x1bU),32);
    bufp->fullIData(oldp+1932,(4U),32);
}

VL_ATTR_COLD void VattentionSystolicArray___024root__trace_full_0_sub_0(VattentionSystolicArray___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VattentionSystolicArray___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VattentionSystolicArray___024root__trace_full_0\n"); );
    // Init
    VattentionSystolicArray___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VattentionSystolicArray___024root*>(voidSelf);
    VattentionSystolicArray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VattentionSystolicArray___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VattentionSystolicArray___024root__trace_full_0_sub_0(VattentionSystolicArray___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VattentionSystolicArray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VattentionSystolicArray___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullDouble(oldp+1,(vlSelfRef.attentionSystolicArray__DOT__K_matrix_in
                             [0U][0U]));
    bufp->fullDouble(oldp+3,(vlSelfRef.attentionSystolicArray__DOT__K_matrix_in
                             [0U][1U]));
    bufp->fullDouble(oldp+5,(vlSelfRef.attentionSystolicArray__DOT__K_matrix_in
                             [0U][2U]));
    bufp->fullDouble(oldp+7,(vlSelfRef.attentionSystolicArray__DOT__K_matrix_in
                             [0U][3U]));
    bufp->fullDouble(oldp+9,(vlSelfRef.attentionSystolicArray__DOT__K_matrix_in
                             [1U][0U]));
    bufp->fullDouble(oldp+11,(vlSelfRef.attentionSystolicArray__DOT__K_matrix_in
                              [1U][1U]));
    bufp->fullDouble(oldp+13,(vlSelfRef.attentionSystolicArray__DOT__K_matrix_in
                              [1U][2U]));
    bufp->fullDouble(oldp+15,(vlSelfRef.attentionSystolicArray__DOT__K_matrix_in
                              [1U][3U]));
    bufp->fullDouble(oldp+17,(vlSelfRef.attentionSystolicArray__DOT__K_matrix_in
                              [2U][0U]));
    bufp->fullDouble(oldp+19,(vlSelfRef.attentionSystolicArray__DOT__K_matrix_in
                              [2U][1U]));
    bufp->fullDouble(oldp+21,(vlSelfRef.attentionSystolicArray__DOT__K_matrix_in
                              [2U][2U]));
    bufp->fullDouble(oldp+23,(vlSelfRef.attentionSystolicArray__DOT__K_matrix_in
                              [2U][3U]));
    bufp->fullDouble(oldp+25,(vlSelfRef.attentionSystolicArray__DOT__K_matrix_in
                              [3U][0U]));
    bufp->fullDouble(oldp+27,(vlSelfRef.attentionSystolicArray__DOT__K_matrix_in
                              [3U][1U]));
    bufp->fullDouble(oldp+29,(vlSelfRef.attentionSystolicArray__DOT__K_matrix_in
                              [3U][2U]));
    bufp->fullDouble(oldp+31,(vlSelfRef.attentionSystolicArray__DOT__K_matrix_in
                              [3U][3U]));
    bufp->fullDouble(oldp+33,(vlSelfRef.attentionSystolicArray__DOT__weight_V_matrix
                              [0U][0U]));
    bufp->fullDouble(oldp+35,(vlSelfRef.attentionSystolicArray__DOT__weight_V_matrix
                              [0U][1U]));
    bufp->fullDouble(oldp+37,(vlSelfRef.attentionSystolicArray__DOT__weight_V_matrix
                              [0U][2U]));
    bufp->fullDouble(oldp+39,(vlSelfRef.attentionSystolicArray__DOT__weight_V_matrix
                              [0U][3U]));
    bufp->fullDouble(oldp+41,(vlSelfRef.attentionSystolicArray__DOT__weight_V_matrix
                              [1U][0U]));
    bufp->fullDouble(oldp+43,(vlSelfRef.attentionSystolicArray__DOT__weight_V_matrix
                              [1U][1U]));
    bufp->fullDouble(oldp+45,(vlSelfRef.attentionSystolicArray__DOT__weight_V_matrix
                              [1U][2U]));
    bufp->fullDouble(oldp+47,(vlSelfRef.attentionSystolicArray__DOT__weight_V_matrix
                              [1U][3U]));
    bufp->fullDouble(oldp+49,(vlSelfRef.attentionSystolicArray__DOT__weight_V_matrix
                              [2U][0U]));
    bufp->fullDouble(oldp+51,(vlSelfRef.attentionSystolicArray__DOT__weight_V_matrix
                              [2U][1U]));
    bufp->fullDouble(oldp+53,(vlSelfRef.attentionSystolicArray__DOT__weight_V_matrix
                              [2U][2U]));
    bufp->fullDouble(oldp+55,(vlSelfRef.attentionSystolicArray__DOT__weight_V_matrix
                              [2U][3U]));
    bufp->fullDouble(oldp+57,(vlSelfRef.attentionSystolicArray__DOT__weight_V_matrix
                              [3U][0U]));
    bufp->fullDouble(oldp+59,(vlSelfRef.attentionSystolicArray__DOT__weight_V_matrix
                              [3U][1U]));
    bufp->fullDouble(oldp+61,(vlSelfRef.attentionSystolicArray__DOT__weight_V_matrix
                              [3U][2U]));
    bufp->fullDouble(oldp+63,(vlSelfRef.attentionSystolicArray__DOT__weight_V_matrix
                              [3U][3U]));
    bufp->fullDouble(oldp+65,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                              [0U][0U]));
    bufp->fullDouble(oldp+67,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                              [0U][1U]));
    bufp->fullDouble(oldp+69,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                              [0U][2U]));
    bufp->fullDouble(oldp+71,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                              [0U][3U]));
    bufp->fullDouble(oldp+73,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                              [1U][0U]));
    bufp->fullDouble(oldp+75,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                              [1U][1U]));
    bufp->fullDouble(oldp+77,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                              [1U][2U]));
    bufp->fullDouble(oldp+79,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                              [1U][3U]));
    bufp->fullDouble(oldp+81,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                              [2U][0U]));
    bufp->fullDouble(oldp+83,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                              [2U][1U]));
    bufp->fullDouble(oldp+85,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                              [2U][2U]));
    bufp->fullDouble(oldp+87,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                              [2U][3U]));
    bufp->fullDouble(oldp+89,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                              [3U][0U]));
    bufp->fullDouble(oldp+91,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                              [3U][1U]));
    bufp->fullDouble(oldp+93,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                              [3U][2U]));
    bufp->fullDouble(oldp+95,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                              [3U][3U]));
    bufp->fullDouble(oldp+97,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                              [0U][0U]));
    bufp->fullDouble(oldp+99,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                              [0U][1U]));
    bufp->fullDouble(oldp+101,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                               [0U][2U]));
    bufp->fullDouble(oldp+103,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                               [0U][3U]));
    bufp->fullDouble(oldp+105,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                               [1U][0U]));
    bufp->fullDouble(oldp+107,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                               [1U][1U]));
    bufp->fullDouble(oldp+109,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                               [1U][2U]));
    bufp->fullDouble(oldp+111,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                               [1U][3U]));
    bufp->fullDouble(oldp+113,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                               [2U][0U]));
    bufp->fullDouble(oldp+115,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                               [2U][1U]));
    bufp->fullDouble(oldp+117,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                               [2U][2U]));
    bufp->fullDouble(oldp+119,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                               [2U][3U]));
    bufp->fullDouble(oldp+121,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                               [3U][0U]));
    bufp->fullDouble(oldp+123,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                               [3U][1U]));
    bufp->fullDouble(oldp+125,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                               [3U][2U]));
    bufp->fullDouble(oldp+127,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.weight_in
                               [3U][3U]));
    bufp->fullDouble(oldp+129,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [0U][0U]));
    bufp->fullDouble(oldp+131,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [0U][1U]));
    bufp->fullDouble(oldp+133,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [0U][2U]));
    bufp->fullDouble(oldp+135,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [0U][3U]));
    bufp->fullDouble(oldp+137,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [1U][0U]));
    bufp->fullDouble(oldp+139,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [1U][1U]));
    bufp->fullDouble(oldp+141,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [1U][2U]));
    bufp->fullDouble(oldp+143,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [1U][3U]));
    bufp->fullDouble(oldp+145,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [2U][0U]));
    bufp->fullDouble(oldp+147,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [2U][1U]));
    bufp->fullDouble(oldp+149,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [2U][2U]));
    bufp->fullDouble(oldp+151,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [2U][3U]));
    bufp->fullDouble(oldp+153,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [3U][0U]));
    bufp->fullDouble(oldp+155,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [3U][1U]));
    bufp->fullDouble(oldp+157,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [3U][2U]));
    bufp->fullDouble(oldp+159,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [3U][3U]));
    bufp->fullDouble(oldp+161,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [0U][0U]));
    bufp->fullDouble(oldp+163,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [0U][1U]));
    bufp->fullDouble(oldp+165,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [0U][2U]));
    bufp->fullDouble(oldp+167,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [0U][3U]));
    bufp->fullDouble(oldp+169,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [1U][0U]));
    bufp->fullDouble(oldp+171,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [1U][1U]));
    bufp->fullDouble(oldp+173,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [1U][2U]));
    bufp->fullDouble(oldp+175,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [1U][3U]));
    bufp->fullDouble(oldp+177,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [2U][0U]));
    bufp->fullDouble(oldp+179,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [2U][1U]));
    bufp->fullDouble(oldp+181,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [2U][2U]));
    bufp->fullDouble(oldp+183,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [2U][3U]));
    bufp->fullDouble(oldp+185,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [3U][0U]));
    bufp->fullDouble(oldp+187,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [3U][1U]));
    bufp->fullDouble(oldp+189,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [3U][2U]));
    bufp->fullDouble(oldp+191,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.weight_in
                               [3U][3U]));
    bufp->fullBit(oldp+193,(vlSelfRef.attentionSystolicArray__DOT__doProcess_d));
    bufp->fullDouble(oldp+194,(vlSelfRef.attentionSystolicArray__DOT__Q_mult_K_result_normed[0]));
    bufp->fullDouble(oldp+196,(vlSelfRef.attentionSystolicArray__DOT__Q_mult_K_result_normed[1]));
    bufp->fullDouble(oldp+198,(vlSelfRef.attentionSystolicArray__DOT__Q_mult_K_result_normed[2]));
    bufp->fullDouble(oldp+200,(vlSelfRef.attentionSystolicArray__DOT__Q_mult_K_result_normed[3]));
    bufp->fullDouble(oldp+202,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [0U][0U]));
    bufp->fullDouble(oldp+204,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+206,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+208,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+210,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [0U][1U]));
    bufp->fullDouble(oldp+212,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+214,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+216,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+218,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [0U][2U]));
    bufp->fullDouble(oldp+220,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+222,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+224,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+226,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [0U][3U]));
    bufp->fullDouble(oldp+228,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+230,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+232,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+234,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [0U][4U]));
    bufp->fullDouble(oldp+236,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+238,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+240,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+242,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [0U][5U]));
    bufp->fullDouble(oldp+244,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+246,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+248,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+250,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [0U][6U]));
    bufp->fullDouble(oldp+252,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+254,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+256,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+258,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [0U][7U]));
    bufp->fullDouble(oldp+260,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+262,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+264,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+266,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [0U][8U]));
    bufp->fullDouble(oldp+268,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__8__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+270,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__8__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+272,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__0__KET____DOT__col__BRA__8__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+274,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [1U][0U]));
    bufp->fullDouble(oldp+276,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+278,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+280,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+282,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [1U][1U]));
    bufp->fullDouble(oldp+284,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+286,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+288,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+290,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [1U][2U]));
    bufp->fullDouble(oldp+292,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+294,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+296,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+298,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [1U][3U]));
    bufp->fullDouble(oldp+300,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+302,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+304,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+306,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [1U][4U]));
    bufp->fullDouble(oldp+308,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+310,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+312,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+314,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [1U][5U]));
    bufp->fullDouble(oldp+316,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+318,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+320,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+322,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [1U][6U]));
    bufp->fullDouble(oldp+324,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+326,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+328,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+330,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [1U][7U]));
    bufp->fullDouble(oldp+332,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+334,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+336,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+338,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [1U][8U]));
    bufp->fullDouble(oldp+340,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__8__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+342,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__8__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+344,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__1__KET____DOT__col__BRA__8__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+346,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [2U][0U]));
    bufp->fullDouble(oldp+348,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+350,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+352,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+354,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [2U][1U]));
    bufp->fullDouble(oldp+356,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+358,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+360,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+362,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [2U][2U]));
    bufp->fullDouble(oldp+364,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+366,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+368,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+370,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [2U][3U]));
    bufp->fullDouble(oldp+372,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+374,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+376,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+378,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [2U][4U]));
    bufp->fullDouble(oldp+380,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+382,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+384,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+386,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [2U][5U]));
    bufp->fullDouble(oldp+388,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+390,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+392,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+394,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [2U][6U]));
    bufp->fullDouble(oldp+396,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+398,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+400,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+402,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [2U][7U]));
    bufp->fullDouble(oldp+404,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+406,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+408,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+410,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [2U][8U]));
    bufp->fullDouble(oldp+412,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__8__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+414,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__8__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+416,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__2__KET____DOT__col__BRA__8__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+418,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [3U][0U]));
    bufp->fullDouble(oldp+420,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+422,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+424,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+426,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [3U][1U]));
    bufp->fullDouble(oldp+428,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+430,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+432,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+434,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [3U][2U]));
    bufp->fullDouble(oldp+436,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+438,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+440,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+442,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [3U][3U]));
    bufp->fullDouble(oldp+444,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+446,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+448,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+450,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [3U][4U]));
    bufp->fullDouble(oldp+452,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+454,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+456,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+458,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [3U][5U]));
    bufp->fullDouble(oldp+460,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+462,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+464,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+466,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [3U][6U]));
    bufp->fullDouble(oldp+468,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+470,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+472,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+474,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [3U][7U]));
    bufp->fullDouble(oldp+476,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+478,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+480,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullDouble(oldp+482,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_wire
                               [3U][8U]));
    bufp->fullDouble(oldp+484,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__8__KET____DOT__pe__DOT__exp_term));
    bufp->fullDouble(oldp+486,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__8__KET____DOT__pe__DOT__taylor_term));
    bufp->fullDouble(oldp+488,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__row__BRA__3__KET____DOT__col__BRA__8__KET____DOT__pe__DOT__taylor_sum));
    bufp->fullIData(oldp+490,(vlSelfRef.attentionSystolicArray__DOT__counter_q),32);
    bufp->fullIData(oldp+491,(vlSelfRef.attentionSystolicArray__DOT__counter_d),32);
    bufp->fullBit(oldp+492,(vlSelfRef.attentionSystolicArray__DOT__valid_result_q));
    bufp->fullBit(oldp+493,(vlSelfRef.attentionSystolicArray__DOT__doProcess_q));
    bufp->fullBit(oldp+494,(vlSelfRef.attentionSystolicArray__DOT__weight_load_enable_q));
    bufp->fullBit(oldp+495,((1U & (~ (IData)(vlSelfRef.attentionSystolicArray__DOT__weight_load_enable_q)))));
    bufp->fullCData(oldp+496,(vlSelfRef.attentionSystolicArray__DOT__weight_load_counter),2);
    bufp->fullDouble(oldp+497,(vlSelfRef.attentionSystolicArray__DOT__data_in_array[0]));
    bufp->fullDouble(oldp+499,(vlSelfRef.attentionSystolicArray__DOT__data_in_array[1]));
    bufp->fullDouble(oldp+501,(vlSelfRef.attentionSystolicArray__DOT__data_in_array[2]));
    bufp->fullDouble(oldp+503,(vlSelfRef.attentionSystolicArray__DOT__data_in_array[3]));
    bufp->fullDouble(oldp+505,(vlSelfRef.attentionSystolicArray__DOT__Q_mult_K_result[0]));
    bufp->fullDouble(oldp+507,(vlSelfRef.attentionSystolicArray__DOT__Q_mult_K_result[1]));
    bufp->fullDouble(oldp+509,(vlSelfRef.attentionSystolicArray__DOT__Q_mult_K_result[2]));
    bufp->fullDouble(oldp+511,(vlSelfRef.attentionSystolicArray__DOT__Q_mult_K_result[3]));
    bufp->fullDouble(oldp+513,(vlSelfRef.attentionSystolicArray__DOT__exp_Q_mult_K_result[0]));
    bufp->fullDouble(oldp+515,(vlSelfRef.attentionSystolicArray__DOT__exp_Q_mult_K_result[1]));
    bufp->fullDouble(oldp+517,(vlSelfRef.attentionSystolicArray__DOT__exp_Q_mult_K_result[2]));
    bufp->fullDouble(oldp+519,(vlSelfRef.attentionSystolicArray__DOT__exp_Q_mult_K_result[3]));
    bufp->fullDouble(oldp+521,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__accumulated_sum_wire
                               [0U]));
    bufp->fullDouble(oldp+523,(vlSelfRef.attentionSystolicArray__DOT__data_in_v[0]));
    bufp->fullDouble(oldp+525,(vlSelfRef.attentionSystolicArray__DOT__data_in_v[1]));
    bufp->fullDouble(oldp+527,(vlSelfRef.attentionSystolicArray__DOT__data_in_v[2]));
    bufp->fullDouble(oldp+529,(vlSelfRef.attentionSystolicArray__DOT__data_in_v[3]));
    bufp->fullDouble(oldp+531,(vlSelfRef.attentionSystolicArray__DOT__exp_Q_mult_K_mult_V_result[0]));
    bufp->fullDouble(oldp+533,(vlSelfRef.attentionSystolicArray__DOT__exp_Q_mult_K_mult_V_result[1]));
    bufp->fullDouble(oldp+535,(vlSelfRef.attentionSystolicArray__DOT__exp_Q_mult_K_mult_V_result[2]));
    bufp->fullDouble(oldp+537,(vlSelfRef.attentionSystolicArray__DOT__exp_Q_mult_K_mult_V_result[3]));
    bufp->fullDouble(oldp+539,(vlSelfRef.attentionSystolicArray__DOT__attention_result[0]));
    bufp->fullDouble(oldp+541,(vlSelfRef.attentionSystolicArray__DOT__attention_result[1]));
    bufp->fullDouble(oldp+543,(vlSelfRef.attentionSystolicArray__DOT__attention_result[2]));
    bufp->fullDouble(oldp+545,(vlSelfRef.attentionSystolicArray__DOT__attention_result[3]));
    bufp->fullDouble(oldp+547,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__accumulated_sum_wire[0]));
    bufp->fullDouble(oldp+549,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__accumulated_sum_wire[1]));
    bufp->fullDouble(oldp+551,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__accumulated_sum_wire[2]));
    bufp->fullDouble(oldp+553,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__accumulated_sum_wire[3]));
    bufp->fullDouble(oldp+555,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__accumulated_sum_wire[4]));
    bufp->fullDouble(oldp+557,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [0U][0U]));
    bufp->fullDouble(oldp+559,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [0U][0U]));
    bufp->fullDouble(oldp+561,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+563,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+565,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+567,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [0U][1U]));
    bufp->fullDouble(oldp+569,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [0U][1U]));
    bufp->fullDouble(oldp+571,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+573,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+575,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+577,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [0U][2U]));
    bufp->fullDouble(oldp+579,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [0U][2U]));
    bufp->fullDouble(oldp+581,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+583,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+585,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+587,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [0U][3U]));
    bufp->fullDouble(oldp+589,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [0U][3U]));
    bufp->fullDouble(oldp+591,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+593,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+595,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+597,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [0U][4U]));
    bufp->fullDouble(oldp+599,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [0U][4U]));
    bufp->fullDouble(oldp+601,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+603,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+605,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+607,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [0U][5U]));
    bufp->fullDouble(oldp+609,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [0U][5U]));
    bufp->fullDouble(oldp+611,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+613,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+615,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+617,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [0U][6U]));
    bufp->fullDouble(oldp+619,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [0U][6U]));
    bufp->fullDouble(oldp+621,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+623,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+625,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+627,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [0U][7U]));
    bufp->fullDouble(oldp+629,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [0U][7U]));
    bufp->fullDouble(oldp+631,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+633,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+635,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+637,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [0U][8U]));
    bufp->fullDouble(oldp+639,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [0U][8U]));
    bufp->fullDouble(oldp+641,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__8__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+643,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__8__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+645,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__8__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+647,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [0U][9U]));
    bufp->fullDouble(oldp+649,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__accumulated_sum_wire
                               [1U]));
    bufp->fullDouble(oldp+651,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__pe_acc__exp_out));
    bufp->fullDouble(oldp+653,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__pe_acc__exp_sum_out));
    bufp->fullDouble(oldp+655,((vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                                [0U][9U] + vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__accumulated_sum_wire
                                [1U])));
    bufp->fullDouble(oldp+657,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [1U][0U]));
    bufp->fullDouble(oldp+659,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [1U][0U]));
    bufp->fullDouble(oldp+661,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+663,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+665,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+667,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [1U][1U]));
    bufp->fullDouble(oldp+669,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [1U][1U]));
    bufp->fullDouble(oldp+671,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+673,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+675,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+677,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [1U][2U]));
    bufp->fullDouble(oldp+679,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [1U][2U]));
    bufp->fullDouble(oldp+681,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+683,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+685,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+687,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [1U][3U]));
    bufp->fullDouble(oldp+689,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [1U][3U]));
    bufp->fullDouble(oldp+691,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+693,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+695,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+697,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [1U][4U]));
    bufp->fullDouble(oldp+699,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [1U][4U]));
    bufp->fullDouble(oldp+701,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+703,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+705,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+707,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [1U][5U]));
    bufp->fullDouble(oldp+709,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [1U][5U]));
    bufp->fullDouble(oldp+711,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+713,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+715,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+717,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [1U][6U]));
    bufp->fullDouble(oldp+719,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [1U][6U]));
    bufp->fullDouble(oldp+721,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+723,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+725,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+727,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [1U][7U]));
    bufp->fullDouble(oldp+729,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [1U][7U]));
    bufp->fullDouble(oldp+731,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+733,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+735,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+737,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [1U][8U]));
    bufp->fullDouble(oldp+739,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [1U][8U]));
    bufp->fullDouble(oldp+741,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__8__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+743,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__8__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+745,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__8__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+747,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [1U][9U]));
    bufp->fullDouble(oldp+749,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__accumulated_sum_wire
                               [2U]));
    bufp->fullDouble(oldp+751,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__pe_acc__exp_out));
    bufp->fullDouble(oldp+753,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__pe_acc__exp_sum_out));
    bufp->fullDouble(oldp+755,((vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                                [1U][9U] + vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__accumulated_sum_wire
                                [2U])));
    bufp->fullDouble(oldp+757,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [2U][0U]));
    bufp->fullDouble(oldp+759,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [2U][0U]));
    bufp->fullDouble(oldp+761,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+763,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+765,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+767,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [2U][1U]));
    bufp->fullDouble(oldp+769,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [2U][1U]));
    bufp->fullDouble(oldp+771,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+773,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+775,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+777,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [2U][2U]));
    bufp->fullDouble(oldp+779,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [2U][2U]));
    bufp->fullDouble(oldp+781,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+783,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+785,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+787,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [2U][3U]));
    bufp->fullDouble(oldp+789,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [2U][3U]));
    bufp->fullDouble(oldp+791,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+793,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+795,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+797,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [2U][4U]));
    bufp->fullDouble(oldp+799,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [2U][4U]));
    bufp->fullDouble(oldp+801,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+803,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+805,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+807,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [2U][5U]));
    bufp->fullDouble(oldp+809,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [2U][5U]));
    bufp->fullDouble(oldp+811,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+813,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+815,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+817,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [2U][6U]));
    bufp->fullDouble(oldp+819,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [2U][6U]));
    bufp->fullDouble(oldp+821,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+823,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+825,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+827,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [2U][7U]));
    bufp->fullDouble(oldp+829,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [2U][7U]));
    bufp->fullDouble(oldp+831,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+833,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+835,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+837,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [2U][8U]));
    bufp->fullDouble(oldp+839,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [2U][8U]));
    bufp->fullDouble(oldp+841,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__8__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+843,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__8__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+845,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__8__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+847,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [2U][9U]));
    bufp->fullDouble(oldp+849,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__accumulated_sum_wire
                               [3U]));
    bufp->fullDouble(oldp+851,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__pe_acc__exp_out));
    bufp->fullDouble(oldp+853,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__pe_acc__exp_sum_out));
    bufp->fullDouble(oldp+855,((vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                                [2U][9U] + vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__accumulated_sum_wire
                                [3U])));
    bufp->fullDouble(oldp+857,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [3U][0U]));
    bufp->fullDouble(oldp+859,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [3U][0U]));
    bufp->fullDouble(oldp+861,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+863,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+865,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+867,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [3U][1U]));
    bufp->fullDouble(oldp+869,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [3U][1U]));
    bufp->fullDouble(oldp+871,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+873,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+875,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+877,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [3U][2U]));
    bufp->fullDouble(oldp+879,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [3U][2U]));
    bufp->fullDouble(oldp+881,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+883,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+885,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+887,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [3U][3U]));
    bufp->fullDouble(oldp+889,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [3U][3U]));
    bufp->fullDouble(oldp+891,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+893,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+895,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+897,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [3U][4U]));
    bufp->fullDouble(oldp+899,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [3U][4U]));
    bufp->fullDouble(oldp+901,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+903,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+905,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+907,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [3U][5U]));
    bufp->fullDouble(oldp+909,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [3U][5U]));
    bufp->fullDouble(oldp+911,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+913,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+915,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+917,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [3U][6U]));
    bufp->fullDouble(oldp+919,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [3U][6U]));
    bufp->fullDouble(oldp+921,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+923,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+925,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+927,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [3U][7U]));
    bufp->fullDouble(oldp+929,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [3U][7U]));
    bufp->fullDouble(oldp+931,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+933,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+935,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+937,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__x_pow_wire
                               [3U][8U]));
    bufp->fullDouble(oldp+939,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [3U][8U]));
    bufp->fullDouble(oldp+941,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__8__KET____DOT__pe__x_out));
    bufp->fullDouble(oldp+943,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__8__KET____DOT__pe__x_pow_out));
    bufp->fullDouble(oldp+945,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__8__KET____DOT__pe__taylor_approx_out));
    bufp->fullDouble(oldp+947,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                               [3U][9U]));
    bufp->fullDouble(oldp+949,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__accumulated_sum_wire
                               [4U]));
    bufp->fullDouble(oldp+951,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__pe_acc__exp_out));
    bufp->fullDouble(oldp+953,(vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__pe_acc__exp_sum_out));
    bufp->fullDouble(oldp+955,((vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__taylor_approx_wire
                                [3U][9U] + vlSelfRef.attentionSystolicArray__DOT__exp_systolic_array__DOT__accumulated_sum_wire
                                [4U])));
    bufp->fullDouble(oldp+957,(vlSelfRef.attentionSystolicArray__DOT__softmax_norm_systolic_array__DOT__norm_wire[0]));
    bufp->fullDouble(oldp+959,(vlSelfRef.attentionSystolicArray__DOT__softmax_norm_systolic_array__DOT__norm_wire[1]));
    bufp->fullDouble(oldp+961,(vlSelfRef.attentionSystolicArray__DOT__softmax_norm_systolic_array__DOT__norm_wire[2]));
    bufp->fullDouble(oldp+963,(vlSelfRef.attentionSystolicArray__DOT__softmax_norm_systolic_array__DOT__norm_wire[3]));
    bufp->fullDouble(oldp+965,(vlSelfRef.attentionSystolicArray__DOT__softmax_norm_systolic_array__DOT__norm_wire[4]));
    bufp->fullDouble(oldp+967,(vlSelfRef.attentionSystolicArray__DOT__softmax_norm_systolic_array__DOT____Vcellout__dummy_pe__data_out));
    bufp->fullDouble(oldp+969,(vlSelfRef.attentionSystolicArray__DOT__exp_Q_mult_K_mult_V_result
                               [0U]));
    bufp->fullDouble(oldp+971,(vlSelfRef.attentionSystolicArray__DOT__softmax_norm_systolic_array__DOT__norm_wire
                               [1U]));
    bufp->fullDouble(oldp+973,(vlSelfRef.attentionSystolicArray__DOT__softmax_norm_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__pe__x_normed_out));
    bufp->fullDouble(oldp+975,(vlSelfRef.attentionSystolicArray__DOT__softmax_norm_systolic_array__DOT____Vcellout__row__BRA__0__KET____DOT__pe__norm_out));
    bufp->fullDouble(oldp+977,((vlSelfRef.attentionSystolicArray__DOT__exp_Q_mult_K_mult_V_result
                                [0U] / vlSelfRef.attentionSystolicArray__DOT__softmax_norm_systolic_array__DOT__norm_wire
                                [1U])));
    bufp->fullDouble(oldp+979,(vlSelfRef.attentionSystolicArray__DOT__exp_Q_mult_K_mult_V_result
                               [1U]));
    bufp->fullDouble(oldp+981,(vlSelfRef.attentionSystolicArray__DOT__softmax_norm_systolic_array__DOT__norm_wire
                               [2U]));
    bufp->fullDouble(oldp+983,(vlSelfRef.attentionSystolicArray__DOT__softmax_norm_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__pe__x_normed_out));
    bufp->fullDouble(oldp+985,(vlSelfRef.attentionSystolicArray__DOT__softmax_norm_systolic_array__DOT____Vcellout__row__BRA__1__KET____DOT__pe__norm_out));
    bufp->fullDouble(oldp+987,((vlSelfRef.attentionSystolicArray__DOT__exp_Q_mult_K_mult_V_result
                                [1U] / vlSelfRef.attentionSystolicArray__DOT__softmax_norm_systolic_array__DOT__norm_wire
                                [2U])));
    bufp->fullDouble(oldp+989,(vlSelfRef.attentionSystolicArray__DOT__exp_Q_mult_K_mult_V_result
                               [2U]));
    bufp->fullDouble(oldp+991,(vlSelfRef.attentionSystolicArray__DOT__softmax_norm_systolic_array__DOT__norm_wire
                               [3U]));
    bufp->fullDouble(oldp+993,(vlSelfRef.attentionSystolicArray__DOT__softmax_norm_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__pe__x_normed_out));
    bufp->fullDouble(oldp+995,(vlSelfRef.attentionSystolicArray__DOT__softmax_norm_systolic_array__DOT____Vcellout__row__BRA__2__KET____DOT__pe__norm_out));
    bufp->fullDouble(oldp+997,((vlSelfRef.attentionSystolicArray__DOT__exp_Q_mult_K_mult_V_result
                                [2U] / vlSelfRef.attentionSystolicArray__DOT__softmax_norm_systolic_array__DOT__norm_wire
                                [3U])));
    bufp->fullDouble(oldp+999,(vlSelfRef.attentionSystolicArray__DOT__exp_Q_mult_K_mult_V_result
                               [3U]));
    bufp->fullDouble(oldp+1001,(vlSelfRef.attentionSystolicArray__DOT__softmax_norm_systolic_array__DOT__norm_wire
                                [4U]));
    bufp->fullDouble(oldp+1003,(vlSelfRef.attentionSystolicArray__DOT__softmax_norm_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__pe__x_normed_out));
    bufp->fullDouble(oldp+1005,(vlSelfRef.attentionSystolicArray__DOT__softmax_norm_systolic_array__DOT____Vcellout__row__BRA__3__KET____DOT__pe__norm_out));
    bufp->fullDouble(oldp+1007,((vlSelfRef.attentionSystolicArray__DOT__exp_Q_mult_K_mult_V_result
                                 [3U] / vlSelfRef.attentionSystolicArray__DOT__softmax_norm_systolic_array__DOT__norm_wire
                                 [4U])));
    bufp->fullIData(oldp+1009,(vlSelfRef.attentionSystolicArray__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+1010,(vlSelfRef.attentionSystolicArray__DOT__unnamedblk11__DOT__i),32);
    bufp->fullIData(oldp+1011,(vlSelfRef.attentionSystolicArray__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j),32);
    bufp->fullIData(oldp+1012,(vlSelfRef.attentionSystolicArray__DOT__unnamedblk13__DOT__i),32);
    bufp->fullIData(oldp+1013,(vlSelfRef.attentionSystolicArray__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j),32);
    bufp->fullIData(oldp+1014,(vlSelfRef.attentionSystolicArray__DOT__unnamedblk15__DOT__i),32);
    bufp->fullIData(oldp+1015,(vlSelfRef.attentionSystolicArray__DOT__unnamedblk15__DOT__unnamedblk16__DOT__j),32);
    bufp->fullIData(oldp+1016,(vlSelfRef.attentionSystolicArray__DOT__unnamedblk2__DOT__j),32);
    bufp->fullIData(oldp+1017,(vlSelfRef.attentionSystolicArray__DOT__unnamedblk9__DOT__i),32);
    bufp->fullIData(oldp+1018,(vlSelfRef.attentionSystolicArray__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j),32);
    bufp->fullDouble(oldp+1019,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.data_in[0]));
    bufp->fullDouble(oldp+1021,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.data_in[1]));
    bufp->fullDouble(oldp+1023,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.data_in[2]));
    bufp->fullDouble(oldp+1025,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.data_in[3]));
    bufp->fullDouble(oldp+1027,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.result_out[0]));
    bufp->fullDouble(oldp+1029,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.result_out[1]));
    bufp->fullDouble(oldp+1031,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.result_out[2]));
    bufp->fullDouble(oldp+1033,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.result_out[3]));
    bufp->fullDouble(oldp+1035,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [0U][0U]));
    bufp->fullDouble(oldp+1037,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [0U][1U]));
    bufp->fullDouble(oldp+1039,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [0U][2U]));
    bufp->fullDouble(oldp+1041,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [0U][3U]));
    bufp->fullDouble(oldp+1043,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [1U][0U]));
    bufp->fullDouble(oldp+1045,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [1U][1U]));
    bufp->fullDouble(oldp+1047,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [1U][2U]));
    bufp->fullDouble(oldp+1049,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [1U][3U]));
    bufp->fullDouble(oldp+1051,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [2U][0U]));
    bufp->fullDouble(oldp+1053,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [2U][1U]));
    bufp->fullDouble(oldp+1055,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [2U][2U]));
    bufp->fullDouble(oldp+1057,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [2U][3U]));
    bufp->fullDouble(oldp+1059,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [3U][0U]));
    bufp->fullDouble(oldp+1061,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [3U][1U]));
    bufp->fullDouble(oldp+1063,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [3U][2U]));
    bufp->fullDouble(oldp+1065,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [3U][3U]));
    bufp->fullDouble(oldp+1067,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [4U][0U]));
    bufp->fullDouble(oldp+1069,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [4U][1U]));
    bufp->fullDouble(oldp+1071,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [4U][2U]));
    bufp->fullDouble(oldp+1073,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [4U][3U]));
    bufp->fullDouble(oldp+1075,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [0U][0U]));
    bufp->fullDouble(oldp+1077,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [0U][1U]));
    bufp->fullDouble(oldp+1079,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [0U][2U]));
    bufp->fullDouble(oldp+1081,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [0U][3U]));
    bufp->fullDouble(oldp+1083,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [0U][4U]));
    bufp->fullDouble(oldp+1085,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [1U][0U]));
    bufp->fullDouble(oldp+1087,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [1U][1U]));
    bufp->fullDouble(oldp+1089,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [1U][2U]));
    bufp->fullDouble(oldp+1091,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [1U][3U]));
    bufp->fullDouble(oldp+1093,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [1U][4U]));
    bufp->fullDouble(oldp+1095,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [2U][0U]));
    bufp->fullDouble(oldp+1097,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [2U][1U]));
    bufp->fullDouble(oldp+1099,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [2U][2U]));
    bufp->fullDouble(oldp+1101,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [2U][3U]));
    bufp->fullDouble(oldp+1103,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [2U][4U]));
    bufp->fullDouble(oldp+1105,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [3U][0U]));
    bufp->fullDouble(oldp+1107,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [3U][1U]));
    bufp->fullDouble(oldp+1109,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [3U][2U]));
    bufp->fullDouble(oldp+1111,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [3U][3U]));
    bufp->fullDouble(oldp+1113,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [3U][4U]));
    bufp->fullDouble(oldp+1115,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [1U][0U]));
    bufp->fullDouble(oldp+1117,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [0U][0U]));
    bufp->fullDouble(oldp+1119,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1121,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1123,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1125,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1127,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1129,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [1U][1U]));
    bufp->fullDouble(oldp+1131,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [0U][1U]));
    bufp->fullDouble(oldp+1133,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1135,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1137,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1139,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1141,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1143,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [1U][2U]));
    bufp->fullDouble(oldp+1145,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [0U][2U]));
    bufp->fullDouble(oldp+1147,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1149,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1151,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1153,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1155,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1157,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [1U][3U]));
    bufp->fullDouble(oldp+1159,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [0U][3U]));
    bufp->fullDouble(oldp+1161,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1163,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1165,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1167,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1169,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1171,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [2U][0U]));
    bufp->fullDouble(oldp+1173,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [1U][0U]));
    bufp->fullDouble(oldp+1175,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1177,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1179,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1181,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1183,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1185,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [2U][1U]));
    bufp->fullDouble(oldp+1187,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [1U][1U]));
    bufp->fullDouble(oldp+1189,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1191,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1193,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1195,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1197,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1199,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [2U][2U]));
    bufp->fullDouble(oldp+1201,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [1U][2U]));
    bufp->fullDouble(oldp+1203,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1205,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1207,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1209,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1211,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1213,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [2U][3U]));
    bufp->fullDouble(oldp+1215,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [1U][3U]));
    bufp->fullDouble(oldp+1217,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1219,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1221,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1223,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1225,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1227,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [3U][0U]));
    bufp->fullDouble(oldp+1229,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [2U][0U]));
    bufp->fullDouble(oldp+1231,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1233,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1235,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1237,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1239,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1241,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [3U][1U]));
    bufp->fullDouble(oldp+1243,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [2U][1U]));
    bufp->fullDouble(oldp+1245,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1247,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1249,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1251,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1253,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1255,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [3U][2U]));
    bufp->fullDouble(oldp+1257,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [2U][2U]));
    bufp->fullDouble(oldp+1259,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1261,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1263,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1265,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1267,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1269,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [3U][3U]));
    bufp->fullDouble(oldp+1271,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [2U][3U]));
    bufp->fullDouble(oldp+1273,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1275,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1277,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1279,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1281,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1283,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [4U][0U]));
    bufp->fullDouble(oldp+1285,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [3U][0U]));
    bufp->fullDouble(oldp+1287,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1289,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1291,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1293,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1295,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1297,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [4U][1U]));
    bufp->fullDouble(oldp+1299,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [3U][1U]));
    bufp->fullDouble(oldp+1301,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1303,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1305,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1307,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1309,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1311,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [4U][2U]));
    bufp->fullDouble(oldp+1313,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [3U][2U]));
    bufp->fullDouble(oldp+1315,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1317,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1319,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1321,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1323,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1325,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__data_wire
                                [4U][3U]));
    bufp->fullDouble(oldp+1327,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__partial_sum_wire
                                [3U][3U]));
    bufp->fullDouble(oldp+1329,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1331,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1333,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1335,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1337,(vlSymsp->TOP__attentionSystolicArray__DOT__K_mult_Q_systolicArray.__PVT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1339,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.data_in[0]));
    bufp->fullDouble(oldp+1341,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.data_in[1]));
    bufp->fullDouble(oldp+1343,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.data_in[2]));
    bufp->fullDouble(oldp+1345,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.data_in[3]));
    bufp->fullDouble(oldp+1347,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.result_out[0]));
    bufp->fullDouble(oldp+1349,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.result_out[1]));
    bufp->fullDouble(oldp+1351,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.result_out[2]));
    bufp->fullDouble(oldp+1353,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.result_out[3]));
    bufp->fullDouble(oldp+1355,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [0U][0U]));
    bufp->fullDouble(oldp+1357,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [0U][1U]));
    bufp->fullDouble(oldp+1359,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [0U][2U]));
    bufp->fullDouble(oldp+1361,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [0U][3U]));
    bufp->fullDouble(oldp+1363,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [1U][0U]));
    bufp->fullDouble(oldp+1365,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [1U][1U]));
    bufp->fullDouble(oldp+1367,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [1U][2U]));
    bufp->fullDouble(oldp+1369,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [1U][3U]));
    bufp->fullDouble(oldp+1371,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [2U][0U]));
    bufp->fullDouble(oldp+1373,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [2U][1U]));
    bufp->fullDouble(oldp+1375,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [2U][2U]));
    bufp->fullDouble(oldp+1377,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [2U][3U]));
    bufp->fullDouble(oldp+1379,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [3U][0U]));
    bufp->fullDouble(oldp+1381,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [3U][1U]));
    bufp->fullDouble(oldp+1383,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [3U][2U]));
    bufp->fullDouble(oldp+1385,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [3U][3U]));
    bufp->fullDouble(oldp+1387,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [4U][0U]));
    bufp->fullDouble(oldp+1389,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [4U][1U]));
    bufp->fullDouble(oldp+1391,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [4U][2U]));
    bufp->fullDouble(oldp+1393,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [4U][3U]));
    bufp->fullDouble(oldp+1395,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [0U][0U]));
    bufp->fullDouble(oldp+1397,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [0U][1U]));
    bufp->fullDouble(oldp+1399,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [0U][2U]));
    bufp->fullDouble(oldp+1401,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [0U][3U]));
    bufp->fullDouble(oldp+1403,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [0U][4U]));
    bufp->fullDouble(oldp+1405,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [1U][0U]));
    bufp->fullDouble(oldp+1407,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [1U][1U]));
    bufp->fullDouble(oldp+1409,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [1U][2U]));
    bufp->fullDouble(oldp+1411,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [1U][3U]));
    bufp->fullDouble(oldp+1413,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [1U][4U]));
    bufp->fullDouble(oldp+1415,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [2U][0U]));
    bufp->fullDouble(oldp+1417,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [2U][1U]));
    bufp->fullDouble(oldp+1419,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [2U][2U]));
    bufp->fullDouble(oldp+1421,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [2U][3U]));
    bufp->fullDouble(oldp+1423,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [2U][4U]));
    bufp->fullDouble(oldp+1425,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [3U][0U]));
    bufp->fullDouble(oldp+1427,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [3U][1U]));
    bufp->fullDouble(oldp+1429,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [3U][2U]));
    bufp->fullDouble(oldp+1431,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [3U][3U]));
    bufp->fullDouble(oldp+1433,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [3U][4U]));
    bufp->fullDouble(oldp+1435,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [1U][0U]));
    bufp->fullDouble(oldp+1437,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [0U][0U]));
    bufp->fullDouble(oldp+1439,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1441,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1443,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1445,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1447,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1449,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [1U][1U]));
    bufp->fullDouble(oldp+1451,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [0U][1U]));
    bufp->fullDouble(oldp+1453,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1455,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1457,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1459,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1461,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1463,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [1U][2U]));
    bufp->fullDouble(oldp+1465,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [0U][2U]));
    bufp->fullDouble(oldp+1467,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1469,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1471,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1473,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1475,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1477,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [1U][3U]));
    bufp->fullDouble(oldp+1479,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [0U][3U]));
    bufp->fullDouble(oldp+1481,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1483,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1485,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1487,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1489,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1491,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [2U][0U]));
    bufp->fullDouble(oldp+1493,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [1U][0U]));
    bufp->fullDouble(oldp+1495,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1497,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1499,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1501,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1503,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1505,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [2U][1U]));
    bufp->fullDouble(oldp+1507,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [1U][1U]));
    bufp->fullDouble(oldp+1509,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1511,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1513,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1515,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1517,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1519,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [2U][2U]));
    bufp->fullDouble(oldp+1521,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [1U][2U]));
    bufp->fullDouble(oldp+1523,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1525,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1527,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1529,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1531,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1533,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [2U][3U]));
    bufp->fullDouble(oldp+1535,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [1U][3U]));
    bufp->fullDouble(oldp+1537,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1539,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1541,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1543,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1545,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1547,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [3U][0U]));
    bufp->fullDouble(oldp+1549,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [2U][0U]));
    bufp->fullDouble(oldp+1551,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1553,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1555,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1557,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1559,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1561,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [3U][1U]));
    bufp->fullDouble(oldp+1563,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [2U][1U]));
    bufp->fullDouble(oldp+1565,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1567,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1569,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1571,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1573,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1575,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [3U][2U]));
    bufp->fullDouble(oldp+1577,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [2U][2U]));
    bufp->fullDouble(oldp+1579,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1581,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1583,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1585,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1587,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1589,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [3U][3U]));
    bufp->fullDouble(oldp+1591,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [2U][3U]));
    bufp->fullDouble(oldp+1593,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1595,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1597,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1599,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1601,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1603,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [4U][0U]));
    bufp->fullDouble(oldp+1605,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [3U][0U]));
    bufp->fullDouble(oldp+1607,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1609,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1611,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1613,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1615,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1617,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [4U][1U]));
    bufp->fullDouble(oldp+1619,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [3U][1U]));
    bufp->fullDouble(oldp+1621,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1623,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1625,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1627,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1629,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1631,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [4U][2U]));
    bufp->fullDouble(oldp+1633,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [3U][2U]));
    bufp->fullDouble(oldp+1635,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1637,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1639,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1641,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1643,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__DOT__add_result));
    bufp->fullDouble(oldp+1645,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__data_wire
                                [4U][3U]));
    bufp->fullDouble(oldp+1647,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__partial_sum_wire
                                [3U][3U]));
    bufp->fullDouble(oldp+1649,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__data_out));
    bufp->fullDouble(oldp+1651,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__partial_sum_out));
    bufp->fullDouble(oldp+1653,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__weight));
    bufp->fullDouble(oldp+1655,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__mul_result));
    bufp->fullDouble(oldp+1657,(vlSymsp->TOP__attentionSystolicArray__DOT__V_mult_systolicArray.__PVT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__DOT__add_result));
    bufp->fullBit(oldp+1659,(vlSelfRef.clk));
    bufp->fullBit(oldp+1660,(vlSelfRef.reset));
    bufp->fullBit(oldp+1661,(vlSelfRef.valid_input));
    bufp->fullDouble(oldp+1662,(vlSelfRef.K_matrix[0U]
                                [0U]));
    bufp->fullDouble(oldp+1664,(vlSelfRef.K_matrix[0U]
                                [1U]));
    bufp->fullDouble(oldp+1666,(vlSelfRef.K_matrix[0U]
                                [2U]));
    bufp->fullDouble(oldp+1668,(vlSelfRef.K_matrix[0U]
                                [3U]));
    bufp->fullDouble(oldp+1670,(vlSelfRef.K_matrix[1U]
                                [0U]));
    bufp->fullDouble(oldp+1672,(vlSelfRef.K_matrix[1U]
                                [1U]));
    bufp->fullDouble(oldp+1674,(vlSelfRef.K_matrix[1U]
                                [2U]));
    bufp->fullDouble(oldp+1676,(vlSelfRef.K_matrix[1U]
                                [3U]));
    bufp->fullDouble(oldp+1678,(vlSelfRef.K_matrix[2U]
                                [0U]));
    bufp->fullDouble(oldp+1680,(vlSelfRef.K_matrix[2U]
                                [1U]));
    bufp->fullDouble(oldp+1682,(vlSelfRef.K_matrix[2U]
                                [2U]));
    bufp->fullDouble(oldp+1684,(vlSelfRef.K_matrix[2U]
                                [3U]));
    bufp->fullDouble(oldp+1686,(vlSelfRef.K_matrix[3U]
                                [0U]));
    bufp->fullDouble(oldp+1688,(vlSelfRef.K_matrix[3U]
                                [1U]));
    bufp->fullDouble(oldp+1690,(vlSelfRef.K_matrix[3U]
                                [2U]));
    bufp->fullDouble(oldp+1692,(vlSelfRef.K_matrix[3U]
                                [3U]));
    bufp->fullDouble(oldp+1694,(vlSelfRef.factorial_arr[0]));
    bufp->fullDouble(oldp+1696,(vlSelfRef.factorial_arr[1]));
    bufp->fullDouble(oldp+1698,(vlSelfRef.factorial_arr[2]));
    bufp->fullDouble(oldp+1700,(vlSelfRef.factorial_arr[3]));
    bufp->fullDouble(oldp+1702,(vlSelfRef.factorial_arr[4]));
    bufp->fullDouble(oldp+1704,(vlSelfRef.factorial_arr[5]));
    bufp->fullDouble(oldp+1706,(vlSelfRef.factorial_arr[6]));
    bufp->fullDouble(oldp+1708,(vlSelfRef.factorial_arr[7]));
    bufp->fullDouble(oldp+1710,(vlSelfRef.factorial_arr[8]));
    bufp->fullDouble(oldp+1712,(vlSelfRef.factorial_arr[9]));
    bufp->fullDouble(oldp+1714,(vlSelfRef.factorial_arr[10]));
    bufp->fullDouble(oldp+1716,(vlSelfRef.Q_matrix[0U]
                                [0U]));
    bufp->fullDouble(oldp+1718,(vlSelfRef.Q_matrix[0U]
                                [1U]));
    bufp->fullDouble(oldp+1720,(vlSelfRef.Q_matrix[0U]
                                [2U]));
    bufp->fullDouble(oldp+1722,(vlSelfRef.Q_matrix[0U]
                                [3U]));
    bufp->fullDouble(oldp+1724,(vlSelfRef.Q_matrix[1U]
                                [0U]));
    bufp->fullDouble(oldp+1726,(vlSelfRef.Q_matrix[1U]
                                [1U]));
    bufp->fullDouble(oldp+1728,(vlSelfRef.Q_matrix[1U]
                                [2U]));
    bufp->fullDouble(oldp+1730,(vlSelfRef.Q_matrix[1U]
                                [3U]));
    bufp->fullDouble(oldp+1732,(vlSelfRef.Q_matrix[2U]
                                [0U]));
    bufp->fullDouble(oldp+1734,(vlSelfRef.Q_matrix[2U]
                                [1U]));
    bufp->fullDouble(oldp+1736,(vlSelfRef.Q_matrix[2U]
                                [2U]));
    bufp->fullDouble(oldp+1738,(vlSelfRef.Q_matrix[2U]
                                [3U]));
    bufp->fullDouble(oldp+1740,(vlSelfRef.Q_matrix[3U]
                                [0U]));
    bufp->fullDouble(oldp+1742,(vlSelfRef.Q_matrix[3U]
                                [1U]));
    bufp->fullDouble(oldp+1744,(vlSelfRef.Q_matrix[3U]
                                [2U]));
    bufp->fullDouble(oldp+1746,(vlSelfRef.Q_matrix[3U]
                                [3U]));
    bufp->fullDouble(oldp+1748,(vlSelfRef.V_matrix[0U]
                                [0U]));
    bufp->fullDouble(oldp+1750,(vlSelfRef.V_matrix[0U]
                                [1U]));
    bufp->fullDouble(oldp+1752,(vlSelfRef.V_matrix[0U]
                                [2U]));
    bufp->fullDouble(oldp+1754,(vlSelfRef.V_matrix[0U]
                                [3U]));
    bufp->fullDouble(oldp+1756,(vlSelfRef.V_matrix[1U]
                                [0U]));
    bufp->fullDouble(oldp+1758,(vlSelfRef.V_matrix[1U]
                                [1U]));
    bufp->fullDouble(oldp+1760,(vlSelfRef.V_matrix[1U]
                                [2U]));
    bufp->fullDouble(oldp+1762,(vlSelfRef.V_matrix[1U]
                                [3U]));
    bufp->fullDouble(oldp+1764,(vlSelfRef.V_matrix[2U]
                                [0U]));
    bufp->fullDouble(oldp+1766,(vlSelfRef.V_matrix[2U]
                                [1U]));
    bufp->fullDouble(oldp+1768,(vlSelfRef.V_matrix[2U]
                                [2U]));
    bufp->fullDouble(oldp+1770,(vlSelfRef.V_matrix[2U]
                                [3U]));
    bufp->fullDouble(oldp+1772,(vlSelfRef.V_matrix[3U]
                                [0U]));
    bufp->fullDouble(oldp+1774,(vlSelfRef.V_matrix[3U]
                                [1U]));
    bufp->fullDouble(oldp+1776,(vlSelfRef.V_matrix[3U]
                                [2U]));
    bufp->fullDouble(oldp+1778,(vlSelfRef.V_matrix[3U]
                                [3U]));
    bufp->fullDouble(oldp+1780,(vlSelfRef.softmax_temp));
    bufp->fullDouble(oldp+1782,(vlSelfRef.Q_mult_K[0U]
                                [0U]));
    bufp->fullDouble(oldp+1784,(vlSelfRef.Q_mult_K[0U]
                                [1U]));
    bufp->fullDouble(oldp+1786,(vlSelfRef.Q_mult_K[0U]
                                [2U]));
    bufp->fullDouble(oldp+1788,(vlSelfRef.Q_mult_K[0U]
                                [3U]));
    bufp->fullDouble(oldp+1790,(vlSelfRef.Q_mult_K[1U]
                                [0U]));
    bufp->fullDouble(oldp+1792,(vlSelfRef.Q_mult_K[1U]
                                [1U]));
    bufp->fullDouble(oldp+1794,(vlSelfRef.Q_mult_K[1U]
                                [2U]));
    bufp->fullDouble(oldp+1796,(vlSelfRef.Q_mult_K[1U]
                                [3U]));
    bufp->fullDouble(oldp+1798,(vlSelfRef.Q_mult_K[2U]
                                [0U]));
    bufp->fullDouble(oldp+1800,(vlSelfRef.Q_mult_K[2U]
                                [1U]));
    bufp->fullDouble(oldp+1802,(vlSelfRef.Q_mult_K[2U]
                                [2U]));
    bufp->fullDouble(oldp+1804,(vlSelfRef.Q_mult_K[2U]
                                [3U]));
    bufp->fullDouble(oldp+1806,(vlSelfRef.Q_mult_K[3U]
                                [0U]));
    bufp->fullDouble(oldp+1808,(vlSelfRef.Q_mult_K[3U]
                                [1U]));
    bufp->fullDouble(oldp+1810,(vlSelfRef.Q_mult_K[3U]
                                [2U]));
    bufp->fullDouble(oldp+1812,(vlSelfRef.Q_mult_K[3U]
                                [3U]));
    bufp->fullDouble(oldp+1814,(vlSelfRef.exp_Q_mult_K
                                [0U][0U]));
    bufp->fullDouble(oldp+1816,(vlSelfRef.exp_Q_mult_K
                                [0U][1U]));
    bufp->fullDouble(oldp+1818,(vlSelfRef.exp_Q_mult_K
                                [0U][2U]));
    bufp->fullDouble(oldp+1820,(vlSelfRef.exp_Q_mult_K
                                [0U][3U]));
    bufp->fullDouble(oldp+1822,(vlSelfRef.exp_Q_mult_K
                                [1U][0U]));
    bufp->fullDouble(oldp+1824,(vlSelfRef.exp_Q_mult_K
                                [1U][1U]));
    bufp->fullDouble(oldp+1826,(vlSelfRef.exp_Q_mult_K
                                [1U][2U]));
    bufp->fullDouble(oldp+1828,(vlSelfRef.exp_Q_mult_K
                                [1U][3U]));
    bufp->fullDouble(oldp+1830,(vlSelfRef.exp_Q_mult_K
                                [2U][0U]));
    bufp->fullDouble(oldp+1832,(vlSelfRef.exp_Q_mult_K
                                [2U][1U]));
    bufp->fullDouble(oldp+1834,(vlSelfRef.exp_Q_mult_K
                                [2U][2U]));
    bufp->fullDouble(oldp+1836,(vlSelfRef.exp_Q_mult_K
                                [2U][3U]));
    bufp->fullDouble(oldp+1838,(vlSelfRef.exp_Q_mult_K
                                [3U][0U]));
    bufp->fullDouble(oldp+1840,(vlSelfRef.exp_Q_mult_K
                                [3U][1U]));
    bufp->fullDouble(oldp+1842,(vlSelfRef.exp_Q_mult_K
                                [3U][2U]));
    bufp->fullDouble(oldp+1844,(vlSelfRef.exp_Q_mult_K
                                [3U][3U]));
    bufp->fullDouble(oldp+1846,(vlSelfRef.exp_K_mult_Q_mult_V
                                [0U][0U]));
    bufp->fullDouble(oldp+1848,(vlSelfRef.exp_K_mult_Q_mult_V
                                [0U][1U]));
    bufp->fullDouble(oldp+1850,(vlSelfRef.exp_K_mult_Q_mult_V
                                [0U][2U]));
    bufp->fullDouble(oldp+1852,(vlSelfRef.exp_K_mult_Q_mult_V
                                [0U][3U]));
    bufp->fullDouble(oldp+1854,(vlSelfRef.exp_K_mult_Q_mult_V
                                [1U][0U]));
    bufp->fullDouble(oldp+1856,(vlSelfRef.exp_K_mult_Q_mult_V
                                [1U][1U]));
    bufp->fullDouble(oldp+1858,(vlSelfRef.exp_K_mult_Q_mult_V
                                [1U][2U]));
    bufp->fullDouble(oldp+1860,(vlSelfRef.exp_K_mult_Q_mult_V
                                [1U][3U]));
    bufp->fullDouble(oldp+1862,(vlSelfRef.exp_K_mult_Q_mult_V
                                [2U][0U]));
    bufp->fullDouble(oldp+1864,(vlSelfRef.exp_K_mult_Q_mult_V
                                [2U][1U]));
    bufp->fullDouble(oldp+1866,(vlSelfRef.exp_K_mult_Q_mult_V
                                [2U][2U]));
    bufp->fullDouble(oldp+1868,(vlSelfRef.exp_K_mult_Q_mult_V
                                [2U][3U]));
    bufp->fullDouble(oldp+1870,(vlSelfRef.exp_K_mult_Q_mult_V
                                [3U][0U]));
    bufp->fullDouble(oldp+1872,(vlSelfRef.exp_K_mult_Q_mult_V
                                [3U][1U]));
    bufp->fullDouble(oldp+1874,(vlSelfRef.exp_K_mult_Q_mult_V
                                [3U][2U]));
    bufp->fullDouble(oldp+1876,(vlSelfRef.exp_K_mult_Q_mult_V
                                [3U][3U]));
    bufp->fullDouble(oldp+1878,(vlSelfRef.attention
                                [0U][0U]));
    bufp->fullDouble(oldp+1880,(vlSelfRef.attention
                                [0U][1U]));
    bufp->fullDouble(oldp+1882,(vlSelfRef.attention
                                [0U][2U]));
    bufp->fullDouble(oldp+1884,(vlSelfRef.attention
                                [0U][3U]));
    bufp->fullDouble(oldp+1886,(vlSelfRef.attention
                                [1U][0U]));
    bufp->fullDouble(oldp+1888,(vlSelfRef.attention
                                [1U][1U]));
    bufp->fullDouble(oldp+1890,(vlSelfRef.attention
                                [1U][2U]));
    bufp->fullDouble(oldp+1892,(vlSelfRef.attention
                                [1U][3U]));
    bufp->fullDouble(oldp+1894,(vlSelfRef.attention
                                [2U][0U]));
    bufp->fullDouble(oldp+1896,(vlSelfRef.attention
                                [2U][1U]));
    bufp->fullDouble(oldp+1898,(vlSelfRef.attention
                                [2U][2U]));
    bufp->fullDouble(oldp+1900,(vlSelfRef.attention
                                [2U][3U]));
    bufp->fullDouble(oldp+1902,(vlSelfRef.attention
                                [3U][0U]));
    bufp->fullDouble(oldp+1904,(vlSelfRef.attention
                                [3U][1U]));
    bufp->fullDouble(oldp+1906,(vlSelfRef.attention
                                [3U][2U]));
    bufp->fullDouble(oldp+1908,(vlSelfRef.attention
                                [3U][3U]));
    bufp->fullBit(oldp+1910,(vlSelfRef.valid_result));
    bufp->fullDouble(oldp+1911,(vlSelfRef.factorial_arr
                                [1U]));
    bufp->fullDouble(oldp+1913,(vlSelfRef.factorial_arr
                                [2U]));
    bufp->fullDouble(oldp+1915,(vlSelfRef.factorial_arr
                                [3U]));
    bufp->fullDouble(oldp+1917,(vlSelfRef.factorial_arr
                                [4U]));
    bufp->fullDouble(oldp+1919,(vlSelfRef.factorial_arr
                                [5U]));
    bufp->fullDouble(oldp+1921,(vlSelfRef.factorial_arr
                                [6U]));
    bufp->fullDouble(oldp+1923,(vlSelfRef.factorial_arr
                                [7U]));
    bufp->fullDouble(oldp+1925,(vlSelfRef.factorial_arr
                                [8U]));
    bufp->fullDouble(oldp+1927,(vlSelfRef.factorial_arr
                                [9U]));
}
