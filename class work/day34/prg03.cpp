#include <iostream>
using namespace std;


void great() {
	cout << "heloo grom function :" << endl;

}
int add(int x,int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;

}
int main() {
	void(*fptr)() = great;
	fptr();

	int (*fptr1)(int, int) = add;

	cout << fptr1(10, 20) << endl;

	int (*fptr2)(int, int) = sub;
	cout << fptr2(10, 20) << endl;


}