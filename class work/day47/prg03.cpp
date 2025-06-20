#include<iostream>
//#include <bits/stdc++.h>
#include<vector>
#include<stack>
using namespace std;

void explainpair() {
	/////////////////pair
	pair<int, int>p = { 1,3 };
}
//////////////////////vector
void explainVector() {
	vector<int> v;

	v.push_back(1);
	v.emplace_back(2);

	vector<pair<int, int>> vec;

	vec.push_back({ 1,2 });//with curlee brase 
	vec.emplace_back(1, 2);//without brase


	vector<int> v1(5, 100);//{100,100,100,100,100)
	vector<int>c(5);///{0,0,0,0,0}

	vector<int> v2(v1);

	vector<int>::iterator it = v.begin();

	it++;
	cout << *(it) << endl;


	vector<int>::iterator it = v.end();
	vector<int>::iterator it = v.end();
	vector<int>::iterator it = v.end();

	for (auto it = v.begin();it != v.end();it++) {
		cout << *(it) << endl;

	}
	for (auto it : v) {
		cout << it << endl;
	}
	v.erase(v.begin() + 1);
	v.erase(v.begin() + 2, v.begin() + 1);

	v.insert(v.begin(), 300);
	v.insert(v.begin() + 3, 200);
	v.insert(v.begin() + 5, 3, 100);//3 times 300 presents 

	v1.swap(v2);
	v.clear();
}


	void explainList() {

	///same as vector 
	}


	void explainStack() {///LIFO
		stack<int> st;
		st.push(1);
		st.push(2);
		st.push(3);
		cout << st.top();//3 still in stack

		st.pop();


	}
	void explainQueue() {

	}

int main() {
	explainpair();

}