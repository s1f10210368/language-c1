//文字列 s を引数にとり、その先頭文字を除いた文字列をコンソール上に表示する関数 print_tail(s) を定義せよ

#include <stdio.h>

/*
void print_tail(const char* s)
{
    if (s[0] != '\0') {
        for (int i = 1; s[i] != '\0'; i++) {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
*/

void print_tail(const char* s)
{
    if (s[0] == '\0') {
        printf("\n");
        return;
    }
    printf("%s\n", &s[1]);
}

int main()
{
    print_tail("INIAD Toyo");
    return 0;
}