#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book
{
    char* title;
    int pages;
    float price;
};
typedef struct book Book;

struct library
{
    Book** books;
    int number_of_books;
};
typedef struct library Library;

void print_book(Book* p)
{
    printf("title: %s, pages: %i, price: %.1f\n", p->title, p->pages, p->price);
}

void library_create(Library* l, int num)
{
    l->books = (Book**)malloc(sizeof(Book) * num);
    l->number_of_books = num;
    for (int i = 0; i < num; i++)
        l->books[i]=(Book*)malloc(sizeof(Book));
    for (int i = 0; i < num; i++)
        l->books[i]->title = (char*)malloc(12);
}

void library_set(Library l, int i, char name[], int page, float money)
{
    l.books[i]->pages = page;
    l.books[i]->price = money;
    strcpy(l.books[i]->title, name);
}

Book* library_get(Library l, int i)
{
    return (l.books[i]);
}

void library_print(Library l)
{
    int n = l.number_of_books;
    for (int i = 0; i < n; i++)
        print_book((l.books[i]));
}

void library_destroy(Library* l)
{
    int n = l->number_of_books;
    for (int i = 0; i < n; i++)
        free(l->books[i]->title);
    for (int i = 0; i < n; i++)
        free(l->books[i]);
    free(l->books);
}

int main()
{
    Library a;
    library_create(&a, 3);
    library_set(a, 0, "Don Quixote", 1000, 750.0);
    library_set(a, 1, "Oblomov", 400, 250.0);
    library_set(a, 2, "The Odyssey", 500, 500.0);
    library_print(a);
    print_book(library_get(a, 1));
    library_destroy(&a);
}