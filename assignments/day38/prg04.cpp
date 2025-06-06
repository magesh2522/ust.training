#include <iostream>
#include <forward_list>
#include <string>

int main() {
    std::forward_list<std::string> messages = { "Hi", "Hello", "DELETED: Spam", "How are you", "DELETED: Abuse" };

    // Remove messages starting with "DELETED:"
    messages.remove_if([](const std::string& msg) {
        return msg.rfind("DELETED:", 0) == 0; // Check if th starts with "DELETED:"
        });

    // Print the cleaned chat history
    for (const auto& msg :messages){
   
    }

    return 0;
}