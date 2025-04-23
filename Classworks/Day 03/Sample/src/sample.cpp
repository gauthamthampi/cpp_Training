#include <iostream>;
using namespace std;

class Test {

	mutable int counter;
public: 
	int count;
public:
	void update() const {
		counter++; //since mutable it can be incremented
		count++ //here count cannot be incremented because it is not mutable and func is const
	}
};

int main() {
	int r = 100;
	int ret = func(r);
	cout << ret << endl;
	return 0;
}

int func(int v) {
	static int temp = 1000;
	temp = temp + v;

	return temp;
}