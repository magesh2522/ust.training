#include <iostream>

using namespace std;

int main() {
    int num1, num2, max;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    max = (num1 > num2) ? num1 : num2;

    while (true) {
        if (max % num1 == 0 && max % num2 == 0) {
            cout << "The Lowest Common Multiple (LCM) is: " << max << endl;
            break; 
        }
        max++; 
    }

    return 0;
}
///Write a Program to Calculate the Lowest Common Multiple (LCM) of Two Numbers
