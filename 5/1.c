#include <stdio.h>
#include <ctype.h>


int main()
{
    char a;
    scanf("%c", &a);
    if (isalpha(a)) 
    {
        if (isupper(a))
            printf("Uppercase Letter");
        else
            printf("Lowercase Letter");
    }
    else 
    {
        if (isdigit(a))
            printf("Digit");
        else 
            printf("Other");
    }
}