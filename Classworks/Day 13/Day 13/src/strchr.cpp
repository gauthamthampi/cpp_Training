#include <iostream>
using namespace std;

int main() {
	char line[] = "This is a CPP Programming Class";
	char ch = 'g';

	char* res = strchr(line, ch);

	if (res != nullptr)
		cout << res << endl;
	else
		cout << "character not found" << endl;
}