#include <iostream>
using namespace std;

int power(int a, int b) {
    if (b == 0) {
        return 1;
    }

    return a * power(a, b - 1);
}

int main() {
    int base, exponent;
    cout << "Enter the base: ";
    cin >> base; 
    cout << "Enter the exponent: ";
    cin >> exponent; 

    cout << base << "^" << exponent << " = " << power(base, exponent) << endl;

    return 0;
}
/*Find Power Using Only Multiplication
Problem:
Write a function to compute a^b using only multiplication, no pow() or loops.

Hint:
Use recursion:

a^b = a * a^(b-1)
Base case: b == 0 ? return 1.*/