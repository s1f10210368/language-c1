//データ型Bookで示される値のポインタpと書籍のタイトルを表す文字列titleおよび価格priceを因数に取り、引数title,priceの値でpが指す値を初期化する関数を定義せよ

#include <string.h>
#include <stdio.h>

typedef struct {
    char title[40];
    int  price;
} Book;

void init_book(Book* book, const char* title, int price)
{
    strcpy(book->title, title);
    book->price = price;
}

int main()
{
    Book book;
    init_book(&book, "Dragon Ball", 400);
    printf("%s (%d)\n", book.title, book.price);
    return 0;
}

