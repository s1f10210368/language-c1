#include <stdio.h>

int power4(int x)
{
    return x*x*x*x;
}

int main()
{
    int n；
    int result = 0;

    printf("n = ");
    scanf("%d", &n);

    while( n >=  1)
    {
        result += power4(n);
        n--;
    }

    printf("S(n) = %d/n", result);

    return 0;
}