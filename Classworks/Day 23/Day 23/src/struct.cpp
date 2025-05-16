#include <iostream>
using namespace std;

typedef struct Employee
{
	int employeeId;
	string name;
	char gender;
	int phone;

}EMP;

int main() {
	EMP e1;
	e1.name = "Gautham";
	e1.gender = 'M';
	e1.phone = 1234;

	cout << "Name: " << e1.name << endl;
	cout << "Gender: " << e1.gender << endl;
	cout << "Phone: " << e1.phone << endl;

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
		cout << "ID: " << e[i].employeeId << endl;
		cout << "Name: " << e[i].name << endl;
		cout << "Gender: " << e[i].gender << endl;
		cout << "Phone: " << e[i].phone << endl;
	}
}