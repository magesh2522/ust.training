#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int vowelCount = 0;

    cout << "Enter a string: ";
    cin >> str;

    for (char ch : str) {
        ch = tolower(ch); 

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }

    cout << "Number of vowels in the string: " << vowelCount << endl;

    return 0;
}
//Write a Program to Count the Number of Vowels

