// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.1
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#include "memcachedPipeline_response_f.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic memcachedPipeline_response_f::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic memcachedPipeline_response_f::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<1> memcachedPipeline_response_f::ap_ST_st1_fsm_0 = "1";
const sc_lv<32> memcachedPipeline_response_f::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<1> memcachedPipeline_response_f::ap_const_lv1_1 = "1";
const sc_lv<2> memcachedPipeline_response_f::ap_const_lv2_0 = "00";
const sc_lv<248> memcachedPipeline_response_f::ap_const_lv248_lc_1 = "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
const sc_lv<1> memcachedPipeline_response_f::ap_const_lv1_0 = "0";
const sc_lv<2> memcachedPipeline_response_f::ap_const_lv2_1 = "1";
const sc_lv<32> memcachedPipeline_response_f::ap_const_lv32_7C = "1111100";
const sc_lv<32> memcachedPipeline_response_f::ap_const_lv32_7E = "1111110";
const sc_lv<32> memcachedPipeline_response_f::ap_const_lv32_7F = "1111111";
const sc_lv<32> memcachedPipeline_response_f::ap_const_lv32_80 = "10000000";
const sc_lv<32> memcachedPipeline_response_f::ap_const_lv32_BF = "10111111";
const sc_lv<32> memcachedPipeline_response_f::ap_const_lv32_1 = "1";
const sc_lv<32> memcachedPipeline_response_f::ap_const_lv32_F7 = "11110111";
const sc_lv<32> memcachedPipeline_response_f::ap_const_lv32_7B = "1111011";

