#include <iostream>
#include <prog5.h>
using namespace std;

void Parcel::calculateCost() {
	if (weight <= 5)
		cost = 5 * distance;
	else
		cost = 8 * distance;
}

void Parcel::printCost() {
	calculateCost();
	cout << "Parcel " << parcelId << " | Cost $ " << cost << endl;
}