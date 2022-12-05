#include <iostream>

namespace myspace 
{
    void printNTimes(const char* str, int n = 10)
    {
        for (int i = 1; i <= n; i++)
        {
            std::cout << str << ' ';
        }
    }
}

int main()
{
    const char str[6] = "Hello";
    myspace::printNTimes(str);
}