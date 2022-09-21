#include <stdio.h>

void triangle(int a)
{
    for (int i=a; i>0; --i)
    {
        for (int j =1; j<=i; ++j)
            printf("*");
        printf("\n");
    }
}
int main()
{
    int a;
    scanf("%i",&a);
    triangle(a);

}