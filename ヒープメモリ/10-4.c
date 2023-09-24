//文字列 s を引数にとり、その文字を逆順に並べてできる文字列をヒープメモリ上に割り当てて返す関数 reversed(s) を定義せよ


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reversed(const char* s)
{
    int slen = strlen(s);
    char* rev = (char*)malloc(strlen(s));

    for (int i = 0; i < slen; i++){
        rev[slen-1-i] = s[i];
        
    }
    rev[slen] = '\0';
    return rev;
}

int main()
{
    char*s = reversed("INIAD Toyo");
    printf("%s\n", s);
    free(s);
    return 0;
}