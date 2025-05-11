#include <iostream>
using namespace std;

void findmax(int arr[], int n)
{
	int min = arr[0];
	int max = arr[0];
	for (int i = 0;i < n;i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
		else if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "min=:" << min << endl;
	cout << "max=:" << max << endl;
}
	int main() {
		int arr[] = { 10,20,30,40,50 };
		int n = sizeof(arr[0]);

		findmax(arr, n);

	}
	