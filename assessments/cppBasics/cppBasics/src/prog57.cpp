//66) Rtrim
#include <iostream>
using namespace std;
#define MAX 100

void rtrim(char* str) {
    int len = strlen(str);  
    int end = len - 1;

    while (end >= 0 && str[end] == ' ') {
        end--;
    }

    str[end + 1] = '\0';
}

int main() {
    char str[100];
    cin.getline(str, 100);  

    rtrim(str);

    cout << "After right trimming: \"" << str << "\"" << endl;

    return 0;
}