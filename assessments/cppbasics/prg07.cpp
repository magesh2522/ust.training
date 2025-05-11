#include <iostream>
using namespace std;

int main() {
	string a;
	cout << "Enter String " << endl;
	cin >> a;
	int length = 0;

	for (char ch : a) {
		length++;
	}
	cout << "The length of the string is: " << length << endl;
}
//Write a Program to Find the Length of the String Without using strlen() Function
