#include <iostream>
#include <deque>
#include<vector>
#include <string>
#include <sstream>

int main() {
    std::deque<std::string> history;
    const size_t N = 4; // Maximum history size
    std::string command, action;

    // Simulated input commands
    std::vector<std::string> input_commands = {
        "RUN ls", "RUN mkdir test", "RUN cd test",
        "RUN touch file.txt", "RUN cat file.txt", "HISTORY"
    };

    for (const auto& cmd : input_commands) {
        std::istringstream iss(cmd);
        iss >> action;

        if (action == "RUN") {
            std::string command_text;
            std::getline(iss, command_text);
            command_text.erase(0, 1); // Remove leading space

            // Add command to history
            history.push_back(command_text);

            // Maintain size limit
            if (history.size() > N) {
                history.pop_front();
            }
        }
        else if (action == "HISTORY") {
            // Print recent command history
            for (const auto& entry : history) {
                std::cout << entry << "\n";
            }
        }
    }

    return 0;
}