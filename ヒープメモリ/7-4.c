//1以上の整数 n を引数にとり、1 から n までの連番の int 型の値の配列をヒープメモリ上に割り当てて返す関数 numbers(n) を定義せよ

#include <stdio.h>
#include <stdlib.h>

int* numbers(int n)
{
    int* a = (int*)malloc(n * sizeof(int));
    if (!a) return NULL;

    for (int i = 0; i < n; i++) {
        a[i] = i+1;
    }
    return a;
}

int main()
{
    int* nums = numbers(10);
    for (int i = 0; i < 10; i++) {
        printf("nums[%d] = %d\n", i, nums[i]);
    }
    free(nums);
    return 0;
}