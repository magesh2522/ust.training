#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    list<string> textBuffer;
    auto cursor = textBuffer.end(); // Iterator representing the current position

    string command, line;
    while (cin >> command) {
        if (command == "Insert") {
            cin.ignore();
            getline(cin, line);
            textBuffer.insert(cursor, line);
        }
        else if (command == "UP") {
            if (cursor != textBuffer.begin()) {
                --cursor;
            }
        }
        else if (command == "down") {
            if (cursor != textBuffer.end()) {
                ++cursor;
            }
        }
        else if (command == "print") {
            for (const auto& str : textBuffer) {
                cout << str << endl;
            }
            break;
        }
    }

    return 0;
}