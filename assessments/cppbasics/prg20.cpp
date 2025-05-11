#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	int temp;
	cout << "enter the 2 number:" << endl;
	cin >> num1 >> num2;

	while (num2 != 0) {
		temp = num2;
		num2 = num1 % num2;
		num1 = temp;
	}
	cout << "Common Divisor of Two Numbers : " << num1 << endl;
}
///Write a Program to Calculate the Greatest Common Divisor of Two Numbers
