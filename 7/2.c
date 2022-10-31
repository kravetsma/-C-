#include <stdlib.h>
#include <stdio.h>


float* get_geometric_progression(float a, float r, int n)
{
    float* progr = (float*)malloc(sizeof(float) * n);
    for (int i = 0; i < n; i++)
    {
        progr[i]=a;
        for (int j=0; j<i;j++)
            progr[i]*=r;
    }
    return progr;
}


int main()
{
    float* example = get_geometric_progression(1.0, 3.0, 10);
    for (int i = 0; i < 10; i++)
        printf("%.f\n", example[i]);
    free(example);
}