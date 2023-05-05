#include <iostream>
#include <vector>
#include <span>
using namespace std;

vector<int> lastDigits1(const vector<int>& v) 
{
    vector<int> res;
    for (int i = 0; i < v.size(); i++)
    {
        res.push_back(v[i] % 10);
    }
    return res;
}

void lastDigits2(vector<int>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        v[i] %= 10;
    }
}

void lastDigits3(vector<int>* pv)
{
    for (int i = 0; i < pv->size(); i++)
    {
        (*pv)[i] %= 10;
    }
}

void lastDigits4(span<int> sp) {
    for (int i = 0; i < sp.size(); i++)
    {
        sp[i] %= 10;
    }
}

int main() {
    vector<int> v = {123, 4567, 8910, 111213};
    v = lastDigits1(v);
    for (int i = 0; i < v.size(); i++) 
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v = {123, 4567, 8910, 111213};
    lastDigits2(v);
    for (int i = 0; i < v.size(); i++) 
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v = {123, 4567, 8910, 111213};
    lastDigits3(&v);
    for (int i = 0; i < v.size(); i++) 
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v = {123, 4567, 8910, 111213};
    lastDigits4(v);
    for (int i = 0; i < v.size(); i++) 
    {
        cout << v[i] << " ";
    }
    cout << endl;
}