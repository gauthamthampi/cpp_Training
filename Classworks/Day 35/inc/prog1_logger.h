#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

enum LogLevel {
	INFO,
	DEBUG,
	WARNING,
	ERROR
};
class Logger {
	vector<string>logs;
	
	string levelToString(LogLevel level) {
		switch (level)
		{
		case INFO:
			return "[INFO] ";
			break;
		case DEBUG:
			return "[DEBUG] ";
			break;
		case WARNING:
			return "[WARNING] ";
			break;
		case ERROR:
			return "[ERROR] ";
			break;
		default:
			return "[UNKNOWN] ";
			break;
		}
	}
public:
	void log(LogLevel level, const string& message) {
		string data = levelToString(level) + message;
		cout << data << endl;
		logs.push_back(data);
	}

	void exportToFile(const string& filename) {
		ofstream out(filename);
		if (!out) {
			log(ERROR, "Writing failed. Error in opening file.");
			return;
		}
		out << "Execution Log" << endl;
		out << "-------------" << endl;
		for (auto  data: logs) 
			out << data << endl;
		out.close();
		log(INFO, "Log saved to " + filename);
	}

	void clearLogs() {
		logs.clear();
	}

};