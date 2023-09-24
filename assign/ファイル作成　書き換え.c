//新たなファイル output.txt をカレントディレクトリ内に作成し、テキスト Hello World と改行文字をそのファイルに出力するプログラム hello を作成せよ


#include <stdio.h>

int main()
{

    FILE* fp = fopen("output.txt", "w");
    if (fp == NULL) {
        fprintf(stderr, "failed to open file\n");
        return 1;
    }
    fputs("Hello World", fp);

    

    fclose(fp);
    return 0;
}