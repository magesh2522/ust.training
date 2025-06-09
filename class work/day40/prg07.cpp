#include <iostream>
#include<queue>

using namespace std;

int main() {
	queue<string> q;
	q.push("Abu");
	q.push("Balaji");
	q.push("Chandhana");

	while (!q.empty()) {
		cout << q.front() << endl;
		q.pop();

	}
}