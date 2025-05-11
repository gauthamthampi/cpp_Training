#include <iostream>
using namespace std;

int main() {
	int start, end;
	cout << "Enter start range:";
	cin >> start;
	cout << "Enter the end range:";
	cin >> end;
	int count = start;

	while (count <= end) {
		if (count % 2 == 0) {
			cout << count << ",";
		}
		count++;
	}
	cout << '\b';
	return 0;
}