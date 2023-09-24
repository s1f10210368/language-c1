#include <stdio.h>
#include <math.h>

void quadeq(double a, double b, double c, double *x1, double *x2) {
    double ans = b * b - 4 * a * c;
    
    if (ans > 0) {
        *x1 = (-b + sqrt(ans)) / (2 * a);
        *x2 = (-b - sqrt(ans)) / (2 * a);
    } else if (ans == 0) {
        *x1 = -b / (2 * a);
        *x2 = *x1;
    } else {
        // 虚数解の場合、解を NaN (Not a Number) とする
        *x1 = *x2 = NAN;
    }
}

int main() {
    double a, b, c;
    double x1, x2;
    
    printf("Enter coefficients a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    quadeq(a, b, c, &x1, &x2);
    
    if (isnan(x1)) {
        printf("Complex solutions\n");
    } else {
        printf("Solutions: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
    
    return 0;
}
