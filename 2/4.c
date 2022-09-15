#include <stdio.h>


int main()
{
    int a[1000];
    int n, x;
    scanf("%i%i", &n, &x);
    int y;
    y=n*x;
    for (int i =0; i < y; i++)
    {
        int y;
        scanf("%i", &y);
        a[i]=y;
    }
    for (int i =0; i < x; i++)
    {
        int u =0;
        for (int j=0; j < n; j++)
        {
            u+=a[i+j*x];
        }
        printf("%i ", u);
    }
    
}