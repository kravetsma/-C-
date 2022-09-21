#include <stdio.h>

int count_even(int array[], int size)
{
    int u=0;
    for (int i= 0; i<size; i++)
    {
        if (!(array[i]%2))
            u+=1;
    }
    return u;
}
    

int main()
{
    int a=5;
    int array[5]={1,2,3,4,5};
    printf("%i", count_even(array, a));

}