#include <iostream>
using namespace std;
//48. Write a Program for Octal to Decimal Conversion





int main() {
    int octal, decimal = 0, base = 1;

    cout << "Enter an octal number: ";
    cin >> octal;

    while (octal > 0) {
        int lastDigit = octal % 10;  
        decimal += lastDigit * base; 
        octal /= 10;                 
        base *= 8;                   
    }

    cout << "Decimal equivalent: " << decimal << endl;

    return 0;
}
