#pragma once

#include <string>
#include <fstream>

namespace aoc::file_io {
    inline auto readAsLine(const std::string& file)
    {
        std::ifstream inFile(file);
        std::string line;
        std::getline(inFile, line);
        return line;
    }

    inline auto readAsLines(const std::string& file)
    {
        std::ifstream inFile(file);
        std::vector<std::string> lines;
        std::string line;
        while (std::getline(inFile, line)) {
            lines.push_back(line);
        };
        return lines;
    }
}