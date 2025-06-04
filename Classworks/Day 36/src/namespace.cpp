#include <iostream>
using namespace std;
#define PI 3.14


namespace Circle {
	double Area(double x) {
		return PI * x * x;
	}
}

namespace Square {
	double Area(double x) {
		return x * x;
	}
}

double Area(double x) {
	return x;
}

int main() {
	using namespace Circle;
	cout << Square::Area(4) << endl;
	//cout << Area(5); //here there is a confussion which area should be executed(Circle or global)
	cout << Circle::Area(5) << endl;
	cout << ::Area(5); //executes global area (::-->global scope)

}