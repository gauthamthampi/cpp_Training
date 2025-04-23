#include <iostream>
using namespace std;

void enumHandling() {
	enum Day{Sun,Mon,Tue,Wed,Thu,Fri,Sat};

	Day today = Fri;
	cout << "Value of today: " << today << endl;
}