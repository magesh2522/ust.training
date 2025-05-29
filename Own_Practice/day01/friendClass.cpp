#include<iostream>
using namespace std;

class TwoValue {
	int a, b;
public:
	TwoValue(int i, int j) {
		a = i;
		b = j;

	 }
	friend class Min;

};
class Min {
public:
	int min(TwoValue x);
};

int Min::min(TwoValue x) {
	return x.a > x.b ? x.a : x.b;
}
int main() {
	TwoValue j(10, 20);
	Min m;
	cout << m.min(j);
	return 0;

	 
}///in this example class min access the private variable and declare with in the two values class 