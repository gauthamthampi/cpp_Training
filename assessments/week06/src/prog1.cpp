#include <iostream>
#include "prog1.h"
using namespace std;


void Flight::bookSeats(int num) {
	if (num > totalSeats && num < 0) {
		cout << "Unable to book right now.";
		return;
	}
	if (bookedSeats + num > totalSeats) {
		cout << "Booking Failed! Not enough seats.";
		return;
	}
	bookedSeats += num;
}

void Flight::showAvailability() {
	cout << "Flight: " << flightNo << " | Seats available: " << totalSeats - bookedSeats << endl;
}