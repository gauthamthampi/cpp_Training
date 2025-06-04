#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

string toLower(const string& str) {
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}

int main() {
    vector<string> words = { "Apple", "banana", "apple", "Orange", "BANANA", "grape" };

    for (auto& word : words) {
        word = toLower(word);
    }

    sort(words.begin(), words.end());

    auto last = unique(words.begin(), words.end());
    words.erase(last, words.end());

    cout << "[";
    for (size_t i = 0; i < words.size(); ++i) {
        cout << "\"" << words[i] << "\"";
        if (i != words.size() - 1) 
            cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
