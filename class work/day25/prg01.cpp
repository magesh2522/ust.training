#include <iostream>
using namespace std;

typedef struct employeDetails {
	string name;
	int empId;
	string role;
} EMP;

typedef struct salaryDetails {
	int empId;
	int basicSalary;
	int variablePay;
	int tax;
	int totalSalary;
} SAL;


void getempDetails(EMP* e) {
	cout << "Enter Emp Name: ";
	cin >> e->name;
	cout << "Enter Emp ID: ";
	cin >> e->empId;
	cout << "Enter Role: ";
	cin >> e->role;
}

int printDetails(EMP* e) {
	cout << "\nEmployee Details:\n";
	cout << "Name: " << e->name << endl;
	cout << "ID: " << e->empId << endl;
	cout << "Role: " << e->role << endl;
	return 0;

}
bool getsalaryDetails(SAL* s) {
	cout << "Enter Emp ID: ";
	cin >> s->empId;
	cout << "Enter Basic Salary: ";
	cin >> s->basicSalary;
	cout << "Enter Variable Pay: ";
	cin >> s->variablePay;
	cout << "Enter Tax: ";
	cin >> s->tax;
	return true;
}
void printSalarydetails(SAL* s) {
	cout << "\nSalary Details:\n";
	cout << "Emp ID: " << s->empId << endl;
	cout << "Basic Salary: " << s->basicSalary << endl;
	cout << "Variable Pay: " << s->variablePay << endl;
	cout << "Tax: " << s->tax << endl;
	cout << "Total Salary: " << s->totalSalary << endl;
}



int calculater(SAL* s) {
	int gross = s->basicSalary + s->variablePay;
	s->totalSalary = gross - (gross * s->tax / 100); 
	return s->totalSalary;
}


int main() {
	EMP e;
	SAL s;



	getempDetails(&e);
	getsalaryDetails(&s);
	calculater(&s);

	printDetails(&e);
	printSalarydetails(&s);

	return 0;
}
