#include <iostream>

using namespace std;

int main() {
    int n, f1 = 0, f2 = 1, count;

    cout << "Enter the position (N) in the Fibonacci series: ";
    cin >> n;


    for (int i = 2; i <= n; i++) {
        count = f1 + f2;
        f1= f2;
        f2 = count;
    }

    cout << "The " << n << "th Fibonacci term is: " << count << endl;

    return 0;
}

///Write a Program to Find the Nth Term of the Fibonacci Series

