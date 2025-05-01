#include <iostream>
#include <set>
using namespace std;

// Function to calculate the sum of distinct digits of a number
int sumDistinctDigits(int num) {
    set<int> distinctDigits; // Set to store distinct digits
    while (num > 0) {
        int digit = num % 10; // Extract the last digit
        distinctDigits.insert(digit); // Add the digit to the set
        num /= 10; // Remove the last digit
    }

    int sum = 0;
    for (int digit : distinctDigits) {
        sum += digit; // Calculate the sum of distinct digits
    }
    return sum;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2; // Input two numbers

    // Calculate the sum of distinct digits for both numbers
    int sum1 = sumDistinctDigits(num1);
    int sum2 = sumDistinctDigits(num2);

    // Check if the sums are equal
    if (sum1 == sum2) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}


/*4) Isha is playing with numbers and trying to write program to Check if the sum of distinct digits of two integers are equal

Output Format:
If  the sum of distinct digits of both the numbers are equal 
if true	print YES 
otherwise  print NO.

Examples:
Input: 
 2452
 9222
Output:
 YES

Input
121
3035
Output:
 NO*/