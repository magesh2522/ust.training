#include <iostream>
#include<algorithm>

using namespace std;

template<typename T,size_t N>
class MyArray {
private:
	T* data;
	size_t sizeOf;
public:
	MyArray() {
		this->data = new T[	N];
		cout << N << endl;
	}

	const T& operator[](size_t index) {
		if (index >= sizeOf) {
			throw ("range");
		}
		return data[index];
	}

	/*void fill(const T& value) {//Fill Func
		for (size_t i = 0;i < noOfelement;i++) {
			cout << data[i] <<endl;

		}
		set_t size()const {
			return noOfelement;
		}
	}*/
};
int main() {
	/*size_t n;
	cout << "number";
	cin >> n;*/
	MyArray<int, 10>data;

}