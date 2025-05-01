#include <iostream>
using namespace std;

bool isSumEven(int num1, int num2) {
    int sum = num1 + num2; 
    return (sum % 2 == 0); 
}

int main() {
    int a, b;
    cin >> a >> b; 

    if (isSumEven(a, b)) {
        cout << "True" << endl; 
    }
    else {
        cout << "False" << endl; 
    }

    return 0;
}
/*6. Check if the Sum of Two Numbers is Even
Problem:
Write a function that returns true if the sum of two integers is even.

Hint:

Sum the two numbers.
Check if (sum % 2 == 0).
*/
