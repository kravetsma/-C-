#include <iostream>
#include <string>
#include <string_view>
using namespace std;

std::string repeat1(std::string_view s)
{
    std::string s1 = {s.data(), s.size()};
    s1 += s1;
    return s1;
}


void repeat2(std::string& s)
{
    std::string s1 = s;
    s += s1;
}


void repeat3(std::string* ps)
{
    std::string temp = *ps;
    *ps += temp;
}


std::string* repeat4(std::string_view s)
{
    std::string* s1 = new std::string [s.length() * 2];
    *s1 += s;
    *s1 += s;
    return s1;
}


int main()
{
    std::string test1 = "12345";
    std::string print1 = repeat1(test1);
    std::cout << print1 << std::endl;
    std::string test2 = "12345678";
    repeat2(test2);
    std::cout << test2 << std::endl;
    std::string test3 = "87654321";
    repeat3(&test3);
    std::cout << test3 << std::endl;
    std::string test4 = "192837465";
    std::string* print2 = repeat4(test4);
    std::cout << *print2 << std::endl;
}