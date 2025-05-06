#include <iostream>
using namespace std;


int main() {

	int x, y;
	cout << "enter the divisor" << endl;
	cin >> x;
	cin >> y;
	for (int i = x;i >= 2;i++) {
		if ((x % i == 0) && (y % i == 0))
		{
			cout << i << endl;
			break;
		}
	}
}

