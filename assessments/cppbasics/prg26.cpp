#include <iostream>
#include <algorithm> // For sorting

using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    if (str1.length() != str2.length()) {
        cout << "The strings are not anagrams (different lengths)." << endl;
        return 0;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if (str1 == str2) {
        cout << "The strings are anagrams!" << endl;
    }
    else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}

//Write a Program to Check if Two Strings are Anagram or Not

