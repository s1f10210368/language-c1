//ユーザが1〜30の範囲の整数を入力すると、その数を序数(1st, 2nd, 3rd, …) として表示するプログラムを作成せよ

#include <stdio.h>

int main()
{
    int n;

    printf("Number? ");
    scanf("%d", &n);

    switch (n) {
    case 1:
    case 21:
        printf("%dst\n", n);
        break;
    case 2:
    case 22:
        printf("%dnd\n", n);
        break;
    case 3:
    case 23:
        printf("%drd\n", n);
        break;
    default:
        printf("%dth\n", n);
        break;
    }
    
    return 0;
}