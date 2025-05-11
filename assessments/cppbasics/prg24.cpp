#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "enter the number:" << endl;
	cin >> num;
	int sum = 0;
	const int size = 100;
	int arr[size];

	for (int i = 0;i < num;i++) {
		cin >> arr[i];
		sum += arr[i];

	}
	cout << "count: " << sum << endl;
}
////Write a Program to Calculate the Sum of Elements in an Array
