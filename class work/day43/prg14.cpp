#include <iostream>
#include <list>

using namespace std;

int main() {
	list <int> s = { 10,20,30,50 };

	s.push_front(5);
	s.push_back(90);

	for (int val : s) {
		cout << "anser is: " << val << endl;

	}
}