#include <iostream>
#include <forward_list>
using namespace std;
#define MAX 10
void addLog(forward_list<string>& lg,string log) {
	int count = 0;
	for (auto i = lg.begin();i != lg.end();i++) {
		count++;
	}
	if (count < MAX) {
		lg.push_front(log);
	}
	else {
		auto before = lg.before_begin();
		auto curr = lg.begin();

		while (next(curr) != lg.end())
		{
			before = curr;
			curr++;
		}
		
		lg.erase_after(before);
		lg.push_front(log);
		
	}
}

void display(const forward_list<string>& logs) {
	for (auto i = logs.begin();i != logs.end();i++) {
		cout << *i << " -> ";
	}
	cout << "NULL";
}

int main() {
	forward_list<string>logs;
	addLog(logs, "logA");
	addLog(logs, "logB");
	addLog(logs, "logC");
	addLog(logs, "logD");
	addLog(logs, "logE");
	addLog(logs, "logF");
	addLog(logs, "logG");
	addLog(logs, "logH");
	addLog(logs, "logI");
	addLog(logs, "logJ");
	display(logs);
}