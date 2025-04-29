#include <iostream>
using namespace std;
//odd number check
int main()
{
	int num;
	cout << "Enter a number odd: ";
	cin >> num;

	if (num % 2 == 1)
	{
		cout << "The number is odd." << endl;
	}
	else
	{
		cout << "The number is not odd." << endl;
	}
}