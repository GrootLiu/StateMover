// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "mac_header_add.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_lv<64> mac_header_add::ap_const_lv64_0 = "0000000000000000000000000000000000000000000000000000000000000000";
const sc_lv<8> mac_header_add::ap_const_lv8_0 = "00000000";
const sc_lv<1> mac_header_add::ap_const_lv1_0 = "0";
const sc_lv<112> mac_header_add::ap_const_lv112_0 = "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
const sc_logic mac_header_add::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic mac_header_add::ap_const_logic_0 = sc_dt::Log_0;

mac_header_add::mac_header_add(sc_module_name name) : sc_module(name), mVcdFile(0) {
    add_mac_header_U0 = new add_mac_header("add_mac_header_U0");
    add_mac_header_U0->ap_clk(ap_clk);
    add_mac_header_U0->ap_rst(ap_rst_n_inv);
    add_mac_header_U0->ap_start(add_mac_header_U0_ap_start);
    add_mac_header_U0->start_full_n(start_for_edit_len_field_U0_full_n);
    add_mac_header_U0->ap_done(add_mac_header_U0_ap_done);
    add_mac_header_U0->ap_continue(add_mac_header_U0_ap_continue);
    add_mac_header_U0->ap_idle(add_mac_header_U0_ap_idle);
    add_mac_header_U0->ap_ready(add_mac_header_U0_ap_ready);
    add_mac_header_U0->dataFifo_V_din(add_mac_header_U0_dataFifo_V_din);
    add_mac_header_U0->dataFifo_V_full_n(dataFifo_V_full_n);
    add_mac_header_U0->dataFifo_V_write(add_mac_header_U0_dataFifo_V_write);
    add_mac_header_U0->dataLenFifo_V_V_din(add_mac_header_U0_dataLenFifo_V_V_din);
    add_mac_header_U0->dataLenFifo_V_V_full_n(dataLenFifo_V_V_full_n);
    add_mac_header_U0->dataLenFifo_V_V_write(add_mac_header_U0_dataLenFifo_V_V_write);
    add_mac_header_U0->dataIn_TVALID(dataIn_TVALID);
    add_mac_header_U0->start_out(add_mac_header_U0_start_out);
    add_mac_header_U0->start_write(add_mac_header_U0_start_write);
    add_mac_header_U0->dataIn_TDATA(dataIn_TDATA);
    add_mac_header_U0->dataIn_TREADY(add_mac_header_U0_dataIn_TREADY);
    add_mac_header_U0->dataIn_TKEEP(dataIn_TKEEP);
    add_mac_header_U0->dataIn_TLAST(dataIn_TLAST);
    add_mac_header_U0->dataIn_TUSER(dataIn_TUSER);
    edit_len_field_U0 = new edit_len_field("edit_len_field_U0");
    edit_len_field_U0->ap_clk(ap_clk);
    edit_len_field_U0->ap_rst(ap_rst_n_inv);
    edit_len_field_U0->ap_start(edit_len_field_U0_ap_start);
    edit_len_field_U0->ap_done(edit_len_field_U0_ap_done);
    edit_len_field_U0->ap_continue(edit_len_field_U0_ap_continue);
    edit_len_field_U0->ap_idle(edit_len_field_U0_ap_idle);
    edit_len_field_U0->ap_ready(edit_len_field_U0_ap_ready);
    edit_len_field_U0->dataFifo_V_dout(dataFifo_V_dout);
    edit_len_field_U0->dataFifo_V_empty_n(dataFifo_V_empty_n);
    edit_len_field_U0->dataFifo_V_read(edit_len_field_U0_dataFifo_V_read);
    edit_len_field_U0->dataLenFifo_V_V_dout(dataLenFifo_V_V_dout);
    edit_len_field_U0->dataLenFifo_V_V_empty_n(dataLenFifo_V_V_empty_n);
    edit_len_field_U0->dataLenFifo_V_V_read(edit_len_field_U0_dataLenFifo_V_V_read);
    edit_len_field_U0->dataOut_TREADY(dataOut_TREADY);
    edit_len_field_U0->dataOut_TDATA(edit_len_field_U0_dataOut_TDATA);
    edit_len_field_U0->dataOut_TVALID(edit_len_field_U0_dataOut_TVALID);
    edit_len_field_U0->dataOut_TKEEP(edit_len_field_U0_dataOut_TKEEP);
    edit_len_field_U0->dataOut_TLAST(edit_len_field_U0_dataOut_TLAST);
    edit_len_field_U0->dataOut_TUSER(edit_len_field_U0_dataOut_TUSER);
    dataFifo_V_U = new fifo_w185_d16_A("dataFifo_V_U");
    dataFifo_V_U->clk(ap_clk);
    dataFifo_V_U->reset(ap_rst_n_inv);
    dataFifo_V_U->if_read_ce(ap_var_for_const0);
    dataFifo_V_U->if_write_ce(ap_var_for_const0);
    dataFifo_V_U->if_din(add_mac_header_U0_dataFifo_V_din);
    dataFifo_V_U->if_full_n(dataFifo_V_full_n);
    dataFifo_V_U->if_write(add_mac_header_U0_dataFifo_V_write);
    dataFifo_V_U->if_dout(dataFifo_V_dout);
    dataFifo_V_U->if_empty_n(dataFifo_V_empty_n);
    dataFifo_V_U->if_read(edit_len_field_U0_dataFifo_V_read);
    dataLenFifo_V_V_U = new fifo_w16_d4_A("dataLenFifo_V_V_U");
    dataLenFifo_V_V_U->clk(ap_clk);
    dataLenFifo_V_V_U->reset(ap_rst_n_inv);
    dataLenFifo_V_V_U->if_read_ce(ap_var_for_const0);
    dataLenFifo_V_V_U->if_write_ce(ap_var_for_const0);
    dataLenFifo_V_V_U->if_din(add_mac_header_U0_dataLenFifo_V_V_din);
    dataLenFifo_V_V_U->if_full_n(dataLenFifo_V_V_full_n);
    dataLenFifo_V_V_U->if_write(add_mac_header_U0_dataLenFifo_V_V_write);
    dataLenFifo_V_V_U->if_dout(dataLenFifo_V_V_dout);
    dataLenFifo_V_V_U->if_empty_n(dataLenFifo_V_V_empty_n);
    dataLenFifo_V_V_U->if_read(edit_len_field_U0_dataLenFifo_V_V_read);
    start_for_edit_len_field_U0_U = new start_for_edit_len_field_U0("start_for_edit_len_field_U0_U");
    start_for_edit_len_field_U0_U->clk(ap_clk);
    start_for_edit_len_field_U0_U->reset(ap_rst_n_inv);
    start_for_edit_len_field_U0_U->if_read_ce(ap_var_for_const0);
    start_for_edit_len_field_U0_U->if_write_ce(ap_var_for_const0);
    start_for_edit_len_field_U0_U->if_din(start_for_edit_len_field_U0_din);
    start_for_edit_len_field_U0_U->if_full_n(start_for_edit_len_field_U0_full_n);
    start_for_edit_len_field_U0_U->if_write(add_mac_header_U0_start_write);
    start_for_edit_len_field_U0_U->if_dout(start_for_edit_len_field_U0_dout);
    start_for_edit_len_field_U0_U->if_empty_n(start_for_edit_len_field_U0_empty_n);
    start_for_edit_len_field_U0_U->if_read(edit_len_field_U0_ap_ready);

    SC_METHOD(thread_add_mac_header_U0_ap_continue);

    SC_METHOD(thread_add_mac_header_U0_ap_start);

    SC_METHOD(thread_ap_rst_n_inv);
    sensitive << ( ap_rst_n );

    SC_METHOD(thread_ap_sync_continue);

    SC_METHOD(thread_dataIn_TREADY);
    sensitive << ( add_mac_header_U0_dataIn_TREADY );

    SC_METHOD(thread_dataOut_TDATA);
    sensitive << ( edit_len_field_U0_dataOut_TDATA );

    SC_METHOD(thread_dataOut_TKEEP);
    sensitive << ( edit_len_field_U0_dataOut_TKEEP );

    SC_METHOD(thread_dataOut_TLAST);
    sensitive << ( edit_len_field_U0_dataOut_TLAST );

    SC_METHOD(thread_dataOut_TUSER);
    sensitive << ( edit_len_field_U0_dataOut_TUSER );

    SC_METHOD(thread_dataOut_TVALID);
    sensitive << ( edit_len_field_U0_dataOut_TVALID );

    SC_METHOD(thread_edit_len_field_U0_ap_continue);

    SC_METHOD(thread_edit_len_field_U0_ap_start);
    sensitive << ( start_for_edit_len_field_U0_empty_n );

    SC_METHOD(thread_edit_len_field_U0_start_full_n);

    SC_METHOD(thread_edit_len_field_U0_start_write);

    SC_METHOD(thread_start_for_edit_len_field_U0_din);

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    SC_THREAD(thread_ap_var_for_const0);

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "mac_header_add_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, dataIn_TDATA, "(port)dataIn_TDATA");
    sc_trace(mVcdFile, dataIn_TKEEP, "(port)dataIn_TKEEP");
    sc_trace(mVcdFile, dataIn_TLAST, "(port)dataIn_TLAST");
    sc_trace(mVcdFile, dataIn_TUSER, "(port)dataIn_TUSER");
    sc_trace(mVcdFile, dataOut_TDATA, "(port)dataOut_TDATA");
    sc_trace(mVcdFile, dataOut_TKEEP, "(port)dataOut_TKEEP");
    sc_trace(mVcdFile, dataOut_TLAST, "(port)dataOut_TLAST");
    sc_trace(mVcdFile, dataOut_TUSER, "(port)dataOut_TUSER");
    sc_trace(mVcdFile, SrcMacAddress_V, "(port)SrcMacAddress_V");
    sc_trace(mVcdFile, DestMacAddress_V, "(port)DestMacAddress_V");
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst_n, "(port)ap_rst_n");
    sc_trace(mVcdFile, dataIn_TVALID, "(port)dataIn_TVALID");
    sc_trace(mVcdFile, dataIn_TREADY, "(port)dataIn_TREADY");
    sc_trace(mVcdFile, dataOut_TVALID, "(port)dataOut_TVALID");
    sc_trace(mVcdFile, dataOut_TREADY, "(port)dataOut_TREADY");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_rst_n_inv, "ap_rst_n_inv");
    sc_trace(mVcdFile, add_mac_header_U0_ap_start, "add_mac_header_U0_ap_start");
    sc_trace(mVcdFile, add_mac_header_U0_ap_done, "add_mac_header_U0_ap_done");
    sc_trace(mVcdFile, add_mac_header_U0_ap_continue, "add_mac_header_U0_ap_continue");
    sc_trace(mVcdFile, add_mac_header_U0_ap_idle, "add_mac_header_U0_ap_idle");
    sc_trace(mVcdFile, add_mac_header_U0_ap_ready, "add_mac_header_U0_ap_ready");
    sc_trace(mVcdFile, add_mac_header_U0_dataFifo_V_din, "add_mac_header_U0_dataFifo_V_din");
    sc_trace(mVcdFile, add_mac_header_U0_dataFifo_V_write, "add_mac_header_U0_dataFifo_V_write");
    sc_trace(mVcdFile, add_mac_header_U0_dataLenFifo_V_V_din, "add_mac_header_U0_dataLenFifo_V_V_din");
    sc_trace(mVcdFile, add_mac_header_U0_dataLenFifo_V_V_write, "add_mac_header_U0_dataLenFifo_V_V_write");
    sc_trace(mVcdFile, add_mac_header_U0_start_out, "add_mac_header_U0_start_out");
    sc_trace(mVcdFile, add_mac_header_U0_start_write, "add_mac_header_U0_start_write");
    sc_trace(mVcdFile, add_mac_header_U0_dataIn_TREADY, "add_mac_header_U0_dataIn_TREADY");
    sc_trace(mVcdFile, edit_len_field_U0_ap_start, "edit_len_field_U0_ap_start");
    sc_trace(mVcdFile, edit_len_field_U0_ap_done, "edit_len_field_U0_ap_done");
    sc_trace(mVcdFile, edit_len_field_U0_ap_continue, "edit_len_field_U0_ap_continue");
    sc_trace(mVcdFile, edit_len_field_U0_ap_idle, "edit_len_field_U0_ap_idle");
    sc_trace(mVcdFile, edit_len_field_U0_ap_ready, "edit_len_field_U0_ap_ready");
    sc_trace(mVcdFile, edit_len_field_U0_dataFifo_V_read, "edit_len_field_U0_dataFifo_V_read");
    sc_trace(mVcdFile, edit_len_field_U0_dataLenFifo_V_V_read, "edit_len_field_U0_dataLenFifo_V_V_read");
    sc_trace(mVcdFile, edit_len_field_U0_dataOut_TDATA, "edit_len_field_U0_dataOut_TDATA");
    sc_trace(mVcdFile, edit_len_field_U0_dataOut_TVALID, "edit_len_field_U0_dataOut_TVALID");
    sc_trace(mVcdFile, edit_len_field_U0_dataOut_TKEEP, "edit_len_field_U0_dataOut_TKEEP");
    sc_trace(mVcdFile, edit_len_field_U0_dataOut_TLAST, "edit_len_field_U0_dataOut_TLAST");
    sc_trace(mVcdFile, edit_len_field_U0_dataOut_TUSER, "edit_len_field_U0_dataOut_TUSER");
    sc_trace(mVcdFile, ap_sync_continue, "ap_sync_continue");
    sc_trace(mVcdFile, dataFifo_V_full_n, "dataFifo_V_full_n");
    sc_trace(mVcdFile, dataFifo_V_dout, "dataFifo_V_dout");
    sc_trace(mVcdFile, dataFifo_V_empty_n, "dataFifo_V_empty_n");
    sc_trace(mVcdFile, dataLenFifo_V_V_full_n, "dataLenFifo_V_V_full_n");
    sc_trace(mVcdFile, dataLenFifo_V_V_dout, "dataLenFifo_V_V_dout");
    sc_trace(mVcdFile, dataLenFifo_V_V_empty_n, "dataLenFifo_V_V_empty_n");
    sc_trace(mVcdFile, start_for_edit_len_field_U0_din, "start_for_edit_len_field_U0_din");
    sc_trace(mVcdFile, start_for_edit_len_field_U0_full_n, "start_for_edit_len_field_U0_full_n");
    sc_trace(mVcdFile, start_for_edit_len_field_U0_dout, "start_for_edit_len_field_U0_dout");
    sc_trace(mVcdFile, start_for_edit_len_field_U0_empty_n, "start_for_edit_len_field_U0_empty_n");
    sc_trace(mVcdFile, edit_len_field_U0_start_full_n, "edit_len_field_U0_start_full_n");
    sc_trace(mVcdFile, edit_len_field_U0_start_write, "edit_len_field_U0_start_write");
