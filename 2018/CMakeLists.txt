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

#Set C++17
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_EXTENSIONS OFF)

#Set flags
if(MSVC)
  	target_compile_options(${PROJECT_NAME} PRIVATE 
    	/W4 /WX)
else()
  	target_compile_options(${PROJECT_NAME} PRIVATE 
		-Wall -Wextra -pedantic -Werror)		#Warning flags
endif()

#Find libraries
find_package(Threads)

#Finally
target_link_libraries(${PROJECT_NAME} 
    Threads::Threads 
    ${SFML_LIBRARIES} 
)