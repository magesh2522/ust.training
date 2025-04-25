#include <iostream>
using namespace std;

void gun()
{
	int n;
	cout << "enter the num:";
    cin >> n;
	int res = 0, temp = 1;
	for (int i = 0;i <= 5;i++)
	{
		res = res +(n / temp) % 10;
			temp *= 10;
		
		}	cout <<"sum is:" << res;
	return ;
	}



	
