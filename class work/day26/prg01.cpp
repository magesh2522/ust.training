#include <iostream>
using namespace std;

class student {
protected :
	int rollno;
	char name[100];
public:
	void display() {
		cout<<"name:"<<name<<endl;
	}
	void setName(string s) {
		strcpy(name, s.c_str());
	}
	 
};
int main() {
	student s;
	char sName[] = "magesh";
	cout << sizeof(s) << endl;
	s.display();


}