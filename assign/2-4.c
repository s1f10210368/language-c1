#include <stdio.h>

int main()
{
    double x, y;

    printf("X = ");
    scanf("%lf", &x);

    printf("Y = ");
    scanf("%lf", &y);

    printf("%f + %f = %f\n", x, y, x + y);
    return 0;
}