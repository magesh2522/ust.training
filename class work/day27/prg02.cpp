#include <iostream>
#include <cstring>
using namespace std;

class Employee {
	private:
		int e_id;
		string e_name;
public:
	void init(int id, string name) {
		e_id = id;
		e_name = name;
	}
	void display() {
		cout << "Employee ID: " << e_id << endl;
		cout << "Employee Name: " << e_name << endl;
	}
};
int main() {
	Employee e;
	/*e.e_id = 101;
	e.e_name = "magesh";
	Employee* ptr = &e;
	


	cout<<"Employee ID: " << e.e_id << endl;
	cout << "Emplyee name :" << e.e_name << endl;
	ptr->e_id = 102;
	cout << "Employee ID: " << e.e_id << endl;
	cout << "Emplyee name :" << e.e_name << endl;*/
	e.init(101, "magesh");
	e.display();
}