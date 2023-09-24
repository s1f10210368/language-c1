//和暦での日付を表現する型 jpn_date を定義し、その型で表現された日付 d を受け取り、コンソール上に 令和3年 5/24 のような日付を表示する関数 print_date(d) を定義せよ

#include <stdio.h>
#include <string.h>

typedef enum
{
    REIWA, HEISEI, SHOWA
} jpn_era;

typedef struct
{
    jpn_era era;
    int year;
    int month;
    int day;
} jpn_date;

void print_date(jpn_date *d)
{
    const char* s = "";
    switch (d->era){
        case REIWA: s = "令和"; break;
        case HEISEI: s = "平成"; break;
        case SHOWA: s = "昭和"; break;
    }

    printf("%s%d年 %d/%d\n", s, d->year, d->month, d->day);

}

int main()
{
    jpn_date today = {
        .era = REIWA,
        .year = 2022,
        .month = 5, 
        .day = 24,
    };

    print_date (&today);
    return 0;
}