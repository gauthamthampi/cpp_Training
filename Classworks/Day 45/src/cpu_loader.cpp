#include <iostream>
#include <thread>
#include <fstream>
#include <queue>
#include <mutex>
#include <condition_variable>
#include <string>
#include <sstream>
#include <vector>
#include <chrono>

using namespace std;

mutex pmtx;  
mutex qmtx; 

struct Task {
    string task_id;
    int load;
};

class LoadBalancer {
    int cpu;
    queue<Task> tasks;

public:
    void loadTasks() {
        ifstream file("input.txt");
        string line;

        if (!getline(file, line)) {
            cout << "Failed to read.\n";
            return;
        }

        if (line.find("CPUs:") == string::npos) {
            cout << "Invalid input.\n";
            return;
        }

        cpu = stoi(line.substr(line.find(" ") + 1));

        while (getline(file, line)) {
            if (line.empty()) continue;
            stringstream s(line);
            string id, t_name;
            int load;
            char colon;
            s >> id >> colon >> t_name >> load;
            tasks.push({ id, load });
        }
    }

    void balancer(int cpu_id) {
        while (true) {
            Task curr_task;

            {
                unique_lock<mutex> lock(qmtx);
                if (tasks.empty()) {
                    return;
                }
                curr_task = tasks.front();
                tasks.pop();
            }

            {
                lock_guard<mutex> lock(pmtx);
                cout << "CPU-" << cpu_id << " picked Task " << curr_task.task_id
                    << " (Load: " << curr_task.load << ")" << endl;
            }

            this_thread::sleep_for(chrono::seconds(curr_task.load));

            {
                lock_guard<mutex> lock(pmtx);
                cout << "CPU-" << cpu_id << " finished Task " << curr_task.task_id << endl;
            }
        }
    }

    void execute() {
        vector<thread> threads;

        for (int i = 1; i <= cpu; ++i) {
            threads.emplace_back(&LoadBalancer::balancer, this, i);
        }

        for (auto& thd : threads) {
            thd.join();
        }

        {
            lock_guard<mutex> lock(pmtx);
            cout << "All tasks completed." << endl;
        }
    }
};

int main() {
    LoadBalancer lb;
    lb.loadTasks();
    lb.execute();
    return 0;
}
