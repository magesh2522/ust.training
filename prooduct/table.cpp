#include <iostream>
using namespace std;

int main() {
    int number1 = 2, number2 = 3;

    
    cout << "Multiplication Table from 2 to 3\n";

    
    cout << "\nMultiplication Table for " << number1 << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << number1 << " x " << i << " = " << number1 * i << endl;
    }

    cout << "\nMultiplication Table for " << number2 << ":\n";
    for (int i = 1; i <= 10; ){
		cout << number2 << " x " << i << " = " << number2 * i << endl; 
	}

	return 0;
