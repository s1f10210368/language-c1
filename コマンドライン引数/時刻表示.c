//コマンドライン引数に0～23の範囲の時刻を指定すると、その時刻を表示するプログラムを作成せよ

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2){
        fprintf(stderr, "ERROR: hour <time>\n");
        return 1;
    }

    int hour = atoi(argv[1]);

#if AMPM
    printf("It\'s %d %s\n", hour % 12, 
    (hour >= 12) ? "PM" : "AM");
#else
    printf("It\'s %d.", hour);
#endif
    

    return 0;

}