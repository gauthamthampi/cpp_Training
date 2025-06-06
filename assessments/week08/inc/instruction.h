#pragma once
#include <iostream>
#include <list>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include "register.h"
#include "memory.h"
using namespace std;

class Instruction {
	vector<string>instrucs;
public:
	void loadFile(const string& filename) {
		ifstream file(filename);
		string line;
		while (getline(file, line)) {
			if (!file) {
				cout << "Unable to read the file" << endl;
				return;
			}
			instrucs.push_back(line);
		}
	}

	void displayInstructions() {
		for (const auto& i : instrucs) {
			cout << i << endl;
		}
	}

	void execute() {
		string s1, s2, s3;
		Register r1;
		Memory m1;
		if (instrucs.empty()) {
			cout << "No instructions!";
			return;
		}
		for (const auto& i : instrucs) {

			if (i == "HLT") {
				cout << "Received Interrupt" << endl;
				cout << endl;
				r1.displayRegisters();
				cout << endl;
				m1.displayMemory();
				return;
			}
			else {
				stringstream s(i);
				s >> s1 >> s2;
				string s2d = s2;
				size_t comma = s2.find(',');
				if (comma != string::npos) {
					s2 = s2.substr(0, s2.find(','));
					s3 = s2d.substr(s2d.find(',') + 1);
				}
				
				string st_2;
				int value_s2;
				if (s2.substr(0, 1) == "[") {
				    st_2 = s2.substr(1, s2.size()-2);
					value_s2 = stoi(st_2);
				}
				
				string st_3;
				int value_s3;
				if (s3.substr(0, 1) == "[") {
					st_3 = s3.substr(1, s3.size()-2);
					value_s3 = stoi(st_3);
				}
			

				if (s1 == "MOV") {
					if (s2.substr(0, 1) != "[") {
						if (s3.substr(0, 1) == "[") {
							int mem = m1.getValueMemory(value_s3);
							r1.addValue(s2,mem);
						}
						else {
							r1.addValue(s2, stoi(s3));
						}	
					}
					else {
						if (s3 == "AX" || s3 == "BX" || s3 == "CX" || s3 == "DX") {
							int regVal = r1.getValuebyKey(s3);
							m1.allocateMemoryValue(value_s2, regVal);
						}
						else if (s3.substr(0, 1) == "[") {
							m1.allocateMemoryValue(value_s2, value_s3);
						}
						else {
							m1.allocateMemoryValue(value_s2, stoi(s3));
						}
					}
				}
				else if (s1 == "ADD") {
					if (s2.substr(0, 1) != "[") {
						if (s3.substr(0, 1) == "[") {
							int mem = m1.getValueMemory(value_s3);
							int regValue = r1.getValuebyKey(s2);
							r1.addRegisters(mem,regValue);
						}
						else {
							int val1, val2;
							val1 = r1.getValuebyKey(s2);
							val2 = r1.getValuebyKey(s3);
							r1.addRegisters(val1,val2);
						}
					}
					else {
						if (s3 == "AX" || s3 == "BX" || s3 == "CX" || s3 == "DX") {
							int regVal = r1.getValuebyKey(s3);
							int mem = m1.getValueMemory(value_s2);
							r1.addRegisters(mem, regVal);
						}
						else if (s3.substr(0, 1) == "[") {
							int val1 = m1.getValueMemory(value_s2);
							int val2 = m1.getValueMemory(value_s3);
							r1.addRegisters(val1, val2);
						}
						else {
							int val1 = m1.getValueMemory(value_s2);
							r1.addRegisters(val1,stoi(s3));
						}
					}	
				}
				else if (s1 == "SUB") {
					if (s2.substr(0, 1) != "[") {
						if (s3.substr(0, 1) == "[") {
							int mem = m1.getValueMemory(value_s3);
							int regValue = r1.getValuebyKey(s2);
							r1.subRegisters(mem, regValue);
						}
						else {
							int val1, val2;
							val1 = r1.getValuebyKey(s2);
							val2 = r1.getValuebyKey(s3);
							r1.subRegisters(val1, val2);
						}
					}
					else {
						if (s3 == "AX" || s3 == "BX" || s3 == "CX" || s3 == "DX") {
							int regVal = r1.getValuebyKey(s3);
							int mem = m1.getValueMemory(value_s2);
							r1.subRegisters(mem, regVal);
						}
						else if (s3.substr(0, 1) == "[") {
							int val1 = m1.getValueMemory(value_s2);
							int val2 = m1.getValueMemory(value_s3);
							r1.subRegisters(val1, val2);
						}
						else {
							int val1 = m1.getValueMemory(value_s2);
							r1.subRegisters(val1, stoi(s3));
						}
					}
				}
				else if (s1 == "MUL") {
					if (s2.substr(0, 1) != "[") {
						if (s3.substr(0, 1) == "[") {
							int mem = m1.getValueMemory(value_s3);
							int regValue = r1.getValuebyKey(s2);
							r1.mulRegisters(mem, regValue);
						}
						else {
							int val1, val2;
							val1 = r1.getValuebyKey(s2);
							val2 = r1.getValuebyKey(s3);
							r1.mulRegisters(val1, val2);
						}
					}
					else {
						if (s3 == "AX" || s3 == "BX" || s3 == "CX" || s3 == "DX") {
							int regVal = r1.getValuebyKey(s3);
							int mem = m1.getValueMemory(value_s2);
							r1.mulRegisters(mem, regVal);
						}
						else if (s3.substr(0, 1) == "[") {
							int val1 = m1.getValueMemory(value_s2);
							int val2 = m1.getValueMemory(value_s3);
							r1.mulRegisters(val1, val2);
						}
						else {
							int val1 = m1.getValueMemory(value_s2);
							r1.mulRegisters(val1, stoi(s3));
						}
					}
				}
				else if (s1 == "DIV") {
					if (s2.substr(0, 1) != "[") {
						if (s3.substr(0, 1) == "[") {
							int mem = m1.getValueMemory(value_s3);
							int regValue = r1.getValuebyKey(s2);
							r1.divRegisters(mem, regValue);
						}
						else {
							int val1, val2;
							val1 = r1.getValuebyKey(s2);
							val2 = r1.getValuebyKey(s3);
							r1.divRegisters(val1, val2);
						}
					}
					else {
						if (s3 == "AX" || s3 == "BX" || s3 == "CX" || s3 == "DX") {
							int regVal = r1.getValuebyKey(s3);
							int mem = m1.getValueMemory(value_s2);
							r1.divRegisters(mem, regVal);
						}
						else if (s3.substr(0, 1) == "[") {
							int val1 = m1.getValueMemory(value_s2);
							int val2 = m1.getValueMemory(value_s3);
							r1.divRegisters(val1, val2);
						}
						else {
							int val1 = m1.getValueMemory(value_s2);
							r1.divRegisters(val1, stoi(s3));
						}
					}
				}
			}
		}
		
	}

};