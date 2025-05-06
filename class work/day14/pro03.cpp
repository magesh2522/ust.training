#include <iostream>

using namespace std;

int main() {
	int a, b;
	cout<<"check the two number between odd and even"<<endl;
	cin>>a>>b;


	for (int i = a; i <= b; i++)
	{
		if (i % 2 == 0)
		{
			cout<<i<<" is even number"<<endl;
		}
		else
		{
			cout<<i<<" is odd number"<<endl;
		}
	}
}

