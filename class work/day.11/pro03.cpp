#include <iostream>
using namespace std;
void displayptr(int[],int);
void update(int[],int);



int main() {
	int a[] = { 1,3,5,7,2,4,6,8 };
	int n = sizeof(a) / sizeof(a[0]);
	displayptr(a, n);
	update(a, 3);

	displayptr(a, n);
	return 0;
}
void displayptr(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] <<endl;
	}
	cout << endl;
}
void update(int a[],int pos) {
	a[pos] = 444;
	}