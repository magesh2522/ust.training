#include <iostream>
using namespace std;

void increment(int* ptr) {
	(*ptr)++;

}
int main() {
	int num = 5;
	increment(&num);
	cout << num;
}
//int main() {

	//int a[3] = { 1,2,3 };
	//int* ptr = a;
	//cout << *(ptr+1) << endl;





//}