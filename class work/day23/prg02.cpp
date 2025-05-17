#include <iostream>
using namespace std;

int main() {
	int start, end;
	cout << "start" << endl;
	cin >> start;
	cout << "end" << endl;
	cin >> end;

	for (int i = start;i < end;i++) {
		cout << "table is" << i << "\n";
		for (int j = 1;j < 10;j++) {
			cout << i << "x" << j << "=" << i * j << endl;
		}
		cout << endl;
	}
}