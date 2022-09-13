#include <stdio.h>


int main()
{
    int a, b, c;
    scanf("%i%i%i", &a, &b, &c);
    if (b == a + 1 && c == a + 2)
        printf("Consecutive Increasing\n");
    else if (a == b + 1 && a == c + 2)
        printf("Consecutive Decreasing\n");
    else if (a > b && b > c)
        printf("Decreasing\n");
    else if (a < b && b < c)
        printf("Increasing\n");
    else if (a == b && b == c)
        printf("Equal\n");
    else
        printf("None\n");
}