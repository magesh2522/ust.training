#include <iostream>
using namespace std;

char FirstUniqueChar(char* str) {
    const int SIZE = 26;
    int freq[SIZE] = { 0 };  // Frequency array for all ASCII characters

    // First pass: count frequency
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)(str[i])]++;  // No unsigned cast
    }

    // Second pass: find first non-repeating character
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(int)(str[i])] == 1)
            return str[i];
    }

    return ' ';
}

int main() {
    char input1[] = "mageshjustin";
    char input2[] = "abacbcdafafadvgsdgsdaaFASF";

    cout << "First unique  \"" << input1 << "\": " << FirstUniqueChar(input1) << endl;
    cout << "First unique  \"" << input2 << "\": " << FirstUniqueChar(input2) << endl;

    return 0;
}
