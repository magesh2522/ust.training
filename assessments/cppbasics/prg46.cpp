#include <iostream>
#include <cmath>
using namespace std;

int octalToDecimal(int octal) {
    int decimal = 0, i = 0;

    while (octal != 0) {
        int digit = octal % 10;  
        decimal += digit * pow(8, i);  
        octal /= 10; 
        i++;
    }

    return decimal;
}

int main() {
    int octal;
    cout << "Enter an octal number: ";
    cin >> octal;

    cout << "Decimal equivalent: " << octalToDecimal(octal) << endl;

    return 0;
}
//Write a Program for Octal to Decimal Conversion
