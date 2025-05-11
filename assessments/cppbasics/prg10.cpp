#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, result;

    cout << "Enter a string: ";
    cin >> str;

    for (char ch : str) 
    {
        ch = tolower(ch);

        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) 
            result += ch;
        }
    

    cout << "String after removing vowels: " << result << endl;

    return 0;
}


///Write a Program to Remove the Vowels from a String
