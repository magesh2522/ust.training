#include <iostream>
using namespace std;

void fibonacci(int n) {
	int a = 0, b = 1, c;
	if (n == 1) {
		cout << a << " ";
	}
	else if (n == 2) {
		cout << a << " " << b << " ";
	}
	else {
		cout << a << " " << b << " ";
		for (int i = 3; i <= n; i++) {
			c = a + b;
			cout << c << " ";
			a = b;
			b = c;
		}
	}
}

int main() {
	int n;
	cout<< "Enter the number of terms: ";
	cin >> n;
	if (n <= 0) {
		cout << "Please enter a positive integer." << endl;
	}
	else {
		cout << "Fibonacci Series: ";
		fibonacci(n);
	}
}