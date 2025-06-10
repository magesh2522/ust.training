#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main() {
    std::vector<int> source = { 1, 2, 3, 4 };
    std::vector<int> destination;

    std::copy(source.begin(), source.end(), std::back_inserter(destination));

    for (int x : destination)
        std::cout << x << " ";

    return 0;
}