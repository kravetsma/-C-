#include <stdlib.h>
#include <stdio.h>
#include <string.h>



char** get_test_strings()
{
    char** p = (char**)malloc(4*sizeof(char*));
    p[0] = (char*)malloc(6);
    p[1] = (char*)malloc(4);
    p[2] = (char*)malloc(9);
    p[3] = (char*)malloc(5);
    strcpy(p[0], "Mouse");
    strcpy(p[1], "Cat");
    strcpy(p[2], "Elephant");
    p[3] = NULL;
    return p;
}

void print_strings(FILE* stream, char** string_array)
{
    int i = 0;
    while (string_array[i])
        fprintf(stream, "%s\n", string_array[i++]);
}

int main()
{
    char** a = get_test_strings();
    print_strings(stdout, a);
    free(a);
}