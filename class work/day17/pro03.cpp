#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int k = 2 * n - 2;

    for (int i = 0; i < n; i++) {//row
        for (int j = 1; j <= k; j++)
        {
            cout << " ";
        }
        k = k - 1;
        for (int j= 1; j<i ; j++) {
            cout << "* ";
        }

       

        cout << endl;
    }

    return 0;
}
