#include "Memory.h"
#include <fstream>

Memory::Memory() {
    file = "data/memory.txt";
}

std::string Memory::summary() {
    std::ifstream f(file);
    int lines = 0;
    std::string temp;

    while (getline(f, temp)) lines++;

    return "🧠 Stored interactions: " + std::to_string(lines);
}

std::string Memory::clear() {
    std::ofstream f(file, std::ios::trunc);
    return "🧹 Memory cleared.";
}
