#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex mtx;
bool isPing = true;

void printPong() {
	for (int i = 0;i < 5;) {
		if (!isPing) {
			lock_guard<mutex> lock(mtx);
			cout << "Pong!" << endl;
			isPing = true;
			i++;
		}
	}
}

void printPing() {
	for (int i = 0;i < 5;) {
		if (isPing) {
			lock_guard<mutex> lock(mtx);
			cout << "Ping!" << endl;
			isPing = false;
			i++;
		}
	}
}

int main() {
	thread t1(printPing);
	thread t2(printPong);
	if (t2.joinable()) {
		t2.join();
	}

	if (t1.joinable()) {
		t1.join();
	}
	return 0;
}