#include <iostream>
#include <iomanip>
using namespace std;

struct studen {
	int id;
	string name;
	float m1, m2, m3, m4;
	int n;

};
int main() {
	int n;
	cout << "Enter the number of students: ";
	cin >> n;
	int id;
	string name;
	float m1, m2, m3, m4, avg;

	for (int i = 0; i < n; i++) {
		cout << "\n enter the details of student " << i << ":\n";
		cout << "Enter id: ";
		cin >> id;
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter marks of 4 subjects: ";
		cin >> m1 >> m2 >> m3 >> m4;
		avg = (m1 + m2 + m3 + m4) / 4;
		cout << "\nsln\tid\tname\tm1\tm2\tm3\tm4\tavg\n";
		cout << i << "\t" << id << "\t" << name << "\t" << m1 << "\t" << m2 << "\t" << m3 << "\t" << m4 << "\t" << avg << endl;

	}
	return 0;
}


	