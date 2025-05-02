#include <iostream>
#include <string>

using namespace std;

void find_positions(const string& a) {
    size_t p_are = a.find("are");
    size_t p_i = a.find("i");

    int are = (p_are == string::npos) ? -1 : static_cast<int>(p_are);
    int i = (p_i == string::npos) ? -1 : static_cast<int>(p_i);

    int total_sum = are + i;

    cout << "Sum = " << total_sum << endl;
}

int main() {
    string a;
    getline(cin, a); 

    find_positions(a);

    return 0;
}

/*Write a program that performs the following tasks:

Finds the starting positions (0-based index) of the substrings "are" and "i" in a given input string.
Calculates and prints the sum of these two positions.
If either of the substrings is not found in the input, treat its position as -1.
?? Input Format
A single line containing a string (possibly with multiple words and spaces).

??? Output Format
Print the sum of the starting positions of the substrings "are" and "i" in the format:

Sum = <sum>
*/