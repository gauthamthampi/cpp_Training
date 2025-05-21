#include <iostream>
using namespace std;

class Student {
private:
	int rollno;
	string name;
	char gender;
	int grade;
	char division;
	string bloodGroup;
	int mobile;
	
public:
	void setRollNo(int r) {
		rollno = r;
	}
	void setName(string str) {
		name = str;
	}
	void setGender(char g) {
		gender = g;
	}
	void setGrade(int g) {
		grade = g;
	}
	void setDivision(char d) {
		division = d;
	}
	void setBloodGroup(string str) {
		bloodGroup = str;
	}
	void setMobile(int num) {
		mobile = num;
	}

	 int getRollNo() {
		return rollno;
	}
	 string getName() {
		 return name;
	 }
	 char getGender() {
		 return gender;
	 }
	 int getGrade() {
		 return grade;
	 }
	 char getDivsion() {
		 return division;
	 }
	 string getBloodGroup() {
		 return bloodGroup;
	 }
	 int getMobile() {
		 return mobile;
	 }

};

int main() {
	Student s;
	int r = 1;
	string name = "Danish";
	char gender = 'M';
	int grade = 8;
	char division = 'B';
	string bloodGroup = "A+ve";
	int mobile = 1234;
	s.setRollNo(r);
	s.setName(name);
	s.setGender(gender);
	s.setGrade(grade);
	s.setDivision(division);
	s.setBloodGroup(bloodGroup);
	s.setMobile(mobile);
	cout << s.getRollNo() << endl;
	cout << s.getName() << endl;
	cout << s.getGender() << endl;
	cout << s.getGrade() << endl;
	cout << s.getDivsion() << endl;
	cout << s.getBloodGroup() << endl;
	cout << s.getMobile();
	return 0;
}