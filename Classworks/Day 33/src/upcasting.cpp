#include <iostream>
using namespace std;

class Employee {
public:
	void virtual display() {
		cout << "Iam an employee" << endl;
	}
};

class Manager : public Employee {
public:
	void  display() override {
		cout << "Iam a manager" << endl;
	}
};

class TeamLead : public Employee {
public:
	void display() override {
		cout << "Iam a Team lead" << endl;
	}
};

int main() {
	Manager m1;
	TeamLead tl;
	Employee* e2 = &m1;
	Employee* e1 = &tl;
	e1->display();
	e2->display();
}