
import os
import re

CLASS = "\n\
class DayDAY final : public AdventOfCode<DAY, YEAR>\n\
{\n\
  public:\n\
    void partOne() override;\n\
    void partTwo() override;\n\
};\n\
"

IMPL ="\
#include \"aocYEAR.h\"\n\
\n\
//https://adventofcode.com/YEAR/day/DAY\n\
\n\
namespace {\n\
    const char* INPUT_PATH = \"YEAR/inputs/dayDAY.txt\";\n\
} // namespace\n\
\n\
void DayDAY::partOne()\n\
{\n\
    std::ifstream inFile(INPUT_PATH);\n\
    output(1, 0);\n\
}\n\
\n\
void DayDAY::partTwo()\n\
{\n\
    std::ifstream inFile(INPUT_PATH);\n\
    output(1, 0);\n\
}\n\
"

CMAKE="\n\
cmake_minimum_required(VERSION 3.10)\n\
\n\
#Set up project\n\
project(aocYEAR VERSION 1.0)\n\
\n\
#Set executable\n\
add_executable(${PROJECT_NAME} \n\
    main.cpp\n\
    SOURCES\n\
)\n\
\n\
target_include_directories(\n\
    ${PROJECT_NAME} \n\
    PRIVATE\n\
    ${CMAKE_CURRENT_SOURCE_DIR}/../include/\n\
)\n\
\n\
setup_target(${PROJECT_NAME})\n\
"

MAIN="\n\
#include <aoc/benchmark.h>\n\
#include \"aocYEAR.h\"\n\
\n\
int main()\n\
{\n\
    benchmark<Day1>();\n\
}\n\
"

README="\n\
# Advent of Code YEAR\n\
\n\
My solutions to advent of code YEAR\n\
\n\
Link: https://adventofcode.com/YEAR\n\
\n\
"

for year in range(2015, 2019):
    dirName = year
    if not os.path.exists(dirName):
        #Create dirs
        os.mkdir(dirName)
        os.mkdir(dirName + "/inputs")
        sources = ""

        #Write header file
        with open(dirName + '/aoc' + year + ".h", 'w') as header:
            header.write("#pragma once\n\n")
            header.write("#include <aoc/util.h>\n")
            header.write("#include <aoc/aoc.h>\n")

            #Create main.cpp
            with open(dirName + '/main.cpp', 'w') as main:
                main.write(MAIN.replace("YEAR", year))

            #Create daily files
            for i in range(20):
                header.write(CLASS.replace("DAY", str(i + 1)).replace("YEAR", year))

                #Create implementation files
                with open(dirName + '/day' + str(i + 1) + ".cpp", 'w') as day:
                    day.write(IMPL.replace("DAY", str(i + 1)).replace("YEAR", year))
                    sources += "Day" + str(i + 1) + '\n'
                
                #Create input files
                with open(dirName + '/inputs/day' + str(i + 1) + ".txt", 'w') as day:
                    day.write("")

        with open(dirName + '/CMakeLists.txt', 'w') as cmake:
            cmake.write(CMAKE.replace("SOURCES", sources).replace("YEAR", year))

        with open(dirName + '/README.md', 'w') as readme:
            readme.write(README.replace("YEAR", year))