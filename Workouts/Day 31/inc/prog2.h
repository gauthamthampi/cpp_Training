#pragma once
#include <iostream>
using namespace std;

class Employee {
protected:
	int emp_id;
	string name;
public:
	Employee(int id,string nm): emp_id(id),name(nm){}
	Employee() : emp_id(0), name("Unknown") {}
	void displayEmployee() const {
		cout << "Empid: " << emp_id << endl;
		cout << "Name: " << name << endl;
	}
};

class Developer : public virtual Employee {
protected:
	int codingHours;
public:
	Developer(int hrs):codingHours(hrs) {}
	int getCodingHours() {
		return codingHours;
	}
};

class Manager : public virtual Employee {
protected:
	int teamSize;
public:
	Manager(int num) : teamSize(num) {}
	int getTeamSize() {
		return teamSize;
	}
};

class TeamLead : public Developer, public Manager {
private:
	int sal_coding;
	int sal_codingPlusTeam;
	void calculateSalary() {
		sal_coding = getCodingHours() * 500;
		sal_codingPlusTeam = sal_coding + getTeamSize() * 5000;
	}
public:
	TeamLead(int id,string nm,int hrs,int num): Employee(id,nm),Developer(hrs),
		Manager(num){
		calculateSalary();
	}

	void display() {
		cout << "Tech Lead Info: " << endl;
		displayEmployee();
		cout << "Salary based on coding: " << sal_coding << endl;
		cout << "Salary based on coding + team: " << sal_codingPlusTeam << endl;
	}
	
};