#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cout << "Enter five numbers:" << endl;

    cout << "Enter number A: ";
    cin >> a;
    cout << "Enter number B: ";
    cin >> b;
    cout << "Enter number C: ";
    cin >> c;
    cout << "Enter number D: ";
    cin >> d;
    cout << "Enter number E: ";
    cin >> e;

    if (a > b) {
        if (a > c) {
            if (a > d) {
                if (a > e) {
                    cout << "A is the greatest";
                }
                else {
                    cout << "E is the greatest";
                }
            }
            else {
                if (d > e) {
                    cout << "D is the greatest";
                }
                else {
                    cout << "E is the greatest";
                }
            }
        }
        else {
            if (c > d) {
                if (c > e) {
                    cout << "C is the greatest";
                }
                else {
                    cout << "E is the greatest";
                }
            }
            else {
                if (d > e) {
                    cout << "D is the greatest";
                }
                else {
                    cout << "E is the greatest";
                }
            }
        }
    }
    else {
        if (b > c) {
            if (b > d) {
                if (b > e) {
                    cout << "B is the greatest";
                }
                else {
                    cout << "E is the greatest";
                }
            }
            else {
                if (d > e) {
                    cout << "D is the greatest";
                }
                else {
                    cout << "E is the greatest";
                }
            }
        }
        else {
            if (c > d) {
                if (c > e) {
                    cout << "C is the greatest";
                }
                else {
                    cout << "E is the greatest";
                }
            }
            else {
                if (d > e) {
                    cout << "D is the greatest";
                }
                else {
                    cout << "E is the greatest";
                }
            }
        }
    }

    return 0;
}
