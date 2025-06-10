#include <iostream>
#include <vector>
#include<iterator>
#include <fstream>

using namespace std;

class Student {
private:
	int s_Id;
	int s_MobileNum;
	string s_Name;

public:
	Student(int s_Id, int s_MobileNum, string Name) :s_Id(s_Id), s_MobileNum(s_MobileNum), s_Name(s_Name) {}

	void disp() const { cout << "ID" << s_Id << "Mobile Number" << s_MobileNum << "Name" << s_Name; }
	int getId()const { return s_Id; }
	int getMobileNum()const { return s_MobileNum; }
	string getName()const { return s_Name; }
	void setId(int s_Id) { this->s_Id = s_Id; }
	void setMobileNum(int s_MobileNum) { this->s_MobileNum = s_MobileNum; }
	void setName(string s_Name) { this->s_Name = s_Name; }
	void setValue() { cin >> s_Id >> s_MobileNum >> s_Name; }

	friend istream& operator >>(istream is, Student e);
};

int main() {
	int s_Id;
	int s_MobileNum;
	string name;

	//istream_iterator<Student>inIt(std::cin);
	istream& operator>>(istream & in, Student & s) {
		in >> s.s_Id >> s.s_MobileNum >> s.s_Name;
		return in;

	}

	istream_iterator<Student> inIt(cin);
	istream_iterator<Student> endIt;
	vector<Student> students;

	
		while (inIt != endIt)
		{
			students.push_back(*inIt);
			++inIt;
		}
		for (auto e : students)
			e.disp();


		return 0;
	
}