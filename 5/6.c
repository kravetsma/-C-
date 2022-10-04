#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[201];
    int a=0;
    scanf("%s", str);
    for(int i=0; str[i]; ++i)
    {
        if (str[i]=='('){
            a+=1;
        }
        else
            a-=1;
        if (a==-1)
            break;
    }
    if (a!=0)
        printf("No");
    else
        printf("Yes");
}