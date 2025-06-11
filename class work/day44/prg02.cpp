#include <iostream>
#include <thread>


void show(int x) { std::cout << x << "\n"; }
std::thread t1(show, 100);  // Passes copy
void update(int& x) { x += 10; }
int main() {
    int val = 5;
    std::thread t(update, std::ref(val));
    t.join();
    std::cout << val; // 15
}