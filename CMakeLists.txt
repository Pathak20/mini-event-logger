cmake_minimum_required(VERSION 3.10)
project(MiniEventLogger)

set(CMAKE_CXX_STANDARD 17)
add_executable(mini-event-logger src/main.cpp src/logger.cpp src/database.cpp)
target_link_libraries(mini-event-logger duckdb)
