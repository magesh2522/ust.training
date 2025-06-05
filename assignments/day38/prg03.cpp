#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> words = { "Apple", "banana", "apple", "Orange", "BANANA", "grape" };

    // Convert all words to lowercase
    std::transform(words.begin(), words.end(), words.begin(), [](std::string& word) {
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);
        return word;
        });

    // Sort the words details
    std::sort(words.begin(), words.end());

    // Remove duplicates elements
    words.erase(std::unique(words.begin(), words.end()), words.end());

    // Print result
    for (const auto& word : words) {
        std::cout << word << " ";
    }

    return 0;
}