#pragma once
#include <iostream>
#include <map>
#include <string>
#include <set>
using namespace std;

class Register {
	set<string>registers = { "AX","BX","CX","DX" };
	map<string, int>regs;
public: 
	//Add value to register
	void addValue(const string& reg,int val) {
		bool check = false;
		for (const auto& i : registers) {
			if (i == reg) 
				check = true;
		}
		if (!check) {
			cout << "Invalid input of registers";
			return;
		}
		regs[reg] = val;
	}

	int getValuebyKey(const string& key) {
		return regs[key];
	}

	int addRegisters(int val1,int val2) {
		int sum = val1 + val2;
		regs["AX"] = sum;
		return regs["AX"];
	}

	int subRegisters(int val1,int val2) {
		int diff = val1 + val2;
		regs["AX"] = diff;
		return regs["AX"];
	}

	int mulRegisters(int val1, int val2) {
		int mul = val1 + val2;
		regs["AX"] = mul;
		return regs["AX"];
	}

	int divRegisters(int val1, int val2) {
		int div = val1 + val2;
		regs["AX"] = div;
		return regs["AX"];
	}

	void displayRegisters() {
		cout << "Snapshot of the processor" << endl;
		for (const auto& i : regs) {
			cout << i.first << ": " << i.second << endl;
		}
	}
	
};
