#ifndef LOGGER_H
#define LOGGER_H

#include <string>

class EventLogger {
public:
    void logEvent(const std::string &type, const std::string &message);
};

#endif // LOGGER_H
