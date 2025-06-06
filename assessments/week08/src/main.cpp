#include <iostream>
#include "instruction.h"
#include "memory.h"
#include "register.h"
#include <string>
using namespace std;

int main() {
	Instruction e1;
	e1.loadFile("instructions.txt");
	e1.execute();
	return 0;
}


//string s2 = "[16]";
//int digit1 = s2[1], digit2 = s2[2];
//cout << digit1 << endl;
//cout << digit2 << endl;
//string st;
//if (digit1 >= 48 && digit1 <= 57) {
//	if (digit2 >= 48 && digit2 <= 57) {
//		st = s2[1] + s2[2];
//	}
//	else {
//		st = s2[1];
//	}
//}
//st = s2[1] + s2[2];
//cout << st;