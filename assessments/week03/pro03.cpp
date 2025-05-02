#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* A = new int[N]; 
    int* result = new int[N](); 

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        int count = 0;
        for (int j = i + 1; j < N; j++) {
            if (A[j] < A[i]) { 
                count++;
            }
        }
        result[i] = count; 
    }

    for (int i = 0; i < N; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    delete[] A;
    delete[] result;

    return 0;
}
/* 03 You are given an array A of size N containing positive integers. For each element in the array, count the number of elements to its right that are smaller than the current element.

Your task is to compute and print a list of counts corresponding to each element.

📌 Constraints
2 ≤ N ≤ 100
All elements in the array are positive integers.
🧾 Input Format
The first line contains an integer N — the number of elements in the array.
The second line contains N space-separated integers — the elements of the array.
🖨️ Output Format
Print N space-separated integers — each representing the count of smaller elements to the right of the corresponding element in the array.
*/