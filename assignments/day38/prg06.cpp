#include <iostream>
#include <set>
using namespace std;

int main() {
	std::set<int> numbers;

	numbers.insert(345);
	numbers.insert(305);
	numbers.insert(320);

	//numbers.erase(305);
	int value_to_remove(305);
	if (!numbers.empty()) {
		cout << "MIN: " << *numbers.begin() << ",MAX" << *numbers.rbegin() << endl;
	}
	else {
		cout << "No Elament Present here" << endl;

	}
	cout <<"Erase " << value_to_remove << endl;
	return 0;



}