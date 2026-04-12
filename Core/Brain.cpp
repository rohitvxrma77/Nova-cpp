#include "Brain.h"
#include "Intent.h"
#include "../skills/System.h"
#include "../skills/Web.h"
#include "../skills/Utility.h"

std::string NovaBrain::handleInput(const std::string& text) {
    std::string intent = detectIntent(text);

    if (intent == "TIME") {
        return getTime();
    }
    else if (intent == "YOUTUBE") {
        return openWebsite("https://youtube.com");
    }
    else if (intent == "SYSTEM") {
        return getSystemInfo();
    }
    else if (intent == "MEMORY") {
        return memory.summary();
    }
    else if (intent == "CLEAR") {
        return memory.clear();
    }
    else if (intent == "EXIT") {
        return "EXIT";
    }

    return "🤖 Processing: " + text;
}
