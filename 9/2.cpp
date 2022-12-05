#include <iostream>

int cubeV(int x)
{
    return x * x * x;
}

int main()
{
    int x = 9;
    std::cout << cubeV(x) << "\n";
}