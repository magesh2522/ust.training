#include <iostream>
using namespace std;

int main() {
	int n;
	int sum = 0;
	cout << "Enter the number" << endl;
	cin >> n;
	for (int i = 0;i <= n;i++) {
		sum += i;
	}
	cout << "sum of 1st high number:" << sum << endl;
	return 0;
}
///Write a Program to Find the Sum of the First N Natural Numbers

