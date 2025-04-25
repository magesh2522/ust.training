#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << "*" << endl;
    for (int i = 1; i <= n; ++i) {
        cout << "*";
        for (int num = 1; num <= i; ++num) {
            cout << num;
        }
        for (int num = i - 1; num >= 1; --num) {
            cout << num;
        }
        cout << "*" << endl;
    }
    for (int i = n - 1; i >= 1; --i) {
        cout << "*";
        for (int num = 1; num <= i; ++num) {
            cout << num;
        }
        for (int num = i - 1; num >= 1; --num) {
            cout << num;
        }
        cout << "*" << endl;
    }
    cout << "*" << endl;
    return 0;
}
