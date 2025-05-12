#include <iostream>
using namespace std;

void checkAnagram(char[],char[]);

int main(){
    char str1[10],str2[10];
    cout << "String 1:";
    cin >> str1;
    cout << "String 2:";
    cin >> str2;
    checkAnagram(str1,str2);
    return 0;
}

void checkAnagram(char str1[],char str2[]){
    int length = strlen(str1);
    if(strlen(str2)!=length){
        cout << "Not anagram";
        return;
    }
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (str1[j] > str1[j + 1]) {
                char temp = str1[j];
                str1[j] = str1[j + 1];
                str1[j + 1] = temp;
            }
            if (str2[j] > str2[j + 1]) {
                char temp = str2[j];
                str2[j] = str2[j + 1];
                str2[j + 1] = temp;
            }
        }
    }
    
    if (strcmp(str1, str2) == 0) {
    cout << "Yes,anagram." << endl;
} else {
    cout << "Not anagram." << endl;
}

}
