#include <iostream>
int add(int,int);
int updateAdd(int,int);
using namespace std;

int main() {
	int a = 10, b = 20;
	int res = add(a, b);

	cout<<res<<endl;
	cout << "addres of A=" << &a << "\t" << "addres of B = "<<&b<<endl;
	res = updateAdd(a, b);

	cout<<res<<endl;
	cout << "a=" << a << "\tb=" << b << endl;
	return 0;
}

int add(int v1, int v2) {
		return v1+v2;
}
int updateAdd(int v1, int v2) {
	v1 *= 2;
	v2 /= 3;
	cout<<"v1-"<<v1<<"\tv2="<<v2<<endl;
return v1 + v2;
}


