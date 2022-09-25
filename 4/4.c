#include <stdio.h>
#include <math.h>
unsigned long long fact(int n)
{
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i)
        result *= i;
    return result;
}
float yearfrac(int year, int day)
{
    if (!(year%4))
        return day/366.0;
    else
        return day/365.0;
}
int main()
{
    int n;
    scanf("%i", &n);
    float res = 1;
    if (n%2){
        for (int i = 1; i < n; i++){
            res*=2;
            res/=sqrt(4 * M_PI);
        }
        res*=fact(n);
        res*=fact((n-1)/2);
    }
    else{
        for (int i = 0; i < n; i++){
            res*=2;
            res/=sqrt(M_PI);
        }
        res*=fact(n/2);
    }
    printf("%.6f\n", res);
}