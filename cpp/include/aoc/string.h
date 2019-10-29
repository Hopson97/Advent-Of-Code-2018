#pragma once

#include <vector>
#include <string>
#include <sstream>

namespace aoc::string {

    template<typename StringType = std::string>
    std::vector<StringType> split(const StringType &input, char delim = ' ') 
    {
        std::vector<StringType> tokens;
        std::stringstream stream(input);
        std::string token;
        while(std::getline(stream, token, delim)) {
            tokens.push_back(token);
        }
        return tokens;
    }

    template<typename StringType = std::string>
    StringType strip(const StringType &input, char remove = ' ')
    {
        StringType str = input;
        str.erase(std::remove(str.begin(), str.end(), remove), str.end());
        return str;
    }

    template<typename StringType = std::string, typename FindType = std::string>
    bool contains(const StringType& string, const FindType& find)
    {
        return string.find(find) != std::string::npos;
    }
} //namespace aoc::string