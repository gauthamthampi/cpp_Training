#include <iostream>
#include <cstring>
using namespace std;

// Function to calculate the length of a string
int strLengthM(char strArr[], int size);

int main() {
    char arr[] = "Hello, World!";

    int length = strlen(arr);

    char firstName[] = "Gautham", secondName[] = "Thampi";

    int res = strcmp(firstName, secondName);

    printf("%d\n", res);

    cout << "Length of firstName is: " << strLengthM(firstName, strlen(firstName)) << endl;
    return 0;
}

// Implementing the string length function
int strLengthM(char strArr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (strArr[i] == '\0')  
            break;
        count++;
    }
    return count;
}
