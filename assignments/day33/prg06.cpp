#include <iostream>
using namespace std;

template <class T>
class calc {
private:
	T  num1, num2;
public:
	 calc(T a, T b) {
		 num1=a;
		 num2=b;

	}
	T Add() {
		return num1 + num2;
	}
	T Sub() {
		return num1 - num2;
	}
	T Mul() {
		return num1 * num2;
	}
	T Div() {
		if (num2 == 0) {
			cout << "error";
			return 0;
		}
		return num1 / num2;
	}


};
int main() {
	calc<int> intcal(10, 5);

	cout << "Addition= " <<intcal.Add() << endl;
	cout << "Sub= " << intcal.Sub() << endl;
	cout << "Mul= " << intcal.Mul() << endl;
	cout << "Div= " << intcal.Div() << endl;
	return 0;
}

