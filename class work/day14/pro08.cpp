#include <iostream>
using namespace std;
int main() {
	cout << "count a number of vowels" << endl;
	char str[100];
	cout << "Enter a string: ";
	cin >> str;
	int count = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
			count++;

		}
	}			cout << "The number of vowels in the string is: " << count << endl;
	return 0;

}