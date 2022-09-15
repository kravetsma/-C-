#include <stdio.h>
int main()
{
    int a[1000];
    int n;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);
    int y = 0;
    int t;
    for (int i = 0; i < n; ++i)
    {
        if (!(a[i]%2))
            y++;
        else
        {
            t=a[i-y];
            a[i-y]=a[i];
            a[i]=t;
        }
    }
        

    for (int i = 0; i < n; ++i)
        printf("%i ", a[i]);
    printf("\n");
}
