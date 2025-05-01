#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char arr[] = "Hello, World!";

    //int length = sizeof(arr) / sizeof(arr[0]);
    int length = strlen(arr);

    /*
    for (int i = 0; i < length - 1; i++) { 
        cout << arr[i];
    }
    */
    char firstName[] = "Gautham", secondName[] = "Thampi";
    
    //strcpy(firstName, secondName);  //firstName gets overrided by secondName
    //strcat(firstName, secondName); //both strings get concatenated
    
    
    //int strcmp(const char* str1, const char* str2); 
    // ==> returns 0 if equal, -ve if str1<, +ve if str1>

    //compare with condition
    //int res = strncmp(str1, str2, 5);

    int res = strcmp(firstName, secondName);

    printf("%d\n", res);
    return 0;
}


