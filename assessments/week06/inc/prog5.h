#pragma once
#include <string>
using namespace std;

class Parcel {
private:
	string parcelId;
	float weight;
	float distance;
	float cost;
	void calculateCost();
public:
	Parcel(string id,int wei,int dist){
		parcelId = id;
		weight = wei;
		distance = dist;
		cost = 0;
	}
	void printCost();

};

