#include <iostream>
using namespace std;


int main() {
	int* a = new int[10];

	if (a == nullptr) {
		cout << "this is null" << endl;
		return 1;

	}
	for (int i = 0;i < 10;i++) {
		a[i] = (i + 1)*10;
	}
	for (int i = 0;i< 10;i++) {
		cout << "Answer is :" << a[i] << endl;
	}
}