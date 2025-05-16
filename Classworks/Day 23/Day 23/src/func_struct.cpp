#include <iostream>
using namespace std;

typedef struct Employee
{
	int employeeId;
	string name;
	char gender;
	int phone;

}EMP;

void display(EMP e) {
		cout << "ID: " << e.employeeId << endl;
		cout << "Name: " << e.name << endl;
		cout << "Gender: " << e.gender << endl;
		cout << "Phone: " << e.phone << endl;
	
}

int getEmpDetails(EMP *e) {
	cout << "ID:"; cin >> e->employeeId;
	cout << "Name:"; cin >> e->name;
	cout << "Gender:"; cin >>  e->gender;
	cout << "Phone:"; cin >> e->phone;

	return EXIT_SUCCESS;
}


int main() {
	EMP e1;
	getEmpDetails(e1);
	display(e1);


	EMP e[3];
	for (int i = 0;i < 3;i++) {
		cout << "Enter ID: ";
		cin >> e[i].employeeId;
		cout << "Enter name: ";
		cin >> e[i].name;
		cout << "Enter gender: ";
		cin >> e[i].gender;
		cout << "Enter phone: ";
		cin >> e[i].phone;
	}

	for (int i = 0;i < 3;i++) {
		display(e[i]);
	}
}