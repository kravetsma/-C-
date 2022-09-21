#include <stdio.h>

int trib(int a)
{
    if (a==0)
        return 0;
    else if (a==1)
        return 0;
    else if (a==2)
        return 1;
    else
    {
        return (trib(a-3)+trib(a-2)+trib(a-1));
    }
}
    

int main()
{
    int a;
    scanf("%i",&a);
    printf("%i", trib(a));

}