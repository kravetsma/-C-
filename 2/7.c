#include <stdio.h>


int y(int x) 
{
    int s = 0;
    while (!(x == 0)) 
    {
        s += x % 10;
        x /= 10;
    }

    return s;
}


int main()
{
    int a[10000];

    for (int i = 0; i < 10000; ++i) 
    {
        scanf("%i", &a[i]);   
    }

    for (int j = 0; j < 10000; ++j)
    {
        for (int i = 0; i < 9999 - j; ++i)
        {
            if (y(a[i]) > y(a[i + 1]))
            {
                int q = a[i];
                a[i] = a[i + 1];
                a[i + 1] = q;
            }
        }
    }
    for (int i = 0; i < 10000; ++i) 
        printf("%i ", a[i]);
}