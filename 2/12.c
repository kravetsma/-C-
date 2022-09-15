#include <stdio.h>
int main()
{
    int a[1000];
    int n;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);
    int c, b;
    scanf("%i", &c);
    scanf("%i", &b);
    for (int i = n-1; i > b; --i)
        a[i+1]=a[i];
    a[b+1]=c;
    for (int i = 0; i < n+1; ++i)
        printf("%i ", a[i]);
    printf("\n");
}
