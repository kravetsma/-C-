#include <iostream>
#include <ctype.h>

void countLetters(const char* str, int& numLetters, int& numDigits, int& numOther)
{
    int counter = 0;
    while (str[counter])
    {
        if (isalpha(str[counter]))
        {
            numLetters++;
            counter++;
        }
        else if (isdigit(str[counter]))
        {
            numDigits++;
            counter++;
        }
        else
        {
            numOther++;
            counter++;
        }
    }
}

int main()
{
    char a[100] = "Hello! My Name Is Maxim, I am 19 years old";
    char* r = &a[0];
    int x = 0;
    int y = 0;
    int z = 0;
    int &X=x;
    int &Y=y;
    int &Z=z;
    countLetters(r, X, Y, Z);
    std::cout << x << " " << y << " " << z << "\n";
}