#include<iostream>
using namespace std;

bool palindrom(string str, int start, int end) {
	if (start >= end) {
		return true;
	}
	if (str[start] != str[end]) {
		return false;
	}
	return palindrom(str, start + 1, end - 1);

}
int main() {
	string str;
	cout << "enter th string" << endl;
	cin >> str;
	string cleanStr = "";
	for (char c : str) {
		if (isalpha(c)) {
			cleanStr += tolower(c);
		}
	}

	if (palindrom(cleanStr, 0, cleanStr.length() - 1)) {
		cout << "The given string is a palindrome." << endl;
	}
	else {
		cout << "The given string is not a palindrome." << endl;
	}

	return 0;
}
///Write a Program to Check if the Given String is Palindrome or not Using Recursion
