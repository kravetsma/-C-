#include <iostream>
#include <vector>
#include <string>
#include <utility>

template<typename T>
T Max(const std::vector<T>& v)
{
    T max = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
    }
    return max;
}

int main()
{
    std::vector<int> a {2, 5, 7, 1, 16, 9};
    std::cout << Max(a) << std::endl;
    std::vector<float> b {1.5, 12.0, 13.1, 6.8, 6.7};
    std::cout << Max(b) << std::endl;
    std::vector<std::string> c {"one", "two", "three", "four", "five"};
    std::cout << Max(c) << std::endl;
    std::vector<std::pair<int, int>> d {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    std::cout << "<" << Max(d).first << "," << Max(d).second << ">" << std::endl;
}