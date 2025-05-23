#include <iostream>
#include "prog3.h"
using namespace std;

float DeliveryTip::calculateTip() {
    if (distance < 5) {
        tip = (billAmount * 5) / 100;  
    }
    else if (distance >= 5 && distance <= 10) {
        tip = (billAmount * 10) / 100;  
    }
    else {
        tip = (billAmount * 15) / 100;  
    }

    return tip;
}


void DeliveryTip::printDetails() {
	calculateTip();
	cout << "Order " << orderId << " | Tip $" << tip;
}