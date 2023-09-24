//文字列 s と整数 n を引数にとり、文字列 s を n 回繰り返してできる文字列をヒープ上に割り当てて返す関数 repeat(s, n) を定義せよ

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
char* repeat(const char* s, int n)
{
    int slen = strlen(s);
    char* t = (char*)malloc(slen * n + 1); // +1 for NUL character
​
    // t = ""; // Means different
    t[0] = '\0'; // Change t's content to empty string
​
    for (int i = 0; i < n; i++) {
        strcat(t, s);
    }
​
    return t;
}
*/
char* repeat(const char* s, int n)
{
    int slen = strlen(s);
    char* t = (char*)malloc(slen * n + 1); // +1 for NUL character

    for (int i = 0; i < n; i++) {
        memcpy(&t[slen * i], s, slen);
    }
    t[slen * n] = '\0';

    return t;
}

int main()
{
    char *s = repeat("INIAD", 3);
    printf("%s\n", s);
    free(s);
    return 0;
}