#include <iostream>
#include "prog2.h"
using namespace std;

int main() {
	int id, hours, size;
	string name;

	cout << "Enter employee id: "; cin >> id;
	cout << "Enter name: "; cin >> name;
	cout << "Enter coding hours: "; cin >> hours;
	cout << "Enter size; "; cin >> size;

	TeamLead tl(id, name, hours, size);
	tl.display();
	return 0;
}