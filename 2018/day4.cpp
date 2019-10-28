#include "aoc2018.h"

namespace {

    enum class Action { BeginShift, FallAsleep, WakeUp };

    struct Date {
        uint8_t month, day, hour, minute;
    };

    uint64_t dateToInt(const Date &date);
    struct DateAction {
        Date date;
        std::string action;

        friend bool operator<(const DateAction &left, const DateAction &right)
        {
            const Date &a = left.date;
            const Date &b = right.date;

            return dateToInt(a) < dateToInt(b);
        }
    };

    struct SleepShedule {
        int total = 0;
        std::array<uint16_t, 59> hours;
    };

    // Used for sorting the date and that
    uint64_t dateToInt(const Date &date)
    {
        return (date.month << 24) | (date.day << 16) | (date.hour << 8) |
               (date.minute);
    }

    Date parseDate(const char *line)
    {
        std::string_view mn(line + 5, 2);
        std::string_view dy(line + 8, 2);
        std::string_view hr(line + 11, 2);
        std::string_view mi(line + 14, 2);
        return Date{
            (uint8_t)std::atoi(mn.data()), (uint8_t)std::atoi(dy.data()),
            (uint8_t)std::atoi(hr.data()), (uint8_t)std::atoi(mi.data())};
    }

    DateAction parseLine(const char *line)
    {
        line++;
        auto date = parseDate(line);
        line += 18;

        return DateAction{date, line};
    }

    uint16_t extractGuardNumber(const std::string &action)
    {
        auto end = action.find('b');

        std::string_view guardNumber(action.c_str() + 7, end - 8);

        return std::atoi(guardNumber.data());
    }

} // namespace

namespace day4 {

    void partOne()
    {
        std::vector<DateAction> dateActions;
        dateActions.reserve(1500);
        std::ifstream inFile("inputs/day4.txt");
        std::string line;
        while (std::getline(inFile, line)) {
            dateActions.push_back(parseLine(line.c_str()));
        }
        std::sort(dateActions.begin(), dateActions.end());

        uint16_t lastGuard = 0;
        std::unordered_map<uint16_t, SleepShedule> guards;
        guards.reserve(50);
        int sleepMin = 0;
        for (const auto &dateAction : dateActions) {
            const auto &action = dateAction.action;
            switch (action[0]) {
                case 'G': { // Begin shift
                    lastGuard = extractGuardNumber(action);
                    guards.try_emplace(lastGuard, SleepShedule{});
                } break;

                case 'f': // Falls asleep
                    sleepMin = dateAction.date.minute;
                    break;

                case 'w': { // Wakes up
                    int sleepLength = dateAction.date.minute - sleepMin;
                    auto &sleep = guards[lastGuard];
                    sleep.total += sleepLength;
                    for (int i = sleepMin; i < dateAction.date.minute; i++) {
                        sleep.hours[i]++;
                    }
                } break;

                default: // Keep the compiler happy
                    break;
            }
        }

        // Find guard with longest sleep
        uint16_t frequentSleeper = guards.begin()->first;
        uint16_t laziest = frequentSleeper;
        int hour = 0;
        int amount = 0;
        for (auto &g : guards) {
            if (g.second.total > guards[laziest].total) {
                laziest = g.first;
            }
            const auto &h = g.second.hours;
            for (size_t i = 0; i < h.size(); i++) {
                if (h[i] > amount) {
                    amount = h[i];
                    hour = i;
                    frequentSleeper = g.first;
                }
            }
        }

        const auto &h = guards[laziest].hours;
        int idx = 0;
        int max = 0;
        for (size_t i = 0; i < h.size(); i++) {
            if (h[i] > max) {
                max = h[i];
                idx = i;
            }
        }

        std::cout << (int)laziest * idx << " "           // Part 1
                  << (int)frequentSleeper * hour << " "; // Part 2
    }
} // namespace day4