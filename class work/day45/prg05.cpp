#include <iostream>
#include <thread>
#include <mutex>
#include<fstream>
#include <istream>
#include <sstream>
#include <vector>
#include <condition_variable>
#include <chrono>


using namespace std;


mutex m1;
struct Task {
	string id;
	int load;
};
//task function ::

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

int main() {
    string line;
    int cpuCount = 0;
    vector<Task> tasks;

    ifstream file("input.txt");//file linking 
    if (!file) {
        cout << "File opening error :" << endl;
        return 1;
    }

    getline(file, line);       // Read CPU count
    istringstream page(line);
    string temp;
    page >> temp >> cpuCount;

    while (getline(file, line)) { // Read tasks
        istringstream taskstream(line);
        Task task;
        taskstream >> task.id >> temp >> task.load;
        tasks.push_back(task);
    }

    vector<thread> threads;    // Create threads for each task
     for (size_t i = 0; i < tasks.size(); i++) {
        int cpuId = i % cpuCount;
        threads.emplace_back(processTask, tasks[i], cpuId);
    }

    // Join threads AFTER creating them all
    for (auto& t : threads) {
        t.join();
    }

    return 0;
}

