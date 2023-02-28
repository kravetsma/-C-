#include <iostream>
#include <string>
#include <string_view>
using namespace std;


std::string operator*(std::string s, int n)
{
    std::string s1 = "";
    for (int i = 0; i < n; ++i)
        s1 += s;
    return s1;
}


int main()
{
    std::string s = "";
    std::cin >> s;
    int n;
    std::cin >> n;
    std::cout << s * n << endl;
}