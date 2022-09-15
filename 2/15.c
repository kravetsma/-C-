#include <stdio.h>
int main()
{
    int a[1000];
    int n;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);
    int y = 0;

    for (int i = 0; i < n; ++i)
    {
        if (a[i]<0)
            y++;
        else
            a[i-y]=a[i];
    }
        

    for (int i = 0; i < n-y; ++i)
        printf("%i ", a[i]);
    printf("\n");
}
