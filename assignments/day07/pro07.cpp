#include <iostream>
using namespace std;

int formNewNumber(int firstNumber, int secondNumber) {
    int lastDigit = firstNumber % 10; 
    int firstDigit = secondNumber;  
    while (firstDigit >= 10) {
        firstDigit /= 10; 
    }

    return lastDigit * 10 + firstDigit;
}

int main() {
    int firstNumber, secondNumber;
    cout << "Enter the first number: ";
    cin >> firstNumber; 
    cout << "Enter the second number: ";
    cin >> secondNumber; 

    cout << "New Number: " << formNewNumber(firstNumber, secondNumber) << endl;

    return 0;
}
/*7. Form a New Number from Two Numbers
Problem:
Form a new number using last digit of first number and first digit of second number.

Hint:

Last digit ? (firstNumber % 10).
First digit ? keep dividing secondNumber by 10 until it's < 10.
Then combine them (e.g., lastDigit * 10 + firstDigit).

*/