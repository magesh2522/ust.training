#include <iostream>
using namespace std;
int main() {
	int a, b;
	char operation;
	cout<< "Enter two numbers: ";
	cin >> a >> b;

	cout<<"chosse an operation: (+,-,*,/)";
	cin >> operation;

	switch (operation) {
		case '+':
			cout << "Result: " << a + b << endl;
			break;
		case '-':
			cout << "Result: " << a - b << endl;
			break;
		case '*':
			cout << "Result: " << a * b << endl;
			break;
		case '/':
			if (b != 0) {
				cout << "Result: " << a / b << endl;
			}
			else {
				cout << "Error: Division by zero!" << endl;
			}
			break;
		default:
			cout << "Invalid operation!" << endl;
	}
}