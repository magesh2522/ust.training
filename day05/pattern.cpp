#include <iostream>
using namespace std;

void pattern() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }

        // Print alphabets
        char ch = 'a';
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return ;
}
