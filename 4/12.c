#include <stdio.h>
#include <math.h>
const double eps = 1e-10;
int solve_quadratic(double a, double b, double c, double* px1, double* px2)
{
    double d = b*b - 4*a*c;
    if (d < -eps)
         return 0;
    if (d <= eps)
    {
        *px1=-b/(a*2);
        return 1;
    }
    *px1=(-b+sqrt(d))/(a*2);
    *px2=(-b-sqrt(d))/(a*2);
    return 2;
}
int main()
{	
    double x1, x2;
    double* px1 = &x1;
    double* px2 = &x2;
    double a = 1;
    double b = -4;
    double c = 4;
    int z = solve_quadratic(a, b, c, px1, px2);
    if (z ==2)
        printf("%lf  %lf", *px1, *px2);
    else if (z ==1)
        printf("%lf", *px1);
    else
        printf("NO");
}