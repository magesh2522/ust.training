#include <iostream>
using namespace std;

class myArray
{
private:
	int* arr;
	int size;
	int capacity;
	public:
		myArray(){capacity = 1; size = 0; arr = new int[capacity];}
			int push_back(int);
			int biggest();
			bool sortAsc();
			bool sortDesc();
			void printArray();
			int getSize()const;
			int getCapacity()const;
			int resize();
};
int myArray::getCapacity()const
{
	return capacity;
}
int myArray::getSize()const
{
	return size;
}
int myArray::pushback(int v) {

}




int main() {
	myArray a;
	cout << "Size:"<<a.getSize()<<;
	a.push_back(10);
	a.push_back(20);
	a.push_back(5);
	a.push_back(6);


}