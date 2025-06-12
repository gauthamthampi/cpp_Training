#include <iostream>
#include <thread>
using namespace std;

void printNumbers(int start, int end) {
	for (int i = start; i <= end;i++) {
		cout << i << endl;
	}
}


int main() {
	thread t1(printNumbers, 1, 10);
	thread t2(printNumbers, 11, 20);

	t1.join();
	t2.join();

	return 0;
}