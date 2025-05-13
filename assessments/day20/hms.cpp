#include<iostream>
#include<string>
using namespace std;
void addPatient(int pid, string name, char gender, string address, long int mobile)
{
	//cout << "Welcome to mental hospital" << endl;
	cout << "Patient id: " << pid << endl;
	cout << "Patient name: " << name << endl;
	cout << "Patient gender: " << gender << endl;
	cout << "Patient address: " << address << endl;
	cout << "Patient mobile number: " << mobile << endl;

}

void doctorDetails(char ch)
{
	switch (ch)
	{
	case 'a':
		cout << "Doctor available in ortho department: ";
		cout << "Dr.Yogeswaran S" << endl;
		break;

	case 'b':
		cout << "Doctor available in neurology department: ";
		cout << "Dr.Subramaniom A" << endl;
		break;
	case 'c':
		cout << "Doctor available in gynocology department: ";
		cout << "Dr.Suvetha M" << endl;
		break;
	case 'd':
		cout << "Doctor available in general medicine department: ";
		cout << "Dr.Vaishnavi SR" << endl;
		break;
	}

}
void selectRoom(int n)
{

	cout << "Room selected: " << n;
}
int main()
{

	cout << "Welcome to mental hospital" << endl;
	int pid;
	string name, address;
	char gender;
	long int mobile;
	cout << "Enter the patient id: " << endl;
	cin >> pid;
	cout << "Enter the patient name: " << endl;
	cin >> name;
	cout << "Enter the patient gender(F/M): " << endl;
	cin >> gender;
	cout << "Enter the patient address: " << endl;
	cin >> address;
	cout << "Enter the patient mobile number: " << endl;
	cin >> mobile;

	addPatient(pid, name, gender, address, mobile);

	cout << "Select department:" << endl << "Ortho(a)" << endl << "Neurology(b)" << endl << "Gynocology(c)" << endl << "general medicine(d)" << endl;
	char ch;
	cin >> ch;
	doctorDetails(ch);


	cout << "Select room no. from 1-20" << endl;
	int n;
	cin >> n;
	selectRoom(n);

}