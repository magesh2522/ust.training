#include <iostream>
using namespace std;

int main() {
    char word[100];
    int count[26] = { 0 }; 

    cout << "Enter a word: ";
    cin >> word; 

    for (int i = 0; word[i] != '\0'; i++) {
        char ch =(word[i]); 
        count[ch - 'a']++;
       
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            cout << char('a' + i) << ": " << count[i] << endl;
        }
    }

    return 0;
}
