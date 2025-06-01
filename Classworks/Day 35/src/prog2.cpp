#include <iostream>
#include "prog2_packets.h"
#include "prog2_logger.h"
using namespace std;

void showMenu() {
    cout << "==== NetMon Packet Monitor ====" << endl;
    cout << "1. Load packet data" << endl;
    cout << "2. Filter by protocol" << endl;
    cout << "3. Check for large packets" << endl;
    cout << "4. Export log" << endl;
    cout << "5. Exit" << endl;
    cout << "> ";
}


int main() {
    PacketHandler packetHandler;
    char input;
    bool running = true;
    string proc;

    while (running) {
        showMenu();
        cin >> input;
        switch (input)
        {
        case '1':
            packetHandler.loadPackets("packets.txt");
            break;
        case '2':
            cout << "Enter the Protocol to filter";
            cin >> proc;
            packetHandler.filterByProtocol(proc);
            packetHandler.runAnalysis();
            break;
        case '3':
            packetHandler.detectLargePackets();
            packetHandler.runAnalysis();
            break;
        case '4':
            packetHandler.exportLogs();
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