// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.1
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _sum_io_HH_
#define _sum_io_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "sum_io_dmul_64ns_bkb.h"
#include "sum_io_sitodp_32scud.h"
#include "sum_io_empty.h"
#include "sum_io_empty_6.h"

namespace ap_rtl {

struct sum_io : public sc_module {
    // Port declarations 7
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<64> > ap_return;
    sc_signal< sc_logic > ap_var_for_const3;
    sc_signal< sc_lv<4> > ap_var_for_const0;
    sc_signal< sc_lv<6> > ap_var_for_const1;
    sc_signal< sc_lv<64> > ap_var_for_const2;


    // Module declarations
    sum_io(sc_module_name name);
    SC_HAS_PROCESS(sum_io);

    ~sum_io();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    sum_io_empty* empty_U;
    sum_io_empty_6* empty_6_U;
    sum_io_dmul_64ns_bkb<1,9,64,64,64>* sum_io_dmul_64ns_bkb_U1;
    sum_io_sitodp_32scud<1,6,32,64>* sum_io_sitodp_32scud_U2;
    sc_signal< sc_lv<21> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<15> > i_1_fu_163_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<15> > iterator_1_fu_181_p2;
    sc_signal< sc_lv<15> > iterator_1_reg_369;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > exitcond_fu_175_p2;
    sc_signal< sc_lv<7> > tmp_3_fu_201_p2;
    sc_signal< sc_lv<7> > tmp_3_reg_384;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<64> > grp_fu_154_p1;
    sc_signal< sc_lv<64> > tmp_4_reg_394;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<64> > grp_fu_149_p2;
    sc_signal< sc_lv<64> > x_assign_reg_399;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<64> > p_Val2_s_fu_350_p3;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_lv<15> > empty_address0;
    sc_signal< sc_logic > empty_ce0;
    sc_signal< sc_logic > empty_we0;
    sc_signal< sc_lv<4> > empty_q0;
    sc_signal< sc_lv<15> > empty_6_address0;
    sc_signal< sc_logic > empty_6_ce0;
    sc_signal< sc_logic > empty_6_we0;
    sc_signal< sc_lv<6> > empty_6_q0;
    sc_signal< sc_lv<15> > i_reg_116;
    sc_signal< sc_lv<1> > exitcond2_fu_157_p2;
    sc_signal< sc_lv<15> > iterator_reg_127;
    sc_signal< sc_lv<64> > sum_reg_138;
    sc_signal< sc_lv<64> > tmp_fu_169_p1;
    sc_signal< sc_lv<64> > tmp_2_fu_187_p1;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<32> > grp_fu_154_p0;
    sc_signal< sc_lv<7> > extLd_cast_fu_193_p1;
    sc_signal< sc_lv<7> > extLd8_cast_fu_197_p1;
    sc_signal< sc_lv<64> > p_Val2_1_fu_211_p1;
    sc_signal< sc_lv<52> > loc_V_1_fu_232_p1;
    sc_signal< sc_lv<54> > tmp_8_i_i_i_fu_236_p4;
    sc_signal< sc_lv<11> > loc_V_fu_222_p4;
    sc_signal< sc_lv<12> > tmp_i_i_i_i_cast1_fu_250_p1;
    sc_signal< sc_lv<12> > sh_assign_fu_254_p2;
    sc_signal< sc_lv<11> > tmp_i_i_i_fu_268_p2;
    sc_signal< sc_lv<1> > isNeg_fu_260_p3;
    sc_signal< sc_lv<12> > tmp_i_i_i_cast_fu_274_p1;
    sc_signal< sc_lv<12> > sh_assign_1_fu_278_p3;
    sc_signal< sc_lv<32> > sh_assign_1_cast_fu_286_p1;
    sc_signal< sc_lv<54> > tmp_1_i_i_i_cast_fu_294_p1;
    sc_signal< sc_lv<169> > tmp_8_i_i_i_cast_fu_246_p1;
    sc_signal< sc_lv<169> > tmp_1_i_i_i_fu_290_p1;
    sc_signal< sc_lv<54> > tmp_2_i_i_i_fu_298_p2;
    sc_signal< sc_lv<1> > tmp_9_fu_310_p3;
    sc_signal< sc_lv<169> > tmp_4_i_i_i_fu_304_p2;
    sc_signal< sc_lv<63> > tmp_5_fu_318_p1;
    sc_signal< sc_lv<63> > tmp_6_fu_322_p4;
    sc_signal< sc_lv<63> > p_Val2_3_fu_332_p3;
    sc_signal< sc_lv<64> > tmp_3_i_i_i_fu_340_p1;
    sc_signal< sc_lv<1> > p_Result_s_fu_214_p3;
    sc_signal< sc_lv<64> > tmp_9_i_i_i_fu_344_p2;
    sc_signal< sc_lv<21> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<21> ap_ST_fsm_state1;
    static const sc_lv<21> ap_ST_fsm_state2;
    static const sc_lv<21> ap_ST_fsm_state3;
    static const sc_lv<21> ap_ST_fsm_state4;
    static const sc_lv<21> ap_ST_fsm_state5;
    static const sc_lv<21> ap_ST_fsm_state6;
    static const sc_lv<21> ap_ST_fsm_state7;
    static const sc_lv<21> ap_ST_fsm_state8;
    static const sc_lv<21> ap_ST_fsm_state9;
    static const sc_lv<21> ap_ST_fsm_state10;
    static const sc_lv<21> ap_ST_fsm_state11;
    static const sc_lv<21> ap_ST_fsm_state12;
    static const sc_lv<21> ap_ST_fsm_state13;
    static const sc_lv<21> ap_ST_fsm_state14;
    static const sc_lv<21> ap_ST_fsm_state15;
    static const sc_lv<21> ap_ST_fsm_state16;
    static const sc_lv<21> ap_ST_fsm_state17;
    static const sc_lv<21> ap_ST_fsm_state18;
    static const sc_lv<21> ap_ST_fsm_state19;
    static const sc_lv<21> ap_ST_fsm_state20;
    static const sc_lv<21> ap_ST_fsm_state21;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<15> ap_const_lv15_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<4> ap_const_lv4_5;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<6> ap_const_lv6_17;
    static const sc_lv<64> ap_const_lv64_3F847AE147AE147B;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<15> ap_const_lv15_4E20;
    static const sc_lv<15> ap_const_lv15_1;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_34;
    static const sc_lv<32> ap_const_lv32_3E;
    static const sc_lv<12> ap_const_lv12_C01;
    static const sc_lv<11> ap_const_lv11_3FF;
    static const sc_lv<32> ap_const_lv32_35;
    static const sc_lv<32> ap_const_lv32_73;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const3();
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const2();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_empty_6_address0();
    void thread_empty_6_ce0();
    void thread_empty_6_we0();
    void thread_empty_address0();
    void thread_empty_ce0();
    void thread_empty_we0();
    void thread_exitcond2_fu_157_p2();
    void thread_exitcond_fu_175_p2();
    void thread_extLd8_cast_fu_197_p1();
    void thread_extLd_cast_fu_193_p1();
    void thread_grp_fu_154_p0();
    void thread_i_1_fu_163_p2();
    void thread_isNeg_fu_260_p3();
    void thread_iterator_1_fu_181_p2();
    void thread_loc_V_1_fu_232_p1();
    void thread_loc_V_fu_222_p4();
    void thread_p_Result_s_fu_214_p3();
    void thread_p_Val2_1_fu_211_p1();
    void thread_p_Val2_3_fu_332_p3();
    void thread_p_Val2_s_fu_350_p3();
    void thread_sh_assign_1_cast_fu_286_p1();
    void thread_sh_assign_1_fu_278_p3();
    void thread_sh_assign_fu_254_p2();
    void thread_tmp_1_i_i_i_cast_fu_294_p1();
    void thread_tmp_1_i_i_i_fu_290_p1();
    void thread_tmp_2_fu_187_p1();
    void thread_tmp_2_i_i_i_fu_298_p2();
    void thread_tmp_3_fu_201_p2();
    void thread_tmp_3_i_i_i_fu_340_p1();
    void thread_tmp_4_i_i_i_fu_304_p2();
    void thread_tmp_5_fu_318_p1();
    void thread_tmp_6_fu_322_p4();
    void thread_tmp_8_i_i_i_cast_fu_246_p1();
    void thread_tmp_8_i_i_i_fu_236_p4();
    void thread_tmp_9_fu_310_p3();
    void thread_tmp_9_i_i_i_fu_344_p2();
    void thread_tmp_fu_169_p1();
    void thread_tmp_i_i_i_cast_fu_274_p1();
    void thread_tmp_i_i_i_fu_268_p2();
    void thread_tmp_i_i_i_i_cast1_fu_250_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
