#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows for the rotated hourglass: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        for (int k = (2 * (n - i) + 1); k >= 1; k--) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        for (int k = (2 * (n - i) + 1); k >= 1; k--) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
///Write a Program to Print the Rotated Hourglass Pattern
