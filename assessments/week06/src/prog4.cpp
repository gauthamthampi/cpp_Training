#include <iostream>
#include "prog4.h"
using namespace std;

void Luggage::checkOverweight() {
	if (weight < limit) {
		cout << "Luggage within limit." << endl;
		return;
	}
	cout << "Overweight! Exceeded by " << weight - limit << " kg." << endl;
}