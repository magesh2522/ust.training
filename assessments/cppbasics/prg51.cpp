#include <iostream>
#include <limits> // For numeric limits
using namespace std;

int main() {
    cout << "Integer Limits:" << endl;
    cout << "Minimum int: " << numeric_limits<int>::min() << endl;
    cout << "Maximum int: " << numeric_limits<int>::max() << endl;

    cout << "\nShort Integer Limits:" << endl;
    cout << "Minimum short: " << numeric_limits<short>::min() << endl;
    cout << "Maximum short: " << numeric_limits<short>::max() << endl;

    cout << "\nLong Integer Limits:" << endl;
    cout << "Minimum long: " << numeric_limits<long>::min() << endl;
    cout << "Maximum long: " << numeric_limits<long>::max() << endl;

    cout << "\nLong Long Integer Limits:" << endl;
    cout << "Minimum long long: " << numeric_limits<long long>::min() << endl;
    cout << "Maximum long long: " << numeric_limits<long long>::max() << endl;

    return 0;
}
