#pragma once
#include <iostream>
#include <queue>
#include <mutex>
#include <Bid.h>
using namespace std;

class Auction {
	string itemId;
	string seller;
	int minPrice;
	bool status;
	priority_queue<Bid>bids;
	mutex mtx;
	chrono::system_clock::time_point limit;
};