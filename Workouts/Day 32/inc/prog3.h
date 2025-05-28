#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
	int price;
public:
	Vehicle(int p) : price(p) {}
	Vehicle() : price(0) {}
};

class Car : public virtual Vehicle {
protected:
	int seatingCapacity;
	int noOfDoors;
	string fuelType;
public:
	Car(int p, int sc, int nd, string ft) :Vehicle(p), seatingCapacity(sc), noOfDoors(nd),
		fuelType(ft) {}
	Car() :seatingCapacity(0), noOfDoors(0), fuelType("") {}
};

class Audi : public virtual Car {
protected:
	string model_type;
public:
	Audi(int p, int sc, int nd, string ft, string mt)
		: Vehicle(p), Car(p, sc, nd, ft), model_type(mt) {}
	void displayAudi() {
		cout << "Details of Audi" << endl;
		cout << "Price: " << price << endl;
		cout << "Seating Capacity: " << seatingCapacity << endl;
		cout << "Number of doors: " << noOfDoors << endl;
		cout << "Fuel type: " << fuelType << endl;
		cout << "Model type: " << model_type << endl;
	}
};
class Bike : public virtual Vehicle {
protected:
	int noOfCylinders;
	int noOfWheels;
	int noOfGears;
public:
	Bike(int p, int nc, int nw, int ng) :Vehicle(p), noOfCylinders(nc), noOfWheels(nw),
		noOfGears(ng) {}
	Bike() :noOfCylinders(0), noOfWheels(0), noOfGears(0) {}
};

class Yamaha : public virtual Bike {
protected:
	string make_type;
public:
	Yamaha(int p, int nc, int nw, int ng, string mt)
		: Vehicle(p), Bike(p, nc, nw, ng), make_type(mt) {}
	void displayYamaha() {
		cout << "=================" << endl;
		cout << "Details of Yamaha" << endl;
		cout << "Price: " << price << endl;
		cout << "No of cylinders: " << noOfCylinders << endl;
		cout << "Number of wheels: " << noOfWheels << endl;
		cout << "Numver of gears: " << noOfGears << endl;
		cout << "Make type: " << make_type << endl;
	}
};