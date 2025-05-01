#include <iostream>
using namespace std;

void numberMirror(int n) {
    if (n == 0) {
        return;
    }
    cout << n % 10 << " ";
    numberMirror(n / 10);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n == 0) {
        cout << "0" << endl;
    }
    else {
        numberMirror(n); 
        cout << endl;
    }

    return 0;
}
/*Number Mirror
Hint:

Extract the last digit of a number using the modulus operator (n % 10).
Recursion Base Case: When n becomes zero, stop.
Logic: Print the current digit, then recursively call the function with n / 10 to remove the last digit.
Example:
For n = 1234, you will print the digits in reverse order:

4 3 2 1*/