#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex mtx;

void increment(int& val) {
	for (int i = 0;i < 1000;i++) {
		mtx.lock(); //here mutex protects the variable from being accessed by diff threads.
		// lock method make upcoming threads wait until unlocked.
		++val;
		mtx.unlock();
	}
}

int main() {
	int val = 0;
	thread t1(increment, ref(val));
	thread t2(increment, ref(val));
	t1.join();
	t2.join();
	cout << "Final counter value: " << val << endl;
	return 0;
}