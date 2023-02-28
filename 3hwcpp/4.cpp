#include <iostream>
#include <string>
#include <string_view>
using namespace std;


void truncateToDot(std::string& s)
{
    int ld = s.find(".");
    s=s.substr(0, ld);
}



int main()
{
    std::string s{};
    std::cin >> s;
    truncateToDot(s);
    std::cout << s << endl;
}