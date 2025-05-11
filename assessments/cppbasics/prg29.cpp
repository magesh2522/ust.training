#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows for the upper half of the hourglass: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int j = n - i; j > 0; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 2; i <= n; i++) {
        for (int j = n - i; j > 0; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
///Write a Program to Print the Hourglass Pattern
