#include "System.h"
#include <sstream>
#include <thread>

std::string getSystemInfo() {
    std::stringstream ss;
    ss << "💻 CPU Threads: " << std::thread::hardware_concurrency();
    return ss.str();
}
