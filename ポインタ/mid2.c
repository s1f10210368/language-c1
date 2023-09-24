//2つの char* 型のポインタ s, d を引数にとり、s で指定される文字列から空白文字を全て取り除いた文字列を d で指定されるメモリ領域に出力する関数 trim(s, d) を定義せよ

#include <stdio.h>

void trim(char * s, char * d)
{
    int i = 0;
    int j = 0;

    while(*(s+i) != '\0'){
        if(*(s+i) != ' '){
            *(d+j) = *(s+i);
            j++;
        }
        i++;
    }
    *(d+j) = '\0';
}



int main()
{
    char* text = "Programming language C is wonderful";
    char output[256];

    trim(text, output);
    printf("result = %s\n", output);
    return 0;
}