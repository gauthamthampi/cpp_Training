#include <iostream>
#include <Recorder.h>

using namespace std;

int main() {
	Recorder rh;
	rh.processCDRfileUser("data.txt");
	rh.processCDRfileOperator("data.txt");
	rh.displayAllCustomerBill();
	rh.displayAllOperatorBill();
}