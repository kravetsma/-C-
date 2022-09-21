#include <stdio.h>
void multiply(float a[100][100], float b[100][100], float c[100][100], int x);

int main()
{
    float a[100][100];
    float b[100][100];
    int x;
    scanf("%i", &x);
    for (int i = 0; i < x; ++i) 
    {
        for (int j = 0; j < x; ++j) 
        {
            scanf("%f", &a[i][j]);   
        }
    }
    scanf("%i", &x);
    for (int i = 0; i < x; ++i) 
    {
        for (int j = 0; j < x; ++j) 
        {
            scanf("%f", &b[i][j]);   
        }
    }
    float c[100][100];
    multiply(a, b, c, x);
}
void multiply(float a[100][100], float b[100][100], float c[100][100], int x)
{
    for (int i = 0; i < x; ++i) 
    {
        for (int j = 0; j < x; ++j) 
        {
            for (int k = 0; k < x; ++k) 
            {
                c[i][j] += a[i][k] * b[k][j];
            }   
        }
    }
    for (int i = 0; i < x; ++i) 
    {
        for (int j = 0; j < x; ++j)
            printf("%f ", c[i][j]);
        printf("\n");
    }
}