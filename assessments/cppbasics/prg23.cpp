#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "enter the num" << endl;
	cin >> n;
	const int size = 100;
	int arr[size];

	for (int i = 0;i < n;i++) {
		cin >> arr[i];
	}
	int s1 = arr[0];
	int l1 = arr[0];
	for (int i = 1;i < n;i++) {
		if (arr[i] < s1) {
			s1 = arr[i];
		}
		bool found = false;
		for (int i = 0; i < n; i++) {
			if (arr[i] > s1) {
				if (!found || arr[i] < l1) {
					l1 = arr[i];
					found = true;
				}
			}
		}
		if (!found) {
			cout << "No second smallest element found!" << endl;
		}
		else {
			cout << "The second smallest element is: " << l1 << endl;
		}
		return 0;

	}
}///Write a Program to Find the Second Smallest Element in an Array
//logic some doubt
		



	

