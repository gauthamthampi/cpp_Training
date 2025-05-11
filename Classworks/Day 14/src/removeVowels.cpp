#include <iostream>
using namespace std;

int main() {
	char ch[100],out[100];
	cout << "Enter the character: ";
	cin.getline(ch, 100);
	char arr[100] = { "aeiouAEIOU" };
	int count = 0,length = strlen(ch);

    for (int i = 0; i < length; i++) {
        bool isVowel = false;

        for (int j = 0; j < strlen(arr); j++) {
            if (ch[i] == arr[j]) {
                isVowel = true;
                break;  
            }
        }

        if (isVowel) {
            for (int k = i; k < length; k++) {
                ch[k] = ch[k + 1];  
            }
            length--;  
            i--;    
        }
    }

    cout << "String after removing vowels: " << ch << endl;
    return 0;
}