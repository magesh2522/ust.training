#include <iostream>
using namespace std;

int main() {

	int arr[] = { 3,4,5,68,9,9 };
	int n = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0;i < n;i++) {
		for (int j = i + 1;j < n;j++) {
			if (arr[i] == arr[j]) {
				for (int k = j;k < n - 1;k++)
				{
					arr[k] = arr[k + 1];

				
				}
				n--;
				j--;
			}




		}
		
	}
	for (int i = 0;i < n;i++)
		cout << arr[i] << endl;
}
