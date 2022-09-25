#include <stdio.h>

float cube(float* p)
{
    return *p * *p * *p;
}

int main()
{	
    float a = 5.0;
    float* p = &a;

    printf("%f\n", cube(p));
}