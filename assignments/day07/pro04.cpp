#include <iostream>
using namespace std;

int secondLastDigit(int num) {
    if (num < 10) {
        return -1; 
    }
    num /= 10;           
    return num % 10;     
}

int main() {
    int num;
    cin >> num; 

    int result = secondLastDigit(num);
    if (result == -1) {
        cout << "The number has less than 2 digits." << endl;
    }
    else {
        cout << "Second Last Digit: " << result << endl;
    }

    return 0;
}
/*Problem:
Given a positive integer, find its second last digit.

Hint:

First, divide number by 10 (n/10) to remove the last digit.
Then get last digit of the result using modulo (% 10).*/