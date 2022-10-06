#include <stdio.h>
#include <ctype.h>
#include <string.h>
void delete_chars(char* str, char c, int u);
int deletechar(char *str,int pos,int u, int k, char c);

int main()
{
    char str[201];
    char c;
    
    scanf("%s %c", str, &c);
    int u = strlen(str);
    delete_chars(str, c, u);
    
}

void delete_chars(char* str, char c, int u)
{
    int k=1;
    int i = 0;
    while (!(str[i]==(int)c))
        i++;
    if (str[i]==c){
            i=deletechar(str, i, u, k, c);
            k+=1;
        }
    while (i<u){
        i=deletechar(str, i, u, k, c);
        k+=1;
    }
}

int deletechar(char *str,int pos,int u, int k, char c)
{
 int i;
 for(i=pos;i<u;++i)
 {
    if (str[i+k]==c){
        return i;
    }
        
    str[i]=str[i+k];
 }
 return 201;
}