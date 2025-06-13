#include <iostream>
#include <thread>
#include <mutex>
#include <fstream>
#include <sstream>
#include <vector>
#include <chrono>
#include <queue>

using namespace std;

mutex m1;

class Task {
public:
    string id;
    int load;

    Task(const string& tid, int l) : id(tid), load(l) {}
};

class TaskScheduler {
private:
    int cpuCount;
    queue<Task> tasks;

public:
    bool loadTasks(const string& filename) {
        ifstream file(filename);
        if (!file.is_open()) {
            cerr << "File opening error.\n";
            return false;
        }

        string line, temp;
        getline(file, line);  // First line: CPU count
        istringstream pair(line);
        pair >> temp >> cpuCount;

        while (getline(file, line)) {
            istringstream taskstream(line);
            string id;
            int load;
            taskstream >> id >> temp >> load;
            tasks.emplace(id, load);
        }

        file.close();
        return true;
    }

    void runTasks() {
        vector<thread> threads;
        for (int i = 0; i < cpuCount; ++i) {
            threads.emplace_back(&TaskScheduler::worker, this, i);
        }

        for (auto& t : threads) {
            t.join();
        }

        cout << "All tasks completed.." << endl;
    }

private:
    void worker(int cpuId) {
        while (true) {
            Task task("", 0);

            {
                lock_guard<mutex> lock(m1);
                if (tasks.empty()) {
                    return;
                }
                task = tasks.front();
                tasks.pop();
                cout << "CPU->" << cpuId << " picked Task " << task.id << " (Load: " << task.load << ")\n";
            }

            this_thread::sleep_for(chrono::seconds(task.load));

            {
                lock_guard<mutex> lock(m1);
                cout << "CPU->" << cpuId << " finished Task " << task.id << "\n";
            }
        }
    }
};

int main() {
    TaskScheduler scheduler;

    if (!scheduler.loadTasks("input.txt")) {
        return 1;
    }

    scheduler.runTasks();
    return 0;
}
