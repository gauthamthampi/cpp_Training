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

};