memcachedPipeline_response_f::memcachedPipeline_response_f(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_pos_reset_);
    dont_initialize();
    sensitive << ( ap_rst.pos() );
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_done_reg );
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( ap_sig_bdd_91 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( ap_sig_bdd_91 );

    SC_METHOD(thread_ap_sig_bdd_121);
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( tmp_nbwritereq_fu_102_p3 );
    sensitive << ( tmp_39_nbwritereq_fu_110_p3 );
    sensitive << ( tmp_40_nbreadreq_fu_118_p3 );
    sensitive << ( or_cond_fu_243_p2 );
    sensitive << ( tmp_s_fu_237_p2 );

    SC_METHOD(thread_ap_sig_bdd_127);
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( tmp_nbwritereq_fu_102_p3 );
    sensitive << ( tmp_39_nbwritereq_fu_110_p3 );
    sensitive << ( tmp_40_nbreadreq_fu_118_p3 );
    sensitive << ( ap_sig_bdd_91 );

    SC_METHOD(thread_ap_sig_bdd_143);
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( tmp_nbwritereq_fu_102_p3 );
    sensitive << ( tmp_39_nbwritereq_fu_110_p3 );
    sensitive << ( tmp_40_nbreadreq_fu_118_p3 );

    SC_METHOD(thread_ap_sig_bdd_20);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_216);
    sensitive << ( or_cond_fu_243_p2 );
    sensitive << ( tmp_s_fu_237_p2 );

    SC_METHOD(thread_ap_sig_bdd_217);
    sensitive << ( or_cond_fu_243_p2 );
    sensitive << ( tmp_s_fu_237_p2 );
    sensitive << ( tmp_139_fu_253_p3 );

    SC_METHOD(thread_ap_sig_bdd_220);
    sensitive << ( or_cond_fu_243_p2 );
    sensitive << ( tmp_s_fu_237_p2 );

    SC_METHOD(thread_ap_sig_bdd_91);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( valueBuffer_rf_V_V_full_n );
    sensitive << ( metadataBuffer_rf_V_V_full_n );
    sensitive << ( merger2responseFormatter_V_empty_n );
    sensitive << ( tmp_nbwritereq_fu_102_p3 );
    sensitive << ( tmp_39_nbwritereq_fu_110_p3 );
    sensitive << ( tmp_40_nbreadreq_fu_118_p3 );
    sensitive << ( or_cond_fu_243_p2 );
    sensitive << ( tmp_s_fu_237_p2 );
    sensitive << ( tmp_139_fu_253_p3 );
    sensitive << ( tmp_90_fu_280_p2 );
    sensitive << ( tmp_137_fu_206_p3 );

    SC_METHOD(thread_ap_sig_cseq_ST_st1_fsm_0);
    sensitive << ( ap_sig_bdd_20 );

    SC_METHOD(thread_inWordCounter_V_flag_3_phi_fu_170_p6);
    sensitive << ( or_cond_fu_243_p2 );
    sensitive << ( p_inWordCounter_V_flag_fu_293_p2 );
    sensitive << ( ap_sig_bdd_220 );
    sensitive << ( ap_sig_bdd_216 );
    sensitive << ( ap_sig_bdd_143 );

    SC_METHOD(thread_inWordCounter_V_flag_phi_fu_149_p4);
    sensitive << ( tmp_139_fu_253_p3 );
    sensitive << ( ap_sig_bdd_121 );

    SC_METHOD(thread_inWordCounter_V_new_3_phi_fu_183_p6);
    sensitive << ( or_cond_fu_243_p2 );
    sensitive << ( p_inWordCounter_V_new_fu_300_p3 );
    sensitive << ( ap_sig_bdd_216 );
    sensitive << ( ap_sig_bdd_143 );

    SC_METHOD(thread_merger2responseFormatter_V_read);
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( tmp_nbwritereq_fu_102_p3 );
    sensitive << ( tmp_39_nbwritereq_fu_110_p3 );
    sensitive << ( tmp_40_nbreadreq_fu_118_p3 );
    sensitive << ( ap_sig_bdd_91 );

    SC_METHOD(thread_metadataBuffer_rf_V_V_din);
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( bf_metadataTempBuffer_V );
    sensitive << ( tmp_nbwritereq_fu_102_p3 );
    sensitive << ( tmp_39_nbwritereq_fu_110_p3 );
    sensitive << ( tmp_40_nbreadreq_fu_118_p3 );
    sensitive << ( or_cond_fu_243_p2 );
    sensitive << ( tmp_s_fu_237_p2 );
    sensitive << ( tmp_139_fu_253_p3 );
    sensitive << ( tmp_90_fu_280_p2 );
    sensitive << ( ap_sig_bdd_91 );
    sensitive << ( tmp_135_fu_194_p1 );

    SC_METHOD(thread_metadataBuffer_rf_V_V_write);
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( tmp_nbwritereq_fu_102_p3 );
    sensitive << ( tmp_39_nbwritereq_fu_110_p3 );
    sensitive << ( tmp_40_nbreadreq_fu_118_p3 );
    sensitive << ( or_cond_fu_243_p2 );
    sensitive << ( tmp_s_fu_237_p2 );
    sensitive << ( tmp_139_fu_253_p3 );
    sensitive << ( tmp_90_fu_280_p2 );
    sensitive << ( ap_sig_bdd_91 );

    SC_METHOD(thread_or_cond_fu_243_p2);
    sensitive << ( tmp_s_fu_237_p2 );
    sensitive << ( tmp_136_fu_198_p3 );

    SC_METHOD(thread_p_Result_2_fu_261_p5);
    sensitive << ( bf_metadataTempBuffer_V );
    sensitive << ( tmp_135_fu_194_p1 );

    SC_METHOD(thread_p_Result_s_fu_309_p5);
    sensitive << ( bf_metadataTempBuffer_V );
    sensitive << ( tmp_135_fu_194_p1 );

    SC_METHOD(thread_p_inWordCounter_V_flag_fu_293_p2);
    sensitive << ( inWordCounter_V_flag_phi_fu_149_p4 );
    sensitive << ( tmp_138_fu_214_p3 );

    SC_METHOD(thread_p_inWordCounter_V_new_fu_300_p3);
    sensitive << ( tmp_91_fu_286_p2 );
    sensitive << ( tmp_138_fu_214_p3 );

    SC_METHOD(thread_tmp_135_fu_194_p1);
    sensitive << ( merger2responseFormatter_V_dout );

    SC_METHOD(thread_tmp_136_fu_198_p3);
    sensitive << ( merger2responseFormatter_V_dout );

    SC_METHOD(thread_tmp_137_fu_206_p3);
    sensitive << ( merger2responseFormatter_V_dout );

    SC_METHOD(thread_tmp_138_fu_214_p3);
    sensitive << ( merger2responseFormatter_V_dout );

    SC_METHOD(thread_tmp_139_fu_253_p3);
    sensitive << ( inWordCounter_V );

    SC_METHOD(thread_tmp_39_nbwritereq_fu_110_p3);
    sensitive << ( metadataBuffer_rf_V_V_full_n );

    SC_METHOD(thread_tmp_40_nbreadreq_fu_118_p3);
    sensitive << ( merger2responseFormatter_V_empty_n );

    SC_METHOD(thread_tmp_90_fu_280_p2);
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( inWordCounter_V );
    sensitive << ( tmp_nbwritereq_fu_102_p3 );
    sensitive << ( tmp_39_nbwritereq_fu_110_p3 );
    sensitive << ( tmp_40_nbreadreq_fu_118_p3 );
    sensitive << ( or_cond_fu_243_p2 );
    sensitive << ( tmp_s_fu_237_p2 );
    sensitive << ( tmp_139_fu_253_p3 );
    sensitive << ( ap_sig_bdd_91 );

    SC_METHOD(thread_tmp_91_fu_286_p2);
    sensitive << ( inWordCounter_V );

    SC_METHOD(thread_tmp_nbwritereq_fu_102_p3);
    sensitive << ( valueBuffer_rf_V_V_full_n );

    SC_METHOD(thread_tmp_s_fu_237_p2);
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( inWordCounter_V );
    sensitive << ( tmp_nbwritereq_fu_102_p3 );
    sensitive << ( tmp_39_nbwritereq_fu_110_p3 );
    sensitive << ( tmp_40_nbreadreq_fu_118_p3 );
    sensitive << ( ap_sig_bdd_91 );

    SC_METHOD(thread_valueBuffer_rf_V_V_din);
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( merger2responseFormatter_V_dout );
    sensitive << ( tmp_nbwritereq_fu_102_p3 );
    sensitive << ( tmp_39_nbwritereq_fu_110_p3 );
    sensitive << ( tmp_40_nbreadreq_fu_118_p3 );
    sensitive << ( or_cond_fu_243_p2 );
    sensitive << ( tmp_s_fu_237_p2 );
    sensitive << ( tmp_137_fu_206_p3 );
    sensitive << ( ap_sig_bdd_91 );

    SC_METHOD(thread_valueBuffer_rf_V_V_write);
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( tmp_nbwritereq_fu_102_p3 );
    sensitive << ( tmp_39_nbwritereq_fu_110_p3 );
    sensitive << ( tmp_40_nbreadreq_fu_118_p3 );
    sensitive << ( or_cond_fu_243_p2 );
    sensitive << ( tmp_s_fu_237_p2 );
    sensitive << ( tmp_137_fu_206_p3 );
    sensitive << ( ap_sig_bdd_91 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_sig_bdd_91 );

    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "1";
    inWordCounter_V = "00";
    bf_metadataTempBuffer_V = "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "memcachedPipeline_response_f_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, valueBuffer_rf_V_V_din, "(port)valueBuffer_rf_V_V_din");
    sc_trace(mVcdFile, valueBuffer_rf_V_V_full_n, "(port)valueBuffer_rf_V_V_full_n");
    sc_trace(mVcdFile, valueBuffer_rf_V_V_write, "(port)valueBuffer_rf_V_V_write");
    sc_trace(mVcdFile, metadataBuffer_rf_V_V_din, "(port)metadataBuffer_rf_V_V_din");
    sc_trace(mVcdFile, metadataBuffer_rf_V_V_full_n, "(port)metadataBuffer_rf_V_V_full_n");
    sc_trace(mVcdFile, metadataBuffer_rf_V_V_write, "(port)metadataBuffer_rf_V_V_write");
    sc_trace(mVcdFile, merger2responseFormatter_V_dout, "(port)merger2responseFormatter_V_dout");
    sc_trace(mVcdFile, merger2responseFormatter_V_empty_n, "(port)merger2responseFormatter_V_empty_n");
    sc_trace(mVcdFile, merger2responseFormatter_V_read, "(port)merger2responseFormatter_V_read");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_done_reg, "ap_done_reg");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st1_fsm_0, "ap_sig_cseq_ST_st1_fsm_0");
    sc_trace(mVcdFile, ap_sig_bdd_20, "ap_sig_bdd_20");
    sc_trace(mVcdFile, inWordCounter_V, "inWordCounter_V");
    sc_trace(mVcdFile, bf_metadataTempBuffer_V, "bf_metadataTempBuffer_V");
    sc_trace(mVcdFile, inWordCounter_V_flag_phi_fu_149_p4, "inWordCounter_V_flag_phi_fu_149_p4");
    sc_trace(mVcdFile, tmp_nbwritereq_fu_102_p3, "tmp_nbwritereq_fu_102_p3");
    sc_trace(mVcdFile, tmp_39_nbwritereq_fu_110_p3, "tmp_39_nbwritereq_fu_110_p3");
    sc_trace(mVcdFile, tmp_40_nbreadreq_fu_118_p3, "tmp_40_nbreadreq_fu_118_p3");
    sc_trace(mVcdFile, or_cond_fu_243_p2, "or_cond_fu_243_p2");
    sc_trace(mVcdFile, tmp_s_fu_237_p2, "tmp_s_fu_237_p2");
    sc_trace(mVcdFile, tmp_139_fu_253_p3, "tmp_139_fu_253_p3");
    sc_trace(mVcdFile, tmp_90_fu_280_p2, "tmp_90_fu_280_p2");
    sc_trace(mVcdFile, tmp_137_fu_206_p3, "tmp_137_fu_206_p3");
    sc_trace(mVcdFile, ap_sig_bdd_91, "ap_sig_bdd_91");
    sc_trace(mVcdFile, tmp_91_fu_286_p2, "tmp_91_fu_286_p2");
    sc_trace(mVcdFile, inWordCounter_V_flag_3_phi_fu_170_p6, "inWordCounter_V_flag_3_phi_fu_170_p6");
    sc_trace(mVcdFile, p_inWordCounter_V_flag_fu_293_p2, "p_inWordCounter_V_flag_fu_293_p2");
    sc_trace(mVcdFile, inWordCounter_V_new_3_phi_fu_183_p6, "inWordCounter_V_new_3_phi_fu_183_p6");
    sc_trace(mVcdFile, p_inWordCounter_V_new_fu_300_p3, "p_inWordCounter_V_new_fu_300_p3");
    sc_trace(mVcdFile, p_Result_2_fu_261_p5, "p_Result_2_fu_261_p5");
    sc_trace(mVcdFile, p_Result_s_fu_309_p5, "p_Result_s_fu_309_p5");
    sc_trace(mVcdFile, tmp_136_fu_198_p3, "tmp_136_fu_198_p3");
    sc_trace(mVcdFile, tmp_135_fu_194_p1, "tmp_135_fu_194_p1");
    sc_trace(mVcdFile, tmp_138_fu_214_p3, "tmp_138_fu_214_p3");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_sig_bdd_217, "ap_sig_bdd_217");
    sc_trace(mVcdFile, ap_sig_bdd_127, "ap_sig_bdd_127");
    sc_trace(mVcdFile, ap_sig_bdd_220, "ap_sig_bdd_220");
    sc_trace(mVcdFile, ap_sig_bdd_216, "ap_sig_bdd_216");
    sc_trace(mVcdFile, ap_sig_bdd_143, "ap_sig_bdd_143");
    sc_trace(mVcdFile, ap_sig_bdd_121, "ap_sig_bdd_121");
