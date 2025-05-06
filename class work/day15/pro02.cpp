#include <iostream>

using namespace std;

int main() {
	cout<<"without using 3 variable to swap two numbers"<<endl;
	int a, b;
	cout<<"enter two numbers"<<endl;
	cin>>a>>b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout<<"after swapping"<<endl;
	cout<<a<<endl;
	cout<<b<<endl;

}