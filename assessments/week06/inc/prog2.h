#pragma once
#include <string>
using namespace std;

class HotelRoom {
private:
	int roomNumber;
    string roomType;
	bool isBooked;
	
public:
	HotelRoom(int num, string type) {
		roomNumber = num;
		roomType = type;
		isBooked = false;
	}
	void bookRoom();
	void showStatus();
};

