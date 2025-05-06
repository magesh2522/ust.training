#include <iostream>
using namespace std;
int main()
{
	cout<<"remove the vowels from the string"<<endl;
	char str[100];
	cout << "Enter a string: ";
	cin >> str;
	int i, j;
	for (i = 0; str[i] != '\0';i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
			for (j = i; str[j] != '\0'; j++) {
				str[j] = str[j + 1];
			}
			str[j] = '\0';
			i--;
		}
		  
	}
	cout << "String after removing vowels: " << str << endl;

}
