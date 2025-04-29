#include <iostream>
#include <climits> // For INT_MAX

using namespace std;

int main() {
    long long number; // Declare a variable to store the number
    cout << "Enter a number: ";
    cin >> number; // Input the number

    int smallest_digit = INT_MAX; 

    // Loop through each digit of the number
    while (number != 0) {
        int digit = number % 10;  // Get the last digit of the number
        if (digit < smallest_digit) {
            smallest_digit = digit; // Update the smallest digit
        }
        number /= 10;  // Remove the last digit
    }

    cout << "The smallest digit is: " << smallest_digit << endl; // Output the result

    return 0;
}
