//浮動小数点数 a, b, c を引数にとり、二次方程式 
a
x
2
+
b
x
+
c
=
0
 の2つの解を返す関数 quad_eq を定義せよ

#include <stdio.h>
#include <math.h> // for sqrt(x)

double quad_eq(double a, double b, double c, double* another)
{
    double d = sqrt(b * b - 4 * a * c);

    if (another != NULL) {
        *another = (-b - d) / (2 * a);
    }

    return (-b + d) / (2 * a);
}

int main()
{
    double a = 1, b = 3, c = 2;
    double ans1, ans2;
    
    ans1 = quad_eq(a, b, c, &ans2);
    printf("%f, %f\n", ans1, ans2);
    return 0;
}
