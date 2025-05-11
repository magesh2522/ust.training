#include <iostream>
using namespace std;


int main() {



	char ch[100];
	cin >> ch;
	int i = 0;
	int count = 0;



	while (ch[i] != '\0')
	{
		if (ch[i] == 'a' || ch[i] == 's') {
			count++;
		}
		i++;

	}
	cout << count << endl;


}