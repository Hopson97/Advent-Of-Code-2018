cmake_minimum_required(VERSION 3.10)

#Set up project
project(aoc2017 VERSION 1.0)

#Set executable
add_executable(${PROJECT_NAME} 
    main.cpp
    	day1.cpp
	day2.cpp
	day3.cpp
	day4.cpp
	day5.cpp
	day6.cpp
	day7.cpp
	day8.cpp
	day9.cpp
	day10.cpp
	day11.cpp
	day12.cpp
	day13.cpp
	day14.cpp
	day15.cpp
	day16.cpp
	day17.cpp
	day18.cpp
	day19.cpp
	day20.cpp

)

target_include_directories(
    ${PROJECT_NAME} 
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../include/
)

setup_target(${PROJECT_NAME})