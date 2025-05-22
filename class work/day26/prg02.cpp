#include <iostream>
using namespace std;
class student
{
private:
	int rollno;
	char name[20];

public:
	void setName();
	char* getname();
	void setRollno();
	int rollno();



	student::setName(char* s)
	{
		strcpy(name, s);
	}
	student:: getName() {
		return name;
	}
	student:: setRollno(int r) {
		rollno = r;
	}
	student:: getRollno() {
		return rollno;
	}
	student:: display() {
		cout << "Name:" << name << endl;
		cout << "Roll no:" << rollno << endl;
	}
};

int main() {
	char n[] = "abc";
	int r = 1011;
	student s1;
	s1.setRollno(r);
	s1. setName(n);
	s1.display();
	cout << s1.getName() << endl;
	cout << s1.getRollno() << endl;
	return 0;
}