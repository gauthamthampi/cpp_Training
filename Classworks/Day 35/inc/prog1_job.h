#pragma once
#include <iostream>
#include <fstream>
#include <chrono>
#include <vector>
#include <functional>
#include <thread>
#include <algorithm>
#include "prog1_logger.h"
using namespace std;

class Job {
public:
    int jobID;
    int executionTime;
    int priority;

    Job(int id, int et, int pt) :jobID(id), executionTime(et), priority(pt) {}
};

class JobScheduler {
    vector<Job>jobs;
    Logger logger;

    using ScheduleFunc = function<void(vector<Job>&)>;
    ScheduleFunc scheduleAlgo;

public:
    void loadJobs(const string& filename) {
        jobs.clear();
        ifstream in(filename);
        if (!in) {
            logger.log(ERROR, "Unable to open file");
            return;
        }
        int id, time, prio;
        while (in >> id >> time >> prio) {
            jobs.emplace_back(id, time, prio);
        }
        in.close();
        logger.log(INFO, "Loaded " + to_string(jobs.size()) + "jobs.");
    }

    void chooseAlgorithm(char choice){
        if (choice == 'a' || choice == 'A') {
            scheduleAlgo = [](vector<Job>& jobs) {
                sort(jobs.begin(), jobs.end(), [](const Job& a, const Job& b) {
                    return a.jobID > b.jobID;
                    });
                };
            logger.log(INFO, "Processed FIFO Scheduling.");
        }
        else if (choice == 'b' || choice == 'B') {
            scheduleAlgo = [](vector<Job>& jobs) {
                sort(jobs.begin(), jobs.end(), [](const Job& a, const Job& b) {
                    return a.priority > b.priority;
                    });
                };
            logger.log(INFO, "Processed Priority scheduling");
        }
        else {
            logger.log(WARNING, "Invalid option");
        }
    }

    void executeJobs() {
        if (jobs.empty()) {
            logger.log(WARNING, "No jobs available to execute.");
            return;
        }
        if (!scheduleAlgo) {
            logger.log(WARNING, "No algorithm selected to execute");
        }
        scheduleAlgo(jobs);

        auto start = chrono::high_resolution_clock::now();
        for (const auto& job : jobs) {
            logger.log(DEBUG, "Executing Job ID: " + to_string(job.jobID) + " | Priority: " + to_string(job.priority));
            this_thread::sleep_for(chrono::milliseconds(job.executionTime));
        }
        auto end = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::milliseconds>(end - start).count();

        logger.log(INFO, "All jobs executed in " + to_string(duration) + " ms.");
    }

    void exportLog() {
        logger.exportToFile("job_log.txt");
    }
};