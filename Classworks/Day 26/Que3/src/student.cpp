#include <iostream>
#include "student.h"
using namespace std;

void student::setRegNo() {
	int n;
	cout << "Enter the regno: ";
	cin >> n;
	student::regNo = n;
}

void student::setName() {
	string name;
	cout << "Enter the name: ";
	cin >> name;
	student::name = name;
}

void student::setMarks() {
	for (int i = 0;i < 3;i++) {
		cout << "Enter the mark for Sub " << i+1 << ":";
		cin >> student::marks[i];
	}
}

float student::calculateAverage() {
	for (int i = 0;i < 3;i++) {
		student::average += student::marks[i];
	}
	student::average /= 3.00;
	return student::average;
}

char student::getGrade() {
	if (student::average <= 100 && student::average > 70)
		return 'A';
	else if (student::average <= 70 && student::average > 50)
		return 'B';
	else
		return 'C';
}
