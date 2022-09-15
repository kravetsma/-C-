#include <stdio.h>


int main()
{
    int a[100][100];
    int c, b;
    scanf("%i", &c);
    scanf("%i", &b);
    for (int i = 0; i < c; ++i) 
    {
        for (int j = 0; j < b; ++j) 
        {
            scanf("%i", &a[i][j]);   
        }
    }

    for (int i = 0; i < b; ++i) 
    {
        for (int j = 0; j < c; ++j) 
        {
            for (int k = 0; k < c - 1 - j; ++k) 
            {
                if (a[k][i] > a[k + 1][i]) 
                {
                    int q = a[k][i];
                    a[k][i] = a[k + 1][i];
                    a[k + 1][i] = q;
                }
            }
        }
    }

    for (int i = 0; i < c; ++i) 
    {
        for (int j = 0; j < b; ++j) 
        {
            printf("%i ", a[i][j]);
        }
        printf("\n");
    }
}