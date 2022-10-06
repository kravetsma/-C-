#include <stdio.h>
#include <ctype.h>

void encrypt(char* str, int k);
size_t length(char* str)
{
    int i = 0;

    while (str[i] != '\0')
        ++i;

    return i;
}

void num(char a, int k)
{
    if (isalpha(a))
    {
        if (isupper(a))
            printf("%c", ((a-'A'+k)%26 +'A'));
        else
            printf("%c", ((a-'a'+k)%26 +'a'));
    }
    else
        printf("%c", a);
}
int main()
{
    char str[201];
    int u;
    scanf("%i %200[^\n]", &u, str);
    encrypt (str, u);
    
}
void encrypt(char* str, int k)
{
    int p = length(str);
    for (int i =0; i< p; i++)
    {
        num(str[i], k);
    }
}