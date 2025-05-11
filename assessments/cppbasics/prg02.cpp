#include <iostream>
using namespace std;


int main() {
	int a, b, c;
	cout << "Enter the three number:" << endl;
	cin >> a >> b >> c;
	int high = 0;

	if (a > b && a > c) {
		high = a;
	}
	else if (b > c && b > a) {
		high = b;
	}
	else {
		high = c;
	}
	cout << "greatest number:" << high << endl;
}
//Write a Program to Find the Greatest of the Three Numbers
