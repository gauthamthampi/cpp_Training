#pragma once
#include <iostream>
using namespace std;

class User {
    int customer_id;
    string oper;
    int moc;
    int mtc;
    int sms_mo;
    int sms_mt;
    int moc_oop;
    int mtc_oop;
    int sms_mo_oop;
    int sms_mt_oop;
    int mb_dl;
    int mb_ul;

public:
    User() :moc(0), mtc(0), sms_mo(0), sms_mt(0), moc_oop(0), mtc_oop(0), sms_mo_oop(0),
        sms_mt_oop(0), mb_dl(0), mb_ul(0){}
    int getCustomerId() {
        return customer_id;
    }
    string getBrand() {
        return oper;
    }
    int getMoc() {
        return moc;
    }
    int getMtc() {
        return mtc;
    }
    int getSmsMt() {
        return sms_mt;
    }
    int getSmsMo() {
        return sms_mo;
    }
    int getMocOop() {
        return moc_oop;
    }
    int getMtcOop() {
        return mtc_oop;
    }
    int getSmsMoOop() {
        return sms_mo_oop;
    }
    int getSmsMtOop() {
        return sms_mt_oop;
    }
    int getMbDownload() {
        return mb_dl;
    }
    int getMbUpload() {
        return mb_ul;
    }

    void setCustomerId(int id) {
        customer_id = id;
    }
    void setBrand(const string& brand) {
        oper = brand;
    }
    void setMoc(int val) {
        moc = val;
    }
    void setMtc(int val) {
        mtc = val;
    }
    void setSmsMo(int val) {
        sms_mo = val;
    }
    void setSmsMt(int val) {
        sms_mt = val;
    }
    void setMocOop(int val) {
        moc_oop = val;
    }
    void setMtcOop(int val) {
        mtc_oop = val;
    }
    void setSmsMoOop(int val) {
        sms_mo_oop = val;
    }
    void setSmsMtOop(int val) {
        sms_mt_oop = val;
    }
    void setMbDownload(int val) {
        mb_dl = val;
    }
    void setMbUpload(int val) {
        mb_ul = val;
    }
};
