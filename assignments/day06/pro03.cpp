#include <iostream>
using namespace std;

bool checkProductEquality(int num) {
    int productOdd = 1, productEven = 1;
    int position = 1; 

    while (num > 0) {
        int digit = num % 10; 
        num /= 10; 
        if (position % 2 == 0) {
            productEven *= digit;
        }
        else {
            productOdd *= digit; 
        }
        position++;
    }

    return productOdd == productEven; 
}

int main() {
    int num;
    cin >> num; 

    if (checkProductEquality(num)) {
        cout << "Yes" << endl; 
    }
    else {
        cout << "No" << endl; 
    }

    return 0;
}
/*3) Program to Check if product of digits of a number at even and odd places is equal.
Input: 

2841
Output:
 Yes

Input: 

4324
Output: 
No*/