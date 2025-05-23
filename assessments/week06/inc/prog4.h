#pragma once
#include <string>
using namespace std;
class Luggage {
private:
	string passengerName;
	float weight;
	float limit;

public:
	Luggage(string name,float wei) {
		passengerName = name;
		weight = wei;
		limit = 20;
	}
	void checkOverweight();

};

