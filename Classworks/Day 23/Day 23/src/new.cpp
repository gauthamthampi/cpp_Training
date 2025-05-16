#include <iostream>
using namespace std;

int main() {
	int* ptr = (int*)malloc(sizeof(int) * 3);
	int* temp = ptr;
	cin >> *ptr;
	ptr++;
	cin >> *ptr;
	ptr++;
	cin >> *ptr;

	ptr = temp;
	for (int i = 0;i < 3;i++) {
		cout << *ptr++ << endl;	
	}
	cout << endl;

	ptr = temp;
	free(ptr);

	

}