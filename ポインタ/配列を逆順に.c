//int 型の配列へのポインタ a と配列の要素数 n を引数にとり、その配列を逆順に入れ替える関数 reverse(a, n) を定義せよ

#include <stdio.h>
#include <memory.h>

void reverse(int* a, int n)
{
    int original[n];

    // Make the original copy of array a
    memcpy(original, a, n * sizeof(int));

    // Copy contents of original to a in reverse order
    for (int i = 0; i < n; i++) {
        a[n-1-i] = original[i];
    }
}

int main()
{
    int a[] = {1,2,3,4,5};
    reverse(a, 5);

    for (int i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}