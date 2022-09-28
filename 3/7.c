#include <stdio.h>

int trib(int a, int r[])
{
    if (a==0)
        return 0;
    else if (a==1)
        return 0;
    else if (a==2)
        return 1;
    else
    {
        if (r[a] == 0)
            r[a]=(trib(a-3, r)+trib(a-2, r)+trib(a-1, r));
        return r[a];
    }
}
    

int main()
{
    int a;
    scanf("%i",&a);
    int r[50] ={0, 0, 1};
    printf("%i", trib(a, r));

}
