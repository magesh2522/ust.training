#include <iostream>
using namespace std;

int main() {

    cout << "Armstrong numbers between 100 and 999 are:\n";

    for (int num = 100; num <= 999; num++) {
        int original = num;
        int sum = 0;

        while (original > 0) {
            int digit = original % 10;
            sum += pow(digit, 3);
            original /= 10;
        }

        if (sum == num) {
            cout << num << endl;
        }
    }

    return 0;
}