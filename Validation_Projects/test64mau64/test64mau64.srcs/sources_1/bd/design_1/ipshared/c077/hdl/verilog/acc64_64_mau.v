// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="acc64_64_mau,hls_ip_2018_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=5.032500,HLS_SYN_LAT=-1,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=162,HLS_SYN_LUT=438,HLS_VERSION=2018_2}" *)

module acc64_64_mau (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        alloc_1_size,
        alloc_1_size_ap_vld,
        alloc_1_size_ap_ack,
        alloc_1_addr,
        alloc_1_addr_ap_vld,
        alloc_1_addr_ap_ack,
        alloc_1_free_target,
        alloc_1_free_target_ap_vld,
        alloc_1_free_target_ap_ack,
        alloc_1_cmd,
        alloc_1_cmd_ap_vld,
        alloc_1_cmd_ap_ack,
        ap_return
);

parameter    ap_ST_fsm_state1 = 4'd1;
parameter    ap_ST_fsm_state2 = 4'd2;
parameter    ap_ST_fsm_state3 = 4'd4;
parameter    ap_ST_fsm_state4 = 4'd8;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [31:0] alloc_1_size;
output   alloc_1_size_ap_vld;
input   alloc_1_size_ap_ack;
input  [31:0] alloc_1_addr;
input   alloc_1_addr_ap_vld;
output   alloc_1_addr_ap_ack;
output  [31:0] alloc_1_free_target;
output   alloc_1_free_target_ap_vld;
input   alloc_1_free_target_ap_ack;
output  [7:0] alloc_1_cmd;
output   alloc_1_cmd_ap_vld;
input   alloc_1_cmd_ap_ack;
output  [31:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[31:0] alloc_1_size;
reg alloc_1_size_ap_vld;
reg alloc_1_addr_ap_ack;
reg[31:0] alloc_1_free_target;
reg alloc_1_free_target_ap_vld;
reg[7:0] alloc_1_cmd;
reg alloc_1_cmd_ap_vld;

(* fsm_encoding = "none" *) reg   [3:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [6:0] req_cmd_address0;
reg    req_cmd_ce0;
wire   [1:0] req_cmd_q0;
wire   [6:0] req_list_address0;
reg    req_list_ce0;
wire   [5:0] req_list_q0;
wire    ap_CS_fsm_state2;
reg   [5:0] size_reg_180;
wire    ap_CS_fsm_state3;
wire   [0:0] tmp_1_fu_120_p2;
reg   [0:0] tmp_1_reg_186;
wire   [31:0] i_1_fu_126_p2;
reg   [31:0] i_1_reg_190;
wire   [0:0] tmp_3_fu_132_p2;
reg   [0:0] tmp_3_reg_195;
wire   [0:0] tmp_5_fu_144_p2;
reg   [0:0] tmp_5_reg_199;
wire    grp_HLS_malloc_1_s_fu_84_ap_start;
wire    grp_HLS_malloc_1_s_fu_84_ap_done;
wire    grp_HLS_malloc_1_s_fu_84_ap_idle;
wire    grp_HLS_malloc_1_s_fu_84_ap_ready;
wire   [31:0] grp_HLS_malloc_1_s_fu_84_allocator_size;
wire    grp_HLS_malloc_1_s_fu_84_allocator_size_ap_vld;
wire    grp_HLS_malloc_1_s_fu_84_allocator_addr_ap_ack;
wire   [31:0] grp_HLS_malloc_1_s_fu_84_allocator_free_targe;
wire    grp_HLS_malloc_1_s_fu_84_allocator_free_targe_ap_vld;
wire   [7:0] grp_HLS_malloc_1_s_fu_84_allocator_cmd;
wire    grp_HLS_malloc_1_s_fu_84_allocator_cmd_ap_vld;
wire   [31:0] grp_HLS_malloc_1_s_fu_84_ap_return;
wire    grp_HLS_free_1_s_fu_98_ap_start;
wire    grp_HLS_free_1_s_fu_98_ap_done;
wire    grp_HLS_free_1_s_fu_98_ap_idle;
wire    grp_HLS_free_1_s_fu_98_ap_ready;
wire   [31:0] grp_HLS_free_1_s_fu_98_allocator_size;
wire    grp_HLS_free_1_s_fu_98_allocator_size_ap_vld;
wire   [31:0] grp_HLS_free_1_s_fu_98_allocator_free_targe;
wire    grp_HLS_free_1_s_fu_98_allocator_free_targe_ap_vld;
wire   [7:0] grp_HLS_free_1_s_fu_98_allocator_cmd;
wire    grp_HLS_free_1_s_fu_98_allocator_cmd_ap_vld;
reg  signed [31:0] i_reg_72;
wire    ap_CS_fsm_state4;
reg    ap_predicate_op36_call_state4;
reg    ap_block_state4_on_subcall_done;
reg    grp_HLS_malloc_1_s_fu_84_ap_start_reg;
reg    grp_HLS_free_1_s_fu_98_ap_start_reg;
wire  signed [63:0] tmp_fu_110_p1;
reg   [31:0] r_fu_42;
wire  signed [32:0] tmp_cast_fu_116_p1;
wire   [32:0] tmp_4_fu_138_p2;
reg   [3:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 4'd1;
#0 grp_HLS_malloc_1_s_fu_84_ap_start_reg = 1'b0;
#0 grp_HLS_free_1_s_fu_98_ap_start_reg = 1'b0;
end

acc64_64_mau_req_bkb #(
    .DataWidth( 2 ),
    .AddressRange( 128 ),
    .AddressWidth( 7 ))
req_cmd_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(req_cmd_address0),
    .ce0(req_cmd_ce0),
    .q0(req_cmd_q0)
);

acc64_64_mau_req_cud #(
    .DataWidth( 6 ),
    .AddressRange( 128 ),
    .AddressWidth( 7 ))
