#include <iostream>
#include <typeinfo>
using namespace std;


template <class T1,class T2>
class Calculator {
	T1 data1;
	T2 data2;
public:
	Calculator(T1 a,T2 b):data1(a),data2(b){
		cout << "Batman's Calculator!" << endl;
	}
	void add() {
		cout << data1 << " + " << data2 << " = " << data1+data2 << endl;
	}
	void subtract() {
		cout << data1 << " - " << data2 << " = " << data1 - data2 << endl;
	}
	void multiply() {
		cout << data1 << " x " << data2 << " = " << data1 * data2 << endl;
	}
	void divide() {
		if (data2 == 0) {
			cout << "Cannot divide with zero! Try with another value." << endl;
			return;
		}
		cout << data1 << " / " << data2 << " = " << data1 / data2 << endl;
	}
};

int main() {
	Calculator<float, int>values(20.5, 5);
	values.add();
	values.subtract();
	values.multiply();
	values.divide();
	return 0;
}