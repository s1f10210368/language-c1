//型 typ の値を n 個分ヒープメモリ上に割り当てるマクロ ALLOC_HEAP(typ, n) を定義せよ

#define N 10
#include <stdlib.h>
#include <stdio.h>
#define ALLOC_HEAP(typ, n) (typ*)malloc(sizeof(typ) * (n))

int main()
{
    int i, *a = ALLOC_HEAP(int, N);
    for (int i = 0; i < N; i++) {
        a[i] = i;
    }
    for (int i = 0; i < N; i++) {
        printf("%d\n", i);
    }
    free(a);
    return 0;
}