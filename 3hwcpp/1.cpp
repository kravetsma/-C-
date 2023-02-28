#include <iostream>
#include <string>
using std::cout, std::cin, std::endl;


int main()
{
    std::string str;
    cin >> str;
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0]-=32;
    else if (str[0] >= 'A' && str[0] <= 'Z')
        str[0]+=32;
    cout << str << endl;
}