#include <iostream>
using namespace std;

class Vehicle {
public:
	string type;
	void show() {
		cout << "The type is: " << type;
	}
};

int main() {
	Vehicle car;
	car.type = "Four wheeler";
    car.show();
	return 0;
}