#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#define BUFFER_SIZE 1000000
size_t length(char* str);
void num(char* a, int k, int i);
void encrypt(char* str, int k)
{
    int p = length(str);
    for (int i =0; i< p; i++)
    {
        num(str, k, i);
    }
}
size_t length(char* str)
{
    int i = 0;

    while (str[i] != '\0')
        ++i;

    return i;
}

void num(char* a, int k, int i)
{
    if (isalpha(a[i]))
    {
        if (isupper(a[i]))
            a[i]=(fmod((a[i]-'A'+k),26) +'A');
        else
            a[i]=(fmod((a[i]-'a'+k),26) +'a');
    }
}
void read_file_to_string(const char* filename, char* str)
{
    FILE* f = fopen(filename, "r");
    
    int i = 0;
    while (1)
    {
        int c = fgetc(f);
        if (c == EOF)
            break;

        str[i] = (char)c;
        i += 1;
    }
    str[i] = '\0';

    fclose(f);
}

void save_string_to_file(const char* filename, const char* str)
{
    FILE* f = fopen(filename, "w");
    fprintf(f, "%s", str);
    fclose(f);
}


int main(int argc, char** argv)
{
    char str[BUFFER_SIZE];
    read_file_to_string("three_little_pigs.txt", str);
    int temp;
    sscanf(argv[3], "%i", &temp);
    encrypt (str, temp);
    save_string_to_file("result.txt", str);
}




