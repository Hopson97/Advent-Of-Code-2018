#pragma once

#include <iostream>



template <typename Out>
void output(int year, int day, int part)
{
#if 1
    std::cout << "Result for " << year << " Day " << day << " Part" << part << std::endl;
    std::cout << out << '\n' << std::endl;
#endif
}
/*
template<int Year, int Day>
class AdventOfCode
{
    public:
        void setPrint(bool doesPrint) {
            m_printResults = doesPrint;
        }

        void title() {
            std::cout << Year << " Day " << Day << std::endl;
        }

        virtual void partOne() = 0;
        virtual void partTwo() = 0;
    
    protected:
        template <typename Out>
        void output(int part, Out out) {
            if (m_printResults) {
                std::cout << "Result for " << Year << " Day " << Day << " Part" << part << std::endl;
                std::cout << out << '\n' << std::endl;
            }
        }

    private:
        bool m_printResults = true;
};*/