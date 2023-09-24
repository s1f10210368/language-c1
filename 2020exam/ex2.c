//文字列へのポインタ p を引数にとり、その文字列に含まれる文字 s または S の個数を返す関数 count_s(p) を定義せよ


#include <stdio.h>

int count_s(char* p)
{
    int count = 0;
    int i = 0;

    while(p[i] != '\0'){
        if (p[i] == 's' || p[i] == 'S'){
            count += 1;
        }
        i++;
    }
    return count;
}

int main()
{
    const char* s = "Mississippi";
    const char* t = "U.S.A.";

    printf("count_s(s) = %d\n", count_s(s));
    printf("count_s(t) = %d\n", count_s(t));

    return 0;
}