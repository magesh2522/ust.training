#include <iostream>
using namespace std;

void factorial(int n) {
	int fact = 1;
	for (int i = 1; i <= n; i++) {
		fact *= i;
	}
	cout << "The factorial of " << n << " is: " << fact << endl;
}
int main() {
	cout << "Find the factorial of a number" << endl;
	int n;
	cout << "Enter the number" << endl;
	cin >> n;
	factorial(n);
	return 0;
}