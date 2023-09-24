#include <stdio.h>

int max3(int x, int y, int z)
{
    int mv;
    if( x > y && y > z){
        mv = x;
    }

    else if(y > x && x > z){
        mv = y;

    }

    else if(z > y && y > x){
        mv = z;
    }

    return mv;
}

int main()
{
    int num1;
    int num2;
    int num3;
    printf("1つ目の数字:");
    scanf("%d", &num1);
    printf("2つ目の数字:");
    scanf("%d", &num2);
    printf("3つ目の数字:");
    scanf("%d", &num3);
    printf("最も大きいのは%d/n", max3(num1, num2, num3));
    return 0;
}

