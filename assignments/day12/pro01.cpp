#include <iostream>
using namespace std;


void towerOfOddity(int floor, int n) {
    if (floor > n) {
        return;
    }
    cout << floor;
    if (floor + 2 <= n) {
        cout << ", "; 
    }
    towerOfOddity(floor + 2, n);
}

int main() {
    int n;
    cout << "Enter the highest floor number (n): ";
    cin >> n; 

    cout << "Odd-numbered floors: ";
    towerOfOddity(1, n); 
    cout << endl;

    return 0;
}


/*Tower of Oddity
Hint:

You are allowed to visit only odd-numbered floors.
Start from floor 1, and recursively call the function, adding 2 to the current floor each time, until it exceeds n.
Recursion Base Case: If the floor is greater than n, stop.
Example:
For n = 10, the function should print:

1, 3, 5, 7, 9
Each time, increment by 2 to skip even-numbered floors.*/