#endif

    }
    mHdltvinHandle.open("mac_header_add.hdltvin.dat");
    mHdltvoutHandle.open("mac_header_add.hdltvout.dat");
}

mac_header_add::~mac_header_add() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete add_mac_header_U0;
    delete edit_len_field_U0;
    delete dataFifo_V_U;
    delete dataLenFifo_V_V_U;
    delete start_for_edit_len_field_U0_U;
}

void mac_header_add::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
}

void mac_header_add::thread_add_mac_header_U0_ap_continue() {
    add_mac_header_U0_ap_continue = ap_const_logic_1;
}

void mac_header_add::thread_add_mac_header_U0_ap_start() {
    add_mac_header_U0_ap_start = ap_const_logic_1;
}

void mac_header_add::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void mac_header_add::thread_ap_sync_continue() {
    ap_sync_continue = ap_const_logic_0;
}

void mac_header_add::thread_dataIn_TREADY() {
    dataIn_TREADY = add_mac_header_U0_dataIn_TREADY.read();
}

void mac_header_add::thread_dataOut_TDATA() {
    dataOut_TDATA = edit_len_field_U0_dataOut_TDATA.read();
}

void mac_header_add::thread_dataOut_TKEEP() {
    dataOut_TKEEP = edit_len_field_U0_dataOut_TKEEP.read();
}

