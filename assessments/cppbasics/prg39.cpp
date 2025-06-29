#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n <= 1) {
        return 1; 
    }
    return n * factorial(n - 1); 
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else {
        cout << "Factorial of " << num << " is " << factorial(num) << endl;
    }

    return 0;
}
////Write a Program to Calculate the Factorial of a Number Using Recursion

