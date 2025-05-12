#include <iostream>
using namespace std;

void countFrequency(char[]);

int main() {
    char arr[100];
    cout << "Enter the string: ";
    cin >> arr;
    countFrequency(arr);
    return 0;
}


void countFrequency(char str[]) {
    int freq[26] = {0};  

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {  //lowercase
            freq[str[i] - 'a']++;  
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << "Count of '" << char(i + 'a') << "' : " << freq[i] << endl;
        }
    }
}
