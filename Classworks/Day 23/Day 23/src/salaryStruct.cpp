#include <iostream>
using namespace std;

typedef struct Employee
{
	int employeeId;
	string name;
}EMP;

typedef struct Period
{
	int employeeId;
	int period_days;
}PER;

typedef struct Salary
{
	int employeeId;
	int basePay;
	int allowance;
	int tax;
}SAL;



int getEmpDetails(EMP* e,PER* p,SAL* s) {
	cout << "ID:"; cin >> e->employeeId;
	cout << "Name:"; cin >> e->name;
	p->employeeId = e->employeeId;
	cout << "No of days: "; cin >> p->period_days;
	s->employeeId = e->employeeId;
	cout << "Base pay(Per day): "; cin >> s->basePay;
	cout << "Allowance: "; cin >> s->allowance;
	cout << "Tax: "; cin >> s->tax;
	return EXIT_SUCCESS;
}

int calculateSalary(EMP e, PER p, SAL s) {
	return s.basePay * p.period_days + s.allowance - s.tax;
}


void display(EMP e,PER p,SAL s) {
	cout << "ID: " << e.employeeId << endl;
	cout << "Name: " << e.name << endl;
	cout << "No of Days worked: " << p.period_days << endl;
	cout << "Base Pay: " << s.basePay << endl;
	cout << "Allowance: " << s.allowance << endl;
	cout << "Tax deduction: " << s.tax << endl;
	cout << "Total salary: " << calculateSalary(e, p, s);
}


int main() {
	EMP e1;
	PER p1;
	SAL s1;
	getEmpDetails(&e1,&p1,&s1);
	display(e1, p1, s1);
	return 0;
}