#include <iostream>
#include <unordered_set>
#include <string>

int main() {
    std::unordered_multiset<std::string> words;

    // Insert elements (duplicates allowed)
    words.insert("apple");
    words.insert("banana");
    words.insert("apple");
    words.insert("orange");
    words.insert("banana");
    words.emplace("apple"); // Emplace

    // Display all elements
    std::cout << "All words (including duplicates):\n";
    for (const auto& w : words) {
        std::cout << w << "\n";
    }

    // Count occurrences of "apple"
    std::cout << "\nCount of 'apple': " << words.count("apple") << "\n";

    // Find "banana"
    auto it = words.find("banana");
    if (it != words.end()) {
        std::cout << "'banana' found, erasing one occurrence.\n";
        words.erase(it); // Erase one occurrence of "banana"
    }

    // Display after erasing one "banana"
    std::cout << "\nWords after erasing one 'banana':\n";
    for (const auto& w : words) {
        std::cout << w << "\n";
    }

    // Erase all "apple"
    size_t erased = words.erase("apple");
    std::cout << "\nErased " << erased << " occurrences of 'apple'.\n";

    // Show size
    std::cout << "Size after erasing all 'apple': " << words.size() << "\n";

    // Clear all
    words.clear();
    std::cout << "Cleared all words. Is empty? " << std::boolalpha << words.empty() << "\n";

    return 0;
}