#include <iostream>
#include <string>
using namespace std;

string preprocess(string str) {
    string result = "";
    for (char ch : str) {
        if (!isspace(ch)) {
            result += tolower(ch);
        }
    }
    return result;
}

bool isPalindrome(string str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right])
            return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string cleaned = preprocess(input);

    if (isPalindrome(cleaned))
        cout << " string is a palindrome." << endl;
    else
        cout << " string is not a palindrome." << endl;

    return 0;


}


