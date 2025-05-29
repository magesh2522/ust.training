#include <iostream>
using namespace std;

class A {
public:
	void displayA() {
		cout << " A is called" << endl;
	}
};

class	B : public A{
public:
	void displayB() {
		cout << "B is called" << endl;
	}
};

	class C :virtual public A{
	public:
		void displayC() {
			cout << " C is called" << endl;
		}
	};

	class D:public B,public C{
	public:
		void displayD() {
			cout << " D is called" << endl;
		}
	};

	int main() {
		D objD;
		objD.displayB();
		objD.displayD();
		objD.displayA();


	}