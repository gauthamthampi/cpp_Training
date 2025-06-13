#include <iostream>
#include <Recorder.h>

using namespace std;

int main() {
	Recorder rh;
	rh.processCDRfileUser("test.txt");
	rh.processCDRfileOperator("test.txt");
	rh.displayAllCustomerBill();
	rh.displayAllOperatorBill();
}