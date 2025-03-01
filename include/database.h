#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include "duckdb.hpp"

class Database {
private:
    duckdb::DuckDB db;
public:
    explicit Database(const std::string &db_path);
    void insertLog(const std::string &type, const std::string &message);
};

#endif // DATABASE_H
