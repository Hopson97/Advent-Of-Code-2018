#pragma once

#include <string>
#include <fstream>

namespace aoc::file_io {
    inline std::string readAsLine(const std::string& file)
    {
        std::ifstream inFile(file);
        std::string line;
        std::getline(inFile, line);
        return line;
    }
}