#include<iostream>
using namespace std;

int main()
{
	char s1[100];
	cout<<"check the string length"<<endl;
	cin>>s1;
	int count=0;
	while (s1[count] != '\0')
	{
		count++;
	}
	cout<<"The length of the string is: "<<count<<endl;
}
