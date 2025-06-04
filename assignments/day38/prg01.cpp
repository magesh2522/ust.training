#include<iostream>
#include <list>
#include <string>
using namespace std;
class taskmanag
{
	list<string>task;
public:
	void commands(const string& input)
	{
		string command = input.substr(0, input.find(" "));//split the input string 
		string tasks = input.substr(input.find(" ") + 1);
		if (command == "critical" || command == "urgent")
		{
			task.push_front(tasks);//insert front
		}
		else if (command == "add")
		{
			task.push_back(tasks);//insert back
		}
		else if (command == "remove")
		{
			task.remove(tasks);//remove
		}
		else if (command == "show")
		{
			cout << "List after converstion :\n";
			for (auto x : task)
				cout << x << endl;
			cout << "\n";
		}
	}


};
int main()
{
	taskmanag R;
	string input;
	cout << "String" << endl;
	while (1)
	{
		getline(cin, input);
		if (input == "exit")
		{
			break;
		}
		else {
			R.commands(input);
		}
	}
	return 0;
}