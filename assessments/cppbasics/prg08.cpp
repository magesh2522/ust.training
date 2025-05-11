#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	cout << "Enter the string:" << endl;
	cin >> a;

	for (char &ch : a) {
		if (ch >= 'A' && ch <= 'Z') {
			ch = ch + ('a' - 'A');
		}
		else if (ch >= 'a' && ch <= 'z') {
			ch = ch - ('a' - 'A');
		}
	}
	cout << "Toggled string: " << a<< endl;
		

}

///Write a Program to Toggle Each Character in a String
