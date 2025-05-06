#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e;
	cout << "check the gretest of 5 numbers" << endl;
	cin >> a >> b >> c >> d >> e;

	if (a > b && a > c && a > d && a > e)
		cout << a << " A is the greatest number" << endl;
	else if (b > a && b > c && b > d && b > e)
		cout << b << "B is the greatest number" << endl;
	else if (c > a && c > b && c > d && c > e)
		cout << c << "C is the greatest number" << endl;
	else if (d > a && d > b && d > c && d > e)
		cout << d << "D is the greatest number" << endl;
	else
		cout << e << " E is the greatest number" << endl;
	return 0;
}

	