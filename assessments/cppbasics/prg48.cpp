#include <iostream>
using namespace std;

int main() {
    int num, binary[32], index = 0;

    cout << "Enter a decimal number: ";
    cin >> num;

    if (num == 0) {
        cout << "Binary equivalent: 0" << endl;
        return 0;
    }

    while (num > 0) {
        binary[index++] = num % 2; // Store remainder (binary digit)
        num /= 2; // Divide by 2 for next binary digit
    }

    cout << "Binary equivalent: ";
    for (int i = index - 1; i >= 0; i--) { // Print binary in reverse order
        cout << binary[i];
    }
    cout << endl;

    return 0;
}
///Write a Program for Decimal to Binary Conversion
