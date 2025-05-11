#include <iostream>
using namespace std;
int areaTriangle(int, int);
int areaSquare(int);
int areaCircle(int);
int areaRectangle(int, int);
int main(int argc, char *argv[]) {
	cout << argv[1] << " " << argv[2] << " " << argv[3] << endl;
	int choice;
	cout << "Choose an option:" << endl;
	cout << "1.Area of Triangle" << endl;
	cout << "2.Area of Square" << endl;
	cout << "3.Area of Circle" << endl;
	cout << "4.Area of Rectangle" << endl;
	//cin >> choice;
	choice = atoi(argv[1]);
	switch (choice)
	{
	default:
		cout << "Wrong choice";
		break;
	case 1:
		int b, h;
		float areaT;
		cout << "Enter the breadth: ";
		cin >> b;
		cout << "Enter the height: ";
		cin >> h;
		areaT = areaTriangle(b,h);
		cout << "Area of triangle is: " << areaT;
		break;
	case 2:
		int side,areaS;
		cout << "Enter the side: ";
		cin >> side;
		areaS = areaSquare(side);
		cout << "Area of square is: " << areaS;
		break;
	case 3:
		int radius,areaC;
		cout << "Enter the radius: ";
		cin >> radius;
		areaC = areaCircle(radius);
		cout << "Area of circle is: " << areaC;
		break;
	case 4:
		int length,breadth,area;
		cout << "Enter the length: ";
		cin >> length;
		cout << "Enter the breadth: ";
		cin >> breadth;
		area = areaRectangle(length,breadth);
		cout << "Area of rectangle is: " << area;
		break;
	}
	return 0;
}

int areaCircle(int radius) {
	float area = 3.14 * radius * radius;
	return area;
}

int areaTriangle(int b,int h) {
	float area = 0.5 * b * h;
	return area;
}

int areaSquare(int side) {
	int area  = side * side;
	return area;
}

int areaRectangle(int length,int breadth) {
	int area = length * breadth;
	return area;
}