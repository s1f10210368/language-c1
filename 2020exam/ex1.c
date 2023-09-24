//コマンドライン引数を一つ受け取り、その整数値を二乗した値を標準出力上に表示するプログラム square を作成せよ

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int i;
    int x = atoi(argv[1]);
    printf("%d ** 2 = %d\n", x, x*x);
    return 0;
}