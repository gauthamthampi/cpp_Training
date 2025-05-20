#include <iostream>
using namespace std;

union Employee
{
	int id;
	string name;
}EMP;

int main() {
	EMP e;
	cout << sizeof(e) << endl;
	e.id = 101;
	cout << e.id << endl;
	strcpy(e.name, "gautham");
}