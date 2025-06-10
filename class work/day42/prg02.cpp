#include <iostream>
#include <unordered_set>
#include <string>

int main() {
    std::unordered_multiset<std::string> wordFreq;
    std::string text[] = { "dog", "cat", "dog", "bird", "cat", "dog" };

    for (const auto& w : text) {
        wordFreq.insert(w);
    }

    std::cout << "Occurrences of 'dog': " << wordFreq.count("dog") << "\n";
    std::cout << "Occurrences of 'cat': " << wordFreq.count("cat") << "\n";

    return 0;
}