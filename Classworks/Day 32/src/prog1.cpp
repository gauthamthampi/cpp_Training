#include <iostream>
#include "prog1.h"
using namespace std;

int main() {
	Car c1("Toyota", "Camry", 4);
	c1.start();
	c1.honk();
	c1.stop();
	return 0;
}