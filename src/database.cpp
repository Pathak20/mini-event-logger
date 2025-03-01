#include "database.h"
#include "duckdb.hpp"

Database::Database(const std::string &db_path) {
    duckdb::Connection conn(db);
    conn.Query("CREATE TABLE IF NOT EXISTS logs (type TEXT, message TEXT);");
}

void Database::insertLog(const std::string &type, const std::string &message) {
    duckdb::Connection conn(db);
    conn.Query("INSERT INTO logs VALUES ('" + type + "', '" + message + "');");
}
