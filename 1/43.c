#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%i", &n);
    int max = INT_MIN;
    int a = 1;
    for (int i = 0; i < n; ++i)
    {
        int b;
        scanf("%i", &b);
        if (b > max)
        {
            max = b;
            a = 1;
        }
        else if (b == max)
            ++a;
    }
    printf("%i %i\n", max, a);
}