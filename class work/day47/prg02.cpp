#include<iostream>
using namespace std;

template<typename T>
class MyVector {
	T* arr;
	int capacity;
	int size;
public:
	MyVector() {
		capacity = 1;
		size = 0;
		arr = new T[capacity];
	}
	void push_back(T value) {
		if (size == capacity) {
			capacity *= 2;
			T* newArr = new T[capacity];
			for (int i = 0;i < size;++i)
				newArr[i] = arr[i];
			delete[] arr;
			arr = newArr;
		}
		arr[size++] = value;
	}
	T& operator [](int index) {
		return arr[index];
	}
	int getSize()const {
		return size;
	}
	~MyVector() {
		delete[] arr;
	}
};
int main() {
	MyVector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	for (int i = 0;i < v.getSize();++i) {
		cout << v[i] << endl;
	}
	return 0;


}