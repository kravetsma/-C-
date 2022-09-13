#include <stdio.h>


int main(){
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    int i;
    for (i = a; i <= b; ++i){
        if (!(i % c))
        {
            printf("%i ", i);
            break;
        }
    }
    i+=c;
    while (i<=b){
        printf("%i ", i);
        i+=c;
    }
    printf("\n");
}