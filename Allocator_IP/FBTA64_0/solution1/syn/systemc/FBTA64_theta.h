// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _FBTA64_theta_HH_
#define _FBTA64_theta_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "log_2_64bit.h"
#include "FBTA64_theta_mux_eOg.h"
#include "FBTA64_theta_buddbkb.h"
#include "FBTA64_theta_buddcud.h"
#include "FBTA64_theta_addrdEe.h"

namespace ap_rtl {

struct FBTA64_theta : public sc_module {
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
    sc_signal< sc_lv<64> > ap_var_for_const0;
    sc_signal< sc_lv<64> > ap_var_for_const1;
    sc_signal< sc_lv<64> > ap_var_for_const2;
    sc_signal< sc_lv<64> > ap_var_for_const3;
    sc_signal< sc_lv<64> > ap_var_for_const4;
    sc_signal< sc_lv<64> > ap_var_for_const5;
    sc_signal< sc_lv<64> > ap_var_for_const6;


    // Module declarations
    FBTA64_theta(sc_module_name name);
    SC_HAS_PROCESS(FBTA64_theta);

    ~FBTA64_theta();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    FBTA64_theta_buddbkb* buddy_tree_V_1_U;
    FBTA64_theta_buddcud* buddy_tree_V_0_U;
    FBTA64_theta_addrdEe* addr_layer_map_V_U;
    log_2_64bit* loc1_V_11_log_2_64bit_fu_522;
    FBTA64_theta_mux_eOg<1,1,64,64,64,64,2,64>* FBTA64_theta_mux_eOg_U2;
    FBTA64_theta_mux_eOg<1,1,64,64,64,64,2,64>* FBTA64_theta_mux_eOg_U3;
    FBTA64_theta_mux_eOg<1,1,64,64,64,64,2,64>* FBTA64_theta_mux_eOg_U4;
    FBTA64_theta_mux_eOg<1,1,64,64,64,64,2,64>* FBTA64_theta_mux_eOg_U5;
    sc_signal< sc_lv<19> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<2> > buddy_tree_V_1_address0;
    sc_signal< sc_logic > buddy_tree_V_1_ce0;
    sc_signal< sc_logic > buddy_tree_V_1_we0;
    sc_signal< sc_lv<64> > buddy_tree_V_1_d0;
    sc_signal< sc_lv<64> > buddy_tree_V_1_q0;
    sc_signal< sc_lv<2> > buddy_tree_V_1_address1;
    sc_signal< sc_logic > buddy_tree_V_1_ce1;
    sc_signal< sc_logic > buddy_tree_V_1_we1;
    sc_signal< sc_lv<64> > buddy_tree_V_1_d1;
    sc_signal< sc_lv<64> > buddy_tree_V_1_q1;
    sc_signal< sc_lv<2> > buddy_tree_V_0_address0;
    sc_signal< sc_logic > buddy_tree_V_0_ce0;
    sc_signal< sc_logic > buddy_tree_V_0_we0;
    sc_signal< sc_lv<64> > buddy_tree_V_0_d0;
    sc_signal< sc_lv<64> > buddy_tree_V_0_q0;
    sc_signal< sc_lv<2> > buddy_tree_V_0_address1;
    sc_signal< sc_logic > buddy_tree_V_0_ce1;
    sc_signal< sc_logic > buddy_tree_V_0_we1;
    sc_signal< sc_lv<64> > buddy_tree_V_0_d1;
    sc_signal< sc_lv<64> > buddy_tree_V_0_q1;
    sc_signal< sc_lv<7> > addr_layer_map_V_address0;
    sc_signal< sc_logic > addr_layer_map_V_ce0;
    sc_signal< sc_logic > addr_layer_map_V_we0;
    sc_signal< sc_lv<4> > addr_layer_map_V_q0;
    sc_signal< sc_logic > alloc_size_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > alloc_free_target_blk_n;
    sc_signal< sc_logic > alloc_addr_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_logic > alloc_cmd_blk_n;
    sc_signal< sc_lv<64> > p_01606_0_in_reg_444;
    sc_signal< sc_lv<8> > p_01598_1_in_reg_454;
    sc_signal< sc_lv<8> > p_01590_5_in_reg_463;
    sc_signal< sc_lv<8> > p_01594_1_in_reg_473;
    sc_signal< sc_lv<8> > p_01586_3_in_reg_482;
    sc_signal< sc_lv<9> > op2_assign_5_reg_491;
    sc_signal< sc_lv<8> > size_V_fu_546_p1;
    sc_signal< sc_lv<8> > size_V_reg_1531;
    sc_signal< bool > ap_block_state2;
    sc_signal< sc_lv<8> > free_target_V_fu_550_p1;
    sc_signal< sc_lv<8> > free_target_V_reg_1536;
    sc_signal< sc_lv<8> > p_Result_1_fu_560_p4;
    sc_signal< sc_lv<8> > p_Result_1_reg_1543;
    sc_signal< sc_lv<1> > tmp_fu_570_p2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > tmp_s_fu_576_p2;
    sc_signal< sc_lv<1> > tmp_s_reg_1553;
    sc_signal< sc_lv<4> > ans_V_fu_717_p2;
    sc_signal< sc_lv<4> > ans_V_reg_1558;
    sc_signal< sc_lv<1> > tmp_6_fu_723_p2;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<4> > addr_layer_map_V_loa_reg_1572;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > tmp_27_fu_733_p1;
    sc_signal< sc_lv<1> > tmp_27_reg_1578;
    sc_signal< sc_lv<64> > newIndex2_fu_747_p1;
    sc_signal< sc_lv<64> > newIndex2_reg_1583;
    sc_signal< sc_lv<8> > ans_V_2_fu_753_p1;
    sc_signal< sc_lv<8> > ans_V_2_reg_1599;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<8> > r_V_12_fu_805_p3;
    sc_signal< sc_lv<8> > r_V_12_reg_1605;
    sc_signal< sc_lv<64> > tmp_17_fu_834_p2;
    sc_signal< sc_lv<64> > tmp_17_reg_1611;
    sc_signal< sc_lv<8> > p_Result_2_fu_840_p4;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<64> > r_V_fu_853_p2;
    sc_signal< sc_lv<8> > now1_V_4_fu_858_p2;
    sc_signal< sc_lv<8> > now1_V_4_reg_1628;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter2;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > icmp1_fu_874_p2;
    sc_signal< sc_lv<1> > icmp1_reg_1633;
    sc_signal< sc_lv<1> > icmp1_reg_1633_pp0_iter1_reg;
    sc_signal< sc_lv<1> > tmp_58_fu_880_p1;
    sc_signal< sc_lv<1> > tmp_58_reg_1637;
    sc_signal< sc_lv<1> > tmp_58_reg_1637_pp0_iter1_reg;
    sc_signal< sc_lv<64> > newIndex6_fu_894_p1;
    sc_signal< sc_lv<64> > newIndex6_reg_1642;
    sc_signal< sc_lv<64> > newIndex6_reg_1642_pp0_iter1_reg;
    sc_signal< sc_lv<7> > loc1_V_fu_900_p4;
    sc_signal< sc_lv<7> > loc1_V_reg_1658;
    sc_signal< sc_lv<64> > buddy_tree_V_0_load_2_reg_1663;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_lv<64> > buddy_tree_V_1_load_2_reg_1668;
    sc_signal< sc_lv<8> > p_Result_3_fu_914_p4;
    sc_signal< sc_lv<8> > p_Result_3_reg_1673;
    sc_signal< sc_lv<64> > r_V_3_fu_975_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<8> > p_Repl2_2_fu_981_p2;
    sc_signal< sc_lv<8> > p_Repl2_2_reg_1684;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< bool > ap_block_state12_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state13_pp1_stage0_iter1;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<1> > tmp_29_fu_987_p2;
    sc_signal< sc_lv<1> > tmp_29_reg_1689;
    sc_signal< sc_lv<8> > p_Repl2_s_fu_993_p2;
    sc_signal< sc_lv<8> > p_Repl2_s_reg_1693;
    sc_signal< sc_lv<1> > tmp_63_fu_999_p1;
    sc_signal< sc_lv<1> > tmp_63_reg_1698;
    sc_signal< sc_lv<64> > r_V_13_fu_1057_p2;
    sc_signal< sc_lv<64> > r_V_13_reg_1703;
    sc_signal< sc_lv<64> > newIndex9_fu_1073_p1;
    sc_signal< sc_lv<64> > newIndex9_reg_1708;
    sc_signal< sc_lv<9> > cnt_fu_1079_p2;
    sc_signal< sc_lv<4> > p_s_fu_1099_p3;
    sc_signal< sc_lv<4> > p_s_reg_1729;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<1> > tmp_20_fu_1105_p1;
    sc_signal< sc_lv<1> > tmp_20_reg_1736;
    sc_signal< sc_lv<64> > newIndex4_fu_1119_p1;
    sc_signal< sc_lv<64> > newIndex4_reg_1741;
    sc_signal< sc_lv<64> > buddy_tree_V_load_1_s_fu_1125_p3;
    sc_signal< sc_lv<64> > buddy_tree_V_load_1_s_reg_1757;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<64> > tmp_5_fu_1132_p2;
    sc_signal< sc_lv<64> > tmp_5_reg_1765;
    sc_signal< sc_lv<64> > tmp_12_fu_1138_p2;
    sc_signal< sc_lv<64> > tmp_12_reg_1770;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<64> > tmp_V_fu_1142_p2;
    sc_signal< sc_lv<64> > tmp_V_reg_1775;
    sc_signal< sc_lv<8> > now1_V_cast_fu_1152_p1;
    sc_signal< sc_lv<8> > now1_V_cast_reg_1780;
    sc_signal< sc_lv<4> > now2_V_fu_1156_p2;
    sc_signal< sc_lv<4> > now2_V_reg_1785;
    sc_signal< sc_lv<8> > now2_V_1_cast_fu_1161_p1;
    sc_signal< sc_lv<8> > now2_V_1_cast_reg_1790;
    sc_signal< sc_lv<64> > tmp_13_fu_1171_p2;
    sc_signal< sc_lv<64> > tmp_13_reg_1795;
    sc_signal< sc_lv<8> > loc1_V_11_log_2_64bit_fu_522_ap_return;
    sc_signal< sc_lv<8> > loc1_V_11_reg_1801;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<1> > tmp_18_fu_1176_p2;
    sc_signal< sc_lv<1> > tmp_18_reg_1807;
    sc_signal< sc_lv<7> > loc1_V_2_reg_1812;
    sc_signal< sc_lv<1> > tmp_46_fu_1235_p3;
    sc_signal< sc_logic > ap_sig_ioackin_alloc_addr_ap_ack;
    sc_signal< sc_lv<1> > op2_assign_2_fu_1274_p2;
    sc_signal< sc_lv<1> > op2_assign_2_reg_1843;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<1> > tmp_25_fu_1280_p2;
    sc_signal< sc_lv<1> > tmp_25_reg_1848;
    sc_signal< sc_lv<1> > icmp2_fu_1296_p2;
    sc_signal< sc_lv<1> > icmp2_reg_1852;
    sc_signal< sc_lv<64> > rhs_V_fu_1362_p2;
    sc_signal< sc_lv<64> > rhs_V_reg_1856;
    sc_signal< sc_lv<1> > tmp_60_fu_1368_p1;
    sc_signal< sc_lv<1> > tmp_60_reg_1861;
    sc_signal< sc_lv<64> > newIndex_fu_1382_p1;
    sc_signal< sc_lv<64> > newIndex_reg_1866;
    sc_signal< sc_lv<1> > tmp_44_fu_1388_p2;
    sc_signal< sc_lv<1> > tmp_44_reg_1882;
    sc_signal< sc_lv<64> > newIndex10_fu_1404_p1;
    sc_signal< sc_lv<64> > newIndex10_reg_1886;
    sc_signal< sc_lv<8> > now1_V_2_fu_1509_p2;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_lv<8> > now2_V_2_fu_1518_p2;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state8;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state12;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< sc_logic > loc1_V_11_log_2_64bit_fu_522_ap_ready;
    sc_signal< sc_lv<8> > ap_phi_mux_p_01598_1_in_phi_fu_457_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<8> > ap_phi_mux_p_01590_5_in_phi_fu_466_p4;
    sc_signal< sc_lv<8> > ap_phi_mux_p_01594_1_in_phi_fu_476_p4;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_lv<8> > ap_phi_mux_p_01586_3_in_phi_fu_485_p4;
    sc_signal< sc_lv<8> > p_4_reg_502;
    sc_signal< sc_lv<8> > p_5_reg_512;
    sc_signal< sc_lv<64> > tmp_8_fu_729_p1;
    sc_signal< sc_lv<64> > tmp_21_fu_1222_p1;
    sc_signal< sc_lv<1> > tmp_66_fu_1453_p1;
    sc_signal< sc_lv<8> > cmd_fu_172;
    sc_signal< sc_lv<32> > cnt_1_fu_176;
    sc_signal< sc_lv<32> > cnt_2_fu_1430_p2;
    sc_signal< sc_lv<8> > loc2_V_2_fu_180;
    sc_signal< sc_lv<8> > r_V_10_fu_1230_p2;
    sc_signal< sc_lv<8> > loc2_V_3_fu_1424_p2;
    sc_signal< sc_lv<8> > loc1_V_6_fu_184;
    sc_signal< sc_lv<8> > loc1_V_4_fu_1227_p1;
    sc_signal< sc_lv<8> > loc1_V_9_fu_1490_p1;
    sc_signal< sc_lv<32> > p_Val2_4_cast_fu_1217_p1;
    sc_signal< sc_logic > ap_reg_ioackin_alloc_addr_ap_ack;
    sc_signal< sc_lv<64> > tmp_35_fu_964_p2;
    sc_signal< sc_lv<64> > r_V_5_fu_1092_p2;
    sc_signal< sc_lv<64> > r_V_8_fu_1417_p2;
    sc_signal< sc_lv<64> > p_Result_s_fu_1465_p4;
    sc_signal< sc_lv<8> > tmp_size_V_fu_554_p2;
    sc_signal< sc_lv<8> > p_not_fu_581_p2;
    sc_signal< sc_lv<8> > tmp_7_fu_586_p2;
    sc_signal< sc_lv<1> > sel_tmp_fu_591_p2;
    sc_signal< sc_lv<1> > sel_tmp4_fu_635_p2;
    sc_signal< sc_lv<1> > sel_tmp1_fu_629_p2;
    sc_signal< sc_lv<1> > sel_tmp9_fu_623_p2;
    sc_signal< sc_lv<1> > sel_tmp7_fu_617_p2;
    sc_signal< sc_lv<1> > sel_tmp5_fu_611_p2;
    sc_signal< sc_lv<1> > sel_tmp3_fu_605_p2;
    sc_signal< sc_lv<1> > or_cond_fu_649_p2;
    sc_signal< sc_lv<3> > newSel_cast_cast_fu_641_p3;
    sc_signal< sc_lv<3> > newSel_fu_655_p3;
    sc_signal< sc_lv<1> > or_cond1_fu_663_p2;
    sc_signal< sc_lv<1> > or_cond2_fu_677_p2;
    sc_signal< sc_lv<3> > newSel1_fu_669_p3;
    sc_signal< sc_lv<3> > sel_tmp2_fu_597_p3;
    sc_signal< sc_lv<1> > or_cond3_fu_691_p2;
    sc_signal< sc_lv<3> > newSel2_fu_683_p3;
    sc_signal< sc_lv<3> > newSel3_fu_697_p3;
    sc_signal< sc_lv<3> > newSel4_fu_705_p3;
    sc_signal< sc_lv<4> > tmp_15_cast_fu_713_p1;
    sc_signal< sc_lv<3> > tmp_30_fu_737_p4;
    sc_signal< sc_lv<5> > lhs_V_cast_cast_fu_756_p1;
    sc_signal< sc_lv<5> > r_V_11_fu_759_p2;
    sc_signal< sc_lv<5> > tmp_10_fu_780_p2;
    sc_signal< sc_lv<32> > tmp_9_fu_777_p1;
    sc_signal< sc_lv<32> > tmp_10_cast_fu_786_p1;
    sc_signal< sc_lv<8> > r_V_11_cast5_fu_765_p1;
    sc_signal< sc_lv<32> > tmp_11_fu_790_p2;
    sc_signal< sc_lv<1> > tmp_23_fu_769_p3;
    sc_signal< sc_lv<8> > tmp_24_fu_801_p1;
    sc_signal< sc_lv<8> > tmp_14_fu_796_p2;
    sc_signal< sc_lv<32> > tmp_15_fu_813_p1;
    sc_signal< sc_lv<32> > op2_assign_3_fu_817_p2;
    sc_signal< sc_lv<64> > buddy_tree_V_load_ph_fu_827_p3;
    sc_signal< sc_lv<64> > tmp_16_fu_823_p1;
    sc_signal< sc_lv<64> > tmp_22_fu_849_p1;
    sc_signal< sc_lv<5> > tmp_54_fu_864_p4;
    sc_signal< sc_lv<7> > newIndex5_fu_884_p4;
    sc_signal< sc_lv<8> > loc1_V_12_fu_910_p1;
    sc_signal< sc_lv<1> > tmp_56_fu_924_p3;
    sc_signal< sc_lv<1> > tmp_57_fu_932_p1;
    sc_signal< sc_lv<1> > tmp_31_fu_936_p2;
    sc_signal< sc_lv<32> > tmp_32_fu_942_p1;
    sc_signal< sc_lv<32> > tmp_33_fu_946_p1;
    sc_signal< sc_lv<32> > op2_assign_4_fu_949_p2;
    sc_signal< sc_lv<64> > buddy_tree_V_load_2_s_fu_959_p3;
    sc_signal< sc_lv<64> > tmp_34_fu_955_p1;
    sc_signal< sc_lv<64> > tmp_40_fu_972_p1;
    sc_signal< sc_lv<2> > tmp_41_fu_1017_p5;
    sc_signal< sc_lv<2> > tmp_42_fu_1031_p5;
    sc_signal< sc_lv<1> > tmp_64_fu_1003_p1;
    sc_signal< sc_lv<64> > tmp_41_fu_1017_p6;
    sc_signal< sc_lv<64> > tmp_42_fu_1031_p6;
    sc_signal< sc_lv<64> > mask_V_load_phi_fu_1045_p3;
    sc_signal< sc_lv<64> > tmp_43_fu_1053_p1;
    sc_signal< sc_lv<7> > newIndex8_fu_1063_p4;
    sc_signal< sc_lv<64> > lhs_V_1_fu_1085_p3;
    sc_signal< sc_lv<3> > newIndex3_fu_1109_p4;
    sc_signal< sc_lv<4> > now1_V_fu_1147_p2;
    sc_signal< sc_lv<64> > op2_assign_fu_1165_p2;
    sc_signal< sc_lv<16> > tmp_28_cast_fu_1190_p1;
    sc_signal< sc_lv<16> > tmp_33_cast_fu_1193_p1;
    sc_signal< sc_lv<16> > tmp_19_fu_1196_p2;
    sc_signal< sc_lv<8> > r_V_4_fu_1202_p1;
    sc_signal< sc_lv<9> > output_addr_V_cast_fu_1206_p1;
    sc_signal< sc_lv<9> > p_Val2_2_fu_1210_p3;
    sc_signal< sc_lv<5> > tmp_53_fu_1258_p4;
    sc_signal< sc_lv<1> > icmp_fu_1268_p2;
    sc_signal< sc_lv<5> > tmp_55_fu_1286_p4;
    sc_signal< sc_lv<2> > tmp_36_fu_1316_p5;
    sc_signal< sc_lv<2> > tmp_37_fu_1330_p5;
    sc_signal< sc_lv<1> > tmp_59_fu_1302_p1;
    sc_signal< sc_lv<64> > tmp_36_fu_1316_p6;
    sc_signal< sc_lv<64> > tmp_37_fu_1330_p6;
    sc_signal< sc_lv<64> > mask_V_load_1_phi_fu_1344_p3;
    sc_signal< sc_lv<64> > tmp_38_fu_1352_p1;
    sc_signal< sc_lv<64> > r_V_7_fu_1356_p2;
    sc_signal< sc_lv<7> > newIndex1_fu_1372_p4;
    sc_signal< sc_lv<7> > newIndex7_fu_1394_p4;
    sc_signal< sc_lv<64> > lhs_V_fu_1410_p3;
    sc_signal< sc_lv<64> > p_Val2_5_fu_1457_p3;
    sc_signal< sc_lv<32> > i_assign_fu_1449_p1;
    sc_signal< sc_lv<7> > loc1_V_5_fu_1480_p4;
    sc_signal< sc_lv<1> > op2_assign_1_fu_1499_p2;
    sc_signal< sc_lv<8> > tmp_45_fu_1505_p1;
    sc_signal< sc_lv<8> > tmp_47_fu_1515_p1;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<19> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<19> ap_ST_fsm_state1;
    static const sc_lv<19> ap_ST_fsm_state2;
    static const sc_lv<19> ap_ST_fsm_state3;
    static const sc_lv<19> ap_ST_fsm_state4;
    static const sc_lv<19> ap_ST_fsm_state5;
    static const sc_lv<19> ap_ST_fsm_state6;
    static const sc_lv<19> ap_ST_fsm_state7;
    static const sc_lv<19> ap_ST_fsm_pp0_stage0;
    static const sc_lv<19> ap_ST_fsm_state11;
    static const sc_lv<19> ap_ST_fsm_pp1_stage0;
    static const sc_lv<19> ap_ST_fsm_state14;
    static const sc_lv<19> ap_ST_fsm_state15;
    static const sc_lv<19> ap_ST_fsm_state16;
    static const sc_lv<19> ap_ST_fsm_state17;
    static const sc_lv<19> ap_ST_fsm_state18;
    static const sc_lv<19> ap_ST_fsm_state19;
    static const sc_lv<19> ap_ST_fsm_state20;
    static const sc_lv<19> ap_ST_fsm_state21;
    static const sc_lv<19> ap_ST_fsm_state22;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<9> ap_const_lv9_1;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<8> ap_const_lv8_2;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<8> ap_const_lv8_80;
    static const sc_lv<3> ap_const_lv3_7;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<8> ap_const_lv8_40;
    static const sc_lv<8> ap_const_lv8_20;
    static const sc_lv<8> ap_const_lv8_10;
    static const sc_lv<8> ap_const_lv8_8;
    static const sc_lv<8> ap_const_lv8_4;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<3> ap_const_lv3_2;
    static const sc_lv<3> ap_const_lv3_3;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<3> ap_const_lv3_6;
    static const sc_lv<4> ap_const_lv4_9;
    static const sc_lv<8> ap_const_lv8_3;
    static const sc_lv<5> ap_const_lv5_1F;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<64> ap_const_lv64_3;
    static const sc_lv<64> ap_const_lv64_FF;
    static const sc_lv<64> ap_const_lv64_FFFFFFFF;
    static const sc_lv<64> ap_const_lv64_FFFFFFFFFFFFFFFF;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_F;
    static const sc_lv<64> ap_const_lv64_FFFF;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<4> ap_const_lv4_F;
    static const sc_lv<9> ap_const_lv9_1FF;
    static const sc_lv<32> ap_const_lv32_A;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const3();
    void thread_ap_var_for_const4();
    void thread_ap_var_for_const5();
    void thread_ap_var_for_const6();
    void thread_ap_clk_no_reset_();
    void thread_addr_layer_map_V_address0();
    void thread_addr_layer_map_V_ce0();
    void thread_addr_layer_map_V_we0();
    void thread_alloc_addr();
    void thread_alloc_addr_ap_vld();
    void thread_alloc_addr_blk_n();
    void thread_alloc_cmd_ap_ack();
    void thread_alloc_cmd_blk_n();
    void thread_alloc_free_target_ap_ack();
    void thread_alloc_free_target_blk_n();
    void thread_alloc_size_ap_ack();
    void thread_alloc_size_blk_n();
    void thread_ans_V_2_fu_753_p1();
    void thread_ans_V_fu_717_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp1_stage0();
    void thread_ap_block_pp1_stage0_11001();
    void thread_ap_block_pp1_stage0_subdone();
    void thread_ap_block_state10_pp0_stage0_iter2();
    void thread_ap_block_state12_pp1_stage0_iter0();
    void thread_ap_block_state13_pp1_stage0_iter1();
    void thread_ap_block_state2();
    void thread_ap_block_state8_pp0_stage0_iter0();
    void thread_ap_block_state9_pp0_stage0_iter1();
    void thread_ap_condition_pp0_exit_iter0_state8();
    void thread_ap_condition_pp1_exit_iter0_state12();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp1();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp1();
    void thread_ap_phi_mux_p_01586_3_in_phi_fu_485_p4();
    void thread_ap_phi_mux_p_01590_5_in_phi_fu_466_p4();
    void thread_ap_phi_mux_p_01594_1_in_phi_fu_476_p4();
    void thread_ap_phi_mux_p_01598_1_in_phi_fu_457_p4();
    void thread_ap_ready();
    void thread_ap_sig_ioackin_alloc_addr_ap_ack();
    void thread_buddy_tree_V_0_address0();
    void thread_buddy_tree_V_0_address1();
    void thread_buddy_tree_V_0_ce0();
    void thread_buddy_tree_V_0_ce1();
    void thread_buddy_tree_V_0_d0();
    void thread_buddy_tree_V_0_d1();
    void thread_buddy_tree_V_0_we0();
    void thread_buddy_tree_V_0_we1();
    void thread_buddy_tree_V_1_address0();
    void thread_buddy_tree_V_1_address1();
    void thread_buddy_tree_V_1_ce0();
    void thread_buddy_tree_V_1_ce1();
    void thread_buddy_tree_V_1_d0();
    void thread_buddy_tree_V_1_d1();
    void thread_buddy_tree_V_1_we0();
    void thread_buddy_tree_V_1_we1();
    void thread_buddy_tree_V_load_1_s_fu_1125_p3();
    void thread_buddy_tree_V_load_2_s_fu_959_p3();
    void thread_buddy_tree_V_load_ph_fu_827_p3();
    void thread_cnt_2_fu_1430_p2();
    void thread_cnt_fu_1079_p2();
    void thread_free_target_V_fu_550_p1();
    void thread_i_assign_fu_1449_p1();
    void thread_icmp1_fu_874_p2();
    void thread_icmp2_fu_1296_p2();
    void thread_icmp_fu_1268_p2();
    void thread_lhs_V_1_fu_1085_p3();
    void thread_lhs_V_cast_cast_fu_756_p1();
    void thread_lhs_V_fu_1410_p3();
    void thread_loc1_V_12_fu_910_p1();
    void thread_loc1_V_4_fu_1227_p1();
    void thread_loc1_V_5_fu_1480_p4();
    void thread_loc1_V_9_fu_1490_p1();
    void thread_loc1_V_fu_900_p4();
    void thread_loc2_V_3_fu_1424_p2();
    void thread_mask_V_load_1_phi_fu_1344_p3();
    void thread_mask_V_load_phi_fu_1045_p3();
    void thread_newIndex10_fu_1404_p1();
    void thread_newIndex1_fu_1372_p4();
    void thread_newIndex2_fu_747_p1();
    void thread_newIndex3_fu_1109_p4();
    void thread_newIndex4_fu_1119_p1();
    void thread_newIndex5_fu_884_p4();
    void thread_newIndex6_fu_894_p1();
    void thread_newIndex7_fu_1394_p4();
    void thread_newIndex8_fu_1063_p4();
    void thread_newIndex9_fu_1073_p1();
    void thread_newIndex_fu_1382_p1();
    void thread_newSel1_fu_669_p3();
    void thread_newSel2_fu_683_p3();
    void thread_newSel3_fu_697_p3();
    void thread_newSel4_fu_705_p3();
    void thread_newSel_cast_cast_fu_641_p3();
    void thread_newSel_fu_655_p3();
    void thread_now1_V_2_fu_1509_p2();
    void thread_now1_V_4_fu_858_p2();
    void thread_now1_V_cast_fu_1152_p1();
    void thread_now1_V_fu_1147_p2();
    void thread_now2_V_1_cast_fu_1161_p1();
    void thread_now2_V_2_fu_1518_p2();
    void thread_now2_V_fu_1156_p2();
    void thread_op2_assign_1_fu_1499_p2();
    void thread_op2_assign_2_fu_1274_p2();
    void thread_op2_assign_3_fu_817_p2();
    void thread_op2_assign_4_fu_949_p2();
    void thread_op2_assign_fu_1165_p2();
    void thread_or_cond1_fu_663_p2();
    void thread_or_cond2_fu_677_p2();
    void thread_or_cond3_fu_691_p2();
    void thread_or_cond_fu_649_p2();
    void thread_output_addr_V_cast_fu_1206_p1();
    void thread_p_Repl2_2_fu_981_p2();
    void thread_p_Repl2_s_fu_993_p2();
    void thread_p_Result_1_fu_560_p4();
    void thread_p_Result_2_fu_840_p4();
    void thread_p_Result_3_fu_914_p4();
    void thread_p_Result_s_fu_1465_p4();
    void thread_p_Val2_2_fu_1210_p3();
    void thread_p_Val2_4_cast_fu_1217_p1();
    void thread_p_Val2_5_fu_1457_p3();
    void thread_p_not_fu_581_p2();
    void thread_p_s_fu_1099_p3();
    void thread_r_V_10_fu_1230_p2();
    void thread_r_V_11_cast5_fu_765_p1();
    void thread_r_V_11_fu_759_p2();
    void thread_r_V_12_fu_805_p3();
    void thread_r_V_13_fu_1057_p2();
    void thread_r_V_3_fu_975_p2();
    void thread_r_V_4_fu_1202_p1();
    void thread_r_V_5_fu_1092_p2();
    void thread_r_V_7_fu_1356_p2();
    void thread_r_V_8_fu_1417_p2();
    void thread_r_V_fu_853_p2();
    void thread_rhs_V_fu_1362_p2();
    void thread_sel_tmp1_fu_629_p2();
    void thread_sel_tmp2_fu_597_p3();
    void thread_sel_tmp3_fu_605_p2();
    void thread_sel_tmp4_fu_635_p2();
    void thread_sel_tmp5_fu_611_p2();
    void thread_sel_tmp7_fu_617_p2();
    void thread_sel_tmp9_fu_623_p2();
    void thread_sel_tmp_fu_591_p2();
    void thread_size_V_fu_546_p1();
    void thread_tmp_10_cast_fu_786_p1();
    void thread_tmp_10_fu_780_p2();
    void thread_tmp_11_fu_790_p2();
    void thread_tmp_12_fu_1138_p2();
    void thread_tmp_13_fu_1171_p2();
    void thread_tmp_14_fu_796_p2();
    void thread_tmp_15_cast_fu_713_p1();
    void thread_tmp_15_fu_813_p1();
    void thread_tmp_16_fu_823_p1();
    void thread_tmp_17_fu_834_p2();
    void thread_tmp_18_fu_1176_p2();
    void thread_tmp_19_fu_1196_p2();
    void thread_tmp_20_fu_1105_p1();
    void thread_tmp_21_fu_1222_p1();
    void thread_tmp_22_fu_849_p1();
    void thread_tmp_23_fu_769_p3();
    void thread_tmp_24_fu_801_p1();
    void thread_tmp_25_fu_1280_p2();
    void thread_tmp_27_fu_733_p1();
    void thread_tmp_28_cast_fu_1190_p1();
    void thread_tmp_29_fu_987_p2();
    void thread_tmp_30_fu_737_p4();
    void thread_tmp_31_fu_936_p2();
    void thread_tmp_32_fu_942_p1();
    void thread_tmp_33_cast_fu_1193_p1();
    void thread_tmp_33_fu_946_p1();
    void thread_tmp_34_fu_955_p1();
    void thread_tmp_35_fu_964_p2();
    void thread_tmp_36_fu_1316_p5();
    void thread_tmp_37_fu_1330_p5();
    void thread_tmp_38_fu_1352_p1();
    void thread_tmp_40_fu_972_p1();
    void thread_tmp_41_fu_1017_p5();
    void thread_tmp_42_fu_1031_p5();
    void thread_tmp_43_fu_1053_p1();
    void thread_tmp_44_fu_1388_p2();
    void thread_tmp_45_fu_1505_p1();
    void thread_tmp_46_fu_1235_p3();
    void thread_tmp_47_fu_1515_p1();
    void thread_tmp_53_fu_1258_p4();
    void thread_tmp_54_fu_864_p4();
    void thread_tmp_55_fu_1286_p4();
    void thread_tmp_56_fu_924_p3();
    void thread_tmp_57_fu_932_p1();
    void thread_tmp_58_fu_880_p1();
    void thread_tmp_59_fu_1302_p1();
    void thread_tmp_5_fu_1132_p2();
    void thread_tmp_60_fu_1368_p1();
    void thread_tmp_63_fu_999_p1();
    void thread_tmp_64_fu_1003_p1();
    void thread_tmp_66_fu_1453_p1();
    void thread_tmp_6_fu_723_p2();
    void thread_tmp_7_fu_586_p2();
    void thread_tmp_8_fu_729_p1();
    void thread_tmp_9_fu_777_p1();
    void thread_tmp_V_fu_1142_p2();
    void thread_tmp_fu_570_p2();
    void thread_tmp_s_fu_576_p2();
    void thread_tmp_size_V_fu_554_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif