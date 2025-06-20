#include <iostream>
#include <vector>
#include<fstream>

using namespace std;

class user {
protected:
	string role;
	string userName;
	string password;
public:
	user(string r,string u,string p):role(r),userName(u),password(p){}

	string getUserName() {
		return userName;
	}
	string getRole() {
		return role;
	}

	bool login(string u, string p) {
		return(userName == u && password == p);
	}
	virtual void Menu() = 0;
};
class Employee {
public:
	int id;
	string name, domain, userName, status;

	Employee(int id,string name,string domain,string userName,string status): 
		id(id), name(name), domain(domain), userName(userName), status(status) {}

	void display() {
			cout << "ID: " << id << ", Name: " << name 
		     << ", Domain: " << domain << ", Username: " 
		     << userName << ", Status: " << status << endl;
	}
};

vector<user*> users;
vector<Employee> employees;

void loadUsers() {
	users.clear();
	ifstream file("user.txt");
	string u, r, p;
	while (file >> u >> r >> p) {
		if (r == "admin") {
			users.push_back(new user("admin", u, p));
		}
		else if (r == "employee") {
			users.push_back(new user("employee", u, p));
		}
	}

}




