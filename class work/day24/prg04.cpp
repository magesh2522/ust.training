#include <iostream>
using namespace std;

int main() {
	int age;
	cout << "Check the elgible for vote:" << endl;
	cin >> age;

	switch (age >=18) {
	case 1: {
		cout << "YOU CAN VOTE:\n";
		break;
	case 0: {
		cout << "YOU CAN'T VOTE:\n";
		break;

	}
	}
}