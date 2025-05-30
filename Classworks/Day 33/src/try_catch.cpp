#include <iostream>
using namespace std;

int main() {
	int err = 404;
	string dbyZero = "Cant divide by zero!";
	int n1 = 10, n2 = 0;
	try {
		if (n2 == 0) {
			throw dbyZero;
		}
		else {
			throw err;
		}
	}
	catch (int e) {
		cout << "Int Caught an exception: " << e << endl;
	}
	catch (string e) {
		cout << "String Caught an exception: " << e << endl;
	}
}