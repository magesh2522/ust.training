#include<iostream>
using namespace std;
void reverse(string str, int index) {
	if (index < 0) {
		return;
	}
	cout << str[index];
	reverse(str, index - 1);
}
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Reversed string: ";
    reverse(str, str.length() - 1);
    cout << endl;

    return 0;
}///Write a C++ Program to Print the Given String in Reverse Order Using Recursion
