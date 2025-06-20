#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

struct DivisibleByThree {
    bool operator()(int num) const {
        return num % 3 == 0;
    }
};


int main() {
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;

    vector<int> numbers(N);
    cout << "Enter " << N << " numbers:\n";
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    // Use remove_if with functor
    auto new_end = remove_if(numbers.begin(), numbers.end(), DivisibleByThree());
    numbers.erase(new_end, numbers.end()); // Actually remove from vector

    // Display final list using iterators
    cout << "Numbers after removing those divisible by 3:\n";
    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }

    cout << endl;

    return 0;
}



