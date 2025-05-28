#include <iostream>
#include "prog3.h"
using namespace std;

int main() {
	Audi a(400, 4, 4, "petrol", "rs");
	Yamaha y(500, 2, 6, 4, "ns");
	a.displayAudi();
	y.displayYamaha();
	return 0;
}

