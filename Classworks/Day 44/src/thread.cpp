#include <iostream>
#include <thread>
using namespace std;

void greet() {
	cout << "Hello World!" << endl;
}

//int main() {
//	thread t1(greet);
//	//t1.join(); //  wait for the thread to finish
//	t1.detach(); // unrefer the thread and execute independently
// 	// by using join, thread get executed and return to main else will get aborted
//	// without having reference.
//
//	cout << "End of the program" << endl;
//	//t1.join(); // since t1 finished execution a deadlock happens
//	return 0;
//}

//Passing arguments via thread
void show(int x) { std::cout << x << "\n"; }

void update(int& x) { x += 10; }
int main() {
	thread t1(show, 100); // Passes copy
	t1.join();
	int val = 5;
	thread t2(update, ref(val)); //by reference
	t2.join();
	std::cout << val; // 15
}