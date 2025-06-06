#include <iostream>
#include<map>
#include<vector>
#include<string>

class Employee {
public:
	std::string name;
	std::vector<std::string> departments;

	Employee(std::string name):name(name){}
	void addDepartment(std::string dept) {
		departments.push_back(dept);
	}
};