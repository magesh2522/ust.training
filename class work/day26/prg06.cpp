#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

void Student::setName(const char* s)
{
	strcpy(name, s);
}
char* Student::getName() {
	return name;
}

void Student::setRollno(int r) {
	rollno = r;
}
int Student::getRollno() {
	return rollno;
}
void Student::setMarks(float m[])
{
	for (int i = 0;i < 4;i++)
		marks[i] = m[i];
}

void Student::display()
{

	cout << "Name: " << name << endl;
	cout << "Roll No: " << rollno << endl;

	cout << "Avg: " << calcAvg();
	cout << endl;
}

float Student::calcAvg() {
	float avg = 0.0;
	for (int i = 0;i < 4;i++)
	{
		cin>>
		cout << marks[i] << "\t";
		avg += marks[i];
	}
	return avg / 4.0;
}
int main()
{
	Student S;
	float marks[] = { 55,56,57,58 };
	S.setName("bhima");
	S.setRollno(101);
	S.setMarks(marks);

	S.display();


	return 0;
}