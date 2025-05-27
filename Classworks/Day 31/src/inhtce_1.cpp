#include <iostream>
using namespace std;

class Nums {
protected:
	int num1, num2;
public:
	void setNums(int num1, int num2) {
		this->num1 = num1;
		this->num2 = num2;
	}
};

class Multiplier : public Nums {
private:
	int prod;
public:
	void setValues() {
		cout << "Enter num1 and num2  values: " << endl;
		cin >> num1 >> num2;
	}
	int multiply() {
		prod = num1 * num2;
		return prod;
	}
};

int main() {
	Multiplier mOj;
	mOj.setValues();
	cout << "Prod: " << mOj.multiply() << endl;
	return 0;
}