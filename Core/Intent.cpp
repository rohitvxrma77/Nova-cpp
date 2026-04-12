#include "Intent.h"
#include <algorithm>

std::string toLower(std::string text) {
    std::transform(text.begin(), text.end(), text.begin(), ::tolower);
    return text;
}

std::string detectIntent(const std::string& input) {
    std::string text = toLower(input);

    if (text.find("time") != std::string::npos)
        return "TIME";

    if (text.find("youtube") != std::string::npos)
        return "YOUTUBE";

    if (text.find("system") != std::string::npos)
        return "SYSTEM";

    if (text.find("memory") != std::string::npos)
        return "MEMORY";

    if (text.find("clear") != std::string::npos)
        return "CLEAR";

    if (text.find("exit") != std::string::npos)
        return "EXIT";

    return "UNKNOWN";
}
