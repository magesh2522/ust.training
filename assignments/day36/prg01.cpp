#include <iostream>
#include<string>
#include <climits>
#include<unordered_map>

using namespace std;

int main() {
	string value;
	cin >> value;

	int freq[10] = { 0 };//create array 0to9

	for (char ch : value) {//count freq each object
		freq[ch-'0']++;
	}
	int maxVal = INT_MIN;
	int minVal = INT_MAX;

	for (int i = 0;i < 10;i++) {
		if (freq[i] > 0) {
			int dvalue = i * freq[i];//2x2 = 2 like that
			if (dvalue > maxVal)maxVal = dvalue;
			if (dvalue > minVal)minVal = dvalue;


		}
	}
	cout << maxVal - minVal<< endl;
	return 0;
}