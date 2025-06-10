//BROWSER HISTORY NAVIGATION

#include <iostream>
#include <stack>
#include <sstream>
#include <string>
using namespace std;

int main() {
	stack<string>back_stack;
	stack<string>forward_stack;
	string current = "home", command;
	while (true) {
		getline(cin,command);
		if (command.substr(0,5)=="visit") {
			stringstream s(command);
			string s1, s2;
			s >> s1 >> s2;
			back_stack.push(current);
			current = s2;
		}
		else if (command == "back") {
			if (back_stack.empty()) {
				cout << "Can't go back!" << endl;
			}
			else {
				forward_stack.push(current);
				current = back_stack.top();
				back_stack.pop();
			}
		}
		else if (command == "forward") {
			if (forward_stack.empty()) {
				cout << "Cant go forward!" << endl;
			}
			else {
				back_stack.push(current);
				current = forward_stack.top();
				forward_stack.pop();
			}
		}
		else if (command == "exit") {
			break;
		}
		else if (command == "status") {
			cout << "Current: " << current << endl;
			if(!back_stack.empty())
			cout << "Back stack: " << back_stack.top() << endl;
			if (!forward_stack.empty())
			cout << "Back stack: " << forward_stack.top() << endl;
		}
		else {
			cout << "Invalid input. Try again!" << endl;
		}
	}

	
}