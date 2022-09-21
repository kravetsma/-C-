#include <stdio.h>
void bob (int a);

void alice (int a)
{
    a*=3;
    a+=1;
    printf("Alice: %i\n", a);
    bob (a);
}

void bob (int a)
{
    while(!(a%2)){
        a/=2;
        printf("Bob:   %i\n", a);
    }
    if (a!=1)
    {
        alice(a);
    }
}

int main()
{
    int a;
    scanf("%i",&a);
    alice(a);

}