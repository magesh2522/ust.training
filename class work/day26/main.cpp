#include <iostream>
#include "Student.h"


using namespace std;

int main()
{
	char n[] = "abc";
	char str2[10] = "xyz";
	int r = 1011;
	float m[4] = { 50,55,65,75 };
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