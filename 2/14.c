#include <stdio.h>
int main()
{
    int a[1000];
    int n;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);
    int c, b, p;
    scanf("%i%i", &c, &b);
    p=b - c;
    for (int i = c; i < n; ++i)
        a[i]=a[i+p];
    for (int i = 0; i < n-p; ++i)
        printf("%i ", a[i]);
    printf("\n");
}
