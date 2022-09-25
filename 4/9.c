#include <stdio.h>

int main()
{
    printf("char:      %i\n", sizeof(char));
    printf("short:     %i\n", sizeof(short));
    printf("int:       %i\n", sizeof(int));
    printf("long long: %i\n", sizeof(long long));
    printf("size_t:    %i\n", sizeof(size_t));
    printf("float:     %i\n", sizeof(float));
    printf("double:    %i\n", sizeof(double));
    printf("int*:      %i\n", sizeof(int*));
    int x[10];
    printf("int[10]:   %i\n", sizeof(x));
}