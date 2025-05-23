#include <iostream>
#include "prog2.h"
using namespace std;


void HotelRoom::bookRoom() {
	if (!isBooked) {
		isBooked = true;
		return;
	}
	cout << "Room already booked." << endl;
	return;
}

void HotelRoom::showStatus() {
	if (isBooked) {
		cout << "Room " << roomNumber << " (" << roomType << ") is now booked." << endl;
		return;
	}
}