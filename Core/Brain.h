#ifndef BRAIN_H
#define BRAIN_H

#include <string>
#include "Memory.h"

class NovaBrain {
private:
    Memory memory;

public:
    std::string handleInput(const std::string& text);
};

#endif
