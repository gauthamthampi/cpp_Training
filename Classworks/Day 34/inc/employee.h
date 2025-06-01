#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Employee {
protected:
	int empId;
	string empName;
public:
	//Employee(int id,string name): empId(id),empName(name){}
	void setEmpId(int id) {
		this->empId = id;
	}
	void setEmpName(string name) {
		this->empName = name;
	}
	int getEmpId() {
		return empId;
	}
	string getEmpName() {
		return empName;
	}
};

class Finance : public Employee {
protected:
	int basePay;
	int allowance;
	int tax;
	int salary;
	vector<Finance>arr;
	void calculateSalary() {
		salary = (basePay + allowance) - tax;
	}

public:
	Finance(int id,string nm,int bp,int ){}
	void setBasepay(int bp) {
		this->basePay = bp;
	}
	void setAllowance(int al) {
		this->allowance = al;
	}
	int getEmpId() {
		return empId;
	}
	string getEmpName() {
		return empName;
	}
	
	void addEmployee(Finance f) {
		empId = f.empId;
		empName = f.empName;
		basePay = f.basePay;
		allowance = f.allowance;
		tax = f.tax;
		calculateSalary();
		arr.push_back(f);
	}


	void writeFile() {
		try {
			ofstream fout("employee.txt");
			fout << "Employee Details" << endl;
			for (int i = 0;i < arr.size();i++) {
				fout << "Id: " << arr[i].empId << endl;
				fout << "Name: " << arr[i].empName << endl;
				fout << "Base pay: " << arr[i].basePay << endl;
				fout << "Allowance: " << arr[i].allowance << endl;
				fout << "Employee id: " << arr[i].tax << endl;
				fout << "Total Salary: " << arr[i].salary << endl;
			}
			fout.close();
		}
		catch (string err) {
			cout << "Unable to write file: " << err << endl;
		}
	}
	void readFile() {
		try {
			ifstream inFile("employee.text");
			string line;
			if (inFile.is_open()) {
				while (getline(inFile, line)) {
					cout << line << endl;
				}
				inFile.close();
			}
			else {
				cout << "Error opening file";
			}
		}
		catch (string err) {
			cout << "Cant read file: " << err << endl;
		}
	}
};