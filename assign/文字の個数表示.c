//文字列へのポインタpを引数にとり、その文字列に含まれる文字sまたはsの個数を返す関数を定義せよ

#include <stdio.h>

int count_s(const char* p)
{
    int count = 0;
    for (int i = 0; p[i] != '\0'; i++) {
        if (p[i] == 's' || p[i] == 'S') {
            count++;
        }
    }
    return count;
}

int main()
{
    printf("count %d\n", count_s("MissiSSippi"));
    return 0;
}