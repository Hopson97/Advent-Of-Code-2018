#include "aoc2019.h"
#include <aoc/benchmark.h>

int main()
{
    benchmark<10000>(2019, 1, aoc2019::day1PartOne, aoc2019::day1PartTwo);
    aoc2019::day1PartOne();
    aoc2019::day1PartTwo();
}