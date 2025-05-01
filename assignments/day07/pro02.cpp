#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;

    while (num > 0) {
        sum += num % 10; 
        num /= 10;       
    }

    if (sum >= 10) {
        return sumOfDigits(sum);
    }

    return sum; 
}

int main() {
    int num;
    cin >> num; 

    cout << "Single Digit: " << sumOfDigits(num) << endl;

    return 0;
}
/*2. Sum of Digits Until a Single Digit
Problem:
Take an integer and keep adding its digits recursively until only one digit remains.

Hint:

Use a function that calculates sum of digits.
If result >= 10, call the same function again*/