#include <stdio.h>

int sum_of_digits(int a)
{
    int u = 0;
    while (a>0)
    {
        u+=a%10;
        a/=10;
    }
    return u;
    
}
int sum_of_digits_rec(int a)
{
    if (a!=0)
        return (sum_of_digits_rec(a/10)+a%10);
    return 0;
}
int main()
{
    int a;
    scanf("%i",&a);
    printf("%i\n", sum_of_digits(a));
    printf("%i", sum_of_digits_rec(a));

}