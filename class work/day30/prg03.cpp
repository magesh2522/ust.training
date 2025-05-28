#include <iostream>
using namespace std;

class Employee {
public:
	int id;
	string name;
	float salary;
	Employee* next;


	Employee(int eid, string ename, float esalary) {
		id = eid;
		name = ename;
		salary = esalary;
		next = nullptr;
	}
};
class EmployeeList {
private:
	Employee* head;
public:
	EmployeeList() {
		head = nullptr;
	}
	void addAtBef(int id, string name, float salary) {
		Employee* newEmp = new Employee(id, name, salary);
		if (head == nullptr) {
			head = newEmp;
			return;
		}
		Employee* temp = head;
		while (temp->next != nullptr) {
			temp = temp->next;
		}
		temp->next = newEmp;
	}
	void display() {
		if (head == nullptr) {
			cout << "Employee list is empty.\n";
			return;

		}

	}
};