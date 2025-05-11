#include <iostream>
using namespace std;
int main() {
	char a;
	cout << "Check Whether a Character is a Vowel or Consonant: " << endl;
	cin >> a;
	a= tolower(a);

	if (a=='a' ||a== 'e' || a=='i' ||a== 'o' ||a== 'u' )
	{
		cout << "This is vowel" << endl;
	}
	else {
		cout << "This is constant " << endl;
	}
}
//Write a Program to Check Whether a Character is a Vowel or Consonant
