#include <iostream>
#include<string>
using namespace std;

int main() {
	string a, reverse;
	cout << "Enter the string" << endl;
	cin >> a;

	for (int i = a.length() - 1;i >= 0;i--)
	{
		reverse += a[i];
	}

	if (a== reverse) {
		cout << "The string \"" << a << "\" is a palindrome." << endl;
	}
	else {
		cout << "The string \"" << a << "\" is not a palindrome." << endl;
	}

	return 0;
}
///Write a Program to Check Palindrome

