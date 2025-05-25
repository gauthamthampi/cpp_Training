#include <iostream>
using namespace std;
#define MAX 5

int front = 0;
int rear = 0;

int arr[MAX];

int enqueue(int);
int dequeue();
void display();

int enqueue(int v) {
	if (rear == MAX) {
		cout << "Queue is full!" << endl;
		return 0;
	}
	arr[rear] = v;
	rear++;
	return 0;
}

int dequeue() {
	if (front == rear) {
		cout << "Queue is empty";
		rear = 0;
		front = 0;
		return 0;
	}
	cout << arr[front] << " is dequeued." << endl;
	front++;
	return 0;
}

void display() {
	cout << "The elements in queue are: ";
	for (int i = front;i < rear;i++) {
		cout << arr[i] << " -> ";
	}
	
}

int main() {
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	enqueue(60);
	//dequeue();
	display();
}