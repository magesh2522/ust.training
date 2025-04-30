#include <iostream>
using namespace std;

int main() {
    int rowsA = 2, colsA = 3;
    int rowsB = 3, colsB = 2;

    int A[2][3] = {
        {1, 2, 3,},
        {4, 5, 6,}
    };


    int B[3][2] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };
    int C[2][2] = { 0 };

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Resultant Matrix C (2x2):" << endl;
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
