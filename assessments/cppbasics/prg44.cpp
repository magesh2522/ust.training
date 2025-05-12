#include <iostream>
using namespace std;

bool checkEquality(int a, int b) {
    return !(a ^ b); 
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    if (checkEquality(x, y)) {
        cout << "The numbers are equal." << endl;
    }
    else {
        cout << "The numbers are not equal." << endl;
    }

    return 0;
}
