#include <iostream>
#include <vector>
using namespace std;


int main() {
	vector<int>arr;
	arr.push_back(10);
	arr.push_back(20);
	arr.push_back(30);
	cout << arr.capacity() << endl;
	cout << arr.size() << endl;
	for (auto i : arr){ 
		cout << i << " ";
	}
	return 0;
}