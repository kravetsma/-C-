#include <iostream>
#include <string>
#include <string_view>
using namespace std;


int StrSum(std::string_view s)
{
    int last = 0;
    int sum = 0;
    int len = s.length();
    while (last < len)
    {
        int add = 0;
        while (isdigit(s[last]))
        {
            add *= 10;
            add += s[last] - 48;
            last++;
        }
        
        if (!((s[last] == '[' && last == 0) || ((last != 0 && last != len-1) && ((s[last] == ',' && s[last+1]==' ')||((s[last-1] == ',' && s[last]==' ')))) || (s[last] == ']' && last == len-1)))
            throw std::invalid_argument("blah blah blah");
        sum += add;
        last++;
    }
    return sum;
}


int main()
{
    std::string s{};
    getline(cin, s);
    std::cout << StrSum(s) << endl;
}