#include <iostream>
using namespace std;
int alloc(int*, int);
int value(int*, int);
int sort(int*, int);
void display(int*, int);

int alloc(int *p, int nEle) {
	p = (int*)malloc(nEle * sizeof(int));
	return p;

	
}
int value(int* p, int n) {
	for (int i = 0;i < n;i++, p++)
		cin >> *p;
	return 0;
}

int  sort(int* p, int n)
{
	int* ptr, temp;
	for (int i = 0;i <= size;i++) {
		ptr = 
	}
}



}
