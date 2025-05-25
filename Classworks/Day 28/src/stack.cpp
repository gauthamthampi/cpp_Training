#include <iostream>
using namespace std;
#define MAX 10

int top = -1;
int bottom = -1;
void display();
int push(int);
int pop();
int arr[MAX];


int push(int v) {
	if (top == MAX-1) {
		cout << "Stack full!";
		return 0;
	}
	arr[top] = v;
	top++;
	cout << "Value pushed";
	return 0;
};


int pop() {
	if (top == 0) {

	}
}