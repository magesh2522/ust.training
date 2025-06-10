#include <iostream>
#include <iterator>
#include<deque>
#include<algorithm>
#include<list>

using namespace std;

int main() {
	deque<char> d = { 'a','b','c','d' };
	list <int> l = { 1,2,3 };
	auto it = d.begin();

	cout << it[1] << endl;
	auto itl = l.begin();
	cout << it[1] << endl;
	return 0;


}