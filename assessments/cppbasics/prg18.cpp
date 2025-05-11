#include <iostream>

using namespace std;

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    cout << "Enter a 3 or 4-digit number: ";
    cin >> num;

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num; 

    while (originalNum != 0) {
        remainder = originalNum % 10;
        int power = 1;

        for (int i = 0; i < n; i++) {
            power *= remainder;
        }

        result += power;
        originalNum /= 10;
    }

    if (result == num) {
        cout << num << " is an Armstrong number." << endl;
    }
    else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
