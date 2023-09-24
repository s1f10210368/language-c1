//int型の配列の先頭アドレス a の配列の要素数 n を引数にとり、配列 a に含まれる要素の合計を返す関数 sum(a, n) を定義せよ

#include <stdio.h>
#include <stdint.h>

int sum(int* a, int n)
{
    int result = 0;
    for (int i = 0; i < n; ++i) {
        result += a[i];
    }
    return result;
}

int main()
{
    int values[] = {1, 2, 3, 4, 5};

    printf("sum = %d\n", sum(values, 5));
    return 0;
}

