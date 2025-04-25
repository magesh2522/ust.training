#include <iostream>
using namespace std;

bool isArmstrong(int number) {
    int originalNumber = number;
    int sum = 0;
    while (number > 0) {
        int digit = number % 10;
        number /= 10;
    }
    return sum == originalNumber;
}

int main() {
    int inputNumber;
    cout << "Enter the number & check this is Armstrant number or Not : ";
    cin >> inputNumber;
    if (isArmstrong(inputNumber)) {
        cout << inputNumber << " is an Armstrong number.\n";
    }
    else {
        cout << inputNumber << " is not an Armstrong number.\n";
    }