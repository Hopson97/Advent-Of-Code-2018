#include "aoc2017.h"

#include <aoc/file_io.h>
#include <aoc/string.h>

/*
    Solution for Advent of Code 2017 day 4
    https://adventofcode.com/2017/day/4
*/

namespace {
    const char *INPUT_PATH = "2017/inputs/day4.txt";
} // namespace

namespace aoc2017 {
    void day4PartOne(bool doPrint)
    {
        auto phrases = aoc::file_io::readAsLines(INPUT_PATH);
        aoc::output(
            doPrint, 2017, 4, 1,
            std::count_if(phrases.cbegin(), phrases.cend(),
                          [](const auto &phrase) {
                              auto words = aoc::string::split(phrase);
                              for (unsigned i = 0; i < words.size(); i++) {
                                  for (unsigned j = 0; j < words.size(); j++) {
                                      if (i == j) {
                                          continue;
                                      }
                                      if (words[i] == words[j]) {
                                          return false;
                                      }
                                  }
                              }
                              return true;
                          }));
    }

    void day4PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 4, 2, "None");
    }
} // namespace aoc2017