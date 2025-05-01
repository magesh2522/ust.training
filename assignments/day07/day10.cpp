#include <iostream>
using namespace std;

bool isTriangle(int angle1, int angle2, int angle3) {
    return (angle1 + angle2 + angle3 == 180);
}

int main() {
    int angle1, angle2, angle3;
    cout << "Enter three angles: ";
    cin >> angle1 >> angle2 >> angle3; 

    if (isTriangle(angle1, angle2, angle3)) {
        cout << "Valid Triangle" << endl;
    }
    else {
        cout << "Not a Valid Triangle" << endl;
    }

    return 0;
}
/*Check if Three Angles can Form a Triangle
Problem:
Check if three given angles form a valid triangle.

Hint:
If sum of three angles == 180 degrees, return true.

Simple addition and comparison.*/