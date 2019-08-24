cmake_minimum_required(VERSION 3.10)

#Set up project
project(aoc16 VERSION 1.0)

#Set executable
set(SOURCES
	src/main.c
	src/day1.c
)

add_executable(${PROJECT_NAME} ${SOURCES})

#Set C++17
target_compile_features(${PROJECT_NAME} PUBLIC c_std_11)
set_target_properties(${PROJECT_NAME} PROPERTIES C_EXTENSIONS OFF)

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
target_link_libraries(${PROJECT_NAME} Threads::Threads)
