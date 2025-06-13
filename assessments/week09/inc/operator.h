#pragma once
#include <iostream>
using namespace std;

class Operator {
    string brand;
    int operator_id;
    int mtc;
    int moc;
    int sms_mo;
    int sms_mt;
    int mb_dl;
    int mb_ul;

public:
    // Getters
    Operator():mtc(0),moc(0),sms_mo(0),sms_mt(0),mb_dl(0),mb_ul(0){}
    string getBrand() {
        return brand;
    }
    int getOperatorId() {
        return operator_id;
    }
    int getMtc() {
        return mtc;
    }
    int getMoc() {
        return moc;
    }
    int getSmsMo() {
        return sms_mo;
    }
    int getSmsMt() {
        return sms_mt;
    }
    int getMbDownload() {
        return mb_dl;
    }
    int getMbUpload() {
        return mb_ul;
    }

    // Setters
    void setBrand(const string& b) {
        brand = b;
    }
    void setOperatorId(int id) {
        operator_id = id;
    }
    void setMtc(int val) {
        mtc += val;
    }
    void setMoc(int val) {
        moc += val;
    }
    void setSmsMo(int val) {
        sms_mo += val;
    }
    void setSmsMt(int val) {
        sms_mt += val;
    }
    void setMbDownload(int val) {
        mb_dl += val;
    }
    void setMbUpload(int val) {
        mb_ul += val;
    }
};
