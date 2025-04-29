#include <iostream>
using namespace std;
#define CAP 5


//que1
/*
int main() {
   int n = 5;
   cout << "Enter the number of elements you want to store: ";
   cin >> n; 
int arr[CAP];

cout << "Enter " << 5 << " numbers:" << endl;
for (int i = 0; i < 5; i++) {
	cout << "Enter number " << i + 1 << ": ";
	cin >> arr[i];
}

int toSearch;
cout << "Enter element to be searched: ";
cin >> toSearch;

//search for a en element
for (int i = 0; i < 5; i++) {
	if (arr[i] == toSearch) {
		cout << "Yes, found at position " << i << endl;
		return 0;
	}
}

cout << "Not found!";

return 0;
}

*/

//que 2
//arrange array in order where left part should conatin eve and right for odd num;

//ifdef __INTELLISENSE__     ---> Pedantic errors
//pragma diag_suppress 28
//#endif   --> add this when we collect size of array dynamically from user

int main() {
    int arr[] = { 23, 34, 25, 63, 42, 18, 91, 56, 79, 14 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int countOdd = 0, countEven = size - 1;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {  
            arr[countOdd] = arr[i];
            countOdd++;
        }
        else {  
            arr[countEven] = arr[i];
            countEven--;
        }
    }

    cout << "Rearranged array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

//find the nth number made up of 1,4,6,9 digits only