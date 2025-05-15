///find the maximun two number using pointer
#include <iostream>
using namespace std;

int maxNum(int*, int*);
void disPlay();
int maxNum(int* x, int* y) {
	return (*x > *y) ? *x : *y;
}
void disPlay(int n) {
	for (int i = 0;i < n;i++) {
		cout << "=";
	}

}

int main() {
	int v1 = 20, v2 = 10;
	cout << maxNum(&v1, &v2);
	disPlay(20);

}
int maxNum(int*, int*);

