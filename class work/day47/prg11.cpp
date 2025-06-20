#include <iostream>
#include <vector>
#include <tuple>
#include <string>

using namespace std;

int main() {
    // Define a vector of tuples to store car details
    vector<tuple<string, int, double>> cars;

    // Add some car records
    cars.emplace_back("Toyota Corolla", 2010, 550000.0);
    cars.emplace_back("Honda Civic", 2015, 850000.5);
    cars.emplace_back("Ford Mustang", 2020, 2500000.0);

    cout << "Car Details:\n";
    cout << "-------------------------------------\n";

    // Display using structured bindings (C++17)
    for (const auto& [name, year, price] : cars) {
        cout << "Name: " << name
            << ", Year: " << year
            << ", Price: Rs. " << price << endl;
    }

    // Alternate display using std::get<>
    cout << "\n(Using std::get<>)\n";
    cout << "-------------------------------------\n";
    for (const auto& car : cars) {
        cout << "Name: " << get<0>(car)
            << ", Year: " << get<1>(car)
            << ", Price: Rs. " << get<2>(car) << endl;
    }

    return 0;
}
