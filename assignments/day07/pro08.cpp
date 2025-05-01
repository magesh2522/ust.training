#include <iostream>
using namespace std;

void swapNumbers(int& a, int& b) {
    a = a + b; 
    b = a - b; 
    a = a - b;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y; 

    cout << "Before Swapping: x = " << x << ", y = " << y << endl;
    swapNumbers(x, y); 
    cout << "After Swapping: x = " << x << ", y = " << y << endl;

    return 0;
}
/*8. Swap Two Numbers Without Using a Third Variable
Problem:
Swap two integers without using a temporary variable, using pass-by-reference.

Hint:
Use simple math:

a = a + b;
b = a - b;
a = a - b;
And pass variables by reference (&) to modify them.

*/
