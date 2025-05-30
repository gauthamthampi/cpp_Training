#include <iostream>
using namespace std;

template <class T1,class T2>
class Box {
private:
	T1 data1;
	T2 data2;

public:
	Box(T1 v1,T2 v2):data1(v1),data2(v2){}
	void display() {
		cout << "Data 1: " << data1 << endl;
		cout << "Data 2: " << data2 << endl;

	}
};

int main() {
	Box<int, float>intBox(10, 12.5);
	intBox.display();
	Box<char, char>charBox('W', 'A');
	charBox.display();
	int arr[3] = { 1,2,3 };
	Box<int, string>GauthamBox(5, "Batman");
	GauthamBox.display();
	return 0;

}