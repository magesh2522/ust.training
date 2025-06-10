#include <iostream>
#include <stack>
#include <string>

using namespace std;

class BrowserHistory {
private:
    stack<string> backStack, forwardStack;
    string currentPage;

public:
    BrowserHistory() : currentPage("Home") {}

    void visit(const string& url) {
        if (!currentPage.empty()) {
            backStack.push(currentPage);
        }
        currentPage = url;
        while (!forwardStack.empty()) {
            forwardStack.pop();
        }
        cout << "Current page: " << currentPage << endl;
    }
    void back() {
        if (!backStack.empty()) {
            forwardStack.push(currentPage);
            currentPage = backStack.top();
            backStack.pop();
            cout << "Current Page->" << currentPage << endl;

        }
        else {
            cout << "No previous page go to back" << endl;

        }
    }
        void forword() {
            if (!forwardStack.empty()) {
                backStack.push(currentPage);
                currentPage = forwardStack.top();
                forwardStack.pop();
                cout << "Current page->" << currentPage << endl;

            }
            else {
                cout << "Forword page is not available " << endl;
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
            browser.forword();
        }
        else if (command == "exit") {
            break;
        }
        else {
            cout << "Invalid command!!!!!!!" << endl;
        }
    }

    return 0;
}
