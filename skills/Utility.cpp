#include "Utility.h"
#include <ctime>

std::string getTime() {
    time_t now = time(0);
    return "🕒 " + std::string(ctime(&now));
}
