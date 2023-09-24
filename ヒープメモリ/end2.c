//double型の浮動小数の配列aとその要素数nを引数にとり、その配列をヒープメモリ上に複製して返す関数を定義せよ

#include <stdlib.h>
#include <string.h>

double* copyarray(const double* a, int n)
{
    double* copy = (double*)malloc(n * sizeof(double));
    if (copy == NULL) {
        return NULL;
    }

    memcpy(copy, a, n * sizeof(double));
    return copy;
}

int main()
{
    double arr[] = {1.0, 2.0, 3.0};
    double* replica = copyarray(arr, 3);

    for (int i = 0; i < 3; i++) {
        printf("%f\n", replica[i]);
    }
    free(replica);
    return 0;
}