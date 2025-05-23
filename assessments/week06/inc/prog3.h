#pragma once
using namespace std;

class DeliveryTip {
private:
	string orderId;
	float billAmount;
	float distance;
	float tip;
	float calculateTip();
public:
	DeliveryTip(string id,float bill,float dist) {
		orderId = id;
		billAmount = bill;
		distance = dist;
		tip = 0;
	}

	void printDetails();

};

