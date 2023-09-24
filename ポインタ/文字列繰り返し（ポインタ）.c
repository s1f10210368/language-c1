
//関数ポインタ f と int 型の引数 n を引数にとり、f を n 回呼び出す関数 repeat(f, n) を定義せよ
#include <stdio.h>

void repeat(void (*f)(), int n)
{
    for (int i = 0; i < n; i++) {
        f();
    }
}

void hello()
{
    printf("hello\n");
}
void iniad()
{
    printf("iniad\n");
}

int main()
{
    repeat(hello, 2);
    repeat(iniad, 3);
    return 0;
}