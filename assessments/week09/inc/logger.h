#pragma once
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

enum  LogLevel
{
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

	void logExportToFile(const string& filename) {
		ofstream out(filename);
		if (!out) {
			log(ERROR, "Failed writing. Unable to open file!");
			return;
		}
		out << "Interoperator Logs" << endl;
		out << "=====================" << endl;
		for (const auto& i : logs) {
			out << i << endl;
		}
		log(INFO, "Logs exported to file: " + filename);
	}
	
	void clearLogs() {
		logs.clear();
	}
};
