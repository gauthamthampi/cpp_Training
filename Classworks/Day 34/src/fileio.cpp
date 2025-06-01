#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	//writing a file
	ofstream fOut("exmp.txt",ios::trunc);
	fOut << "Multiplication table of 4" << endl;
	for (int i = 0;i < 10;i++) {
		fOut << (i + 1) << " x 4 = " << (i+1)*4 << endl;
	}
	fOut.close();

	//reading a file
	ifstream inFile("exmp.txt");
	string line;
	if (inFile.is_open()) {
		while (getline(inFile, line)) {
			cout << line << endl;
		}
		inFile.close();
	}
	else {
		cout << "Error opening file";
	}
	return 0;
}






