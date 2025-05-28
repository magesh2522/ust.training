#include <iostream>
using namespace std;

class myClass {
public:
	int i, j, k;

};
int main() {
	myClass a, b;
	a.i = 100;
	a.j = 4;
	a.k = a.i * a.j;
	b.k = 12;

	cout << "a.k is: " << a.k << endl;
	cout << "b.k is: " << b.k << endl;
}