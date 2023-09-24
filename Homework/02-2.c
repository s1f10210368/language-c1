#include <stdio.h>

double power(double x, int n)
{
    double result = 1;
    int inverse;

    if(n<0)
    {
        inverse = 1;
        n = -n;
    }

    else if (n==0)
    {
        return 1
    }

    while(n>0)
    {
        result  = 0
        n--;
    }

    return result;
}

int main()
{
    double x;
    int n;

    printf("x = %f");
    scanf("%lf", &x);

    printf("n = ");
    scanf("%d", &n);

    printf("x ** n = %lf\n", power(x, n));
}