#endif

    }
}

memcachedPipeline_response_f::~memcachedPipeline_response_f() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void memcachedPipeline_response_f::thread_ap_clk_pos_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_st1_fsm_0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                    !ap_sig_bdd_91.read())) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        bf_metadataTempBuffer_V = ap_const_lv248_lc_1;
    } else {
        if (ap_sig_bdd_127.read()) {
            if (!esl_seteq<1,1,1>(ap_const_lv1_0, or_cond_fu_243_p2.read())) {
                bf_metadataTempBuffer_V = p_Result_s_fu_309_p5.read();
            } else if (ap_sig_bdd_217.read()) {
                bf_metadataTempBuffer_V = p_Result_2_fu_261_p5.read();
            }
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        inWordCounter_V = ap_const_lv2_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
             !esl_seteq<1,1,1>(tmp_nbwritereq_fu_102_p3.read(), ap_const_lv1_0) && 
             !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_39_nbwritereq_fu_110_p3.read()) && 
             !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_40_nbreadreq_fu_118_p3.read()) && 
             !ap_sig_bdd_91.read() && 
             !esl_seteq<1,1,1>(ap_const_lv1_0, inWordCounter_V_flag_3_phi_fu_170_p6.read()))) {
            inWordCounter_V = inWordCounter_V_new_3_phi_fu_183_p6.read();
        }
    }
}

