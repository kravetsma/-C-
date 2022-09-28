#include <stdio.h>

void print_binary(int a)
{
    if (a>0)
    {
        if (!(a%2))
        {
            print_binary(a/2);
            printf("0");
        }
        else
        {
            print_binary(a/2);
            printf("1");
        }
    }
    else
        printf("0");
}
    

int main()
{
    int a;
    scanf("%i",&a);
    print_binary(a);

}
