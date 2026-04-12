#include "Logger.h"
#include <fstream>
#include <ctime>

void logInteraction(const std::string& user, const std::string& bot) {
    std::ofstream file("nova.log", std::ios::app);

    time_t now = time(0);
    file << "[" << ctime(&now) << "] "
         << "USER: " << user
         << " | NOVA: " << bot << "\n";
}
