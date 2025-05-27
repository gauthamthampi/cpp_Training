#include <iostream>
using namespace std;

class Data {
public:
	int a;
	void print() {
		cout << "a is " << a << endl;
	}
};

//pointer to class member`
int main() {
	Data d, * dp;
	dp = &d;

	int Data::* ptr = &Data::a;
	d.*ptr = 10;
	d.print();

	dp->*ptr = 20;
	dp->print();
}

//pointer to class
int main() {
	Data d, * ptr;
	ptr = &d;
	ptr->a = 10;
	ptr->print();
}