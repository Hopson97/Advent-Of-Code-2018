
cmake_minimum_required(VERSION 3.10)

#Set up project
project(aoc2016 VERSION 1.0)

#Set executable
add_executable(${PROJECT_NAME} 
    main.cpp
    Day1
Day2
Day3
Day4
Day5
Day6
Day7
Day8
Day9
Day10
Day11
Day12
Day13
Day14
Day15
Day16
Day17
Day18
Day19
Day20

)

target_include_directories(
    ${PROJECT_NAME} 
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../include/
)

setup_target(${PROJECT_NAME})
