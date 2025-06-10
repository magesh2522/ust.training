#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = { 10, 20, 30, 40 };

    std::ostream_iterator<int> outIt(std::cout, " ");   // output with a space
    std::copy(v.begin(), v.end(), outIt);               // write to output stream

    return 0;
}