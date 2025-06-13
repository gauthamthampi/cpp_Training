#pragma once
#include <iostream>
#include <mutex>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <thread>
#include <user.h>
#include <operator.h>
#define MAX 9
using namespace std;

mutex mtx;


class Recorder {
	vector<string>ip;
	string inp_arr[MAX];
	string inp_arr_op[MAX];
	vector<User>users;
	vector<Operator>operators;
public:
	void processCDRfileUser(string filename) {
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
			User u;
			u.setCustomerId(stoi(inp_arr[0]));
			u.setBrand(inp_arr[1]);

			if ((inp_arr[3] == "GPRS")) {
				u.setMbDownload(stoi(inp_arr[4]));
				u.setMbUpload(stoi(inp_arr[5]));
			}
			else {
				if (inp_arr[3] == "SMS-MT") {
					u.setSmsMt(stoi(inp_arr[4]));
				}
				else if (inp_arr[3] == "SMS-M0") {
					u.setSmsMo(stoi(inp_arr[4]));
				}
				else if (inp_arr[3] == "MTC") {
					u.setMtc(stoi(inp_arr[4]));
				}
				else if (inp_arr[3] == "MOC") {
					u.setMoc(stoi(inp_arr[4]));
				}
				u.setMbDownload(stoi(inp_arr[5]));
				u.setMbUpload(stoi(inp_arr[6]));
			}
			users.push_back(u);
			//log
		}
	}

	void processCDRfileOperator(string filename) {
		unique_lock<mutex>lock(mtx);
		ifstream file(filename);
		if (!file) {
			cout << "Unable to open file!" << endl;
			return;
		}
		string line;
		while (getline(file, line)) {
			stringstream s(line);
			int i = 0;
			while (getline(s, line, '|')) {
				inp_arr_op[i] = line;
				i++;
			}
			
			bool check = false;
			for (auto i : operators) {
				if (i.getBrand() == inp_arr_op[1]) {
					check = true;
					if ((inp_arr[3] == "GPRS")) {
						cout << inp_arr_op[4];
						i.setMbDownload(stoi(inp_arr_op[4]));
						i.setMbUpload(stoi(inp_arr_op[5]));
					}
					else {
						if (inp_arr[3] == "SMS-MT") {
							i.setSmsMt(stoi(inp_arr_op[4]));
						}
						else if (inp_arr[3] == "SMS-M0") {
							i.setSmsMo(stoi(inp_arr_op[4]));
						}
						else if (inp_arr[3] == "MTC") {
							i.setMtc(stoi(inp_arr_op[4]));
						}
						else if (inp_arr[3] == "MOC") {
							i.setMoc(stoi(inp_arr_op[4]));
						}
						i.setMbDownload(stoi(inp_arr_op[5]));
						i.setMbUpload(stoi(inp_arr_op[6]));
					}
				}
			}
			if (!check) {
				Operator o;
				o.setBrand(inp_arr_op[1]);
				cout << inp_arr_op[4];
				o.setOperatorId(stoi(inp_arr_op[2]));
				if ((inp_arr[3] == "GPRS")) {
					cout << inp_arr_op[4];
					o.setMbDownload(stoi(inp_arr_op[4]));
					o.setMbUpload(stoi(inp_arr_op[5]));
				}
				else {
					if (inp_arr[3] == "SMS-MT") {
						o.setSmsMt(stoi(inp_arr_op[4]));
					}
					else if (inp_arr[3] == "SMS-M0") {
						o.setSmsMo(stoi(inp_arr_op[4]));
					}
					else if (inp_arr[3] == "MTC") {
						o.setMtc(stoi(inp_arr_op[4]));
					}
					else if (inp_arr[3] == "MOC") {
						o.setMoc(stoi(inp_arr_op[4]));
					}
					o.setMbDownload(stoi(inp_arr[5]));
					o.setMbUpload(stoi(inp_arr_op[6]));
				}
				operators.push_back(o);
			}
			

			//1037928 | Jio | 42502 | SMS - MT | 0 | 0 | 0 | 1136404 | 42504

			//log
		}

	}

	void displayCustomerBill(int cust_id) {	
		for (auto i : users) {
			if (i.getCustomerId() == cust_id) {
				cout << "Customer ID: " << i.getCustomerId() << "(" << i.getBrand() << ")" << endl;
				cout << "Services within the mobile operator << endl";
				cout << "Incoming voice call durations: " << i.getMtc() << endl;
				cout << "Outgoing voice call durations: " << i.getMoc() << endl;
				cout << "Incoming message durations: " << i.getSmsMt() << endl;
				cout << "Outgoing message durations: " << i.getSmsMo() << endl;
				cout << "Services outside the mobile operator << endl";
				cout << "Incoming voice call durations: " << i.getMtc() << endl;
				cout << "Outgoing voice call durations: " << i.getMoc() << endl;
				cout << "Incoming messages: " << i.getSmsMt() << endl;
				cout << "Outgoing messages: " << i.getSmsMo() << endl;
				cout << "Internet use" << endl;
				cout << "MB Downloaded: " << i.getMbDownload() << " | MB Uploaded: " <<
					i.getMbUpload() << endl;
			}
		}
	}

	void displayAllCustomerBill() {
		for (auto i : users) {
				cout << "Customer ID: " << i.getCustomerId() << "(" << i.getBrand() << ")" << endl;
				cout << "Services within the mobile operator << endl";
				cout << "Incoming voice call durations: " << i.getMtc() << endl;
				cout << "Outgoing voice call durations: " << i.getMoc() << endl;
				cout << "Incoming message durations: " << i.getSmsMt() << endl;
				cout << "Outgoing message durations: " << i.getSmsMo() << endl;
				cout << "Services outside the mobile operator << endl";
				cout << "Incoming voice call durations: " << i.getMtcOop() << endl;
				cout << "Outgoing voice call durations: " << i.getMocOop() << endl;
				cout << "Incoming messages: " << i.getSmsMt() << endl;
				cout << "Outgoing messages: " << i.getSmsMo() << endl;
				cout << "Internet use" << endl;
				cout << "MB Downloaded: " << i.getMbDownload() << " | MB Uploaded: " <<
					i.getMbUpload() << endl;
		}
	}

	void displayOperatorBill(int op_id) {
		for (auto i : operators) {
			if (i.getOperatorId() == op_id) {
				cout << "Operator Brand: " << i.getOperatorId() << "(" << i.getBrand() << ")" << endl;
				cout << "Incoming voice call durations: " << i.getMtc() << endl;
				cout << "Outgoing voice call durations: " << i.getMoc() << endl;
				cout << "Incoming messages: " << i.getSmsMt() << endl;
				cout << "Outgoing messages: " << i.getSmsMo() << endl;
				cout << "MB Downloaded: " << i.getMbDownload() << " | MB Uploaded: " <<
					i.getMbUpload() << endl;
			}
		}
	}

	void displayAllOperatorBill() {
		for (auto i : operators) {
				cout << "Operator Brand: " << i.getOperatorId() << "(" << i.getBrand() << ")" << endl;
				cout << "Incoming voice call durations: " << i.getMtc() << endl;
				cout << "Outgoing voice call durations: " << i.getMoc() << endl;
				cout << "Incoming messages: " << i.getSmsMt() << endl;
				cout << "Outgoing messages: " << i.getSmsMo() << endl;
				cout << "MB Downloaded: " << i.getMbDownload() << " | MB Uploaded: " <<
					i.getMbUpload() << endl;
			
		}
	}


};

