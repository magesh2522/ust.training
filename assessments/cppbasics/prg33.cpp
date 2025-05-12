#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows for the triangle pattern: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = n - i; j > 0; j--) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}///Write a Program to Print a Triangle Star Pattern