req_list_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(req_list_address0),
    .ce0(req_list_ce0),
    .q0(req_list_q0)
);

HLS_malloc_1_s grp_HLS_malloc_1_s_fu_84(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_HLS_malloc_1_s_fu_84_ap_start),
    .ap_done(grp_HLS_malloc_1_s_fu_84_ap_done),
    .ap_idle(grp_HLS_malloc_1_s_fu_84_ap_idle),
    .ap_ready(grp_HLS_malloc_1_s_fu_84_ap_ready),
    .size(size_reg_180),
    .allocator_size(grp_HLS_malloc_1_s_fu_84_allocator_size),
    .allocator_size_ap_vld(grp_HLS_malloc_1_s_fu_84_allocator_size_ap_vld),
    .allocator_size_ap_ack(alloc_1_size_ap_ack),
    .allocator_addr(alloc_1_addr),
    .allocator_addr_ap_vld(alloc_1_addr_ap_vld),
    .allocator_addr_ap_ack(grp_HLS_malloc_1_s_fu_84_allocator_addr_ap_ack),
    .allocator_free_targe(grp_HLS_malloc_1_s_fu_84_allocator_free_targe),
    .allocator_free_targe_ap_vld(grp_HLS_malloc_1_s_fu_84_allocator_free_targe_ap_vld),
    .allocator_free_targe_ap_ack(alloc_1_free_target_ap_ack),
    .allocator_cmd(grp_HLS_malloc_1_s_fu_84_allocator_cmd),
    .allocator_cmd_ap_vld(grp_HLS_malloc_1_s_fu_84_allocator_cmd_ap_vld),
    .allocator_cmd_ap_ack(alloc_1_cmd_ap_ack),
    .ap_return(grp_HLS_malloc_1_s_fu_84_ap_return)
);

