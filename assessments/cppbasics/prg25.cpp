#include <iostream>
#include<string>
using namespace std;

int main() {
	string a, reverse;
	cout << "enter the string" << endl;
	cin >> a;

	for (int i = a.length() - 1;i >= 0;i--) {
		reverse += a[i];
	}
	if (a == reverse) {
		cout << "the string is palindrom" << endl;
	}
	else {
		cout << "the string is not palindrom" << endl;


	}

}///Write a Program to Check if the Given String is Palindrome or Not

