//int型の配列へのポインタ a と配列の要素数 n を引数にとり、配列内に 0 が含まれるかどうかを返す関数 find_zero(a, n) を定義せよ

#include <stdio.h>

int find_zero(int* a, int n)
{
    // pointer can be treated as arrays:
    // e.g., : a[0], a[1], a[2]
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            return 1; // true
        }
    }

    return 0; // false
}

int main()
{
    int a[] = {1,2,3,4,5};
    int b[] = {1,2,3,0,4,5};

    printf("a contains zero? : %s\n", find_zero(a, 5) ? "yes" : "no");
    printf("b contains zero? : %s\n", find_zero(b, 6) ? "yes" : "no");

    return 0;
}