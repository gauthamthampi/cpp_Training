#pragma once
#include <string>
using namespace std;

class Flight {
private:
	string flightNo;
	int totalSeats;
	int bookedSeats;

public:
	Flight(string str, int seats) {
		flightNo = str;
		totalSeats = seats;
		bookedSeats = 0;
	}
	void bookSeats(int);
	void showAvailability();
};