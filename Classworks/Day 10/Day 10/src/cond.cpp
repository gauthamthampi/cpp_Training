#include <iostream>
using namespace std;

int main() {
	int remBattery,mobstatus;
	cin >> remBattery;

	if (remBattery < 15)
		cout << "Your Battery is low. Please charge.";

	cout << "Open Browser" << endl; 
	cout << "Check today's live news" << endl;
	return 0;
}
