#include <iostream>
#include "student.h";
using namespace std;

int main() {
	student s;
	s.setRegNo();
	s.setName();
	s.setMarks();
	cout << "The grade is: " << s.getGrade();
}