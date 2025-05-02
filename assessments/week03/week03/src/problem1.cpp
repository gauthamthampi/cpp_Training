#include <iostream>
using namespace std;
#include <string>
#define MAX 1024


/*
1)Problem Statement 1
Write a program that performs the following tasks:

Finds the starting positions (0-based index) of the substrings "are" and "i" in a given input string.
Calculates and prints the sum of these two positions.
If either of the substrings is not found in the input, treat its position as -1.
*/
int findSubStrSum(char[]);
int main() {
	char myString[MAX];
	cout << "Enter the string: ";
	cin.getline(myString, MAX);
	int sum = findSubStrSum(myString);
	cout << "Sum = " << sum;
	return 0;
}

int findSubStrSum(char str[]) {
	int areCount=-1, iCount=-1, sum, i=0;
	while (str[i] != '\0') {
		if (str[i] == 'a') {
			if (str[i + 1] == 'r' && str[i + 2] == 'e') {
				areCount = i;
			}
		}
		if (str[i] == 'i') {
			if(iCount==-1)
			iCount = i;
		}
		i++;
	}
	
	sum = areCount + iCount;
	return sum;
}

//ALL TEST CASE VERIFIED