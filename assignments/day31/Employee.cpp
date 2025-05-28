#include<iostream>
using namespace std;
class Employee
{
protected:
	int empid;
	string name;
public:
	Employee(int empid, string name)
	{
		this->empid = empid;
		this->name = name;
	}
};
class developer :
	public Employee
{
public:
	int codHours;
	developer(int codeTime, int empid, string name) :Employee(empid, name)
	{
		this->codHours = codeTime;

	}
	int calculateSalary(int codHours)

	{
		return 350 * codHours;
	}
};
class ProjectManager : 
	public Employee
{
protected:
	int size;
public:
	ProjectManager(int size, int empid, string name) :Employee(empid, name)
	{
		this->size = size;

	}
};
class technicalLead :
	public developer, ProjectManager
{
	int calculateSalary(int codHours, int size)
	{
		return (codHours * 450) + (size * 5000);
	}
public:
	technicalLead(int size, int empid, string name, int codHours) :developer(codHours, empid, name), ProjectManager(size, empid, name)
	{}
	void disply()
	{
		cout << "Tech Lead Information :" << endl;
		cout << "EmpId: " << developer::empid << endl;
		cout << "Name  : " << developer::name << endl;
		cout << "salary based on your  coding :" << developer::calculateSalary(this->codHours)<<endl;
		cout << "salary based on your coding+team :" << calculateSalary(this->codHours, this->size)<<endl;
	}
};

int main()
{
	technicalLead s(6, 11, "Magesh", 140);
	s.disply();
	return 0;
}