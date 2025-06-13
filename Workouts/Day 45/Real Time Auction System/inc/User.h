#pragma once
#include <iostream>
#include <string>
using namespace std;

class User {
	string password;
protected:
	string username;
public:
	User(string name,string id):username(name),password(password){}
	void virtual display() = 0;
	string getUsername() {
		return this->username;
	}
	bool checkCredentials(string username, string password) {
		if (this->username != username || this->password != password) {
			return false;
		}
		return true;
	}
};

class Buyer : public User {
public:
	void display() {
		cout << username << endl;
	}
};

class Seller : public User {
public:
	void display() {
		cout << username << endl;
	}
};