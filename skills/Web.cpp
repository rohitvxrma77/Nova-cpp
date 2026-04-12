#include "Web.h"
#include <cstdlib>

std::string openWebsite(const std::string& url) {
#ifdef _WIN32
    std::string cmd = "start " + url;
#elif __APPLE__
    std::string cmd = "open " + url;
#else
    std::string cmd = "xdg-open " + url;
#endif

    system(cmd.c_str());
    return "🌐 Opening " + url;
}
