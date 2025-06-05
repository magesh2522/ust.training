#include <iostream>
#include <vector>
#include <string>
/// <summary>
/// error
/// </summary>
using namespace std;

int main() {
    vector<string> textBuffer;
    int cursor = 0; // Index representing the current position

    string command, line;
    while (cin >> command) {
        if (command == "Insert") {
            cin.ignore();
            getline(cin, line);
            textBuffer.insert(textBuffer.begin() + cursor, line);
            cursor++;
        }
        else if (command == "UP") {
            if (cursor > 0) {
                cursor--;
            }
        }
        else if (command == "DOWN") {
            if (cursor < textBuffer.size()) {
                cursor++;
            }
        }
        else if (command == "Print") {
            for (const auto& str : textBuffer) {
                cout << str << endl;
            }
            break;
        }
    }

    return 0;
}