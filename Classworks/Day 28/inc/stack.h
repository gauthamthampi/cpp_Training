#pragma once
#include <iostream>
using namespace std;
#define MAX 10
class Stack {
private:
	int top;
	int bottom;
	int arr[MAX];
public:
	Stack() {
		top = -1;
		bottom = -1;
	}
	int push(int v) {
		if (top == MAX-1) {
			cout << "Stack overflow!" << endl;
			return 0;
		}
		top++;
		arr[top] = v;
		cout << "Value pushed" << endl;
		return 0;
	};
	int pop() {
		if (top == bottom) {
			cout << "Stack underflow!" << endl;
		}
		top--;
		cout << "Element popped out!"<<endl;
		return 0;
	};
	void display() const {

	};
};
