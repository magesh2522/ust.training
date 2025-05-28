#include <iostream>
using namespace std;

int main() {
	int* a;
	a =(int *) malloc(5* sizeof(int));

	for (int i = 0;i < 11;i++) {
		a[i]=(i+1)*3;
		cout << "answe is :" << a[i]<<endl;
	}
}