//文字列へのポインタ p を引数にとり、その中に含まれる大文字をすべて小文字に変換する関数 convert_lower(p) を定義せよ

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void convert_lower(char*p)
{
   for (int i = 0; p[i] != '\0'; i++){
    p[i] = tolower(p[i]);
   }
}

int main()
{
    char s[] = "Inoue Enryo";

    convert_lower(s);

    printf("s = %s\n", s);
    return 0;
}