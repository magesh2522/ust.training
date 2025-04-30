#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number N: ";
    cin >> N; 

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << char('A' + j - 1);  
        }

        for (int j = i - 1; j >= 1; j--) {
            cout << char('A' + j - 1);  
        }

        cout << endl;  
    }

    return 0;
}
