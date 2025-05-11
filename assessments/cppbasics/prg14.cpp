#include <iostream>
using namespace std;

int main() {
	int n;
	long long factorial = 1;
	cout << "Enter the factorial:" << endl;
	cin >> n;

	for (int i = 1;i <= n;i++) {
		factorial *= i;
	}
	cout << n << "factorial is " << factorial << endl;
	return 0;
}
///Write a Program to Find the Factorial of a Number Using Loops
