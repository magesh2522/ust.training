#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    if (num == 0) {
        cout << "Hexadecimal equivalent: 0" << endl;
        return 0;
    }

    char hex[32]; 
    int index = 0;

    while (num > 0) {
        int remainder = num % 16; 

        if (remainder < 10) {
            hex[index++] = remainder + '0'; 
        }
        else {
            hex[index++] = remainder - 10 + 'A'; 
        }

        num /= 16;
    }

    cout << "Hexadecimal equivalent: ";
    for (int i = index - 1; i >= 0; i--) { 
        cout << hex[i];
    }
    cout << endl;

    return 0;
}
///