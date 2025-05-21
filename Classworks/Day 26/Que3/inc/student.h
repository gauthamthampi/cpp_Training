#pragma once
#include <iostream>
using namespace std;

class student {
private:
	int regNo;
	string name;
	float marks[3];
	int average = 0;
	float calculateAverage();
public:
	void setRegNo();
	void setName();
	void setMarks();
	char getGrade();
	
};