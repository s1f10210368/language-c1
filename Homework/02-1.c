#include <stdio.h>

int main()
{
    int x;
    int digits; 

    printf("X = ");
    scanf("%d", &x);

    while(x != 0)
    {
        x = x / 10;
        digits++;
    }

    printf("The number of digits of X is %d\n", digits);

    return 0;

}