void memcachedPipeline_response_f::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_done_reg.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !ap_sig_bdd_91.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void memcachedPipeline_response_f::thread_ap_idle() {
    if ((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void memcachedPipeline_response_f::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
         !ap_sig_bdd_91.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void memcachedPipeline_response_f::thread_ap_sig_bdd_121() {
    ap_sig_bdd_121 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && !esl_seteq<1,1,1>(tmp_nbwritereq_fu_102_p3.read(), ap_const_lv1_0) && !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_39_nbwritereq_fu_110_p3.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_40_nbreadreq_fu_118_p3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, or_cond_fu_243_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_s_fu_237_p2.read()));
}

void memcachedPipeline_response_f::thread_ap_sig_bdd_127() {
    ap_sig_bdd_127 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && !esl_seteq<1,1,1>(tmp_nbwritereq_fu_102_p3.read(), ap_const_lv1_0) && !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_39_nbwritereq_fu_110_p3.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_40_nbreadreq_fu_118_p3.read()) && !ap_sig_bdd_91.read());
}

void memcachedPipeline_response_f::thread_ap_sig_bdd_143() {
    ap_sig_bdd_143 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && !esl_seteq<1,1,1>(tmp_nbwritereq_fu_102_p3.read(), ap_const_lv1_0) && !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_39_nbwritereq_fu_110_p3.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_40_nbreadreq_fu_118_p3.read()));
}

