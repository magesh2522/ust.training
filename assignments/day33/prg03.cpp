#include <iostream>
using namespace std;

class Student {
protected:
	string name;
	int rollNum;
public:
	Student(string n, int r) {
		name = n;
		rollNum = r;


	}
	virtual void display() = 0;

};
class Marks:public Student {
protected:
	int mark1, mark2;
public:
	Marks(string n, int r, int m1, int m2) :Student(n, r) {
		mark1 = m1;
		mark2 = m2;

	}
	void display()override {
		cout << "Name: " << name << endl;
		cout << "Roll Number: " << rollNum << endl;
		cout << "Marks: " << mark1 << " ," << mark2 << endl;

	}
};
class Sports :public Student {
protected:
	int Score;
public:
	Sports(string n, int r, int s) :Student(n, r) {
		Score = s;

	}
	void display()override {
		cout << "Name: " << name << endl;
		cout << "Roll Number: " << rollNum << endl;
		cout << "Score: " << Score << endl;

	}
};

int main() {
	Marks m("Magesh", 121, 12, 34);
	Sports s("Vismaya", 121, 100);

	cout << "Marks Updates\n";
	m.display();
	cout << "Sports Updates\n";
	s.display();
	
}