#include <stdio.h>

void dec(int array[], int a)
{
    for (int i= 0; i<a; i++)
        array[i]%=10;
}
    

int main()
{
    int a;
    scanf("%i",&a);
    int array[1000];
    for (int i= 0; i<a; i++)
        scanf("%i",&array[i]);
    dec(array, a);

}