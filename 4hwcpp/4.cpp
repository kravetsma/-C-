#include <iostream>
#include <sstream>
#include <string>
#include <vector>

class Time
{
public:
    int hours, minutes, seconds;

    Time(int hours, int minutes, int seconds)
    {
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
    }

    Time(std::string timeString)
    {
        std::stringstream ss(timeString);
        char separator;
        ss >> this->hours >> separator >> this->minutes >> separator >> this->seconds;
    }

    Time addTime(Time other) const
    {
        int totalSeconds = this->seconds + other.seconds;
        int remainingSeconds = totalSeconds % 60;

        int totalMinutes = this->minutes + other.minutes + (totalSeconds / 60);
        int remainingMinutes = totalMinutes % 60;

        int totalHours = this->hours + other.hours + (totalMinutes / 60);
        int remainingHours = totalHours % 24;

        return Time(remainingHours, remainingMinutes, remainingSeconds);
    }

    void print() const
    {
        std::cout << hours << ":" << minutes << ":" << seconds;
    }
};

std::vector<Time> getTimesFromString(std::string inputString)
{
    std::vector<Time> times;
    std::stringstream ss(inputString);
    std::string timeString;
    while (std::getline(ss, timeString, ' '))
    {
        times.push_back(Time(timeString));
    }
    return times;
}

Time sumTimes(const std::vector<Time>& times)
{
    Time sum(0, 0, 0);
    for (auto time : times)
    {
        sum = sum.addTime(time);
    }
    return sum;
}

int main()
{
    std::string inputString = "12:20:05 05:45:30 22:10:45";
    std::vector<Time> times = getTimesFromString(inputString);
    Time sum = sumTimes(times);
    std::cout << "Sum: ";
    sum.print();
    std::cout << std::endl;
}