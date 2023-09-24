//C言語で、整数 x の絶対値を返す関数 my_abs(x) を定義せよ

#include <stdio.h>

int my_abs(int x)
{
    if (x >= 0) {
        return x;
    }
    else {
        return -x;
    }
}

int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("abs(%d) = %d\n", n, my_abs(n));
    return 0;
}