#include <iostream>
#include <climits> // For INT_MAX
using namespace std;

// Function to find the smallest digit in the number
int findSmallestDigit(int num) {
    int smallest = INT_MAX; // Initialize to maximum possible integer value

    while (num > 0) {
        int digit = num % 10; // Extract the last digit
        if (digit < smallest) {
            smallest = digit; // Update if the digit is smaller
        }
        num /= 10; // Remove the last digit
    }

    return smallest;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (num == 0) {
        cout << "Smallest Digit: 0" << endl;
    }
    else {
        num = abs(num); 
        cout << "Smallest Digit: " << findSmallestDigit(num) << endl;
    }

    return 0;
}

/*1. Lost Treasure Map
A pirate found a number carved on a rock. He believes the smallest digit in that number points to the next island he should sail to.
Write a program to find the smallest digit in the given number.

*/