#pragma once
#include <iostream>
using namespace std;
#define MAX 5

class Student {
protected:
	int rollNo;
	string name;
	int age;
public:
	Student(int rn, string nm, int ag):rollNo(rn),name(nm),age(ag) {}

	void displayStudent() {
		cout << "Student Info:" << endl;
		cout << "Roll No: " << rollNo << endl;
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}

};

class Marks : public Student {
private:
	int mark1, mark2, mark3, totalMarks;
	float avg;
	void calculate() {
		totalMarks = mark1 + mark2 + mark3;
		avg = totalMarks / 3;
	}
public:
	Marks(int rn, string nm, int ag, int a,int b,int c) :
		Student(rn, nm, ag),mark1(a),mark2(b),mark3(c){
		calculate();
	}

	void displayMarks() {
		displayStudent();
		cout << "Full Result:" << endl;
		cout << "Total Marks: " << totalMarks << endl;
		cout << "Average Marks: " << avg << endl;
	}
	
};