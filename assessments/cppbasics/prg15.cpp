#include <iostream>
using namespace std;

int main()
{
	int year;
	cout << "enter the year" << endl;
	cin >> year;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		cout << "this is leap year" << endl;
	}
	else {
		cout << " this is not leap year" << endl;
		return 0;
	}
}
//Write a Program to Find a Leap Year or Not
