#include <stdio.h>


int main()
{
    int a[1000];
    int n, x;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);

    int l = 0, r = n-1;
    while (r > l + 1)
    {
        int mid1 = ((l+r)/2);
        int mid2 = ((l+r)/2+1);
        if (a[mid1] == a[mid2])
        {
            r = mid2;
            l=mid1;
        }
        if (a[mid1]>a[mid2])
            if (r != mid2)
                r=mid2;
            else
                r=mid1;
        else
            l = mid1;
    }
    if (a[r]>=a[l])
    printf("%i\n", r);
    else
    printf("%i\n", l);
    }