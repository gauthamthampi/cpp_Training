#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

struct User {
	int customer_id;
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
};

struct input {
	int id;
	string brand;
	int operator_id;

};

class Recorder {
	array<
	vector<User>users;
	vector<Operator>operators;
public:
	void processCDRfile(string filename) {
		ifstream file(filename);
		if (!file) {
			cout << "Unable to open file!" << endl;
			return;
		}
		string line;
		while (getline(file,line)) {
			stringstream s(line);
			while (getline(s, line, '|')) {
				cout << line << endl;

			}
		}
	}


};