#pragma once
#include <iostream>
#include <chrono>
using namespace std;

class Bid {
	string bidId;
	int amount;
	chrono::system_clock::time_point time;
public:
	Bid(string id, int amt) :bidId(id), amount(amt), time(chrono::system_clock::now()){}

	bool operator<(Bid& other) {
		return amount < other.amount;
	}
};