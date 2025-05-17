#include <iostream>
using namespace std;

typedef struct empDetails {
	int empId;
	string empName;
}ED;

typedef struct empPeriod {
	int empId;
	int days;
}EP;

typedef struct grossSalary {
	int empId;
	int basicSalary;
	int variblePay;
	int taxPersentage;

}GS;

int getDetails(ED* e, EP* p, GS* s) {
	cout << "Enter the EMP Name:" << endl;
	cin >> e->empName;
	cout << "Enter the EMP Id:" << endl;
	cin >> e->empId;
	p->empId = e->empId;
	s->empId = e->empId;
	cout << "Cout enter the number of working days: " << endl;
	cin >> p->days;
	cout << "Enter the basic pay:" << endl;
	cin >> s->basicSalary;
	cout << "Enter the variable pay:" << endl;
	cin >> s->variblePay;
	cout << "Enter the tax deduction:" << endl;
	cin >> s->taxPersentage;

	return 0;

}

int calculateSalary(ED* e, EP* p, GS* s) {
	int gross = s->basicSalary + s->variblePay;
	double tax = (s->taxPersentage / 100.0) * gross;
	double net = gross - tax;

	cout << "************* salary_slip ***************" << endl;
	cout << "Enter the EmpId =" << e->empId << endl;
	cout << "Enter the EmpName =" << e->empName<< endl;
	cout << "Enter the number of working days =" << p->days << endl;
	cout << "Enter the Basic salary =" << s->basicSalary << endl;
	cout << "Enter the variable pay =" << s->variblePay << endl;
	cout << "Tax % = " << s->taxPersentage << "% " << endl;
	cout << "Tax amoun =" << tax<<endl;
	cout << "net salary =" << net << endl;
	return 0;
}
int main() {
	ED employeDetails;
	EP employePeriod;
	GS grossSalary;

	getDetails(&employeDetails, &employePeriod, &grossSalary);
	calculateSalary(&employeDetails, &employePeriod, &grossSalary);

	return 0;

}