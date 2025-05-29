#include <iostream>
using namespace std;

class Inline {
	int a, b;
public:
	void init(int i, int j);
	void show();
};
inline void Inline:: init(int i, int j) {
	a = i;
	b = j;

}

inline void Inline::show() {
	cout << a << "" << b << "\n";
}
int main() {
	Inline L;
	L.init(10, 20);
	L.show();
	return 0;

}