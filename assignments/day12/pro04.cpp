#include <iostream>
using namespace std;

int stairwayOfSquares(int n) {
    if (n == 0) {
        return 0;
    }

    return (n * n) + stairwayOfSquares(n - 1);
}

int main() {
    int n;
    cout << "Enter the number of steps (n): ";
    cin >> n; 

    cout << "Sum of squares: " << stairwayOfSquares(n) << endl;

    return 0;
}

/*5. Stairway of Squares
Hint:

Each step involves summing the square of all previous steps.
Recursion Base Case: If n == 0, return 0 (no more steps).
Logic: For each step, return the square of n and add the sum of squares for the previous steps (n-1).
Example:
For n = 3, the sum of squares would be:

3^2 + 2^2 + 1^2 = 9 + 4 + 1 = 14*/