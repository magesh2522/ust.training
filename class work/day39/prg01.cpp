#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;


class Emp {
public:
	Emp(int id,std::string name):id(id),name(name){}
	void disp() {
		cout << "ID: " << id << "\tName: " << name << endl;
	}
private:
	int id;
	string name;

};
int main() {
	Emp e1(101, "manu");
	Emp e2(104, "magesh");

	std::map<int, vector<Emp>>mapEmp;

	vector<Emp>v;
	v.push_back(e1);
	v.push_back(e2);

	mapEmp[1] = v;
	auto i = mapEmp.begin();
	auto ele = i->second;
	for (auto j : ele) {
		j.disp();
	}



}