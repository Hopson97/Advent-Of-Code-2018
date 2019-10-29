#include "aoc2017.h"
#include <aoc/benchmark.h>

int main()
{
    benchmark<20000>(2017, 1, 
    aoc2017::day1PartOne,
    aoc2017::day1PartTwo);

    aoc2017::day2PartOne();
    aoc2017::day2PartTwo();
}