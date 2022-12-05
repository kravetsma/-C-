#include <iostream>

struct Book
{
    char title[100];
    int pages;
    float price;
};

bool isExpensive(const Book& b)
{   
    return b.price > 1000;
}

int main()
{
    Book b = {"The Decameron", 1000, 999.99};
    bool x = isExpensive(b);
    std::cout << x << "\n";
}