#include <iostream>

struct Book
{
    char title[100];
    int pages;
    float price;
};

void addPrice(Book& a, float x)
{
    a.price += x;
    return;
}

int main()
{
    Book b = {"The Decameron", 1000, 999.99};
    Book& a = b;
    addPrice(a, 100.0);
    std::cout << a.price << "\n";
}