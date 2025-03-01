#include "logger.h"
#include <iostream>

void EventLogger::logEvent(const std::string &type, const std::string &message) {
    std::cout << "[" << type << "] " << message << std::endl;
}
