#include <iostream>
#include <prog1.h>
using namespace std;

int main() {
	int rollNo, age,mark1,mark2,mark3;
	string name;

	cout << "Enter roll no: "; cin >> rollNo;
	cout << "Enter name: " ; cin >> name;
	cout << "Enter age: "; cin >> age;
	cout << "Enter 3 marks: "; cin >> mark1 >> mark2 >> mark3;

	Marks m(rollNo, name, age, mark1, mark2, mark3);
	m.displayMarks();
}