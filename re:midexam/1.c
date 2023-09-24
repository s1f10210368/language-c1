//2つのコマンドライン引数を受け取り、より短い方の文字列を標準出力上に表示するプログラム shorter を作成せよ

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Usage: shorter <string1> <string2>\n");
        return 1;
    }

    char* str1 = argv[1];
    char* str2 = argv[2];

    if (strlen(str1) < strlen(str2)) {
        printf("%s\n", str1);
    } else {
        printf("%s\n", str2);
    }

    return 0;
}
