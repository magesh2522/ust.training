#include <iostream>
#include<vector>
#include <iterator>

using namespace std;

int main() {
	std::istream_iterator<int>intIt(std::cin);
	std::istream_iterator<int>endIt;

	//std::vector<int>numbers(intIt, endIt);
	std::vector<int> num = {1,2,3};
	std::ostream_iterator<int> outIt(std::cout, "|");
	std::copy(numbers.begin(), numbers.end(), outIt);

	print(val,sep="|",end="+")
	/*num.push_back(4);
	Employee e;
	evec.emplace_back(101, "vismaya");*/

	for (int n : numbers) {
		std::cout << n << " ";
	}
	return 0;


}void back() {
    if (!backStack.empty()) {
        forwardStack.push(currentPage);
        currentPage = backStack.top();
        backStack.pop();
        cout << "Current page: " << currentPage << endl;
    }
    else {
        cout << "No previous page to go back to." << endl;
    }
}

void forward() {
    if (!forwardStack.empty()) {
        backStack.push(currentPage);
        currentPage = forwardStack.top();
        forwardStack.pop();
        cout << "Current page: " << currentPage << endl;
    }
    else {
        cout << "No forward page available." << endl;
    }
}
};

int main() {
    BrowserHistory browser;
    string command, url;

    while (true) {
        cout << "Enter command (visit <URL> / back / forward / exit): ";
        cin >> command;
        if (command == "visit") {
            cin >> url;
            browser.visit(url);
        }
        else if (command == "back") {
            browser.back();
        }
        else if (command == "forward") {
            browser.forward();
        }
        else if (command == "exit") {
            break;
        }
        else {
            cout << "Invalid command!" << endl;
        }
    }

    return 0;
}


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

        int remainingPages = job.pages;
        while (remainingPages > 0) {
            int pagesToPrint = std::min(remainingPages, 10);
            std::cout << "Printing " << pagesToPrint << " pages for user: " << job.name << std::endl;
            remainingPages -= pagesToPrint;
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

#include <iostream>
#include <vector>
#include <stack>

void printNGE(const std::vector<int>& arr) {
    std::vector<int> nge(arr.size(), -1); // Initialize result array with -1
    std::stack<int> s; // Stack to keep track of elements' indices

    for (int i = 0; i < arr.size(); ++i) {
        while (!s.empty() && arr[s.top()] < arr[i]) {
            nge[s.top()] = arr[i];
            s.pop();
        }
        s.push(i);
    }

    // Output the result
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " --> " << nge[i] << std::endl;
    }
}

int main() {
    std::vector<int> arr = { 4, 5, 2, 25, 7, 8 }; // Input array
    printNGE(arr);
    return 0;
}
