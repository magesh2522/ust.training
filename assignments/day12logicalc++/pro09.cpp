#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false; 
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true; 
}

int productOfDigits(int num) {
    int product = 1;

    while (num > 0) {
        int digit = num % 10; 
        product *= digit;    
        num /= 10;           
    }

    return product;
}

int main() {
    int number;
    cout << "Enter a number to test the magic box: ";
    cin >> number; 

    if (number == 0) {
        cout << "The magic box does not accept 0." << endl;
        return 0;
    }

    number = abs(number); 

    int product = productOfDigits(number);

    if (isPrime(product)) {
        cout << "The box opens! The product of digits " << product << " is a prime number." << endl;
    }
    else {
        cout << "The box remains closed. The product of digits " << product << " is not a prime number." << endl;
    }

    return 0;
}

/*Magic Multiplying Puzzle
You find a magic box that multiplies the digits of a number you enter.
If the final product of digits is a prime number, the box opens.
Write a program to simulate the box opening logic.*/