void memcachedPipeline_response_f::thread_ap_sig_bdd_20() {
    ap_sig_bdd_20 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void memcachedPipeline_response_f::thread_ap_sig_bdd_216() {
    ap_sig_bdd_216 = (esl_seteq<1,1,1>(ap_const_lv1_0, or_cond_fu_243_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_s_fu_237_p2.read()));
}

void memcachedPipeline_response_f::thread_ap_sig_bdd_217() {
    ap_sig_bdd_217 = (esl_seteq<1,1,1>(ap_const_lv1_0, or_cond_fu_243_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_s_fu_237_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_139_fu_253_p3.read()));
}

void memcachedPipeline_response_f::thread_ap_sig_bdd_220() {
    ap_sig_bdd_220 = (esl_seteq<1,1,1>(ap_const_lv1_0, or_cond_fu_243_p2.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_s_fu_237_p2.read()));
}

void memcachedPipeline_response_f::thread_ap_sig_bdd_91() {
    ap_sig_bdd_91 = ((esl_seteq<1,1,1>(merger2responseFormatter_V_empty_n.read(), ap_const_logic_0) && 
  !esl_seteq<1,1,1>(tmp_nbwritereq_fu_102_p3.read(), ap_const_lv1_0) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_39_nbwritereq_fu_110_p3.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_40_nbreadreq_fu_118_p3.read())) || (!esl_seteq<1,1,1>(tmp_nbwritereq_fu_102_p3.read(), ap_const_lv1_0) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_39_nbwritereq_fu_110_p3.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_40_nbreadreq_fu_118_p3.read()) && 
  esl_seteq<1,1,1>(metadataBuffer_rf_V_V_full_n.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, or_cond_fu_243_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_s_fu_237_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_139_fu_253_p3.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_90_fu_280_p2.read())) || (!esl_seteq<1,1,1>(tmp_nbwritereq_fu_102_p3.read(), ap_const_lv1_0) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_39_nbwritereq_fu_110_p3.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_40_nbreadreq_fu_118_p3.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, or_cond_fu_243_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_s_fu_237_p2.read()) && 
  esl_seteq<1,1,1>(valueBuffer_rf_V_V_full_n.read(), ap_const_logic_0) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_137_fu_206_p3.read())) || (!esl_seteq<1,1,1>(tmp_nbwritereq_fu_102_p3.read(), ap_const_lv1_0) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_39_nbwritereq_fu_110_p3.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_40_nbreadreq_fu_118_p3.read()) && 
  esl_seteq<1,1,1>(valueBuffer_rf_V_V_full_n.read(), ap_const_logic_0) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_137_fu_206_p3.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, or_cond_fu_243_p2.read())) || esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void memcachedPipeline_response_f::thread_ap_sig_cseq_ST_st1_fsm_0() {
    if (ap_sig_bdd_20.read()) {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    }
}

