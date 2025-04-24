#include<iostream>
using namespace std;
int main()
	{
	int start,end;
	cout << "start table";
	cin >> start;
	cout<< "end table";
	cin >> end;

	for (int i = start;i <= end;i++)
	{
		for (int j = start;j <= end;j++)
		{
			cout << i << " x " << j << " = " << i * j << endl;
		}	
	}

}
