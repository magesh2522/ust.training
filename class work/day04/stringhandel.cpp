#include <iostream>
#include<cstring>

using namespace std;

void stringHandeling()
{
	char ch = 'A';
	char fName[20];
	string sName;

	cout << "ch value" << ch << endl;
	cout << "enter the first name: ";
	cin >> fName;
	cout << "enter the second name: ";
	cin >> sName;
	cout << "\n my name is" << fName << " " << sName << endl;

	char Name[]="Hello";
	cout << "size ofname:" << sizeof(Name) << endl;
	cout << "length ofname:" << strlen(Name) << endl;

	for (int i = 0;i < sizeof(Name);i++)
	{
		printf(" % c=%d\n", Name[i], Name[i]);

	}

} 

void enumHandeling()
{

	enum Day { Monday, Tuesday, Wedsday };
	Day today = Tuesday;
	cout << "value of today:" << today << endl;
}