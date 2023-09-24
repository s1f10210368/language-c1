#include <stdio.h>

int main()
{
    int time = 0;
    printf("整数を入力してください。 :\n");
    scanf_s("%d", &time,1);
    if(time>=5 &&time<=10){
        printf("おはようございます\n");
    }
    else if(time>=11 &&time<=17){
        printf("こんにちは\n");
    }
    else if(time>=18 &&time<=20){
        printf("こんばんは\n");
    }
    return 0;
}