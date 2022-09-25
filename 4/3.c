#include <stdio.h>
float yearfrac(int year, int day)
{
    if (!(year%4))
        return day/366.0;
    else
        return day/365.0;
}
int main()
{
    int k, i;
    scanf("%i%i", &k, &i);
    printf("%.5f\n", yearfrac(k, i));
}