cmake_minimum_required(VERSION 2.8.9)
project (proj)
add_executable(proj main.c)

# adds ./include to compiler include directories
include_directories(include)
include_directories(/usr/include/libxml2)

# compiles code files from ./src folder
file(GLOB SOURCES "src/*.c")

target_link_libraries(proj libxml2.so)