#include<iostream>
using namespace std;
int main() {

	int* ptr = nullptr;
	int a = 10;
	ptr = &a;
	cout << ptr << endl;
	cout << a << endl;
	cout << &ptr << endl;
	cout << &a << endl;
	*ptr = 20;
	cout << *ptr<<"\t"<<a << endl;

}