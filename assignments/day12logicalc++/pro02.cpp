#include <iostream>
using namespace std;

int sumOddDigits(int num) {
    int sum = 0;

    while (num > 0) {
        int digit = num % 10; 
        if (digit % 2 != 0) {
            sum += digit;     
        }
        num /= 10;            
    }

    return sum;
}

int main() {
    int coinCollection;
    cout << "Enter your total coin-collection number: ";
    cin >> coinCollection; 

    cout << "Sum of odd digits: " << sumOddDigits(coinCollection) << endl;

    return 0;
}
/*Odd Coin Counting
In a village fair, you earn odd-numbered coins (1, 3, 5...) from games.
Given your total coin-collection number, find the sum of only the odd digits of your coin number to determine your prize.*/