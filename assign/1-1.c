//3つの整数 a, b, c を引数にとり、すべて異なる数なら “OK”、そうでなければ “NG” と表示する関数 check(a, b, c) を定義せよ

#include <stdio.h>

void check(int a, int b, int c)
{
    if (a != b && b != c && c != a) {
        printf("OK\n");
    }
    else {
        printf("NG\n");
    }
}

int main()
{
    int a, b, c;

    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);
    
    check(a, b, c);
    return 0;
}