#include <iostream>
#include <cmath> 
using namespace std;

bool isArmstrong(int number) {
    int originalNumber = number;
    int sum = 0;
    int numDigits = 0;

    int temp = number;
    while (temp > 0) {
        temp /= 10;
        numDigits++;
    }

    while (number > 0) {
        int digit = number % 10;
        sum += pow(digit, numDigits);
        number /= 10;
    }

    return sum == originalNumber;
}

int main() {
    int inputNumber;
    cout << "Enter the number to check if it is an Armstrong number or not: ";
    cin >> inputNumber;
    if (isArmstrong(inputNumber)) {
        cout << inputNumber << " is an Armstrong number.\n";
    }
    else {
        cout << inputNumber << " is not an Armstrong number.\n";
    }

    return 0;
}
