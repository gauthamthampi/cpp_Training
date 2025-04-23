#include <iostream>
using namespace std;
#define MAXBITES 10

/*
int main() {
	int taste = 0;
	int plateEmpty = MAXBITES;
	do {
		cout << "Have a bite of the food"<<plateEmpty << endl;
		plateEmpty--;
		cout << "How is the taste of (0/1) :";
		cin >> taste;
	} while (taste > 0);

	if (plateEmpty == 0) {
		cout << "Person stoped eating as the plate was empty" << endl;
		cout << "And the food was awesome." << endl;
	}
	if (taste == 0) {
		cout << "Taste was not good enough after having" << (MAXBITES - plateEmpty);
		cout << " bites of food" << endl;
	}
}
*/
//my use case
int main() {
	float price = 0.0;
	float total = 0.0;
	char moreItems;

	do {
		cout << "Enter the price of the item: ";
		cin >> price;
		total += price;

		cout << "Do you want to add another item?(y/n): ";
		cin >> moreItems;

	} while (moreItems == 'y' || moreItems == 'Y');

	cout << "Total bill amount: $" << total << endl;
	cout << "Thank you for shopping!" << endl;

	return 0;
}


