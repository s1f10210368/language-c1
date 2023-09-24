//1以上の整数 n を引数にとり、1 から n までの連番の int 型の値の配列をヒープメモリ上に割り当てて返す関数 numbers(n) を定義せよ

#include <stdio.h>
#include <stdlib.h>

int* numbers(int n)
{
    int* num  = (int*)malloc(n*sizeof(int));
    if (!num) return NULL;

    for (int i = 0; i < n; i++){
        num[i] += i+1;
    }
    return num;
}

int main()
{
    const int count = 5;

    int *nums = numbers(count);
    for (int i = 0; i < count; i++) {
        printf("%d\n", nums[i]);
    }

    free(nums);
    return 0;
}