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
double to_degrees(double rad) {
    return rad * 180 / pi;
}
int main()
{
    double x1, y1, x2, y2;
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
    if (length(x1,y1)*length(x2, y2)>0)
    {
        double a = acos(scalar_product(x1,y1,x2,y2)/(length(x1,y1)*length(x2,y2)));
       
        a*=180;
        
        a=a / M_PI;
        printf("%lf", a);
    }
    else
        printf("????");
}