void memcachedPipeline_response_f::thread_inWordCounter_V_flag_3_phi_fu_170_p6() {
    if (ap_sig_bdd_143.read()) {
        if (ap_sig_bdd_216.read()) {
            inWordCounter_V_flag_3_phi_fu_170_p6 = p_inWordCounter_V_flag_fu_293_p2.read();
        } else if (ap_sig_bdd_220.read()) {
            inWordCounter_V_flag_3_phi_fu_170_p6 = ap_const_lv1_0;
        } else if (!esl_seteq<1,1,1>(ap_const_lv1_0, or_cond_fu_243_p2.read())) {
            inWordCounter_V_flag_3_phi_fu_170_p6 = ap_const_lv1_1;
        } else {
            inWordCounter_V_flag_3_phi_fu_170_p6 = "X";
        }
    } else {
        inWordCounter_V_flag_3_phi_fu_170_p6 = "X";
    }
}

void memcachedPipeline_response_f::thread_inWordCounter_V_flag_phi_fu_149_p4() {
    if (ap_sig_bdd_121.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, tmp_139_fu_253_p3.read())) {
            inWordCounter_V_flag_phi_fu_149_p4 = ap_const_lv1_0;
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_139_fu_253_p3.read())) {
            inWordCounter_V_flag_phi_fu_149_p4 = ap_const_lv1_1;
        } else {
            inWordCounter_V_flag_phi_fu_149_p4 = "X";
        }
    } else {
        inWordCounter_V_flag_phi_fu_149_p4 = "X";
    }
}

void memcachedPipeline_response_f::thread_inWordCounter_V_new_3_phi_fu_183_p6() {
    if (ap_sig_bdd_143.read()) {
        if (ap_sig_bdd_216.read()) {
            inWordCounter_V_new_3_phi_fu_183_p6 = p_inWordCounter_V_new_fu_300_p3.read();
        } else if (!esl_seteq<1,1,1>(ap_const_lv1_0, or_cond_fu_243_p2.read())) {
            inWordCounter_V_new_3_phi_fu_183_p6 = ap_const_lv2_1;
        } else {
            inWordCounter_V_new_3_phi_fu_183_p6 =  (sc_lv<2>) ("XX");
        }
    } else {
        inWordCounter_V_new_3_phi_fu_183_p6 =  (sc_lv<2>) ("XX");
    }
}

void memcachedPipeline_response_f::thread_merger2responseFormatter_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
         !esl_seteq<1,1,1>(tmp_nbwritereq_fu_102_p3.read(), ap_const_lv1_0) && 
         !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_39_nbwritereq_fu_110_p3.read()) && 
         !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_40_nbreadreq_fu_118_p3.read()) && 
         !ap_sig_bdd_91.read())) {
        merger2responseFormatter_V_read = ap_const_logic_1;
    } else {
        merger2responseFormatter_V_read = ap_const_logic_0;
    }
}

void memcachedPipeline_response_f::thread_metadataBuffer_rf_V_V_din() {
    metadataBuffer_rf_V_V_din = esl_partset<248,248,124,32,32>(bf_metadataTempBuffer_V.read(), tmp_135_fu_194_p1.read(), ap_const_lv32_7C, ap_const_lv32_F7);
}

void memcachedPipeline_response_f::thread_metadataBuffer_rf_V_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
         !esl_seteq<1,1,1>(tmp_nbwritereq_fu_102_p3.read(), ap_const_lv1_0) && 
         !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_39_nbwritereq_fu_110_p3.read()) && 
         !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_40_nbreadreq_fu_118_p3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, or_cond_fu_243_p2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_s_fu_237_p2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_139_fu_253_p3.read()) && 
         !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_90_fu_280_p2.read()) && 
         !ap_sig_bdd_91.read())) {
        metadataBuffer_rf_V_V_write = ap_const_logic_1;
    } else {
        metadataBuffer_rf_V_V_write = ap_const_logic_0;
    }
}

void memcachedPipeline_response_f::thread_or_cond_fu_243_p2() {
    or_cond_fu_243_p2 = (tmp_136_fu_198_p3.read() & tmp_s_fu_237_p2.read());
}

void memcachedPipeline_response_f::thread_p_Result_2_fu_261_p5() {
    p_Result_2_fu_261_p5 = esl_partset<248,248,124,32,32>(bf_metadataTempBuffer_V.read(), tmp_135_fu_194_p1.read(), ap_const_lv32_7C, ap_const_lv32_F7);
}

void memcachedPipeline_response_f::thread_p_Result_s_fu_309_p5() {
    p_Result_s_fu_309_p5 = esl_partset<248,248,124,32,32>(bf_metadataTempBuffer_V.read(), tmp_135_fu_194_p1.read(), ap_const_lv32_0, ap_const_lv32_7B);
}

