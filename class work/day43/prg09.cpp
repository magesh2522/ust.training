#include <iostream>
#include <queue>
#include <string>

struct PrintJob {
    std::string name;
    int pages;
};

void PrintQueue(std::queue<PrintJob>& printQueue) {
    while (!printQueue.empty()) {
        PrintJob job = printQueue.front();
        printQueue.pop();

        int remainPages = job.pages;
        while (remainPages > 0) {
            int pagesToPrint = std::min(remainPages, 10);
            std::cout << "Printing " << pagesToPrint << " pages for user: " << job.name << std::endl;
            remainPages -= pagesToPrint;
        }
    }
}

int main() {
    std::queue<PrintJob> printQueue;
    int numJobs;

    std::cout << "Enter number of print jobs: ";
    std::cin >> numJobs;

    for (int i = 0; i < numJobs; ++i) {
        PrintJob job;
        std::cout << "Enter username and number of pages: ";
        std::cin >> job.name >> job.pages;
        printQueue.push(job);
    }

    PrintQueue(printQueue);

    return 0;
}