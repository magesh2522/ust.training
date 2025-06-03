#include <iostream>
#include<vector>

using namespace std;

class Student {
	int id;
	string name;
public:
	Student(int id, string name) :id(id), name(name) {

	}
	void display() {
		cout << "ID " << id<<endl;
		cout << "Name: " << name << endl;
	}
};
int main() {
	try{

	Student s[3] = { {101,"vismaya"},{102,"sneha"} ,{ 103,"magesh" } };
	Student s1 = { 104,"manu" };
	Student s2 = { 105,"abu" };
	Student s3 = { 106,"ashok" };
	Student s4 = { 107,"lavaniya" };



	for (auto e : s)
	e.display();
	vector<Student>emp;
	emp.push_back(s1);
	emp.push_back(s2);
	emp.push_back(s3);

	for (auto e : emp)
	e.display();

	cout << emp.capacity() << endl;
	cout << emp.size() << endl;

	emp.front().display();
	emp.back().display();
	emp.at(10).display();
	emp.pop_back();
	emp.back().display();

	emp.insert(emp.begin() , s4);

	emp.front().display();
	emp.back().display();

	for (auto e : emp)
	e.display();

}
catch (exception& e) {
	cout << "error" <<e.what()<< endl;
}

return 0;
}