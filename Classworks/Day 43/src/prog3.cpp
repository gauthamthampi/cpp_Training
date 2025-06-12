/*
Given an array, print the Next Greater Element (NGE) for every element. The Next greater Element for an element x is the first greater element on the right side of x in array. Elements for which no greater 
element exist, consider next greater element as -1.For the input array [4, 5, 2, 25, 7,8},
the next greater elements for each element are as follows.

Element --> NGE
output:

4 --> 5

5 --> 25

2 --> 25

25 --> -1
7 --> 8
8 --> -1
*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int size;
    cin >> size;
    vector<int>nums(size);
    for (int i = 0;i < size;i++) {
        cin >> nums[i];
    }

    for (int i = 0;i < size;i++) {
        bool check = false;
        for (int j = i + 1;j < size;j++) {
            if (nums[i] < nums[j]) {
                cout << nums[i] << " " << nums[j] << endl;
                check = true;
                break;
            }
        }
        if (!check)
            cout << nums[i] << " " << -1 << endl;
    }
    return 0;
}