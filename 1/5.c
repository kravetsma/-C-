#include <stdio.h>


int main()
{
    int n;
    scanf("%i", &n);
    int Length = 1;
    int Max = n;
    printf("%i ", n);
    while (n != 1)
    {
        Length+=1;
        if (!(n % 2))
        {
            n = n / 2;
            if (n > Max)
                Max = n;
            printf("%i ", n);
        }
        else 
        {
            n = 3 * n + 1;
            if (n > Max)
                Max = n;
            printf("%i ", n);
        }
    }

    printf("\nLength = %i, Max = %i\n", Length, Max);
}