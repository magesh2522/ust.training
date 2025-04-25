#include<iostream>
using namespace std;

typedef struct user {
	int _id;
	int usertype;
	string username;


}users;
void dispmenunu();
void dispmenuau();

int main()
{
	users u;
	cout << "enter id" << endl;
	cin >> u._id;
	cout << "enter usertype(0/1)" << endl;
	cin >> u.usertype;
	cout << "enter user name";
	cin >> u.username;

	if (u.usertype == 0)
	{
		dispmenunu();
	}
	else
	{
		dispmenuau();

	}
	cout << "application ended success" << endl;
	return 0;
}
void dispmenunu()
{
	cout << "i am able to access admin menu Thanks###";
}
void dispmenuau()
{
	cout << "i am not able to access admin menu ###";
}





