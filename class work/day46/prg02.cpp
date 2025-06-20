#include <iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<fstream>
#include<istream>

using namespace std;

bool sortvalueDesc(const pair<string, int>& a, const pair<string, int>& b) {
	return a.second > b.second;
}

int main() {
	map<string, int> m1;
	string batchId;
	int dcount;

	ifstream file("defects.txt");
		if (!file) {
			cout << "not open" << endl;
			return 1;
		}
		while (file >> batchId >> dcount) {
			m1[batchId] = dcount;
		}
		file.close();
		vector<pair<string, int>>sortedDefects(m1.begin(), m1.end());
		sort(sortedDefects.begin(),sortedDefects.end(),'')

	}
