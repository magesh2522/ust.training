#include <iostream>

using namespace std;


typedef struct employeeDetails
{
	int empID;
	string empName;
}ED;

typedef struct empPeriod {
	int empID;
	int days;
}EP;

typedef struct grosSalary {
	int empID;
	int basicSalary;
	int variablePay;
	int tax;
}GS;


int getDetails(ED* e, EP* p, GS* g) {
	cout << "Employee id " << endl;
	cin >> e->empID;
	cout << "Employee Name " << endl;
	cin >> e->empName;
	e->empID = p->empID;
	cout << "Enter the day" << endl;
	g->empID = e->empID;
	cin >> p->days;
	cout << "enter the basic salary" << endl;
	cin >> g->basicSalary;
	cout << "enter the gross salary" << endl;
	cin >> g->variablePay;
	cout << "enter the tax" << endl;
	cin >> g->tax;

	return 0;
}

int calSalary(ED* e, EP* p, GS* g) {
	int gross = g->basicSalary + g->variablePay;
	double tax = (g->tax / 100) * gross;
	double net = gross - g->tax ;

	cout << "\n--- Salary Slip ---" << endl;
	cout << "Employee ID   : " << e->empID << endl;
	cout << "Employee Name : " << e->empName << endl;
	cout << "Working Days  : " << p->days << endl;
	cout << "Basic Salary  : " << g->basicSalary << endl;
	cout << "Variable Pay  : " << g->variablePay << endl;
	cout << "Tax Deducted  : " << g->tax <<"%" << endl;
	cout << "Net Salary    : " << net << endl;

	return net;
}

int main() {
	ED emp;
	EP period;
	GS salary;

	getDetails(&emp, &period, &salary);
	calSalary(&emp, &period, &salary);  
	return 0;
}








