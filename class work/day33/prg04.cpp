#include <iostream>
#include<fstream>
#include <string>
using namespace std;

class Employee {
public:
	int e_empId;
	string  e_name;
	float e_salary;

	void getDetails() {
		cout << "Enter Id:" << endl;
		cin >> e_empId;
		cout << "Enter Name:" << endl;
		cin.ignore();
		getline(cin, e_name);
		//cin >> e_name;
		cout << "Enter salary:" << endl;
		cin >> e_salary;
	}
	void showDetails() {
		cout << "ID: " << e_empId<<"\n";
		cout << "Name" << e_name<<"\n";
		cout << "salary" << e_salary<<"\n";
	}
	

	

};

int main() {
	Employee emp;

	emp.getDetails();//write binary file

	ofstream outFile("employee.dat", ios::binary);
	if (!outFile) {
		cout << "file not created" << endl;
		return 1;
	}
	outFile.write((char*)&emp, sizeof(emp));
	outFile.close();

	Employee readEmp;
	ifstream inFile("employee.dat", ios::binary);
	if (!inFile) {
		cout << "file not open" << endl;
		return 1;


	}
	inFile.read((char*)&emp, sizeof(emp));
	inFile.close();

	readEmp.showDetails();
	return 0;
}