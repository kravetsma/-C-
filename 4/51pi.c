#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%i", &n);
    float u = 0;
    for (int i = 1; i<= n; i++){
        u+=4*pow(-1, i+1)/(2*i-1);
    }
    printf("%.6f\n", u);
}