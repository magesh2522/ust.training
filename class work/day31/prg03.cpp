#include <iostream>
using namespace std;

class A {
private:
	int x;
protected:
	int y;
	void proMethod() { cout << "A protect mode called"; }
public:
	A() { cout << "A constr got called\n";x = 10; y = 20; }
	void displayA() {
		cout << "\t hello fron A\n" << endl;
		cout << "x=" << x << "y=" << y << endl;
	}
};
class B :public A {
private:
	int a;
protected:
	int b;
public:
	B() {
		cout << "B constr go called\n";
		a = 11;
		b = 12;
	}
	void displayB()
	{

		cout << "hello fron A\n" << endl;
		cout << "a=" << a << "b=" << b << endl;
	}


};

int main() {
	A objA;
	B objB;

	objB.displayB();
	objA.displayA();
	objB.proMethod();


}