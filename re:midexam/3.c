#include <stdio.h>
#include <string.h>

typedef struct {
    char title[40];
    int price;
} Book;

void init_book(Book* p, const char* title, int price) {
    strncpy(p->title, title, sizeof(p->title) - 1);
    p->title[sizeof(p->title) - 1] = '\0';
    p->price = price;
}

int main() {
    Book book;
    init_book(&book, "Dragon Ball", 400);
    printf("%s (%d)\n", book.title, book.price);
    return 0;
}
