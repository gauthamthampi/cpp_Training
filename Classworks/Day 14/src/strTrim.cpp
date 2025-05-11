#include <iostream>
using namespace std;
void ltrim(char[]);
int main()
{
    char string2[] = "   wind";
    ltrim(string2);
    int new_len2 = strlen(string2);
    printf("After trim String2 is <%s>\nLength is %d\n", string2, new_len2);
    return 0;
}

void ltrim(char* string)
{
    int i = 0;
    while (string[i] == ' ')
    {
        i++;
        string = string + i;
    }
    printf("inside function string is <%s>---length is %d\n", string, strlen(string));
}