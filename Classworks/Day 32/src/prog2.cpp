#include <iostream>
#include "prog2.h"
using namespace std;

int main() {
	Animal* animal1;
	Animal* animal2;

	animal1 = new Dog();
	animal2 = new Cat();
	
	animal1->make_sound();
	cout << endl;
	animal2->make_sound();

	delete animal1;
	delete animal2;
	return 0;
}