#include <iostream>

using namespace std;

class Student
{
private:
	int rollno;
	char name[20];
	float marks[4];
public:
	void setName(char*);
	char* getName();
	void setRollno(int);
	int getRollno();
	void setMarks(float[]);
	void setgrade(float)
	void grade();
	void display();

private:
	float calcAvg();

};

void Student::setName(char* s)
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

void student::grade(float x)
{
	int mark = 100;
	if ((mark >= 80)&&(mark<=100)) {
		cout << "A grade" << endl;
	}
	else if ((mark >= 60 )&&(mark <=80)) {
		cout << "B grade" << endl;
		
	}
	else if ((mark >= 0) && (mark <= 45)) {
		cout << "c grade" << endl;

	}
	else {
		cout << "out of range :"<<endl;
	}
}

void student::getdrade() {

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
	for (int i = 0;i < 4;i++) {
		cout << marks[i] << "\t";
		avg += marks[i];
	}
	return avg / 4.0;
}

int main()
{
	char n[] = "abc";
	char str2[1024] = "xyz";
	int r = 1011;
	float m[4] ;
	Student s1;
	s1.setRollno(r);
	s1.setName(n);
	s1.setMarks(m);
	s1.display();
	cout << s1.getName() << endl;
	cout << s1.getRollno() << endl;
	strcat(str2, s1.getName());
	cout << str2 << endl;

	return 0;
}