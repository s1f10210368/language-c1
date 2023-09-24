//整数 n と関数ポインタ p を引数にとり、p が指す関数を n 回呼び出す関数 repeat(p, n) を定義せよ

#include <stdio.h>

void greet(void)
{
    puts("Hello");
}

void repeat(void (*p)(), int n) //関数ポインタ
{
    int i;
    for (i = 0; i < n; i++){
        p();
    }
}

int main()
{
    repeat(greet, 3);
    return 0;
}
