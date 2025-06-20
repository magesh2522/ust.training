#include <iostream>
using namespace std;

int RowWithMaxOnes(int matrix[][100], int N) {
    int row = 0;           // Row index
    int col = N - 1;       // Start from the top-right corner
    int maxRowIndex = -1;  // To store the index of the row with max 1s
    int maxOnes = 0;       // Maximum number of ones found so far

    // Traverse the matrix starting from the top-right corner
    while (row < N && col >= 0) {
        if (matrix[row][col] == 1) {
            // Move left if you find a 1
            col--;
            // Track the row with maximum 1s
            if (N - col - 1 > maxOnes) {
                maxOnes = N - col - 1;
                maxRowIndex = row;
            }
        }
        else {
            // Move down if you find a 0
            row++;
        }
    }
    return maxRowIndex;
}

int main() {
    // Example matrix of size 4x4
    int matrix[4][100] = {
        {0, 0, 0, 1},
        {0, 0, 1, 1},
        {0, 1, 1, 1},
        {0, 0, 1, 1}
    };

    int N = 4; // Size of the matrix (4x4)

    // Call the function to get the row index with the maximum number of 1s
    int result = RowWithMaxOnes(matrix, N);

    // Output the result
    cout << "The row with the maximum number of 1's is at index: " << result << endl;

    return 0;
}