void mac_header_add::thread_dataOut_TLAST() {
    dataOut_TLAST = edit_len_field_U0_dataOut_TLAST.read();
}

void mac_header_add::thread_dataOut_TUSER() {
    dataOut_TUSER = edit_len_field_U0_dataOut_TUSER.read();
}

void mac_header_add::thread_dataOut_TVALID() {
    dataOut_TVALID = edit_len_field_U0_dataOut_TVALID.read();
}

void mac_header_add::thread_edit_len_field_U0_ap_continue() {
    edit_len_field_U0_ap_continue = ap_const_logic_1;
}

void mac_header_add::thread_edit_len_field_U0_ap_start() {
    edit_len_field_U0_ap_start = start_for_edit_len_field_U0_empty_n.read();
}

void mac_header_add::thread_edit_len_field_U0_start_full_n() {
    edit_len_field_U0_start_full_n = ap_const_logic_1;
}

void mac_header_add::thread_edit_len_field_U0_start_write() {
    edit_len_field_U0_start_write = ap_const_logic_0;
}

void mac_header_add::thread_start_for_edit_len_field_U0_din() {
    start_for_edit_len_field_U0_din =  (sc_lv<1>) (ap_const_logic_1);
}

void mac_header_add::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"dataIn_TDATA\" :  \"" << dataIn_TDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dataIn_TKEEP\" :  \"" << dataIn_TKEEP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dataIn_TLAST\" :  \"" << dataIn_TLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dataIn_TUSER\" :  \"" << dataIn_TUSER.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"dataOut_TDATA\" :  \"" << dataOut_TDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dataOut_TKEEP\" :  \"" << dataOut_TKEEP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dataOut_TLAST\" :  \"" << dataOut_TLAST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dataOut_TUSER\" :  \"" << dataOut_TUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"SrcMacAddress_V\" :  \"" << SrcMacAddress_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"DestMacAddress_V\" :  \"" << DestMacAddress_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dataIn_TVALID\" :  \"" << dataIn_TVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dataIn_TREADY\" :  \"" << dataIn_TREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dataOut_TVALID\" :  \"" << dataOut_TVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dataOut_TREADY\" :  \"" << dataOut_TREADY.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}
