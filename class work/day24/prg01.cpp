#include <iostream>
using namespace std;

int main() {
	int* ptr;
	ptr = (int*)malloc(5 * sizeof(int));

	if (ptr == nullptr) {
		cout << "it is invalied" << endl;
		return 1;


	}
	for (int i = 0;i < 5;i++) {
		ptr[i]=(i + 1) * 10;
	}
	for (int i = 0;i < 5;i++) {
		cout << "output is:" << ptr[i] << endl;
	}
}