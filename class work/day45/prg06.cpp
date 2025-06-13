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

// Task class to store individual task details
class Task {
public:
    string id;
    int load;

    Task(const string& tid, int l) : id(tid), load(l) {}
};

// Scheduler class to manage CPUs and task execution
class TaskScheduler {
private:
    int cpuCount;
    vector<Task> tasks;

public:
    bool loadTasks(const string& filename) {
        ifstream file(filename);
        if (!file.is_open()) {
            cerr << "File opening error.\n";
            return false;
        }

        string line, temp;
        getline(file, line);  // First line: CPU count
        istringstream iss(line);
        iss >> temp >> cpuCount;

        while (getline(file, line)) {
            istringstream taskstream(line);
            string id;
            int load;
            taskstream >> id >> temp >> load;
            tasks.emplace_back(id, load);
        }

        file.close();
        return true;
    }

    void runTasks() {
        vector<thread> threads;
        for (size_t i = 0; i < tasks.size(); ++i) {
            int cpuId = i % cpuCount;
            threads.emplace_back(&TaskScheduler::processTask, this, tasks[i], cpuId);
        }

        for (auto& t : threads) {
            t.join();
        }

        cout << "All tasks completed.." << endl;
    }

private:
    void processTask(Task task, int cpuId) {
        {
            lock_guard<mutex> lock(m1);
            cout << "CPU->" << cpuId << " picked Task " << task.id << " (Load: " << task.load << ")\n";
        }

        this_thread::sleep_for(chrono::seconds(task.load));

        {
            lock_guard<mutex> lock(m1);
            cout << "CPU->" << cpuId << " finished Task " << task.id << "\n";
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
