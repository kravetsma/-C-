#include <iostream>
#include <vector>

std::vector<std::pair<int, int>> factorization(int n) {
    std::vector<std::pair<int, int>> res;
    int del = 2;
    while (n != 1)
    {
        int number = 0;
        while (n % del == 0)
        {
            number++;
            n /= del;
        }
        if (number > 0)
        {
            res.push_back(std::make_pair(del, number));
        }
        del++;
        if (del * del > n)
        {
            del = n;
        }
    }
    return res;
}
int main()
{
    int n;
    std::cin >> n;
    std::vector<std::pair<int, int>> res = factorization(n);
    std::cout << "{";
    for (auto i : res)
    {
        std::cout << "{" << i.first << "," << i.second << "}, ";
    }
    std::cout<<'\b' << '\b';
    std::cout << "}" << std::endl;
    
}
