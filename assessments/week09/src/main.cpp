#include <iostream>
#include <thread>
#include "Recorder.h"  // Make sure path/case matches your file

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

    // Start two threads for user and operator data loading
    thread t1(loadUserData, ref(rh), filename);
    thread t2(loadOperatorData, ref(rh), filename);

    // Wait for both threads to complete
    t1.join();
    t2.join();

    int choice;
    do {
        cout << "\n===== CDR Billing System Menu =====\n";
        cout << "1. Display All Customer Bills (Console)\n";
        cout << "2. Display All Operator Bills (Console)\n";
        cout << "3. Save Customer Bills to File\n";
        cout << "4. Save Operator Bills to File\n";
        cout << "5. Display Specific Customer Bill\n";
        cout << "6. Display Specific Operator Bill\n";
        cout << "0. Exit\n";
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
            case 5: {
                int id;
                cout << "Enter customer ID: ";
                cin >> id;
                rh.displayCustomerBill(id);
                break;
            }
            case 6: {
                int id;
                cout << "Enter operator ID: ";
                cin >> id;
                rh.displayOperatorBill(id);
                break;
            }
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
