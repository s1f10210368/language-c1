
//文字列 s とポインタ t を引数にとり、 s の奇数番目にある文字を並べてできる文字列をメモリ領域 t に出力する関数 abbrev(s, t) を定義せよ
#include <stdio.h>

void abbrev(const char* s, char* t)
{
    int pos = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (i % 2 == 0) {
            t[pos++] = s[i];
        }
    }
    t[pos] = '\0';
}

int main()
{
    char* s = "INIAD Toyo University";
    char t[128];

    abbrev(s, t);

    printf("%s --> %s\n", s, t);
    return 0;
}