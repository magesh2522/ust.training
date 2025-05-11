// C++ Program to count the sume of numbers in a string
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int sum(string str)
{
    int sum = 0;
    for (char ch : str) {
        if (isdigit(ch)) {
            sum += ch - '0';
        }
    }
    return sum;
}

int main()
{
    string str;

    str = "1234";

    cout << "Sum =" << sum(str)
        << endl;

    return 0;
}