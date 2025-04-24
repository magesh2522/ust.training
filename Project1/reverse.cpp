#include <iostream>
using namespace std;

void rev() {

	int start, end;
	cout << "start table";
	cin >> start;
	cout << "end table";
	cin >> end;

	for (int i = 1;i <= end;i++)
	{
		for (int j = 1;j <= end;j++)
		{
			cout << j<< " x " << i << " = " << i * j << "\t";
		}
		cout  << endl;
	}

}

