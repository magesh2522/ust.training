#include <iostream>
using namespace std;

int main()
{
	cout << "check the character is palindrome or not" << endl;
	char ch[100];
	cout << "ente the character:" << endl;
	cin >> ch;
	int i = 0;
	int j = 0;
	while (ch[j] != '\0') {
		j++;
	}j--;
	while (i < j) {

		if (ch[i] != ch[j]) {
			cout << "not palindrome" << endl;
			break;
		}
		i++;
		j--;
	}
	if (i >= j) {
		cout << "palindrome" << endl;
	}
}   