void memcachedPipeline_response_f::thread_p_inWordCounter_V_flag_fu_293_p2() {
    p_inWordCounter_V_flag_fu_293_p2 = (tmp_138_fu_214_p3.read() | inWordCounter_V_flag_phi_fu_149_p4.read());
}

void memcachedPipeline_response_f::thread_p_inWordCounter_V_new_fu_300_p3() {
    p_inWordCounter_V_new_fu_300_p3 = (!tmp_138_fu_214_p3.read()[0].is_01())? sc_lv<2>(): ((tmp_138_fu_214_p3.read()[0].to_bool())? ap_const_lv2_0: tmp_91_fu_286_p2.read());
}

void memcachedPipeline_response_f::thread_tmp_135_fu_194_p1() {
    tmp_135_fu_194_p1 = merger2responseFormatter_V_dout.read().range(124-1, 0);
}

void memcachedPipeline_response_f::thread_tmp_136_fu_198_p3() {
    tmp_136_fu_198_p3 = merger2responseFormatter_V_dout.read().range(124, 124);
}

void memcachedPipeline_response_f::thread_tmp_137_fu_206_p3() {
    tmp_137_fu_206_p3 = merger2responseFormatter_V_dout.read().range(126, 126);
}

void memcachedPipeline_response_f::thread_tmp_138_fu_214_p3() {
    tmp_138_fu_214_p3 = merger2responseFormatter_V_dout.read().range(127, 127);
}

void memcachedPipeline_response_f::thread_tmp_139_fu_253_p3() {
    tmp_139_fu_253_p3 = inWordCounter_V.read().range(1, 1);
}

void memcachedPipeline_response_f::thread_tmp_39_nbwritereq_fu_110_p3() {
    tmp_39_nbwritereq_fu_110_p3 =  (sc_lv<1>) (metadataBuffer_rf_V_V_full_n.read());
}

void memcachedPipeline_response_f::thread_tmp_40_nbreadreq_fu_118_p3() {
    tmp_40_nbreadreq_fu_118_p3 =  (sc_lv<1>) (merger2responseFormatter_V_empty_n.read());
}

void memcachedPipeline_response_f::thread_tmp_90_fu_280_p2() {
    tmp_90_fu_280_p2 = (!inWordCounter_V.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(inWordCounter_V.read() == ap_const_lv2_1);
}

void memcachedPipeline_response_f::thread_tmp_91_fu_286_p2() {
    tmp_91_fu_286_p2 = (!inWordCounter_V.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(inWordCounter_V.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void memcachedPipeline_response_f::thread_tmp_nbwritereq_fu_102_p3() {
    tmp_nbwritereq_fu_102_p3 =  (sc_lv<1>) (valueBuffer_rf_V_V_full_n.read());
}

void memcachedPipeline_response_f::thread_tmp_s_fu_237_p2() {
    tmp_s_fu_237_p2 = (!inWordCounter_V.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(inWordCounter_V.read() == ap_const_lv2_0);
}

void memcachedPipeline_response_f::thread_valueBuffer_rf_V_V_din() {
    valueBuffer_rf_V_V_din = merger2responseFormatter_V_dout.read().range(191, 128);
}

void memcachedPipeline_response_f::thread_valueBuffer_rf_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(tmp_nbwritereq_fu_102_p3.read(), ap_const_lv1_0) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_39_nbwritereq_fu_110_p3.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_40_nbreadreq_fu_118_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, or_cond_fu_243_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_s_fu_237_p2.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_137_fu_206_p3.read()) && 
          !ap_sig_bdd_91.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
          !esl_seteq<1,1,1>(tmp_nbwritereq_fu_102_p3.read(), ap_const_lv1_0) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_39_nbwritereq_fu_110_p3.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_40_nbreadreq_fu_118_p3.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_137_fu_206_p3.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, or_cond_fu_243_p2.read()) && 
          !ap_sig_bdd_91.read()))) {
        valueBuffer_rf_V_V_write = ap_const_logic_1;
    } else {
        valueBuffer_rf_V_V_write = ap_const_logic_0;
    }
}

void memcachedPipeline_response_f::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            ap_NS_fsm = ap_ST_st1_fsm_0;
break;
        default : 
            ap_NS_fsm = "X";
            break;
    }
}

}
