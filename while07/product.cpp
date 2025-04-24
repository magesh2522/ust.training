#include<iostream>
using namespace std;

int main()
{
	int N;
	cout<<"enter a postive intiger number : ";
	cin>>N;

	int sum = 0;
	int product = 1;
	int temp= N;
	while (temp > 0)
	{
		int digit = temp % 10;
		sum += digit;
		product *= digit;
		temp /= 10;
	}
	cout<<"sum of digit is : "<<sum<<endl;
	cout<<"product of digit is : "<<product<<endl;
	return 0;
}