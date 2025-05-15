//sum of array using pointer 
#include <iostream>
using namespace std;

int sumArr(int*, int);

int sumArr(int* ptr, int n) {
	int sum = 0;
	for (int i = 0;i < n;i++,ptr++)
		sum +=*ptr;

	return sum;
}




int main() {
	int list[] = { 1,2,3,4,5 };
	int cap = sizeof(list) / sizeof(list[0]);
	cout << "\t"<<sumArr(list, cap) << endl;


}