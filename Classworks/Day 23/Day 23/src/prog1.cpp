//passing array to function
#include <iostream>
using namespace std;

void display(char[]);

void display(char str[]) {
	while (*str != '\0') {
		cout << *str++;
	}
	cout << endl;
}

int main() {
	char str[] = "gautham";
	//display("gautham") ---> cannot pass like this since it is not a const value.
	//when writing a display function always give const value for not getting changed inside the 
	// diplay function
	display(str);
	return 0;
}

