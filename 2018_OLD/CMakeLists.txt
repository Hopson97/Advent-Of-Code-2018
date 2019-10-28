cmake_minimum_required(VERSION 3.10)

#Set up project
project(aoc2k18 VERSION 1.0)

#Set executable
set(SOURCES
    src/main
)

add_executable(${PROJECT_NAME} 
    main.cpp
    day1.cpp
    day2.cpp
    day3.cpp
    day4.cpp
    day5.cpp
)

target_include_directories(
    ${PROJECT_NAME} 
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../include/
)

setup_target(${PROJECT_NAME})