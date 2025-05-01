#include <iostream>
#include <cmath> 
using namespace std;

int firstNonZeroDigit(int num) {
    num = abs(num); 

    while (num >= 10) {
        num /= 10; 
    }

    return num; 
}

bool isEven(int digit) {
    return (digit % 2 == 0); 
}

int main() {
    int code;
    cout << "Enter the secret code: ";
    cin >> code;

    int firstDigit = firstNonZeroDigit(code);

    if (isEven(firstDigit)) {
        cout << "Valid Code: The first non-zero digit is even." << endl;
    }
    else {
        cout << "Invalid Code: The first non-zero digit is odd." << endl;
    }

    return 0;
}

/*First Non-Zero Digit in Secret Code
A code is considered valid only if its first non-zero digit from the left is even.
Write a program that extracts the first non-zero digit and checks if it's even.*/