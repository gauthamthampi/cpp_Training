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
#include <logger.h>
#define MAX 9
using namespace std;

mutex mtx;


class Recorder {
	vector<string>ip;
	string inp_arr[MAX];
	string inp_arr_op[MAX];
	vector<User>users;
	vector<Operator>operators;
	Logger logger;
public:
	void processCDRfileUser(string filename) {
		ifstream file(filename);
		if (!file) {
			cout << "Unable to open file!" << endl;
			logger.log(ERROR, "Error in opening file");
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
		}
		logger.log(INFO, "Loading Success. " + to_string(users.size()) + " customer details loaded.");
	}

	void processCDRfileOperator(string filename) {
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
        for (auto& op : operators) {  
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
                break;  
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
				cout << "Services within the mobile operator" << endl;
				cout << "Incoming voice call durations: " << i.getMtc() << endl;
				cout << "Outgoing voice call durations: " << i.getMoc() << endl;
				cout << "Incoming message durations: " << i.getSmsMt() << endl;
				cout << "Outgoing message durations: " << i.getSmsMo() << endl;
				cout << "Services outside the mobile operator" << endl;
				cout << "Incoming voice call durations: " << i.getMtcOop() << endl;
				cout << "Outgoing voice call durations: " << i.getMocOop() << endl;
				cout << "Incoming messages: " << i.getSmsMt() << endl;
				cout << "Outgoing messages: " << i.getSmsMo() << endl;
				cout << "Internet use" << endl;
				cout << "MB Downloaded: " << i.getMbDownload() << " | MB Uploaded: " <<
					i.getMbUpload() << endl;
		}
	}

    void displayAllCustomerBillToFile(const string& outputFilename) {
    ofstream outfile(outputFilename);
    if (!outfile) {
        logger.log(ERROR, "Unable to open customer bill output file.");
        return;
    }

    for (auto& i : users) {
        outfile << "Customer ID: " << i.getCustomerId() << " (" << i.getBrand() << ")\n";
        outfile << "Services within the mobile operator\n";
        outfile << "Incoming voice call durations: " << i.getMtc() << "\n";
        outfile << "Outgoing voice call durations: " << i.getMoc() << "\n";
        outfile << "Incoming message durations: " << i.getSmsMt() << "\n";
        outfile << "Outgoing message durations: " << i.getSmsMo() << "\n";

        outfile << "Services outside the mobile operator\n";
        outfile << "Incoming voice call durations: " << i.getMtcOop() << "\n";
        outfile << "Outgoing voice call durations: " << i.getMocOop() << "\n";
        outfile << "Incoming messages: " << i.getSmsMtOop() << "\n";
        outfile << "Outgoing messages: " << i.getSmsMoOop() << "\n";

        outfile << "Internet use\n";
        outfile << "MB Downloaded: " << i.getMbDownload()
                << " | MB Uploaded: " << i.getMbUpload() << "\n";
        outfile << "--------------------------\n";
    }

    logger.log(INFO, "Customer bills written to file: " + outputFilename);
}

    void displayAllOperatorBillToFile(const string& outputFilename) {
    ofstream outfile(outputFilename);
    if (!outfile) {
        logger.log(ERROR, "Unable to open operator bill output file.");
        return;
    }

    for (auto& i : operators) {
        outfile << "Operator Brand: " << i.getOperatorId() << " (" << i.getBrand() << ")\n";
        outfile << "Incoming voice call durations: " << i.getMtc() << "\n";
        outfile << "Outgoing voice call durations: " << i.getMoc() << "\n";
        outfile << "Incoming messages: " << i.getSmsMt() << "\n";
        outfile << "Outgoing messages: " << i.getSmsMo() << "\n";
        outfile << "MB Downloaded: " << i.getMbDownload()
                << " | MB Uploaded: " << i.getMbUpload() << "\n";
        outfile << "--------------------------\n";
    }

    logger.log(INFO, "Operator bills written to file: " + outputFilename);
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

