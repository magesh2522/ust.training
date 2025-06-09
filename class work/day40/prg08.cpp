#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> s = { 10,20,30 };

	if (find(s.begin(), s.end(), 20) != s.end()) {
		cout << "20 found " << endl;
	}
	else {
		cout << "not found " << endl;
	}
}