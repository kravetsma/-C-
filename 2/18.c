#include <stdio.h>
int main()
{
    int a[1000];
    int n;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);
    int p;
    scanf("%i", &p);
    for (int i = n; i >= 0; --i)
        a[i+p]=a[i];
    for (int i =n; i< n+p; i++)
        a[i-n]=a[i];
    for (int i = 0; i < n; ++i)
        printf("%i ", a[i]);
    printf("\n");
}
