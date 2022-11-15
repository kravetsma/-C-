#include <iostream>

int cubeR(const int& x)
{
    return x * x * x;
}

int main()
{
    int x = 9;
    std::cout << cubeR(x) << "\n";
}