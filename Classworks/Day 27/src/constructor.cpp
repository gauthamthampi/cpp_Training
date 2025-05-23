#include <iostream>
using namespace std;

class Employee {
private:
	int e_id;
	string name;

public:
	/*Employee() {
		cout << "Hi from constructor.";
	}          ----------> default constructor*/

	Employee(int i, string n) {
		e_id = i;
		name = n;
		cout << "Hi, the id is: " << e_id << " and name is " << name;
	}
};

int main() {
	Employee e(101,"gautham");
	return 0;
}



