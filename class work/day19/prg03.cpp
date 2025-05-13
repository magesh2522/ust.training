#include<iostream>
using namespace std;

int main() {
	int* ptr = nullptr;
	int* temp = nullptr;
	int noofelen = 5;

	ptr = (int*)malloc(sizeof(int) * noofelen);
	temp = ptr;

	for (int i = 0;i < noofelen;ptr++) {
		cout << "enter the" << i + 1 << "value" << endl;
		cin >> *ptr;

	}
	for (int i = 0;i < noofelen;i++, ptr++)
		cout << (i + 1) << "value=" << *ptr << endl;
	return 0;
}