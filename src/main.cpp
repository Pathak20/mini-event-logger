#include <iostream>
#include "logger.h"
#include "database.h"

int main() {
    std::cout << "Starting Mini Event Logger...\n";

    EventLogger logger;
    Database db("events.db");

    // Example log
    logger.logEvent("INFO", "Event Logger Started");
    db.insertLog("INFO", "Event Logger Started");

    return 0;
}
