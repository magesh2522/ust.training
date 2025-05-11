#include <iostream>
using namespace std;

int main() {
	int n;
	bool isprime = true;
	cout << "enter the number:" << endl;
	cin >> n;
	if (n < 2) {
		isprime = false;
	}
	else {
		for (int i = 2;i < n;i++) {
			if (n % i == 0){
			isprime = false;
			break;
		}
	}
}
	if(isprime) {
		cout << "is prime num:" << n << endl;
	}
	else {
		cout << "is not prime num:" << n << endl;
	}
}
///Write a Program to Check the Prime Number
