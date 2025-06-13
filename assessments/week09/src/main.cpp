#include <iostream>
#include <Recorder.h>

using namespace std;

int main() {
	Recorder rh;
	rh.processCDRfileOperator("test.txt");
	//rh.displayAllCustomerBill();
	rh.displayAllOperatorBill();
}