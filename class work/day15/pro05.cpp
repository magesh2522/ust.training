
#include <iostream>
using namespace std;

void removeSpaces(char* str)
{
    int count = 0;

    
    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i]; 
    
    str[count] = '\0';
}

int main(){
    char str[100];
	cout << "Enter a string: ";
	cin.getline(str, 100);
	
	removeSpaces(str);
	
	cout << "String after removing spaces: " << str << endl;
	
	return 0;
}

    