// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _KWTA_mini4_theta_HH_
#define _KWTA_mini4_theta_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "KWTA_mini4_theta_bkb.h"
#include "KWTA_mini4_theta_cud.h"

namespace ap_rtl {

struct KWTA_mini4_theta : public sc_module {
    // Port declarations 18
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > alloc_size;
    sc_in< sc_logic > alloc_size_ap_vld;
    sc_out< sc_logic > alloc_size_ap_ack;
    sc_in< sc_lv<32> > alloc_free_target;
    sc_in< sc_logic > alloc_free_target_ap_vld;
    sc_out< sc_logic > alloc_free_target_ap_ack;
    sc_out< sc_lv<32> > alloc_addr;
    sc_out< sc_logic > alloc_addr_ap_vld;
    sc_in< sc_logic > alloc_addr_ap_ack;
    sc_in< sc_lv<8> > alloc_cmd;
    sc_in< sc_logic > alloc_cmd_ap_vld;
    sc_out< sc_logic > alloc_cmd_ap_ack;


    // Module declarations
    KWTA_mini4_theta(sc_module_name name);
    SC_HAS_PROCESS(KWTA_mini4_theta);

    ~KWTA_mini4_theta();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    KWTA_mini4_theta_bkb* used_free_V_U;
    KWTA_mini4_theta_cud* heap_tree_V_U;
    sc_signal< sc_lv<15> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<64> > top_heap_V;
    sc_signal< sc_lv<20> > last_offset_V;
    sc_signal< sc_lv<20> > last_addr_V;
    sc_signal< sc_lv<12> > used_free_V_address0;
    sc_signal< sc_logic > used_free_V_ce0;
    sc_signal< sc_logic > used_free_V_we0;
    sc_signal< sc_lv<32> > used_free_V_d0;
    sc_signal< sc_lv<32> > used_free_V_q0;
    sc_signal< sc_lv<8> > last_loc1_V;
    sc_signal< sc_lv<8> > last_loc2_V;
    sc_signal< sc_lv<6> > heap_tree_V_address0;
    sc_signal< sc_logic > heap_tree_V_ce0;
    sc_signal< sc_logic > heap_tree_V_we0;
    sc_signal< sc_lv<64> > heap_tree_V_d0;
    sc_signal< sc_lv<64> > heap_tree_V_q0;
    sc_signal< sc_logic > alloc_size_blk_n;
    sc_signal< sc_logic > alloc_free_target_blk_n;
    sc_signal< sc_logic > alloc_addr_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > tmp_fu_878_p2;
    sc_signal< sc_lv<1> > or_cond_fu_937_p2;
    sc_signal< sc_lv<1> > tmp_34_fu_947_p3;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<1> > tmp_reg_1471;
    sc_signal< sc_lv<1> > or_cond_reg_1507;
    sc_signal< sc_lv<1> > tmp_34_reg_1516;
    sc_signal< sc_lv<1> > tmp_3_fu_887_p2;
    sc_signal< sc_logic > alloc_cmd_blk_n;
    sc_signal< sc_lv<8> > alloc_cmd_read_reg_1453;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<32> > alloc_size_read_reg_1459;
    sc_signal< sc_lv<32> > alloc_free_target_re_reg_1464;
    sc_signal< sc_logic > ap_sig_ioackin_alloc_addr_ap_ack;
    sc_signal< bool > ap_predicate_op38_write_state2;
    sc_signal< bool > ap_predicate_op60_write_state2;
    sc_signal< bool > ap_predicate_op65_write_state2;
    sc_signal< bool > ap_block_state2_io;
    sc_signal< sc_lv<64> > p_Val2_5_reg_1475;
    sc_signal< sc_lv<1> > tmp_3_reg_1482;
    sc_signal< sc_lv<6> > p_Result_6_reg_1486;
    sc_signal< sc_lv<8> > p_Result_7_reg_1491;
    sc_signal< sc_lv<64> > tmp_5_fu_919_p1;
    sc_signal< sc_lv<64> > tmp_5_reg_1497;
    sc_signal< sc_lv<20> > p_Val2_s_reg_1511;
    sc_signal< sc_lv<64> > p_not_fu_964_p2;
    sc_signal< sc_lv<64> > p_not_reg_1525;
    sc_signal< sc_lv<32> > p_Result_2_fu_986_p5;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > tmp_7_fu_974_p2;
    sc_signal< sc_lv<64> > tmp_13_fu_998_p1;
    sc_signal< sc_lv<64> > tmp_13_reg_1538;
    sc_signal< sc_lv<64> > tmp_s_fu_1045_p1;
    sc_signal< sc_lv<64> > tmp_s_reg_1548;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<1> > tmp_11_fu_1059_p2;
    sc_signal< sc_lv<1> > tmp_11_reg_1558;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<8> > last_loc1_V_load_reg_1562;
    sc_signal< sc_lv<64> > tmp_15_fu_1088_p1;
    sc_signal< sc_lv<64> > tmp_15_reg_1567;
    sc_signal< sc_lv<6> > p_0167_0_i1_cast_fu_1186_p1;
    sc_signal< sc_lv<6> > p_0167_0_i1_cast_reg_1595;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<7> > p_0252_0_i1_cast_fu_1196_p1;
    sc_signal< sc_lv<7> > p_0252_0_i1_cast_reg_1603;
    sc_signal< sc_lv<8> > tmp_22_fu_1238_p2;
    sc_signal< sc_lv<8> > tmp_22_reg_1614;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<16> > AA_V_1_fu_1267_p1;
    sc_signal< sc_lv<16> > AA_V_1_reg_1624;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<16> > BB_V_1_reg_1629;
    sc_signal< sc_lv<16> > CC_V_1_reg_1634;
    sc_signal< sc_lv<16> > DD_V_1_reg_1639;
    sc_signal< sc_lv<8> > tmp_28_fu_1361_p2;
    sc_signal< sc_lv<8> > tmp_28_reg_1656;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<14> > tmp_29_fu_1383_p2;
    sc_signal< sc_lv<14> > tmp_29_reg_1661;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<64> > tmp_30_fu_1389_p1;
    sc_signal< sc_lv<64> > tmp_30_reg_1667;
    sc_signal< sc_lv<16> > phitmp_fu_1423_p2;
    sc_signal< sc_lv<16> > phitmp_reg_1677;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<32> > storemerge_reg_400;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<4> > ap_phi_mux_p_0167_0_i1_phi_fu_415_p34;
    sc_signal< sc_lv<1> > tmp_12_fu_1180_p2;
    sc_signal< sc_lv<16> > AA_V_fu_1146_p1;
    sc_signal< sc_lv<5> > ap_phi_mux_p_0252_0_i1_phi_fu_471_p34;
    sc_signal< sc_lv<1> > tmp_19_fu_1190_p2;
    sc_signal< sc_lv<16> > BB_V_fu_1150_p4;
    sc_signal< sc_lv<6> > p_0248_0_i1_reg_524;
    sc_signal< sc_lv<1> > tmp_20_fu_1200_p2;
    sc_signal< sc_lv<16> > CC_V_fu_1160_p4;
    sc_signal< sc_lv<5> > p_0244_0_i1_reg_581;
    sc_signal< sc_lv<1> > tmp_21_fu_1206_p2;
    sc_signal< sc_lv<16> > DD_V_fu_1170_p4;
    sc_signal< sc_lv<4> > ap_phi_mux_p_0167_0_i_phi_fu_657_p34;
    sc_signal< sc_lv<1> > tmp_24_fu_1301_p2;
    sc_signal< sc_lv<5> > ap_phi_mux_p_0252_0_i_phi_fu_713_p34;
    sc_signal< sc_lv<1> > tmp_25_fu_1310_p2;
    sc_signal< sc_lv<6> > ap_phi_mux_p_0248_0_i_phi_fu_769_p34;
    sc_signal< sc_lv<1> > tmp_26_fu_1319_p2;
    sc_signal< sc_lv<5> > ap_phi_mux_p_0244_0_i_phi_fu_825_p34;
    sc_signal< sc_lv<1> > tmp_27_fu_1328_p2;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<64> > tmp_23_fu_1250_p1;
    sc_signal< sc_lv<64> > p_Result_1_fu_1005_p4;
    sc_signal< sc_lv<64> > p_Result_5_fu_1127_p4;
    sc_signal< sc_lv<1> > tmp_16_fu_1118_p2;
    sc_signal< sc_lv<20> > tmp_33_cast_fu_1394_p1;
    sc_signal< sc_lv<20> > tmp_9_fu_1034_p2;
    sc_signal< sc_lv<20> > phitmp_cast_fu_1429_p1;
    sc_signal< sc_lv<32> > tmp_8_fu_959_p1;
    sc_signal< sc_lv<32> > tmp_38_cast_fu_1448_p1;
    sc_signal< sc_logic > ap_reg_ioackin_alloc_addr_ap_ack;
    sc_signal< bool > ap_predicate_op334_write_state15;
    sc_signal< bool > ap_block_state15_io;
    sc_signal< sc_lv<32> > p_Result_4_fu_1071_p5;
    sc_signal< sc_lv<32> > p_Result_9_fu_1403_p5;
    sc_signal< sc_lv<64> > p_Result_s_39_fu_1023_p4;
    sc_signal< sc_lv<64> > p_Result_3_fu_1107_p4;
    sc_signal< sc_lv<14> > p_Result_8_fu_910_p4;
    sc_signal< sc_lv<1> > tmp_1_fu_924_p2;
    sc_signal< sc_lv<1> > tmp_10_fu_930_p3;
    sc_signal< sc_lv<5> > tmp_35_fu_970_p1;
    sc_signal< sc_lv<5> > loc_V_2_trunc_fu_980_p2;
    sc_signal< sc_lv<32> > i_assign_1_fu_1002_p1;
    sc_signal< sc_lv<32> > i_assign_fu_1020_p1;
    sc_signal< sc_lv<5> > p_Result_s_fu_1049_p4;
    sc_signal< sc_lv<5> > loc_V_trunc_fu_1065_p2;
    sc_signal< sc_lv<32> > i_assign_2_fu_1103_p1;
    sc_signal< sc_lv<32> > i_assign_3_fu_1124_p1;
    sc_signal< sc_lv<64> > p_Val2_2_fu_1142_p2;
    sc_signal< sc_lv<6> > p_0244_0_i1_cast1_fu_1212_p1;
    sc_signal< sc_lv<6> > tmp2_fu_1220_p2;
    sc_signal< sc_lv<7> > p_0244_0_i1_cast_fu_1216_p1;
    sc_signal< sc_lv<7> > tmp3_fu_1229_p2;
    sc_signal< sc_lv<8> > tmp2_cast_fu_1225_p1;
    sc_signal< sc_lv<8> > tmp3_cast_fu_1234_p1;
    sc_signal< sc_lv<64> > p_not1_fu_1255_p2;
    sc_signal< sc_lv<64> > p_Val2_7_fu_1261_p2;
    sc_signal< sc_lv<6> > p_0244_0_i_cast1_fu_1333_p1;
    sc_signal< sc_lv<6> > p_0252_0_i_cast_fu_1315_p1;
    sc_signal< sc_lv<6> > p_0167_0_i_cast_fu_1306_p1;
    sc_signal< sc_lv<6> > tmp4_fu_1341_p2;
    sc_signal< sc_lv<7> > p_0244_0_i_cast_fu_1337_p1;
    sc_signal< sc_lv<7> > p_0248_0_i_cast_fu_1324_p1;
    sc_signal< sc_lv<7> > tmp5_fu_1351_p2;
    sc_signal< sc_lv<8> > tmp4_cast_fu_1347_p1;
    sc_signal< sc_lv<8> > tmp5_cast_fu_1357_p1;
    sc_signal< sc_lv<14> > loc2_V_cast_fu_1373_p1;
    sc_signal< sc_lv<14> > r_V_fu_1376_p3;
    sc_signal< sc_lv<16> > tmp_31_fu_1416_p3;
    sc_signal< sc_lv<17> > tmp_37_cast_fu_1439_p1;
    sc_signal< sc_lv<17> > tmp_33_fu_1442_p2;
    sc_signal< sc_lv<15> > ap_NS_fsm;
    sc_signal< bool > ap_condition_1009;
    sc_signal< bool > ap_condition_927;
    sc_signal< bool > ap_condition_496;
    sc_signal< bool > ap_condition_845;
    sc_signal< bool > ap_condition_680;
    sc_signal< bool > ap_condition_596;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<15> ap_ST_fsm_state1;
    static const sc_lv<15> ap_ST_fsm_state2;
    static const sc_lv<15> ap_ST_fsm_state3;
    static const sc_lv<15> ap_ST_fsm_state4;
    static const sc_lv<15> ap_ST_fsm_state5;
    static const sc_lv<15> ap_ST_fsm_state6;
    static const sc_lv<15> ap_ST_fsm_state7;
    static const sc_lv<15> ap_ST_fsm_state8;
    static const sc_lv<15> ap_ST_fsm_state9;
    static const sc_lv<15> ap_ST_fsm_state10;
    static const sc_lv<15> ap_ST_fsm_state11;
    static const sc_lv<15> ap_ST_fsm_state12;
    static const sc_lv<15> ap_ST_fsm_state13;
    static const sc_lv<15> ap_ST_fsm_state14;
    static const sc_lv<15> ap_ST_fsm_state15;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<20> ap_const_lv20_FFFFF;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_E;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<4> ap_const_lv4_F;
    static const sc_lv<16> ap_const_lv16_8000;
    static const sc_lv<4> ap_const_lv4_E;
    static const sc_lv<16> ap_const_lv16_4000;
    static const sc_lv<4> ap_const_lv4_D;
    static const sc_lv<16> ap_const_lv16_2000;
    static const sc_lv<4> ap_const_lv4_C;
    static const sc_lv<16> ap_const_lv16_1000;
    static const sc_lv<4> ap_const_lv4_B;
    static const sc_lv<16> ap_const_lv16_800;
    static const sc_lv<4> ap_const_lv4_A;
    static const sc_lv<16> ap_const_lv16_400;
    static const sc_lv<4> ap_const_lv4_9;
    static const sc_lv<16> ap_const_lv16_200;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<16> ap_const_lv16_100;
    static const sc_lv<4> ap_const_lv4_7;
    static const sc_lv<16> ap_const_lv16_80;
    static const sc_lv<4> ap_const_lv4_6;
    static const sc_lv<16> ap_const_lv16_40;
    static const sc_lv<4> ap_const_lv4_5;
    static const sc_lv<16> ap_const_lv16_20;
    static const sc_lv<4> ap_const_lv4_4;
    static const sc_lv<16> ap_const_lv16_10;
    static const sc_lv<4> ap_const_lv4_3;
    static const sc_lv<16> ap_const_lv16_8;
    static const sc_lv<4> ap_const_lv4_2;
    static const sc_lv<16> ap_const_lv16_4;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<16> ap_const_lv16_2;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<5> ap_const_lv5_1F;
    static const sc_lv<5> ap_const_lv5_1E;
    static const sc_lv<5> ap_const_lv5_1D;
    static const sc_lv<5> ap_const_lv5_1C;
    static const sc_lv<5> ap_const_lv5_1B;
    static const sc_lv<5> ap_const_lv5_1A;
    static const sc_lv<5> ap_const_lv5_19;
    static const sc_lv<5> ap_const_lv5_18;
    static const sc_lv<5> ap_const_lv5_17;
    static const sc_lv<5> ap_const_lv5_16;
    static const sc_lv<5> ap_const_lv5_15;
    static const sc_lv<5> ap_const_lv5_14;
    static const sc_lv<5> ap_const_lv5_13;
    static const sc_lv<5> ap_const_lv5_12;
    static const sc_lv<5> ap_const_lv5_11;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<6> ap_const_lv6_2F;
    static const sc_lv<6> ap_const_lv6_2E;
    static const sc_lv<6> ap_const_lv6_2D;
    static const sc_lv<6> ap_const_lv6_2C;
    static const sc_lv<6> ap_const_lv6_2B;
    static const sc_lv<6> ap_const_lv6_2A;
    static const sc_lv<6> ap_const_lv6_29;
    static const sc_lv<6> ap_const_lv6_28;
    static const sc_lv<6> ap_const_lv6_27;
    static const sc_lv<6> ap_const_lv6_26;
    static const sc_lv<6> ap_const_lv6_25;
    static const sc_lv<6> ap_const_lv6_24;
    static const sc_lv<6> ap_const_lv6_23;
    static const sc_lv<6> ap_const_lv6_22;
    static const sc_lv<6> ap_const_lv6_21;
    static const sc_lv<6> ap_const_lv6_20;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_FFFFFFFF;
    static const sc_lv<8> ap_const_lv8_2;
    static const sc_lv<8> ap_const_lv8_3;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<5> ap_const_lv5_3;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<20> ap_const_lv20_1;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<32> ap_const_lv32_30;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<16> ap_const_lv16_1;
    static const sc_lv<17> ap_const_lv17_1FFFF;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_AA_V_1_fu_1267_p1();
    void thread_AA_V_fu_1146_p1();
    void thread_BB_V_fu_1150_p4();
    void thread_CC_V_fu_1160_p4();
    void thread_DD_V_fu_1170_p4();
    void thread_alloc_addr();
    void thread_alloc_addr_ap_vld();
    void thread_alloc_addr_blk_n();
    void thread_alloc_cmd_ap_ack();
    void thread_alloc_cmd_blk_n();
    void thread_alloc_free_target_ap_ack();
    void thread_alloc_free_target_blk_n();
    void thread_alloc_size_ap_ack();
    void thread_alloc_size_blk_n();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_state1();
    void thread_ap_block_state15_io();
    void thread_ap_block_state2_io();
    void thread_ap_condition_1009();
    void thread_ap_condition_496();
    void thread_ap_condition_596();
    void thread_ap_condition_680();
    void thread_ap_condition_845();
    void thread_ap_condition_927();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_phi_mux_p_0167_0_i1_phi_fu_415_p34();
    void thread_ap_phi_mux_p_0167_0_i_phi_fu_657_p34();
    void thread_ap_phi_mux_p_0244_0_i_phi_fu_825_p34();
    void thread_ap_phi_mux_p_0248_0_i_phi_fu_769_p34();
    void thread_ap_phi_mux_p_0252_0_i1_phi_fu_471_p34();
    void thread_ap_phi_mux_p_0252_0_i_phi_fu_713_p34();
    void thread_ap_predicate_op334_write_state15();
    void thread_ap_predicate_op38_write_state2();
    void thread_ap_predicate_op60_write_state2();
    void thread_ap_predicate_op65_write_state2();
    void thread_ap_ready();
    void thread_ap_sig_ioackin_alloc_addr_ap_ack();
    void thread_heap_tree_V_address0();
    void thread_heap_tree_V_ce0();
    void thread_heap_tree_V_d0();
    void thread_heap_tree_V_we0();
    void thread_i_assign_1_fu_1002_p1();
    void thread_i_assign_2_fu_1103_p1();
    void thread_i_assign_3_fu_1124_p1();
    void thread_i_assign_fu_1020_p1();
    void thread_loc2_V_cast_fu_1373_p1();
    void thread_loc_V_2_trunc_fu_980_p2();
    void thread_loc_V_trunc_fu_1065_p2();
    void thread_or_cond_fu_937_p2();
    void thread_p_0167_0_i1_cast_fu_1186_p1();
    void thread_p_0167_0_i_cast_fu_1306_p1();
    void thread_p_0244_0_i1_cast1_fu_1212_p1();
    void thread_p_0244_0_i1_cast_fu_1216_p1();
    void thread_p_0244_0_i_cast1_fu_1333_p1();
    void thread_p_0244_0_i_cast_fu_1337_p1();
    void thread_p_0248_0_i_cast_fu_1324_p1();
    void thread_p_0252_0_i1_cast_fu_1196_p1();
    void thread_p_0252_0_i_cast_fu_1315_p1();
    void thread_p_Result_1_fu_1005_p4();
    void thread_p_Result_2_fu_986_p5();
    void thread_p_Result_3_fu_1107_p4();
    void thread_p_Result_4_fu_1071_p5();
    void thread_p_Result_5_fu_1127_p4();
    void thread_p_Result_8_fu_910_p4();
    void thread_p_Result_9_fu_1403_p5();
    void thread_p_Result_s_39_fu_1023_p4();
    void thread_p_Result_s_fu_1049_p4();
    void thread_p_Val2_2_fu_1142_p2();
    void thread_p_Val2_7_fu_1261_p2();
    void thread_p_not1_fu_1255_p2();
    void thread_p_not_fu_964_p2();
    void thread_phitmp_cast_fu_1429_p1();
    void thread_phitmp_fu_1423_p2();
    void thread_r_V_fu_1376_p3();
    void thread_tmp2_cast_fu_1225_p1();
    void thread_tmp2_fu_1220_p2();
    void thread_tmp3_cast_fu_1234_p1();
    void thread_tmp3_fu_1229_p2();
    void thread_tmp4_cast_fu_1347_p1();
    void thread_tmp4_fu_1341_p2();
    void thread_tmp5_cast_fu_1357_p1();
    void thread_tmp5_fu_1351_p2();
    void thread_tmp_10_fu_930_p3();
    void thread_tmp_11_fu_1059_p2();
    void thread_tmp_12_fu_1180_p2();
    void thread_tmp_13_fu_998_p1();
    void thread_tmp_15_fu_1088_p1();
    void thread_tmp_16_fu_1118_p2();
    void thread_tmp_19_fu_1190_p2();
    void thread_tmp_1_fu_924_p2();
    void thread_tmp_20_fu_1200_p2();
    void thread_tmp_21_fu_1206_p2();
    void thread_tmp_22_fu_1238_p2();
    void thread_tmp_23_fu_1250_p1();
    void thread_tmp_24_fu_1301_p2();
    void thread_tmp_25_fu_1310_p2();
    void thread_tmp_26_fu_1319_p2();
    void thread_tmp_27_fu_1328_p2();
    void thread_tmp_28_fu_1361_p2();
    void thread_tmp_29_fu_1383_p2();
    void thread_tmp_30_fu_1389_p1();
    void thread_tmp_31_fu_1416_p3();
    void thread_tmp_33_cast_fu_1394_p1();
    void thread_tmp_33_fu_1442_p2();
    void thread_tmp_34_fu_947_p3();
    void thread_tmp_35_fu_970_p1();
    void thread_tmp_37_cast_fu_1439_p1();
    void thread_tmp_38_cast_fu_1448_p1();
    void thread_tmp_3_fu_887_p2();
    void thread_tmp_5_fu_919_p1();
    void thread_tmp_7_fu_974_p2();
    void thread_tmp_8_fu_959_p1();
    void thread_tmp_9_fu_1034_p2();
    void thread_tmp_fu_878_p2();
    void thread_tmp_s_fu_1045_p1();
    void thread_used_free_V_address0();
    void thread_used_free_V_ce0();
    void thread_used_free_V_d0();
    void thread_used_free_V_we0();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
