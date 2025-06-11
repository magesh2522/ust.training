#include <iostream>
#include <thread>
#include <mutex>

std::mutex mt; // Mutex object

void printNumbers(int id) {
    mt.lock(); // Lock the mutex
    for (int i = 1; i <= 5; ++i) {
        std::cout << "Thread " << id << ": " << i << std::endl;
    }
    mt.unlock(); // Unlock the mutex
}

int main() {
    std::thread t1(printNumbers, 1);
    std::thread t2(printNumbers, 2);

    t1.join();
    t2.join();

    return 0;
}