#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e;
	cout << "check the gretest of 5 numbers using nested if else " << endl;
	cin >> a >> b >> c >> d >> e;
	int high = a;
	if (b > high) {
		high = b;
	}
	if (c > high) {
		high = c;
	}
	if (d > high) {
		high = d;
	}
	if (e > high) {
		high = e;
	}
	cout << high << " is the greatest number" << endl;
	// using nested if else



}

	
		