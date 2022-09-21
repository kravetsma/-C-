#include <stdio.h>

int fact(int a)
{
    if (a>0)
        return (fact(a-1)*a);
    else
        return 1;
}

void factorials(int array[], int a)
{
    for (int i= 0; i<a; i++)
        array[i]=fact(array[i]);
    for (int i= 0; i<a; i++)
        printf("%i ",array[i]);
}
    
int main()
{
    int a = 4;
    int array[5]={3, 4, 5, 6};
    factorials(array, a);

}