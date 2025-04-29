#include<iostream>
using namespace std;
int main() {
	int a[] = { 11,13,12,15,8,6,4,3,7,1 };
	int i, countOdd, countEven;

	constexpr int size = sizeof(a) / sizeof(a[0]);
	cout << "Size of array: " << size << endl;
	countOdd = 0;
	countEven = 0;
	for (i = 0; i < size; i++) {
		if (a[i] % 2 == 0) {
			countEven++;
		}
		else {
			countOdd++;
		}
	}
	cout << "Number of even elements: " << countEven << endl;
	cout << "Number of odd elements: " << countOdd << endl;
	for (i = 0; i < size; i++) {
		if (a[i] % 2 == 0) {
			cout << a[i] << " ";
		}
	}
	cout << endl;
	for (i = 0; i < size; i++) {
		if (a[i] % 2 != 0) {
			cout << a[i] << " ";
		}
	}
	cout << endl;
	cout<<"finf a elemts index in arrays="<<endl;	
	int gValue = 0;
	cout << "Enter the search list value: ";
	cin >> gValue;
	for (i = 0; i < size; i++) {
		if (a[i] == gValue) {
			cout << "Found " << gValue << " at index " << i << endl;
			break; 
		}
		else if (i == size - 1) {
			cout << "Not Found" << endl;
		}
	}
	






}