#include<iostream>
#include<string>
using namespace std;

int main() {
	char str[100];
	cout << "enter the string" << endl;
	cin.getline(str, 100);

	int length = strlen(str);

	for (int i = length - 1;i >= 0;i--) {
		cout << str[i];
	}
	cout << endl;

}//Write a Program to Print the Given String in Reverse Order
