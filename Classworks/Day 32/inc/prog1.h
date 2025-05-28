#pragma once
#include <iostream>
using namespace std;


class Vehicle {
protected:
	string make;
	string model;
	
public:
	Vehicle(string mk, string md) : make(mk), model(md) {
		cout << "Starting the Generic Vehicle";
		cout << "\nStopping the Generic Vehicle" << endl;
	}
	void start() {
		cout << "Starting the " << make << " " << model << endl;
	}
	void stop() {
		cout << "\Stopping the " << make << " " << model << endl;
	}
	
};

class Car : public Vehicle {
private:
	int noOfDoors;
	
public:
	Car(string mk, string md, int d) : Vehicle(mk, md), noOfDoors(d) {
	}
	void honk() {
		cout << "Honking the horn of " << make << " " << model << endl;;
	}
};