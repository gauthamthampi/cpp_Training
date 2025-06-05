#include <iostream>
#include <map>
#include <unordered_map>
#include <set>
#include <deque>
#include <vector>
#include <algorithm>

using namespace std;

struct FileMeta {
    string fileName;
    string ownerUser;
};

class FileTrackerFS {
private:
    int timestamp = 0;

    map<int, FileMeta> fileStore;
    unordered_map<int, int> accessFrequency;
    unordered_map<int, int> lastAccessTime;
    unordered_map<string, set<int>> userAccessMap;
    unordered_map<int, deque<pair<string, string>>> accessHistory;
    set<pair<int, int>> accessOrderSet;
    vector<int> deleteLog;

public:
    void addFile(int fileID, const string& fileName, const string& ownerUser) {
        if (fileStore.count(fileID)) {
            cout << "Error: File ID already exists.\n";
            return;
        }
        fileStore[fileID] = { fileName, ownerUser };
    }

    void accessFile(int fileID, const string& accessType, const string& userName) {
        if (!fileStore.count(fileID)) {
            cout << "Error: File ID " << fileID << " not found.\n";
            return;
        }

        ++timestamp;

        accessFrequency[fileID]++;
        accessOrderSet.erase(make_pair(lastAccessTime[fileID], fileID));
        lastAccessTime[fileID] = timestamp;
        accessOrderSet.insert(make_pair(timestamp, fileID));

        accessHistory[fileID].push_back(make_pair(userName, accessType));
        userAccessMap[userName].insert(fileID);
    }

    void deleteFile(int fileID) {
        if (!fileStore.count(fileID)) {
            cout << "Error: File ID " << fileID << " not found.\n";
            return;
        }

        fileStore.erase(fileID);
        accessFrequency.erase(fileID);
        accessOrderSet.erase(make_pair(lastAccessTime[fileID], fileID));
        lastAccessTime.erase(fileID);
        accessHistory.erase(fileID);

        for (const auto& userPair : userAccessMap) {
            userAccessMap[userPair.first].erase(fileID);
        }

        deleteLog.push_back(fileID);
        cout << "File " << fileID << " deleted successfully.\n";
    }

    void listAllFiles() {
        cout << "[All Files]\n";

        vector<int> fileIDs;
        for (const auto& filePair : fileStore) {
            fileIDs.push_back(filePair.first);
        }

        sort(fileIDs.begin(), fileIDs.end(), [&](int a, int b) {
            return fileStore[a].fileName < fileStore[b].fileName;
            });

        for (int fileID : fileIDs) {
            FileMeta meta = fileStore[fileID];
            cout << "ID: " << fileID << " | Name: " << meta.fileName << " | Owner: " << meta.ownerUser << "\n";
        }
    }

    void listRecent() {
        cout << "[Recently Accessed Files]\n";

        vector<pair<int, int>> recentFiles(accessOrderSet.rbegin(), accessOrderSet.rend());
        for (const pair<int, int>& entry : recentFiles) {
            int fileID = entry.second;
            if (fileStore.count(fileID)) {
                FileMeta meta = fileStore[fileID];
                cout << "ID: " << fileID << " | Name: " << meta.fileName << " | Last Accessed: " << entry.first << "\n";
            }
        }
    }

    void listByUser(const string& userName) {
        if (!userAccessMap.count(userName)) {
            cout << "No files accessed by user: " << userName << "\n";
            return;
        }

        cout << "[Files Accessed by User: " << userName << "]\n";

        const set<int>& accessed = userAccessMap[userName];
        for (int fileID : accessed) {
            if (fileStore.count(fileID)) {
                const FileMeta& meta = fileStore[fileID];
                const deque<pair<string, string>>& history = accessHistory[fileID];
                for (const pair<string, string>& record : history) {
                    if (record.first == userName) {
                        cout << "ID: " << fileID << " | Name: " << meta.fileName << " | Access Type: " << record.second << "\n";
                    }
                }
            }
        }
    }

    void listFrequency() {
        cout << "[Access Frequency]\n";
        for (const auto& freqPair : accessFrequency) {
            cout << "File ID: " << freqPair.first << " | Access Count: " << freqPair.second << "\n";
        }
    }
};

int main() {
    FileTrackerFS fs;

    string command;
    while (cin >> command) {
        if (command == "ADD") {
            int fileID;
            string fileName, owner;
            cin >> fileID >> fileName >> owner;
            fs.addFile(fileID, fileName, owner);
        }
        else if (command == "ACCESS") {
            int fileID;
            string accessType, user;
            cin >> fileID >> accessType >> user;
            fs.accessFile(fileID, accessType, user);
        }
        else if (command == "DELETE") {
            int fileID;
            cin >> fileID;
            fs.deleteFile(fileID);
        }
        else if (command == "LIST_ALL") {
            fs.listAllFiles();
        }
        else if (command == "LIST_RECENT") {
            fs.listRecent();
        }
        else if (command == "LIST_BY_USER") {
            string user;
            cin >> user;
            fs.listByUser(user);
        }
        else if (command == "LIST_FREQ") {
            fs.listFrequency();
        }
        else {
            cout << "Invalid Command.\n";
        }
    }

    return 0;
}
