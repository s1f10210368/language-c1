//2次方程式 の二つの回を返す関数を定義せよ

#include <stdio.h>
#include <math.h>

double quadeq(double a, double b, double c, double *alt)
{
    double d = b * b - 4 * a * c;

    if (alt != NULL) {
        *alt = (-b - d) / (2 * a);
    }
    

    return (-b + d) / (2 * a);
}

int main()
{
    double x1, x2;
    x1 = quadeq(1, 3, 2, &x2);

    printf("x = %f, %f\n", x1, x2);
    return 0;
}