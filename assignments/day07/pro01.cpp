#include <iostream>
using namespace std;

int findMiddle(int a, int b, int c) {
    if ((a > b && a < c) || (a < b && a > c)) {
        return a; 
    }
    else if ((b > a && b < c) || (b < a && b > c)) {
        return b; 
    }
    else {
        return c; 
    }
}

int main() {
    int x, y, z;
    cin >> x >> y >> z; 
    cout << "Middle Value: " << findMiddle(x, y, z) << endl;
    return 0;
}

/*1. Find the Middle Value Among Three Numbers
Problem:
Write a function that takes three integers and returns the middle one (not maximum, not minimum).

Hint:
Use basic comparisons (>, <) between the three numbers.
Check conditions like:

If a > b and a < c or a < b and a > c, then a is the middle.*/
