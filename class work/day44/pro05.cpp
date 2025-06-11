#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>

using namespace std;

int main() {
    // Using a vector (dynamic array)
    vector<int> v = { 1, 2, 3, 4, 5 };
    v.push_back(6);
    cout << "Vector elements: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    // Using a list (doubly linked list)
    list<int> l = { 10, 20, 30, 40 };
    l.push_front(5);
    cout << "List elements: ";
    for (int num : l) {
        cout << num << " ";
    }
    cout << endl;

    // Using a map (key-value pairs)
    map<string, int> m;
    m["Alice"] = 25;
    m["Bob"] = 30;
    cout << "Map contents:\n";
    for (auto& pair : m) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Using a set (unique elements)
    set<int> s = { 100, 200, 300, 400, 100 }; // Duplicate 100 will be ignored
    cout << "Set elements: ";
    for (int num : s) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}