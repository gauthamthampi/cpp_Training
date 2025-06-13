#include <iostream>
#include <thread>
#include <Recorder.h>

using namespace std;

int main() {
	Recorder rh;
	rh.processCDRfileUser("data.txt");
	rh.processCDRfileOperator("data.txt");
	rh.displayAllCustomerBillToFile("customer_bill.txt");
	rh.displayAllOperatorBillToFile("operator_bill.txt");
	return 0;
}