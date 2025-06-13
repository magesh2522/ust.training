#include <iostream>
#include <vector>
#include<queue>
#include<fstream>
#include<istream>
#include<sstream>
#include<string>
using namespace std;

class task {
	string id;
	int load;
public:
	task(string id,int load):id(id),load(load){}
};
class cpp {
	int cpuCount;
	queue<task>q_task;
public:
	bool raedFile(const string& fileName) {
		ifstream file(fileName);
		if (!file.is_open())
		{
			cout << "Error opening " << endl;
			return false;
		}
		string line;

		if (getline(file, line))
		{
			if (line.find("CPUs:") != string::npos) {
				cpuCount = stoi(line.substr(line.find(":") + 1)){}
			}
		}
		while (getline(file, line)) {
			stringstream ss(line);
			string taskId, temp;
			int load;
			getline(ss, taskId, ':');
			ss >> temp >>load;
			q_task.push(task(taskId, load));

		}
	}
	
};