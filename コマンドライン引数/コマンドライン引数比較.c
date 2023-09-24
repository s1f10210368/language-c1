//2つのコマンドライン引数を受け取り、より短い方の文字列を標準出力上に表示するプログラムを作成せよ

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    const char* s1 = argv[1];
    const char* s2 = argv[2];

    printf("%s\n", strlen(s1) < strlen(s2) ? s1 : s2);

    return 0;
}
