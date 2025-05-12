#include <iostream>
using namespace std;

int main() {
    int num, octal[32], index = 0;

    cout << "Enter a decimal number: ";
    cin >> num;

    if (num == 0) {
        cout << "Octal equivalent: 0" << endl;
        return 0;
    }

    while (num > 0) {
        octal[index++] = num % 8; 
        num /= 8; 
    }

    cout << "Octal equivalent: ";
    for (int i = index - 1; i >= 0; i--) { 
        cout << octal[i];
    }
    cout << endl;

    return 0;
}
///Write a Program for Decimal Octal Conversion
