#include <iostream>
#include "prog1_job.h"
#include "prog1_logger.h"
using namespace std;

void showMenu() {

        cout << "==== JobChain Scheduler ====" << endl;
        cout << "1. Load jobs from file" << endl;
        cout << "2. Choose scheduling algorithm" << endl;
        cout << "   a. FIFO (Job ID)" << endl;
        cout << "   b. Priority-based" << endl;
        cout << "3. Execute jobs" << endl;
        cout << "4. Export log" << endl;
        cout << "5. Exit" << endl;
        cout << "> ";
    }

int main() {
    JobScheduler scheduler;
    char input;
    bool running = true;

    while (running) {
        showMenu();
        cin >> input;
        switch (input)
        {
        case '1':
            scheduler.loadJobs("jobs.txt");
            break;
        case '2':
            cout << "Choose an algorithm" << endl;
            cout << "a) FIFO" << endl;
            cout << "b) Priority" << endl;
            cin >> input;
            scheduler.chooseAlgorithm(input);
            break;
        case '3':
            scheduler.executeJobs();
            break;
        case '4':
            scheduler.exportLog();
            break;
        case '5': 
            running = false;
            break;
        default:
            cout << "Invalid input, try again!\n";
            break;
        }
    }
    return 0;
}