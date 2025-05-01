#include <iostream>
using namespace std;

int main() {
    for (int n = 0; n < 10; ++n) {
        int number = n * n + 2 * n;  
        cout << number;
        if (n != 9) {
            cout << ", "; 
        }
    }
    cout << endl;
    return 0;
}

//Q.Print series 0, 3, 8, 15, 24, 35, 48, 63, 80, 99
