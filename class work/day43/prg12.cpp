#include <iostream>
#include <set>

using namespace std;
int main() {
	multiset<int> s = { 1,2,3,4,5,6,7,4,3,6,8 };
	cout << "enter the elamant " << endl;

	for (int val : s) {
		cout << "value is:" << val << endl;

	}


}