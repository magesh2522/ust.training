#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;  // Take input N

    int current = 1; 

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << current;  
            if (j != N - 1) {
                cout << "*";  
            }
            current++; 
        }
        cout << endl;  
    }

    return 0;
}

/*Write the logic to for incrementing Squared Number - Star Pattern.
Input Format : Take N as input of type integer.
Output Format : Print incrementing Squared Number - Star Pattern.

Constraints :
    2 <= N <= 10
    Sample Input :
5
Sample Output :
1 * 2 * 3 * 4 * 5
6 * 7 * 8 * 9 * 10
11 * 12 * 13 * 14 * 15
16 * 17 * 18 * 19 * 20
21 * 22 * 23 * 24 * 25*/