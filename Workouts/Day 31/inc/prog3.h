#pragma once
#include <iostream>
using namespace std;


class Vehicle {
private:
	int vehicleId;
	string type;
	int ratePerKm;
	int distance;
	int days;
	int fare;
	void calculateFare() {
		fare = distance * ratePerKm;
	}
public:
	Vehicle(int id,string typ,int rate,int dist,int dys): vehicleId(id),type(typ),
		ratePerKm(rate),distance(dist),days(dys){
		calculateFare();
	}
	Vehicle() :vehicleId(0), type(""), ratePerKm(0), distance(0), days(0) {}
	
	void display() {
		cout << "Fare without distance: " << fare << endl;
		if (this->days > 2) {
			fare -= fare * 0.10;
		}
		cout << "Fare with long-term discount: " << fare << endl;
	}
};

class Bike : public virtual Vehicle {
private:
	string make;
public:
	Bike(string mk): make(mk) {}
	void display() const {
		cout << "Bike make is: " << make << endl;
	}
};


class Car : public virtual Vehicle {
private:
	string make;
public:
	Car(string mk) : make(mk) {}
	void display() const {
		cout << "Car make is: " << make << endl;
	}
};