HLS_free_1_s grp_HLS_free_1_s_fu_98(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_HLS_free_1_s_fu_98_ap_start),
    .ap_done(grp_HLS_free_1_s_fu_98_ap_done),
    .ap_idle(grp_HLS_free_1_s_fu_98_ap_idle),
    .ap_ready(grp_HLS_free_1_s_fu_98_ap_ready),
    .free_target(size_reg_180),
    .allocator_size(grp_HLS_free_1_s_fu_98_allocator_size),
    .allocator_size_ap_vld(grp_HLS_free_1_s_fu_98_allocator_size_ap_vld),
    .allocator_size_ap_ack(alloc_1_size_ap_ack),
    .allocator_free_targe(grp_HLS_free_1_s_fu_98_allocator_free_targe),
    .allocator_free_targe_ap_vld(grp_HLS_free_1_s_fu_98_allocator_free_targe_ap_vld),
    .allocator_free_targe_ap_ack(alloc_1_free_target_ap_ack),
    .allocator_cmd(grp_HLS_free_1_s_fu_98_allocator_cmd),
    .allocator_cmd_ap_vld(grp_HLS_free_1_s_fu_98_allocator_cmd_ap_vld),
    .allocator_cmd_ap_ack(alloc_1_cmd_ap_ack)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_HLS_free_1_s_fu_98_ap_start_reg <= 1'b0;
    end else begin
        if (((tmp_3_fu_132_p2 == 1'd1) & (tmp_1_fu_120_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
            grp_HLS_free_1_s_fu_98_ap_start_reg <= 1'b1;
        end else if ((grp_HLS_free_1_s_fu_98_ap_ready == 1'b1)) begin
            grp_HLS_free_1_s_fu_98_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_HLS_malloc_1_s_fu_84_ap_start_reg <= 1'b0;
    end else begin
        if (((tmp_1_fu_120_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
            grp_HLS_malloc_1_s_fu_84_ap_start_reg <= 1'b1;
        end else if ((grp_HLS_malloc_1_s_fu_84_ap_ready == 1'b1)) begin
            grp_HLS_malloc_1_s_fu_84_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state4) & (1'b0 == ap_block_state4_on_subcall_done) & ((tmp_5_reg_199 == 1'd0) | (tmp_3_reg_195 == 1'd1) | (tmp_1_reg_186 == 1'd1)))) begin
        i_reg_72 <= i_1_reg_190;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        i_reg_72 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_1_reg_186 == 1'd1) & (1'b1 == ap_CS_fsm_state4) & (1'b0 == ap_block_state4_on_subcall_done))) begin
        r_fu_42 <= grp_HLS_malloc_1_s_fu_84_ap_return;
    end else if (((tmp_3_fu_132_p2 == 1'd1) & (tmp_1_fu_120_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        r_fu_42 <= 32'd1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        i_1_reg_190 <= i_1_fu_126_p2;
        size_reg_180 <= req_list_q0;
        tmp_1_reg_186 <= tmp_1_fu_120_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_1_fu_120_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        tmp_3_reg_195 <= tmp_3_fu_132_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_3_fu_132_p2 == 1'd0) & (tmp_1_fu_120_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        tmp_5_reg_199 <= tmp_5_fu_144_p2;
    end
end

always @ (*) begin
    if (((tmp_1_reg_186 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
        alloc_1_addr_ap_ack = grp_HLS_malloc_1_s_fu_84_allocator_addr_ap_ack;
    end else begin
        alloc_1_addr_ap_ack = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        if (((grp_HLS_free_1_s_fu_98_allocator_cmd_ap_vld == 1'b1) & (ap_predicate_op36_call_state4 == 1'b1))) begin
            alloc_1_cmd = grp_HLS_free_1_s_fu_98_allocator_cmd;
        end else if (((tmp_1_reg_186 == 1'd1) & (grp_HLS_malloc_1_s_fu_84_allocator_cmd_ap_vld == 1'b1))) begin
            alloc_1_cmd = grp_HLS_malloc_1_s_fu_84_allocator_cmd;
        end else begin
            alloc_1_cmd = 'bx;
        end
    end else begin
        alloc_1_cmd = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        if ((ap_predicate_op36_call_state4 == 1'b1)) begin
            alloc_1_cmd_ap_vld = grp_HLS_free_1_s_fu_98_allocator_cmd_ap_vld;
        end else if ((tmp_1_reg_186 == 1'd1)) begin
            alloc_1_cmd_ap_vld = grp_HLS_malloc_1_s_fu_84_allocator_cmd_ap_vld;
        end else begin
            alloc_1_cmd_ap_vld = 1'b0;
        end
    end else begin
        alloc_1_cmd_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        if (((grp_HLS_free_1_s_fu_98_allocator_free_targe_ap_vld == 1'b1) & (ap_predicate_op36_call_state4 == 1'b1))) begin
            alloc_1_free_target = grp_HLS_free_1_s_fu_98_allocator_free_targe;
        end else if (((tmp_1_reg_186 == 1'd1) & (grp_HLS_malloc_1_s_fu_84_allocator_free_targe_ap_vld == 1'b1))) begin
            alloc_1_free_target = grp_HLS_malloc_1_s_fu_84_allocator_free_targe;
        end else begin
            alloc_1_free_target = 'bx;
        end
    end else begin
        alloc_1_free_target = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        if ((ap_predicate_op36_call_state4 == 1'b1)) begin
            alloc_1_free_target_ap_vld = grp_HLS_free_1_s_fu_98_allocator_free_targe_ap_vld;
        end else if ((tmp_1_reg_186 == 1'd1)) begin
            alloc_1_free_target_ap_vld = grp_HLS_malloc_1_s_fu_84_allocator_free_targe_ap_vld;
        end else begin
            alloc_1_free_target_ap_vld = 1'b0;
        end
    end else begin
        alloc_1_free_target_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        if (((grp_HLS_free_1_s_fu_98_allocator_size_ap_vld == 1'b1) & (ap_predicate_op36_call_state4 == 1'b1))) begin
            alloc_1_size = grp_HLS_free_1_s_fu_98_allocator_size;
        end else if (((tmp_1_reg_186 == 1'd1) & (grp_HLS_malloc_1_s_fu_84_allocator_size_ap_vld == 1'b1))) begin
            alloc_1_size = grp_HLS_malloc_1_s_fu_84_allocator_size;
        end else begin
            alloc_1_size = 'bx;
        end
    end else begin
        alloc_1_size = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        if ((ap_predicate_op36_call_state4 == 1'b1)) begin
            alloc_1_size_ap_vld = grp_HLS_free_1_s_fu_98_allocator_size_ap_vld;
        end else if ((tmp_1_reg_186 == 1'd1)) begin
            alloc_1_size_ap_vld = grp_HLS_malloc_1_s_fu_84_allocator_size_ap_vld;
        end else begin
            alloc_1_size_ap_vld = 1'b0;
        end
    end else begin
        alloc_1_size_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_5_fu_144_p2 == 1'd1) & (tmp_3_fu_132_p2 == 1'd0) & (tmp_1_fu_120_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_5_fu_144_p2 == 1'd1) & (tmp_3_fu_132_p2 == 1'd0) & (tmp_1_fu_120_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        req_cmd_ce0 = 1'b1;
    end else begin
        req_cmd_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        req_list_ce0 = 1'b1;
    end else begin
        req_list_ce0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state3 : begin
            if (((tmp_5_fu_144_p2 == 1'd1) & (tmp_3_fu_132_p2 == 1'd0) & (tmp_1_fu_120_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((1'b1 == ap_CS_fsm_state4) & (1'b0 == ap_block_state4_on_subcall_done) & ((tmp_5_reg_199 == 1'd0) | (tmp_3_reg_195 == 1'd1) | (tmp_1_reg_186 == 1'd1)))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

always @ (*) begin
    ap_block_state4_on_subcall_done = (((tmp_1_reg_186 == 1'd1) & (grp_HLS_malloc_1_s_fu_84_ap_done == 1'b0)) | ((grp_HLS_free_1_s_fu_98_ap_done == 1'b0) & (ap_predicate_op36_call_state4 == 1'b1)));
end

always @ (*) begin
    ap_predicate_op36_call_state4 = ((tmp_3_reg_195 == 1'd1) & (tmp_1_reg_186 == 1'd0));
end

assign ap_return = r_fu_42;

assign grp_HLS_free_1_s_fu_98_ap_start = grp_HLS_free_1_s_fu_98_ap_start_reg;

assign grp_HLS_malloc_1_s_fu_84_ap_start = grp_HLS_malloc_1_s_fu_84_ap_start_reg;

assign i_1_fu_126_p2 = ($signed(i_reg_72) + $signed(32'd1));

assign req_cmd_address0 = tmp_fu_110_p1;

assign req_list_address0 = tmp_fu_110_p1;

assign tmp_1_fu_120_p2 = ((req_cmd_q0 == 2'd2) ? 1'b1 : 1'b0);

assign tmp_3_fu_132_p2 = ((req_cmd_q0 == 2'd3) ? 1'b1 : 1'b0);

assign tmp_4_fu_138_p2 = ($signed(tmp_cast_fu_116_p1) + $signed(33'd8589934492));

assign tmp_5_fu_144_p2 = ((tmp_4_fu_138_p2 < 33'd28) ? 1'b1 : 1'b0);

assign tmp_cast_fu_116_p1 = i_reg_72;

assign tmp_fu_110_p1 = i_reg_72;

endmodule //acc64_64_mau
