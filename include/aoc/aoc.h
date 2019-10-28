#pragma once

class AdventOfCode
{
    public:
        AdventOfCode(int year = -1, int day = -1)
        :   m_year  (year)
        ,   m_day   (day)
        {}

        void setPrint(bool doesPrint) {
            m_printResults = doesPrint;
        }

        virtual void partOne() = 0;
        virtual void partTwo() = 0;
    
    protected:
        template <typename Out>
        void output(int part, Out out) {
            if (m_printResults) {
                std::cout << "Result for " << m_year << " Day " << m_day << " Part" << part << std::endl;
                std::cout << out << '\n' << std::endl;
            }
        }

    private:
        bool m_printResults = true;
        int m_year;
        int m_day;
};