#include <stdio.h>
#include <math.h>
double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
double length(double x, double y) {
    return distance(x, y, 0, 0);
}
double scalar_product(double x1, double y1, double x2, double y2) {
    return x1 * x2 + y1 * y2;
}
const double pi = 3.14159265359;
const double eps = 1e-10;
double to_degrees(double rad) {
    return rad * 180 / pi;
}
double f(double x){
    double f;
    f= x*x-2;
    return f;
}
int main()
{
    double l=0;
    double h=2;
    while(h-l>eps)
    {
        if (f((l+h)/2)>=0)
            h=(l+h)/2;
        else
            l=(l+h)/2;
    }
    printf("%lf", (l+h)/2);
}