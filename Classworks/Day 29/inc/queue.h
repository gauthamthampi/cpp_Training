#pragma once
#include <iostream>
using namespace std;
#define MAX 10


class Queue {
private:
	int front;
	int rear;
	int arr[MAX];

public:
	Queue() {
		front = 0;
		rear = 0;
	}
	int enqueue(int v) {
		if (rear == MAX) {
			cout << "Queue is full";
		}
	}
};