#include <iostream>
#include <thread>

void logData() {
    std::cout << "Logging data..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(10));
    std::cout << "Log complete.\n";
}

int main() {
    std::thread logger(logData);
    //std::this_thread::sleep_for(std::chrono::seconds(3));

    logger.join(); // Main thread waits
    std::cout << "Main continues after logging.\n";
    return 0;
}