#include <iostream>
using namespace std;

struct Employee {
	int id;
	string name;
};


int main() {
	int* p = new int(10); //new allocation(dynamic)
	cout << sizeof(*p) << endl;
	//for array allocation
	int* a = new int[10];
	for (int i = 0;i < 10;i++) {
		a[i] = (i + 1) * 2;
	}

	for (int i = 0;i < 10;i++) {
		cout << a[i] << endl;
	}

	Employee* e1 = new Employee[10]; //allocatate a pointer to array of size 10 with employee struct as base
	Employee* e2 = new Employee{ 101,"gautham" }; //allocate a pointer to variable with values on the basis of struct

}