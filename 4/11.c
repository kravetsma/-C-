#include <stdio.h>

void mult2_array(int* p, size_t n)
{
    for(size_t i = 0; i < n; i++)
    {
        p[i]*=2;
        printf("%i ", p[i]);
    }
}

int main()
{	
    size_t n = 5;
    int a[5]={1, 2, 3, 4, 5};
    int* p = &a[0];
    mult2_array(p, n);
}