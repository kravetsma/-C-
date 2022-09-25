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
const double eps = 1e-5;
double to_degrees(double rad) {
    return rad * 180 / pi;
}
int main()
{
    double x1, y1, r1, x2, y2, r2;
    scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &r1, &x2, &y2, &r2);
    int r = r1+r2;
    if (distance(x1, y1, x2, y2)> r+eps)
        printf("Do not intersect");
    else if (distance(x1, y1, x2, y2)< r-eps)
        printf("Intersect");
    else
        printf("Touch");
}