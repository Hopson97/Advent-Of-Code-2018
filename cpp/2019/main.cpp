#include "aoc2019.h"
#include <aoc/benchmark.h>

int main()
{
    benchmark<1000>(2019, 3, aoc2019::day4PartOne, aoc2019::day4PartTwo);

    aoc2019::day4PartOne();
    aoc2019::day4PartTwo();
}