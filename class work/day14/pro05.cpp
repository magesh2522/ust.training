#include<iostream>
using namespace std;
/*
int main() {
	char a[10]={'a','e','i','o','u'};
	cout<<"check the weather it is vowel or consonant"<<endl;
	char b;
	cout<<"Enter the character"<<endl;
	cin>>b;
	for (int i = 0; i < 10; i++)
	{
		if (b !=a[i])
		{
			cout << b << " is consonant" << endl;
			break;
		}
		else
		{
			cout << b << " is vowel" << endl;
			break;
		}
	}
}*/



int main() {
	
	char b;
	cout<<"check this  vowel or consonant"<<endl;
	cin>>b;

	if (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u') {
		cout << b << " is a vowel" << endl;
	}
	else {
		cout << b << " is a consonant" << endl;
	}

}