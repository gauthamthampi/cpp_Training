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
    unique_lock<mutex> lock(mtx);
    ifstream file(filename);
    if (!file) {
        cout << "Unable to open file!" << endl;
        return;
    }
    string line;
    while (getline(file, line)) {
        stringstream s(line);
        int i = 0;
        string token;
        while (getline(s, token, '|')) {
            inp_arr_op[i] = token;
            i++;
        }

        bool check = false;
        for (auto& op : operators) {  // Use reference to modify the object
            if (op.getBrand() == inp_arr_op[1]) {
                check = true;
                if (inp_arr_op[3] == "GPRS") {
                    if (!inp_arr_op[4].empty()) op.setMbDownload(stoi(inp_arr_op[4]));
                    if (!inp_arr_op[5].empty()) op.setMbUpload(stoi(inp_arr_op[5]));
                } else {
                    if (inp_arr_op[3] == "SMS-MT") {
                        if (!inp_arr_op[4].empty()) op.setSmsMt(stoi(inp_arr_op[4]));
                    } else if (inp_arr_op[3] == "SMS-MO") {
                        if (!inp_arr_op[4].empty()) op.setSmsMo(stoi(inp_arr_op[4]));
                    } else if (inp_arr_op[3] == "MTC") {
                        if (!inp_arr_op[4].empty()) op.setMtc(stoi(inp_arr_op[4]));
                    } else if (inp_arr_op[3] == "MOC") {
                        if (!inp_arr_op[4].empty()) op.setMoc(stoi(inp_arr_op[4]));
                    }
                    if (!inp_arr_op[5].empty()) op.setMbDownload(stoi(inp_arr_op[5]));
                    if (!inp_arr_op[6].empty()) op.setMbUpload(stoi(inp_arr_op[6]));
                }
                break;  // Found the operator, no need to continue loop
            }
        }

        if (!check) {
            Operator o;
            o.setBrand(inp_arr_op[1]);
            o.setOperatorId(stoi(inp_arr_op[2]));
            if (inp_arr_op[3] == "GPRS") {
                if (!inp_arr_op[4].empty()) o.setMbDownload(stoi(inp_arr_op[4]));
                if (!inp_arr_op[5].empty()) o.setMbUpload(stoi(inp_arr_op[5]));
            } else {
                if (inp_arr_op[3] == "SMS-MT") {
                    if (!inp_arr_op[4].empty()) o.setSmsMt(stoi(inp_arr_op[4]));
                } else if (inp_arr_op[3] == "SMS-MO") {
                    if (!inp_arr_op[4].empty()) o.setSmsMo(stoi(inp_arr_op[4]));
                } else if (inp_arr_op[3] == "MTC") {
                    if (!inp_arr_op[4].empty()) o.setMtc(stoi(inp_arr_op[4]));
                } else if (inp_arr_op[3] == "MOC") {
                    if (!inp_arr_op[4].empty()) o.setMoc(stoi(inp_arr_op[4]));
                }
                if (!inp_arr_op[5].empty()) o.setMbDownload(stoi(inp_arr_op[5]));
                if (!inp_arr_op[6].empty()) o.setMbUpload(stoi(inp_arr_op[6]));
            }
            operators.push_back(o);
        }
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

