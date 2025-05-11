#include <iostream>
#include <string>
using namespace std;

int main() {
	string str, result;
	cout << "Enter the string" << endl;
	cin >> str;
	for (char ch : str)
	{
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
			result += ch;
		}

	}
	cout << "String removing alphabet characters: " << result << endl;
	return 0;
}
///Write a Program to Remove All Characters From a String Except Alphabets
