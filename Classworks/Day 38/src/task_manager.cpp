#include <iostream>
#include <string>
#include <list>
#include <algorithm>
using namespace std;

void add(list<string>&tasks,string tsk) {
	if (tsk.find("critical") != string::npos) {
		tasks.push_front(tsk);
		return;
	}
	tasks.push_back(tsk);
}

void urgent(list<string>& tasks, string tsk) {
	tasks.push_front(tsk);
}

void remove(list<string>& tasks, string tsk) {
	auto it = find(tasks.begin(), tasks.end(), tsk);
	if (it != tasks.end()) {
		tasks.erase(it);
	}
	else {
		cout << "Invalid input";
	}
	
}

void show(const list<string>& tasks) {
	cout << "===Task Manager===\n";
	int count = 1;
	for (auto task : tasks) {
		cout << count << ") " << task << endl;
		count++;
	}
}

int main() {
	list<string>tasks;
	add(tasks, "Power on");
	add(tasks, "Update");
	add(tasks, "update critical");
	urgent(tasks, "Delete cache");
	remove(tasks, "Update");
	show(tasks);
	return 0;
}