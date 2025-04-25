#include <iostream>
using namespace std;

void ifelsefun()
{
	string genre;
	cout << "enter the genre: ";
	cin >> genre;
	if (genre[0] >= 48 and genre[0] <= 57)
	{
		cout << "genre with staring with numarical character\n";
		return;

	}
}