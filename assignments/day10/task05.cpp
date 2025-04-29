#include <iostream>
using namespace std;


int main()
{
	int age;
	cout<< "Enter your age: ";
	cin >> age;

	if (age < 18) {
		cout<<"your not elgible to vote"<<endl;
	}
	else {
		cout<<"your elgible to vote"<<endl;
	}

}