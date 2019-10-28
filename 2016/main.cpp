
#include "aoc2016.h"
#include <aoc/benchmark.h>

template <typename Day>
void run()
{
    Day day;
    day.partOne();
    day.partTwo();
}

int main()
{
    run<Day1>();
    // benchmark<Day1>();
}
