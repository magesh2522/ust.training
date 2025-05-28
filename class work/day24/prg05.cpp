#include <iostream>
#include<string>
using namespace std;

int main() {
	string name, reverse = "";
	cin >> name;

	for (int i = name.length() - 1;i >= 0;i--) {
		reverse += name[i];

	}
	cout << reverse;

}