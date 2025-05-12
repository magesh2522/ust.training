#include <iostream>
#include <cctype>
using namespace std;

int sumOfNumbersInString(string str) {
    int sum = 0, num = 0;

    for (char c : str) {
        if (isdigit(c)) {
            num = num * 10 + (c - '0'); // Build the number digit by digit
        }
        else {
            sum += num; // Add the current number to the sum
            num = 0; // Reset num for the next number
        }
    }

    sum += num; 

    return sum;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Sum of numbers in the string: " << sumOfNumbersInString(str) << endl;

    return 0;
}//Write a Program to Count the Sum of Numbers in a String

