#include <stdio.h>


int main()
{
    int a[100][100];
    int b[100][100];
    int c[100][100];
    int x;
    scanf("%i", &x);
    for (int i = 0; i < 10; ++i) 
    {
        for (int j = 0; j < 10; ++j) 
        {
            scanf("%i", &a[i][j]);   
        }
    }
    scanf("%i", &x);
    for (int i = 0; i < 10; ++i) 
    {
        for (int j = 0; j < 10; ++j) 
        {
            scanf("%i", &b[i][j]);   
        }
    }
    for (int i = 0; i < 10; ++i) 
    {
        for (int j = 0; j < 10; ++j) 
        {
            for (int k = 0; k < 10; ++k) 
            {
                c[i][j] += a[i][k] * b[k][j];
            }   
        }
    }
    for (int i = 0; i < 10; ++i) 
    {
        for (int j = 0; j < 10; ++j)
            printf("%i ", c[i][j]);
        printf("\n");
    }
}