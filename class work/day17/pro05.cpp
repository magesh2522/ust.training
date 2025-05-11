#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i, j, k;

	for (int i = 0;i <= n;i++) {
		for (int j = 0;j <= i;j++)
			cout << "* ";
		for (int k = 0;k < ((2 * n) - (2 * i));k++)
			cout << "  ";
		for (j = 0;j <= i;j++)
			cout << "* ";
		cout << endl;


	}

	for (int i = n - 1;i >= 0;i--)
	{
		for (int j = 0;j <= i;j++)
			cout << "* ";
		for (int k = 0;k < ((2 * n) - (2 * i));k++)
			cout << "  ";
		for (j = 0;j <= i;j++)
			cout << "* ";
		cout << endl;

	}
}