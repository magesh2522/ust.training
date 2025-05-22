#include <iostream>
#include <string >

using namespace std;

class Employe {
private:
	int e_id;
	string e_name;
public:
	~Employe() {
		cout<<"constructor called"<<endl;
		//e_id = 0;
		//e_name = "";
	}
	void display() {
		cout<<"display function called"<<endl;
		cout<<e_id<<"\t"<<e_name<<endl;
		

	}


};
int main() {
	Employe e;
	e.display();

}

