#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book
{
    char title[50];
    int pages;
    float price;
};
typedef struct book Book;

int main()
{
    Book a = {"Don Quixote", 1000, 750.0};
    Book** p = (Book**)malloc(sizeof(Book*));
    *p = (Book*)malloc(sizeof(Book));
    **p = a;
    printf("title: %s, pages: %i, price: %.1f\n", (**p).title, (**p).pages, (**p).price);
    free(*p);
    free(p);
}