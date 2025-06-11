#include <iostream>
#include <map>


using namespace std;

int main() {
	map<int ,string > s;

	s[1] = " ashok";
	s[2] = " vismaya";
	s[3] = " sneh ";

	s.insert({ 4 ,"lavaniya " });

	s.erase(1);

	
	for (auto val : s) {
		cout << "anser is :"<< val.first <<val.second<<endl;
	}


}
