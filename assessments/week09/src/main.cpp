#include <iostream>
#include <thread>
#include "Recorder.h"  
using namespace std;

void loadUserData(Recorder& rh, const string& filename) {
    rh.processCDRfileUser(filename);
}

void loadOperatorData(Recorder& rh, const string& filename) {
    rh.processCDRfileOperator(filename);
}

int main() {
    Recorder rh;
    string filename = "data.txt";
    thread t1(loadUserData, ref(rh), filename);
    thread t2(loadOperatorData, ref(rh), filename);
    t1.join();
    t2.join();
    int choice;
    do {
        cout << "1. Display All Customer Bills\n";
        cout << "2. Display All Operator Bills\n";
        cout << "3. Save Customer Bills to File\n";
        cout << "4. Save Operator Bills to File\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                rh.displayAllCustomerBill();
                break;
            case 2:
                rh.displayAllOperatorBill();
                break;
            case 3:
                rh.displayAllCustomerBillToFile("customer_bill.txt");
                break;
            case 4:
                rh.displayAllOperatorBillToFile("operator_bill.txt");
                break;
            case 5:
                cout << "Exiting\n";
                break;
            default:
                cout << "Invalid option.\n";
        }
    } while (choice != 5);

    return 0;
}
