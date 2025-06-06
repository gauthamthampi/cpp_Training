#pragma once
#include <iostream>
#include <map>
#include <array>
using namespace std;
#define MAX 16

class Memory {
	//map<int, int>memory;
	array<int, MAX>memory = { 0 };
	
public:
	void addContents(const int& key, int data) {
		if (key > MAX) {
			cout << "Invalid entry";
			return;
		}
		memory[key] = data;
	}

	int getValueMemory(const int& key) {
		if (key > 16) {
			cout << "Invalid output";
		}
		else {
			return memory[key];
		}
	}
	
	void allocateMemoryValue(const int& key, int value) {
		if (key > 16) {
			cout << "Invalid output";
			return;
		}
		memory[key] = value;
	}

	void displayMemory() {
		cout << "First 16 Memory Contents" << endl;
		for (int i = 0;i < MAX;i++) {
			cout << i << " -> " << memory[i] << endl;
		}
	}


};