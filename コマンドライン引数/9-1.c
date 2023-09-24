//コマンドライン引数を2つ受け取り、第1引数で指定された文字列を第2引数で指定された回数繰り返し表示するプログラム rep を作成せよ

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if (argc != 3) {
        fprintf(stderr, "ERROR: wrong number of arguments\n");
        return 1;
    }

    char* msg = argv[1];
    int count = atoi(argv[2]);

    for (int i = 0; i < count; i++) {
        printf("%s\n", msg);
    }
    return 0;
}