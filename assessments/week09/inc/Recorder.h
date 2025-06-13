#pragma once
#include <iostream>
#include <mutex>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <thread>
#define MAX 9
using namespace std;

mutex mtx;

struct User {
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
};

struct Operator{
	string brand;
	int operator_id;
	int mtc;
	int moc;
	int sms_mo;
	int sms_mt;
	int mb_dl;
	int mb_ul;

	string getBrand() {
		return brand;
	}
};

struct input {
	int id;
	string brand;
	int operator_id;
	string service_type;
	int duration;
	int mb_dl;
	int mb_ul;
	int third_party_id;

};

class Recorder {
	vector<string>ip;
	string inp_arr[MAX];
	vector<User>users;
	vector<Operator>operators;
public:
	void processCDRfile(string filename) {
		unique_lock<mutex>lock(mtx);
		ifstream file(filename);
		if (!file) {
			cout << "Unable to open file!" << endl;
			return;
		}
		string line;
		while (getline(file,line)) {
			stringstream s(line);
			int i = 0;
			while (getline(s, line, '|')) {
				inp_arr[i] = line;
				i++;
				}
		}
		cout << inp_arr[5];
	}

	void displayCustomerBill(int cust_id) {
		for (auto i : users) {
			if (i.customer_id == cust_id) {
				cout << "Customer ID: " << i.customer_id << "(" << i.oper << ")" << endl;
				cout << "Services within the mobile operator << endl";
				cout << "Incoming voice call durations: " << i.mtc << endl;
				cout << "Outgoing voice call durations: " << i.moc << endl;
				cout << "Incoming message durations: " << i.sms_mt << endl;
				cout << "Outgoing message durations: " << i.sms_mo << endl;
			}
		}
	}


};