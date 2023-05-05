#include <iostream>
#include <vector>
using namespace std;

int sumEven(const std::vector<int>& v)
{
    int res = 0;
    for (int i = 0; i < v.size(); i++) 
    {
        if (!(v[i] % 2))
        {
            res += v[i];
        }
    }
    return res;
}

int main() 
{
    vector<int> v{4, 8, 15, 16, 23, 42};
    cout << sumEven(v) << endl;
}