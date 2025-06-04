#include <iostream>
#include <list>

using namespace std;


bool isOdd(int x) { return x % 2 != 0; }

int main() {
    std::list<int> l1 = { 10, 20, 20, 30, 40 };

    l1.push_front(5);
    l1.push_back(50);
    l1.emplace_back(60);
    l1.emplace_front(2);
    l1.insert(l1.begin(), 1);

    std::cout << "List after insertions:\n";
    for (int x : l1) cout << x << " ";
    cout << "\n";

    l1.remove(60);            
    cout << "After remove(60):\n";
    for (int x : l1) cout << x << " ";  
    std::cout << "\n";

    l1.remove_if(isOdd);       // Remove odd numbers
    cout << "After remove_if (odd):\n";
    for (int x : l1) cout << x << " ";
    cout << "\n";

    l1.reverse();
    cout << "After reverse:\n";
    for (int x : l1) cout << x << " ";
    cout << "\n";

    l1.clear();
    cout << "Size after clear: " << l1.size() << "\n";

    return 0;
}