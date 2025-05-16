//1. Given an input string str of n length, find the number of consitives characters 
// present in the given and delete those consitive chars in the string str. 

#include <iostream>
using namespace std;
void removeConsecutive(char*);

void removeConsecutive(char* ptr) {
	int length = strlen(ptr), count = 0;
	for (int i = 0;i < length;i++) {
		if (abs(*ptr - ++ * ptr) == 1) {
			for (int j = i;i < length;j++) {
				ptr = ptr + 2;
			}
			count++;
		}
	}

	ptr[length-2]
}

void removeStr(char* ptr, int start, int end) {
	while (*ptr != '\0') {

	}
}
int main() {

}
