#include <iostream>
using namespace std;

int main()
{
	int n, sum = 1;
	cout << "enter the number " << endl;
	cin >> n;
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= i;j++) {
			cout << sum << " ";
			sum++;
		}
		cout << endl;
	}
}///Write a Program to Print Floyd's Triangle
