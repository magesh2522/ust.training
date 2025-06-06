#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    deque<string> textBuffer;
    auto cursor = textBuffer.end(); // Iterator representing the current position

    string command, line;
    while (cin >> command) {
        if (command == "INSERT") {
            cin.ignore();
            getline(cin, line);
            textBuffer.insert(cursor, line);
        }
        else if (command == "UP") {
            if (cursor != textBuffer.begin()) {
                --cursor;
            }
        }
        else if (command == "DOWN") {
            if (cursor != textBuffer.end()) {
                ++cursor;
            }
        }
        else if (command == "PRINT") {
            for (const auto& str : textBuffer) {
                cout << str << endl;
            }
            break;
        }
    }

    return 0;
}