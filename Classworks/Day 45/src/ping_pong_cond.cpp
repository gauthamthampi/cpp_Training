#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
using namespace std;

mutex mtx;
condition_variable cv;
bool isPing = true;

void printPong() {
	for (int i = 0;i < 5;) {
		if (!isPing) {
			unique_lock<mutex> lock(mtx);
			cv.wait(lock, [] {return !isPing;});
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
			cv.notify_one();
		}
	}
}

int main() {
	thread t1(printPing);
	thread t2(printPong);

	t1.join();
	t2.join();
	return 0;
}