#include <iostream>
using namespace std;

void printNumbers(int N) {
    if (N == 0) {
        return;
    }

    cout << N << " ";  
    printNumbers(N - 1);  
}

int main() {
    int N;

    cout << "Enter a number: ";
    cin >> N;

    printNumbers(N);

    return 0;
}
