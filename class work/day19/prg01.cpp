#include <iostream>
using namespace std;

int main() {
	int a = 10;
	char ch= 'A';
	float f = 12.4;
	int* ptr1 = nullptr;

	printf ( "\n address  of a= %u and it value =%d\n", & a, a);
	printf("\n address  of ch= %u and it value =%c\n", &ch, ch);
	printf("\n address  of f= %u and it value =%f\n", &f, f);
	printf("addressvof ptr1=%u and it value =%u\n", &ptr1, ptr1);
	a = 10;
	ptr1 = &a;

	printf("address of ptr1=5u and it value =%u\n", &ptr1, ptr1);


	


}