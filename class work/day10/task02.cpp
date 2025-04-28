#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int N) {
    if (N == 0) {
        return 0;
    }
    else {
        return N + sumOfNaturalNumbers(N-1 );
    }
}
int main() {
	int N;

	cout << "Enter a number: ";
	cin >> N;

	int sum = sumOfNaturalNumbers(N);
	cout << "Sum of natural numbers from 1 to " << N << " is: " << sum << endl;

	return 0;
}
