#include <iostream>
using namespace std;

int stringLength(string str, int index = 0) {
    if (str[index] == '\0') {
        return index; 
    }
    return stringLength(str, index + 1); 
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Length of the string: " << stringLength(str) << endl;

    return 0;
}
//Write a Program to Calculate the Length of the String Using Recursion
