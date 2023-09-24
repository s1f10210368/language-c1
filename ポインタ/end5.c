//2つの文字列へのポインタsおよびtを引数にとり、大文字と小文字の区別を無視してsとtが等しいか否かを真偽値として返す関数を定義せよ

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int streq(const char* s, const char* t)
{
    int slen = strlen(s);
    int tlen = strlen(t);

    if (slen != tlen) {
        return 0;
    }

    for (int i = 0; i < slen; i++) {
        if (toupper(s[i]) != toupper(t[i])) {
            return 0;
        }
    }

    return 1;
}

int main()
{
    printf("result1: %s\n", streq("iniad", "iniAD") ? "True": "False");
    printf("result2: %s\n", streq("INIAD", "INIADINI") ? "True": "False");
    printf("result3: %s\n", streq("iNiAd", "InIaD") ? "True": "False");
    return 0;
}