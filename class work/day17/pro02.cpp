#include <iostream>
using namespace std;

int main() {
    char word1[100], word2[100];

    cout << "Enter first word: ";
    cin >> word1;
    cout << "Enter second word: ";
    cin >> word2;

    int length1 = 0, length2 = 0;

    while (word1[length1] != '\0') {
        length1++;
    }
    while (word2[length2] != '\0') {
        length2++;
    }

    if (length1 != length2) {
        cout << "The words are not anagrams." << endl;
        return 0;
    }

    int count[26] = { 0 };

    for (int i = 0; i < length1; i++) {
        count[word1[i] - 'a']++; 
    }

    for (int i = 0; i < length2; i++) {
        count[word2[i] - 'a']--;  
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            cout << "The words are not anagrams." << endl;
            return 0;
        }
    }

    cout << "The words are anagrams!" << endl;
    return 0;
}
