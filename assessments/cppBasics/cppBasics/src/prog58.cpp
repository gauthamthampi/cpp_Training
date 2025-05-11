//58)TRIM
#include <iostream>
#include <cstring>  
using namespace std;

void trim(char* str) {
    int start = 0;
    int end = strlen(str) - 1;

    while (str[start] == ' ' && str[start] != '\0') {
        start++;
    }

    while (end >= start && str[end] == ' ') {
        end--;
    }

    for (int i = 0; i <= end - start; i++) {
        str[i] = str[start + i];
    }

    str[end - start + 1] = '\0';
}

int main() {
    char str[100];

    cout << "Enter a string with spaces on both sides: ";
    cin.getline(str, 100); 

    trim(str);

    cout << "After trimming: \"" << str << "\"" << endl;

    return 0;
}
