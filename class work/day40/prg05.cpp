#include <iostream>
#include <map>

using namespace std;
int main() {
	map<int, string> s;

	 s[1] = "one";
	 s[2] = "Two";
	 s[3] = "Three";

	 for (auto x : s)
		 cout << x.first << "=>" << x.second << endl;
	 return 0;

}