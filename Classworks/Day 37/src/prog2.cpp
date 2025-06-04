#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void cleanUp(vector<int>& scores) {
	for (int i = 0;i < scores.size();i++) {
		if (scores[i] < 0) {
			scores.erase(scores.begin() + i);
		}
	}
}
void displayAll(const vector<int>scores) {
	cout << "All scores: ";
	for (auto i : scores) {
		cout << i << " ";
	}
}
void sort(vector<int>&scores) {
	sort(scores.begin(), scores.end());
}
void top3(const vector<int>scores) {
	cout << "Top 3 scores: ";
	for (int i = scores.size()-1;i> scores.size()-4;i--) {
		cout << scores[i] << " ";
	}
}
void unique(vector<int>& scores) {
	for (int i = 0;i < scores.size();i++) {
		for (int j = i+1;j < scores.size();j++) {
			if (scores[i] == scores[j]) {
				scores.erase(scores.begin() + i);
			}
		}
	}
}

int main() {
	vector<int>scores;
	scores.push_back(45);
	scores.push_back(70);
	scores.push_back(55);
	scores.push_back(70);
	scores.push_back(90);
	scores.push_back(-1);
	cleanUp(scores);
	displayAll(scores);
	cout << endl;
	sort(scores);
	top3(scores);
	cout << endl;
	unique(scores);
	displayAll(scores);
}