#include <stdio.h>
#include <ctype.h>


int main()
{
    char a;
    scanf("%c", &a);
    if (isalpha(a))
    {
        if (isupper(a))
            printf("%hhi", a-'A'+1);
        else
            printf("%hhi", a-'a'+1);
    }
    else 
    {
        printf("Not a letter");
    }
}