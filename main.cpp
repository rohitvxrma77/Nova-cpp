#include <iostream>
#include "core/Brain.h"
#include "utils/Logger.h"

int main() {
    std::cout << "🚀 NOVA AI Assistant (C++)\n";

    NovaBrain brain;
    std::string input;

    while (true) {
        std::cout << "You: ";
        std::getline(std::cin, input);

        std::string response = brain.handleInput(input);

        if (response == "EXIT") {
            std::cout << "Nova: Goodbye 👋\n";
            break;
        }

        std::cout << "Nova: " << response << "\n";
        logInteraction(input, response);
    }

    return 0;
}
