#include <stdio.h>

void reverse(int array[], int a)
{
    for (int i= 0; i<(a/2); i++){
        int k;
        k=array[i];
        array[i]=array[a-1-i];
        array[a-1-i]=k;
    }
}
    
void sort(int array[], int a)
{
    for (int i=0; i<a-1; i++){
        for (int j=0; j <a-1-i; j++){
            if (array[j]>array[j+1]){
                int k;
                k=array[j];
                array[j]=array[j+1];
                array[j+1]=k;
            }
        }
    }
    reverse(array, a);
    for (int i= 0; i<a; i++)
    
        printf("%i ",array[i]);
}
    
int main()
{
    int a;
    scanf("%i",&a);
    int array[1000];
    for (int i= 0; i<a; i++)
        scanf("%i",&array[i]);
    sort(array, a);

}