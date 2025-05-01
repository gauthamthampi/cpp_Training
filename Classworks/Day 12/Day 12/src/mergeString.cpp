#include <iostream>
#include <cstring>
using namespace std;

/*
TC01
i/p
s1 = "ABCDE"
s2 = "abcde"
o/p
s3 = AaBbCcDdEe

TC02
i/p
s1 = "ABCDEFGH"
s2 = "abcde"
o/p
s3 = AaBbCcDdEeFGH

TC03
i/p
s1 = "ABCDE"
s2 = "abcdefgh"
o/p
s3 = AaBbCcDdEefgh
*/


string mergeStr(char[], char[]);

int main() {
    char s1[100], s2[100];
    cout << "Enter string 1: ";
    cin >> s1;
    cout << "Enter string 2: ";
    cin >> s2;

    string s3 = mergeStr(s1, s2);

    cout << "Output is: " << s3 << endl;

    return 0;
}

string mergeStr(char s1[], char s2[]) {
    string s3 = "";
    int i = 0;

    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] != '\0') {
            s3 += s1[i];  
        }
        if (s2[i] != '\0') {
            s3 += s2[i]; 
        }
        i++;
    }

    return s3;
}
