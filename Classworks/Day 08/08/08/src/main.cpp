#include <iostream>;
using namespace std;

void display(void);
/*
int main() {
	int ch;
	display();
	cin >> ch;
	switch (ch) {
	default:
		cout << "Enter correct option" << endl;
	case 1: 
		cout << "Addition" << endl;
	case 2:
		cout << "Subtraction" << endl;
	case 3:
		cout << "Multiplication" << endl;
	case 4:
		cout << "Division" << endl;
	}

}
*/


void display();
void display2(string str);
int display3(int i);

int main() {
	display();             
	display2("Marcus");      
	display3(15);           

	return 0;
}
