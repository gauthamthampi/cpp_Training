#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <functional>
#include "prog2_logger.h";
using namespace std;

class Packet {
public:
    int packetID;
    string protocol;
    int size;
};

class PacketHandler{
    vector<Packet>packets;
    Logger logger;

    using AnsysFunc = function<void(const vector<Packet>&)>;
    AnsysFunc dynAnalizer;

public:
    void loadPackets(const string& filename) {
        ifstream file(filename);
        if (!file) {
            logger.log(ERROR, "Unable to load packets.");
            return;
        }
        string line;
        while (getline(file, line)) {
            Packet p;
            istringstream iss(line);
            if (!(iss >> p.packetID >> p.protocol >> p.size)) {
                logger.log(ERROR, "Malformed line: " + line);
                continue;
            }
            if (p.protocol != "TCP" && p.protocol != "UDP" && p.protocol != "ICMP") {
                logger.log(ERROR, "Unsopported protocol in line: " + line);
                continue;
            }
            packets.push_back(p);
        }
        file.close();
        logger.log(INFO, "Packets loaded successfully. Count: " + to_string(packets.size()));
    }

    void filterByProtocol(const string& proto) {
        dynAnalizer = [this, proto](const vector<Packet>& packets) {
            for (const auto& pack : packets) {
                if (pack.protocol == proto) {
                    logger.log(INFO, "Packet " + to_string(pack.packetID) + " | " + pack.protocol + " | " + to_string(pack.size) + " bytes.");
                }
            }
        };
    }

    void detectLargePackets() {
        dynAnalizer = [this](const vector<Packet>& packets) {
            for (const auto& pack : packets) {
                if (pack.size > 1000) {
                    logger.log(WARNING, "Packet " + to_string(pack.packetID) + " | " + pack.protocol + " | " + to_string(pack.size) + " bytes.");
                }
            }
        };
    }

    void runAnalysis() {
        if (dynAnalizer) {
            dynAnalizer(packets);
        }
        else {
            logger.log(WARNING, "No analysis mode selected.");
        }
    }

    void exportLogs() {
        logger.logExportToFile("packets_log.txt");
    }


};
