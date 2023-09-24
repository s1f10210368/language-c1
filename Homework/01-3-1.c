#include <stdio.h>

int main(void)
{
    int X, Y, Z;
    int max3;

    scanf("%d", &X);
    scanf("%d", &Y);
    scanf("%d", &Z);

    max3 = X;
    if(X < Y){
        max3 = Y;
    }
    if (X < Z){
        max3 = Z;
    }
    else if(X > Y && X > Z){
        max3 = X;
    }
    
    printf("Maximum value is %d", max3);
}
