#include <iostream>
using namespace std;

class Student {
protected:
	int rollNo;
	string name;
public:
	virtual void displayStudentDetails()=0;
	virtual void displayDue() = 0;
	virtual void getStatus() = 0;
	
};

class Sports : public Student {
public:
	void getSport();
	void displayDue();
	void getStatus();
	void displayStudentDetails();
};

class Marks : public Student {
public:
	int getTotalMarks();
	void displayDue() {};
	void getStatus();
	void displayStudentDetails();
};

void abstract(Student* s) {
	s->displayDue();
	s->getStatus();
	s->displayStudentDetails();
	
}
int main() {
	Student* s1;
	Student* s2;
	Sports sp;
	Marks m;
	s1 = &sp;
	s2 = &m;
	sp.getSport();
	m.getTotalMarks();
	abstract(s1);
	abstract(s2);
}

