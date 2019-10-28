
#include <aoc/benchmark.h>
#include "aoc2016.h"

template<typename Day>
void run() {
    Day day;
    day.partOne();
    day.partTwo();
}

int main()
{
    run<Day1>();
    //benchmark<Day1>();
}
