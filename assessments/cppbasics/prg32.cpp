#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "enter the num" << endl;
	cin >> n;

	for (int i = n;i > 0;i--) {
		for (int j = 0;j < n - i;j++) {
			cout << " ";
		}
		for (int k = 0;k < 2 * i - 1;k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;

}///Write a Program to print an Inverted Pyramid
