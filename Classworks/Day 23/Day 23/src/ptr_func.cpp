#include <iostream>
using namespace std;

int* func(int a) {
	static int sum = 0;
	sum += a;
	cout << "BA of sum=" << (unsigned long int) & sum << endl;
	return &sum;
}

int main() {
	int* ptr = func(101); //after the above function being executed, since the stack frame gets 
	//destroyed the var sum also gets destroyed and it is now pointing in ptr. This is called 
	//dangling ptr. by using static we can retain the variable even after the removal of function 
	//from the stack frame.(lost reference)

	cout << *ptr << ": Address which is allocated: ";
	return 0;
}