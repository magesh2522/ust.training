#include <iostream>
using namespace std;

int main() {
	cout << "fine the year leap or not" << endl;
	int year;
	cout << "enter the year" << endl;
	cin >> year;
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				cout << year << " is a leap year." << endl;
			}
			else {
				cout << year << " is not a leap year." << endl;
			}
		}
		else {
			cout << year << " is a leap year." << endl;
		}
	}
	else {
		cout << year << " is not a leap year." << endl;
	}

	
}
